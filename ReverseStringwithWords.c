#include<stdio.h>
#include<string.h>
 
int main(){
  
        char *input1 = "I love pizaa";
    printf( "%s\n",input1 ); //should print out "pizza love I"
  reverse_sentence( input1);
    char *input2 = "  I am a good   coder";
    printf("%s\n", input2 ); //should print out "coder good a am I"
   reverse_sentence( input2);
    return 0;
}

void reverse_sentence(char *str)
{    
  char s[500];
     char temp;
     int z=0;
     while(str[z]!='\0')
     {
         z++;
     }
     for(int y=0;y<=z;y++)
     {
         s[y]=str[y];
     }
     
    int i,j = z;
    int n=z;
    for(i=0;i<n/2;i++){
        temp = s[i];
        s[i] = s[n-1-i];
        s[n-1-i] = temp;
    }
    int len,start=0,end=-2;
    for(i=0;i<=n;i++){
        if(s[i]==' '||s[i]=='\0'){
            start=end+2;
            end=i-1;
            len=end-start+1;
            for(j=start;j<start+len/2;j++){
                temp = s[j];
                s[j]=s[start+end-j];
                s[start+end-j]=temp;
            }
        }
    }
    printf("%s\n",s);
}
