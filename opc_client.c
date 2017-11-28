#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <sys/types.h>

int sock_fd; // file descriptor for socket
struct sockaddr_in sa;
int port;
int buff_size;

int intialized = 0;

int opc_client_init(int _port, int _buff_size)
{
	port = _port;
	buff_size = _buff_size;
	if (initialized)
	{
		printf("opc_client already initialized\n");
		return 1;
	}
	sock_fd = socket(AF_INET6, SOCK_DGRAM, 0);
	if (sock_fd < 0)
	{
		printf("socket error\n");
		return 2;
	}
	sa.sin_family = AF_INET6;
	sa.sin_port = htons(port);
	if (inet_aton("127.0.0.1", &sa.sin_addr) == 0)
	{
		printf("inet_aton\n");
		return 3;
	}
	
	return 0;
}

int opc_client_enqueue()
{
	
}

void * opc_client_routine(void * arg)
{
	return NULL;
}



