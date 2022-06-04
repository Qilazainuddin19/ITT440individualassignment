#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <artpa/inet.h>

vopid connectToServer(int, struct sockaddr_in);
int sendEmail(int);
void handleServer(int);
int main(){
    char *ip = "192.168.56.4 ";
	int port = 110;
	int sock;
	struct sockaddr_in addr;
	socklen_t addr_size;
	char buffer[1024];
	int n;
	sock = socket(AF_INET, SOCK_STREAM, 0);
	if (sock < 0) {
		perror("[-] socket error");
		exit(1);
	}
    printf("[+] TCP server socket created.\n);
	memset(&addr, '\0', sizeif(addr));
	addr.sin_family = AF_INET;
	addr.sin_port = port;
	addr.sin_addr, s_addr = inet_addr(ip);
	connectToServer (sock, addr);
	
	if(sendEmail(sock)< 0){
		close(sock);
		return -1;
	}
	handleServer(sock);
	printf("Disconnect from server");
	return 0;
}
void handlesend(int sock) {
	printf ("Ente email to send: ");
	char emailToSend[1024];
	memset (emailToSend, 0, 1024);
	char emailAdd[100];
	fgets(emailAdd, 100, stdin);
	printf("Enter email title: ");
	char emailTitle[100];
	memset(emailTitle, 100, stdin);
	printf("Enter email description; ");
	char emailDesc[800];
	memberset (emailDesc, 0, 800);
	fgets(emailDesc, 800, stdin);
	
	char discrim[] = "l";
	strcat (emailAdd, discrim);
	strcat(emailToSend, emailAdd);
	strcat (emailTitle, discrim);
	strcat (emailHead, discrim);
	strcat (emailToSend, emailTitle);
	strcat (emailToSend, emailDesc);
	send(sock, emailToSend, strlen(emailToSend), 0);
	printf("Sending email to %s", emailAdd);
}
void handleServer(int sock);{
  int id = fork();
  if (id == 0) {
	  while (1)
		  handleSend(sock);
    }
	else {
		while (1)
			handleRecieve(sock);
	}
}
void connectToServer(int sock, struct sockaddr_in addr)
{
       int value = connect(sock, struct sockaddr_in addr)
	   int value =  connect(sock, sockaddr*) &addr, sizeof(addr));
	   if (value <0)
	   {
		   printf ("Connection to the server failure");
		   exit(1);
	   }  	
       printf("Connection to the server.\n');
}
int sendEmail(int sock);{
	  char message[1024];
	  printf ("Enter your email: ");
	  fgets(message, 1024, stdin);
	  seize_t status = send(sock, message, strlen(message),0);
	  if (status == -1) {
		  printf ("Sorry. Try again");
		  return -1;
	  }
	  return 0:
}
