/*
* Declares interface for a UDP OPC client that formats and sends messages
*
*/

#ifndef _OPC_CLIENT_H_
#define	_OPC_CLIENT_H_

typedef struct rgb_struct {
	char red;
	char green;
	char blue;
} rgb;

int opc_client_init(int _port, char * _server_address);

int opc_client_send_formatted(char _channel, char _command, int _data_size, rgb * _data);

int opc_client_close();

#endif	// _OPC_CLIENT_H_
