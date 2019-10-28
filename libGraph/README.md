# Instruções para gerar biblioteca estática
No terminal digite:
gcc -c nomeArquivo.c
Faça isso para todos os arquivos .c, esse comando irá gerar arquivos objetos (.o), depois que estes arquivos tiverem sido gerados, digite:
ar rcs nomeBilbioteca.a arquivo1.o arquivo2.o .....

