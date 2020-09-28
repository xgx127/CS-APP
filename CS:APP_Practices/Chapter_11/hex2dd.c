/*************************************************************************
	> File Name: hex2dd.c
	> Author: GeekPanda
	> Mail: xgx127@126.com 
	> Created Time: 2020年09月28日 星期一 17时48分07秒
 ************************************************************************/

#include "../include/csapp.h"

int main(int argc, char **argv)
{
	struct in_addr inaddr;
	uint32_t addr;
	char buf[MAXBUF];

	if (argc != 2){
		fprintf(stderr, "usage: %s <hex number>\n", argv[0]);
		exit(0);
	}
	sscanf(argv[1], "%x", &addr);
	inaddr.s_addr = htonl(addr);

	if (!inet_ntop(AF_INET, &inaddr, buf, MAXBUF))
		perror("inet_ntop");
	printf("%s\n", buf);

	exit(0);
}
