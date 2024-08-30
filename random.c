/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>



char randchar(){
    
    
    char h[25]= {'a','b','c','d','e','f','g','h','i',
    'j','k','l','m','n','o','p',
    'q','r','s','t','u','v','w','x','z'};
    
    int x=(rand()%26) ;
    return h[x];
}