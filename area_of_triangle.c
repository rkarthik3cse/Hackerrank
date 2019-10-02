#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;


void swap(triangle *xp, triangle *yp) 
{
    //triangle *temp = xp; 
    triangle temp;
    temp.a = (xp->a);
    temp.b = (xp->b);
    temp.c = (xp->c);
    *xp = *yp; 
    *yp = temp;
} 

void sort_by_area(triangle* tr, int n) {
   int i, j; 
   float p1 , p2 , area1, area2;
   p1 = p2 = area1 = area2 = 0;
   for (i = 0; i < n-1; i++) {              
       for (j = 0; j < n-i-1; j++) {
            p1 , p2 , area1, area2 = 0;
            float a1, a2 = 0;
            p1 = tr[j].a + tr[j].b+tr[j].c;
            p1 = p1/2;
            p2 = tr[j+1].a + tr[j+1].b+tr[j+1].c;
            p2 = p2/2;

            area1 = sqrt(p1*(p1 - (tr[j].a))*(p1 - (tr[j].b))*(p1 - (tr[j].c)));
            area2 = sqrt(p2*(p2 - (tr[j+1].a))*(p2 - (tr[j+1].b))*(p2 - (tr[j+1].c)));          
            //printf("area1:%f\tarea2:%f\n",area1,area2);   
            if(area1 > area2) {                 
              //printf("Before Swap\n");              
              for (int z = 0; z < n; z++) {
                //printf("%d\t%d\t%d\t", tr[z].a, tr[z].b, tr[z].c);
              }
              //printf("\n");

              swap(&tr[j],&tr[j+1]);

              //printf("After Swap\n");
              for (int z = 0; z < n; z++) {
                //printf("%d\t%d\t%d\t", tr[z].a, tr[z].b, tr[z].c);
               }
               //printf("\n");
            } else {
                //printf("No Swap\n");
            }

       }
   }  
}



int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
