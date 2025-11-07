
#include <stdio.h>

int main()
{
    char a;
    double percent, current, weight, final;
    printf("Enter the grade you want in the class: "); 
    scanf("%c", &a);
    
    printf("Enter the percent you need to get that grade: ");
    scanf("%lf", &percent);
    
    printf("Enter your current percent in the class: ");
    scanf("%lf", &current);
    
    printf("Enter the weight of the final: ");
    scanf("%lf", &weight);
    
    final = (100*percent-(100-weight)*current)/weight;
    printf("You need to get at least %.2lf%% on the final to get a %c in the class.", final,a);
    
    return 0;
}
