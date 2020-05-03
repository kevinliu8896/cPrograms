

/*
 * Use this file to complete the implementation of the xstring library
 */
 int mystrlen(char *pStr) // mystrlen functrion that will be used in other functions to grab the length of string inputted by user
{
    int length = 0; // set initial value of length to 0

    for (int i = 0; pStr[i] != '\0'; i++) // when the value of i reaches the delimiter it will keep incrementing length by 1
    {
        length++;
    }
    return length; // retrun the value of the amount of chaaracters in the string inputted
}

int FindFirstOccurrence(char c , char *pStr ){ // find first occurence of a character in a string
  int n = mystrlen(pStr); // call function to grab amount of characters in string
  for (int i = 0; i <= n; i++) {
    if (pStr[i] == c) { // if character in pStr is equal to c then return that position stored in i
      return i; // return value of i
    }
  }
  return -1; // return -1 if no elements are the same as c
}// end function

int FindLastOccurrence(char c, char *pStr ){
  int temp = -1; // create temporary variabel with initial value -1
  int n = mystrlen(pStr);
  for (int i = 0; i <= n; i++) {
    if (pStr[i] == c) { // if character in pStr is equal to c then return that position stored in i
      temp = i; // set var temp to i
    }
  }
return temp; // return value of temp

} // end function

int GetStringWeight (char *pStr ){
  return *pStr == 0 ? 0 : *pStr + GetStringWeight(pStr + 1); // if ascii elements are 0 return 0 else calculate all other elements ascii values added up

}

void ReplaceCharacter(char x, char c , char *pStr ){
  int n = mystrlen(pStr);
  for (int i = 0; i < n; i++) {
    if(pStr[i] == x) { // if pStr[i] equals to character x then...
      pStr[i] = c; // pStr[i] will now hold character value of c
    } // end if
  } // end for
} // end function

// You could use (call) this function to help you implement the RemoveCharacter function
// Make sure that DeleteChartAt keep the char array a valid C String  ends with '\0'
void DeleteCharAt(int index, int size, char array[]){
    if(index < 0 || index >size -1)
        return;

    for(int i=index; i < size-1; i++){
        array[i] = array[i+1];
    }

}// end function

void RemoveCharacter(char c, char str [] ){
  int n = mystrlen(str);// users string length that has been prompted
  for (int i = 0; i < n; i++) {
    if (str[i] == c) {
      for (int j = i; j < n; j++) {
        str[j] = str[j+1]; // set str[j] element equal to element stored in str[j+1]
      }

      n--; // decrease n by 1
      i--; // decrease i by 1
    }
  }

}// end function

void ReverseString(char *pStr){
  int n = mystrlen(pStr); // users string length that has been prompted
  char *begin,*end,temp; // pointers
  begin = pStr;
  end = pStr;
  for (int i = 0; i < n - 1; i++) {
    end++;
  } // end for loop
  for (int i = 0; i< n/2; i++) {
    temp = *end; // the code below will rearrange elements  under the condition of the for loop
    *end = *begin;
    *begin = temp;

    begin++;
    end--;
  } // end for loop

}// end function

void ToUpperCase(char *pStr){ // convert string to all uppercase
  int i = 0;
  while (pStr[i] != '\0') {
    if (pStr[i] >= 'a' && pStr[i] <= 'z') { // to convert all lowercase letters to uppercase by the ASCII tavel we subtract 32 from each elemnt in the string
      pStr[i] = pStr[i] - 32;
    }
    i++;
  }
}// end function

void ToLowerCase(char *pStr){ // convert string to all lowercase
  int i = 0;
  while (pStr[i] != '\0') {
    if (pStr[i] >= 'A' && pStr[i] <= 'Z') { // to convert all lowercase letters to uppercase by the ASCII tavel we add 32 from each element that is 'A' all the way to 'Z' in the string (Same logic as the function ToUpperCase)
      pStr[i] = pStr[i] + 32;
    }
    i++;
  }
} // end function



int main() {

    char test [150];
    char c;
    char x;

    printf("Please enter a string of characters: ");
    scanf("%[^\n]s", test);


    printf("Please enter a character to test the function  Find First Occurrence: ");
    scanf(" %c", &c);

    printf("The first occurrence of  %c in %s is at index = %d \n", c, test, FindFirstOccurrence(c, test));

    printf("Please enter a character to test the function  Find Last Occurrence: ");
    scanf(" %c", &c);

    printf("The last occurrence of %c in %s is at index = %d \n", c, test, FindLastOccurrence(c, test));


    printf("The weight of the C String %s is = %d \n", test, GetStringWeight(test));



    ToUpperCase(test);
    printf("The uppercase version is = %s \n", test);

    ToLowerCase(test);
    printf("The lowercase version is = %s \n", test);

    ReverseString(test);
    printf("The reversed version is = %s \n", test);

    printf("Please enter the character you want to replaced when test the function Replace Character: ");
    scanf(" %c", &x);

    printf("Please enter the new  character you want insert when test the function Replace Character: ");
    scanf(" %c", &c);

    ReplaceCharacter(x, c, test);
    printf("The new C String after deleting %c is %s \n", c, test);


    printf("Please enter the  character you want remove when test the function Remove Character: ");
    scanf(" %c", &c);
    RemoveCharacter(c, test);

    printf("%s \n", test);


    return 0;
}
