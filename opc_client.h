/*
* Declares interface for a UDP OPC client that formats and sends messages
*
*/

#ifndef _OPC_CLIENT_H_
#define	_OPC_CLIENT_H_

int opc_client_init(int _port, int _buff_size);

int opc_client_enqueue();

int opc_client_close();

#endif	// _OPC_CLIENT_H_
