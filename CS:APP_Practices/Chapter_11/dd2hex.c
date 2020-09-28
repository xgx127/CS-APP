/*************************************************************************
	> File Name: dd2hex.c
	> Author: GeekPanda
	> Mail: xgx127@126.com 
	> Created Time: 2020年09月28日 星期一 18时01分04秒
 ************************************************************************/

#include "../include/csapp.h"

int main(int argc, char **argv)
{
	uint32_t addrn;
	uint32_t addrh;
	char buf[MAXBUF];

	if (argc != 2){
		fprintf(stderr, "usage: %s <dot decimal number>", argv[0]);
		exit(0);
	}
	sscanf(argv[1], "%s", buf);
	if (!inet_pton(AF_INET, buf, &addrn))
		perror("inet_pton");
	addrh = ntohl(addrn);	
	printf("0x%x\n", addrh);

	exit(0);
}

