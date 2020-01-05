/*
Kevin Liu
Comp1400
lab10
*/
#include <stdio.h>

int main(void) {
  char message[100], ch;
  int i, key;

  printf("Enter a message to encrypt: \n");
  scanf("%s", message);
  printf("Enter a key: \n");
  scanf("%d", &key);

  for (i = 0; message[i] != '\0'; ++i) {
    ch = message[i];

    if (ch >= 'a' && ch <= 'z') {
      ch = ch + key;

      if ( ch > 'z') {
        ch = ch - 'z' + 'a' - 1;
      }
      message[i] = ch;
    }
	else if(ch >= 'A' && ch <= 'Z') {
	 ch = ch + key;

	if (ch > 'Z') {
	  ch = ch - 'Z' + 'A' - 1;
	}

	message[i] = ch;
	} 
  }

  printf("The encrpyted message is %s", message);


}
