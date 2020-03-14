#include <stdio.h>
#include <stdlib.h>

main(){
    int a, b, c, x1, x2, n, choice,x3;
    float deltax,area = 0,i;
    printf("=> ax^2 + bx + c\nPlease enter your coefficients a,b and c\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("Please enter your boundaries x1(lover) and x2(upper)\n");
    scanf("%d%d",&x1,&x2);
    printf("Number of interevals N\n");
    scanf("%d",&n);
    printf("Enter your choice\nFor lower rectangles 1\nFor upper rectangles 2\nFor Trapezodial 3\n");
    scanf("%d",&choice);
    deltax = (float)(x2 - x1)/n;
    
    
    switch(choice){
    	case 1:
    		for(i = x1;i < x2;i += deltax){
    			area = area + (a*i*i + b*i + c);
			}
			area *= deltax;
			break;
		case 2:
			for(i = x1 + deltax;i <= x2;i += deltax){
    			area = area + (a*i*i + b*i + c);
			}
			area *= deltax;
			break;
		case 3:
			for(i = x1;i <= x2 - deltax;i += deltax){
    			area = area + ((a*i*i + b*i + c) + (a*(i + deltax)*(i + deltax) + b*(i + deltax) + c))/2;
			}
			area *= deltax;
			break;
		default:
			break;
	}
	printf("deltax = %f\n",deltax);
	printf("Area = %f\n",area);
	system("pause");
}
