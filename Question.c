//q1 Write a program to print "Hello, World!" on the screen.
//#include <stdio.h>
//
//int main() {
//   
//    printf("hello , word !");
//
//    return 0;
//}




//q2 Write a program to find the sum of two numbers the user enters.
//#include <stdio.h>
//
//int main() {
//    int a;
//    int b;
//    printf("enter your first number:");
//    scanf("%d",&a);
//   printf("enter your second number:");
//    scanf("%d",&b);
//    printf("your sum is:%d",a+b);
//
//    return 0;
//}






//q3 Write a program to find the largest of two numbers.
//int main() {
//    int a;
//    int b;
//    int c;
//    printf("enter your first number:");
//    scanf("%d",&a);
//   printf("enter your second number:");
//    scanf("%d",&b);
//     printf("enter your third number:");
//    scanf("%d",&c);
//    if(a>b && a>c){
//        printf("the largest num is:%d",a);
//    }
//    if(b>a && b>c){
//        printf("the largest num is:%d",b);
//    }
//      if(c>a && c>b){
//        printf("the largest num is:%d",c);
//    }




//q4 Even or Odd
//#include <stdio.h>
//
//int main() {
//    int a;
//    printf("enter your number:");
//    scanf("%d",&a);
//   if(a%2 == 0){
//       printf("this is even num");
//   }else{
//       printf("this is odd num");
//   }
//
//    return 0;
//}



//q5  Write a program to calculate the factorial of a given number.
//#include <stdio.h>
//
//int main() {
//    int num;
//    printf("enter your number:");
//    scanf("%d",&num);
//    int i ;
//    int fact =1;
//    for(i=1;i<=num;i++){
//        fact *= i;
//    }
//printf("%d",fact);
//    return 0;
//}




//q6 Write a program to reverse a given integer.
//#include <stdio.h>
//int main() {
//int num;
//scanf("%d",&num);
//int reverse_number=0;
//while(num>0){
//    reverse_number=reverse_number*10+num%10;
//    num=num/10;
//}
//printf("%d",reverse_number);
//
//    return 0;
//}













//q7 Write a program to check whether a given number is a palindrome.
//q8 Write a program to find the sum of digits of a given number.


//q9 Write a program to check whether a given number is prime.
//#include <stdio.h>
//int main() {
//    int num;
//    int i;
//    printf("give a num :");
//    scanf("%d",&num);
//    for(i=2;i<num;i++){
//        if(num%i==0){
//            printf("this is not a prime num");
//            break;
//        }else{
//            printf("this is a prime num");
//            break;
//        }
//    }
//    return 0;
//}




//11. GCD of Two Numbers
//Write a program to find the greatest common divisor (GCD) of two numbers.
//
//#include <stdio.h>
//
//int main() {
//    int n1;
//    int n2;
//    int i;
//    int gcm;
//    printf("write first num = ");
//    scanf("%d",&n1);
//    printf("write second num = ");
//    scanf("%d",&n2);
//    for(i=1;i<=n1 && i<=n2;i++){
//        if(n1%i==0 && n2%i==0){
//            gcm = i;
//        }
//    }printf("%d",gcm);
//
//    return 0;
//}







//13. Leap Year Check
//#include <stdio.h>
//
//int main() {
//    int year;
//    printf("enter a year = ");
//    scanf("%d",&year);
//    if(year%100==0){
//        if(year%400==0 && year%4==0){
//            printf("this is a leap year");
//        }else{
//            printf("this is not leap year");
//        }
//    }else{
//        if(year%4==0){
//             printf("this is a leap year");
//        }
//    }
//
//
//    return 0;
//}



//q15 15. Sum of Array Elements
//Write a program to find the sum of all elements in an array.
//#include <stdio.h>
//
//int main() {
//    int arr[]={1,2,3,4,5};
//    int i;
//    int sum = 0;
//    for(i=0;i<5;i++){
//        sum += arr[i];
//    }
//printf("%d",sum);
//  return 0;
//}


//16. Largest Element in an Array
//Write a program to find the largest element in an array.
//#include <stdio.h>
//
//int main() {
//    int arr[] = {5, 2, 4, 9, 7};
//    int n = sizeof(arr) / sizeof(arr[0]); 
//    int max = arr[0]; 
//    for (int i = 1; i < n; i++) { 
//        if (arr[i] > max) {
//            max = arr[i]; 
//        }
//    }
//   printf("%d", max);
//    
//    return 0;
//}

//q 17
//#include <stdio.h>

//int main() {
//    int arr[]={4,3,2,1,7,8,6};
//    int i ;
//    int sum = 0;
//    int lan = sizeof(arr)/sizeof(arr[0]);
//    for(i=0;i<lan;i++){
//        sum += arr[i];
//    }printf("%d",sum);
//    return 0;
//}




//18. String Reverse
//Write a program to reverse a string.
//#include<stdio.h>
//#include<string.h>
//int main(){
//char str[] = "kalpan";
//	char rstr[strlen(str)+1];
//	int i;
//	
//for(i=0;i<strlen(str);i++){
//	rstr[i] = str[strlen(str)-1-i];
//}
//	
//	    printf("Original String: %s\n", str);
//    printf("Reversed String: %s\n", rstr);
//
//    return 0;
//    }










//22. Convert Celsius to Fahrenheit
//Write a program to convert temperature from Celsius to Fahrenheit.
//#include <stdio.h>
//
//int main() {
//  float cel ;
//  printf("type your cel =");
//  scanf("%f",&cel);
//  float fer = printf("%.1f", cel*9/5 + 32 );
//
//    return 0;
//}




//23. Convert Fahrenheit to Celsius
//Write a program to convert temperature from Fahrenheit to Celsius.
//#include <stdio.h>
//
//int main() {
// float fer;
// printf("write your fer =");
// scanf("%f",&fer);
// float cel = printf("%.1f",(fer-32) * 5/9);
//    return 0;
//}


//24. Sum of First N Natural Numbers
//Write a program to calculate the sum of the first N natural numbers.
//#include <stdio.h>
//
//int main() {
// int n;
// int sum;
// int i;
// printf("write your integer = ");
// scanf("%d",&n);
// for(i=1;i<=n;i++){
//     sum += i;
// }
// printf("%d",sum);
//    return 0;
//}



//25. Check Vowel or Consonant
//Write a program to check whether a given character is a vowel or consonant.

//
//#include <stdio.h>
//
//int main() {
//    char a='a';
//    char e='e';
//    char I='i';
//    char o='o';
//    char u='u';
//    char inp ;
//    printf("give your alphabet : ");
//    scanf("%c",&inp);
//    int i;
//    for(i=0;i<5;i++){
//    	if(inp==a || inp==e || inp==I || inp==o || inp==u){
//    		printf("this is a vowel.");
//    		break;
//		}else{
//			printf("this is a Consonant.");
//			break;
//		}
//	}
//    return 0;
//}


//28. Reverse a String
//Write a program to reverse a given string.
//#include<stdio.h>
//#include<string.h>
//int main(){
//char str[] = "kalpan";
//	char rstr[strlen(str)+1];
//	int i;
//	
//for(i=0;i<strlen(str);i++){
//	rstr[i] = str[strlen(str)-1-i];
//}
//	
//	    printf("Original String: %s\n", str);
//    printf("Reversed String: %s\n", rstr);
//
//    return 0;
//    }





















