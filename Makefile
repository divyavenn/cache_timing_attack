CC=gcc
OPENSSL_DIR=../openssl
LDPATH=-L$(OPENSSL_DIR)
LDLIB=-lcrypto
CFLAGS=-I$(OPENSSL_DIR)include/ -ldl
all: attacker victim analysis recover

attacker: attacker.c
	 gcc attacker.c -Iopenssl/includes -Lopenssl/ -o attacker -lcrypto

victim: victim.c
	gcc victim.c -Iopenssl/includes -Lopenssl/ -o victim -lcrypto

analysis: 
	$(CC) analysis.c -o analysis
recover:
	gcc recover.c -o recover
clean:
	rm -rf  victim attacker analysis recover
