#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN_ELEMENT 1
#define MAX_ELEMENT 1000000

int i =0;

int  sum (int count,...) {
   int result = 0; 
   va_list valist;
   va_start(valist, count);

   for (i = 0; i < count; i++) {
      result += va_arg(valist, int);
   }
   va_end(valist);
   return result;
}

int min(int count,...) {
   int minima = 0, a; 
   va_list valist;
   va_start(valist, count);
   minima = va_arg(valist, int);

   for (i = 1; i <= count; i++) {
       a = va_arg(valist, int);
      if(a < minima) {
          minima = a;
      }
   }
   va_end(valist);
   return minima;
}

int max(int count,...) {

   int maxima = 0, a; 
   va_list valist;
   va_start(valist, count);
   maxima = va_arg(valist, int);

   for (i = 1; i <= count; i++) {
       a = va_arg(valist, int);
      if(a > maxima) {
          maxima = a;
      }
   }
   va_end(valist);
   return maxima;
}

int test_implementations_by_sending_three_elements() {
