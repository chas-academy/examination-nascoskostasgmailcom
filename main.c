#include <stdio.h>



int total(int a[])
{
     int sum=0;
    for (int i = 0; i < 13; i++)
    {
        sum=sum+a[i];
    }
    return sum;
}

float medel(int a[], int b)
{
    float m = b / 13.0;
    return m;
}
float elev_medel(float a, float b, float c, float d, float e)
{
    float f = (a+b+c+d+e)/5.0;
    return f;
}

int main(){
    char elevnamn1[11];  
    char elevnamn2[11]; 
    char elevnamn3[11]; 
    char elevnamn4[11]; 
    char elevnamn5[11]; 
    int elev1[13];
    int elev2[13];
    int elev3[13];
    int elev4[13];
    int elev5[13];
    int elev1total=0;
    int elev2total=0;
    int elev3total=0;
    int elev4total=0;
    int elev5total=0;
    float elev1medel;
    float elev2medel;
    float elev3medel;
    float elev4medel;
    float elev5medel;
    float snittbetyg=0;
    float storst;
    int temp=1;

    scanf("%s%d%d%d%d%d%d%d%d%d%d%d%d%d", elevnamn1, &elev1[0], &elev1[1], &elev1[2], 
        &elev1[3], &elev1[4], &elev1[5], &elev1[6], &elev1[7], &elev1[8], &elev1[9], &elev1[10], &elev1[11], 
        &elev1[12]);
    elev1total=total(elev1);
    elev1medel=medel(elev1, elev1total);

    scanf("%s%d%d%d%d%d%d%d%d%d%d%d%d%d", elevnamn2, &elev2[0], &elev2[1], &elev2[2], 
        &elev2[3], &elev2[4], &elev2[5], &elev2[6], &elev2[7], &elev2[8], &elev2[9], &elev2[10], &elev2[11], 
        &elev2[12]);
    elev2total=total(elev2);
    elev2medel=medel(elev2, elev2total);

     scanf("%s%d%d%d%d%d%d%d%d%d%d%d%d%d", elevnamn3, &elev3[0], &elev3[1], &elev3[2], 
        &elev3[3], &elev3[4], &elev3[5], &elev3[6], &elev3[7], &elev3[8], &elev3[9], &elev3[10], &elev3[11], 
        &elev3[12]);
    elev3total=total(elev3);
    elev3medel=medel(elev3, elev3total);

     scanf("%s%d%d%d%d%d%d%d%d%d%d%d%d%d", elevnamn4, &elev4[0], &elev4[1], &elev4[2], 
        &elev4[3], &elev4[4], &elev4[5], &elev4[6], &elev4[7], &elev4[8], &elev4[9], &elev4[10], &elev4[11], 
        &elev4[12]);
    elev4total=total(elev4);
    elev4medel=medel(elev4, elev4total);

     scanf("%s%d%d%d%d%d%d%d%d%d%d%d%d%d", elevnamn5, &elev5[0], &elev5[1], &elev5[2], 
        &elev5[3], &elev5[4], &elev5[5], &elev5[6], &elev5[7], &elev5[8], &elev5[9], &elev5[10], &elev5[11], 
        &elev5[12]);
    elev5total=total(elev5);
    elev5medel=medel(elev5, elev5total);

    snittbetyg = elev_medel(elev1medel, elev2medel, elev3medel, elev4medel, elev5medel);

    if (elevnamn1[0] >= 'a' && elevnamn1[0] <= 'z')
    {
        elevnamn1[0]-=32;
    }
    if (elevnamn2[0] >= 'a' && elevnamn2[0] <= 'z')
    {
        elevnamn2[0]-=32;
    }
    if (elevnamn3[0] >= 'a' && elevnamn3[0] <= 'z')
    {
        elevnamn3[0]-=32;
    }
    if (elevnamn4[0] >= 'a' && elevnamn4[0] <= 'z')
    {
        elevnamn4[0]-=32;
    }
    if (elevnamn5[0] >= 'a' && elevnamn5[0] <= 'z')
    {
        elevnamn5[0]-=32;
    }

    storst=elev1medel;
    
    if (storst<elev2medel)
    {
        storst=elev2medel;
        temp=2;
    }
    if (storst<elev3medel)
    {
        storst=elev3medel;
         temp=3;
    }
    if (storst<elev4medel)
    {
        storst=elev4medel;
         temp=4;
    }
    if (storst<elev5medel)
    {
        storst=elev5medel;
         temp=5;
    }

    if (temp==1)
    {
        printf("%s\n", elevnamn1);
    }
    if (temp==2)
    {
        printf("%s\n", elevnamn2);
    }
    if (temp==3)
    {
        printf("%s\n", elevnamn3);
    }
    if (temp==4)
    {
        printf("%s\n", elevnamn4);
    }
    if (temp==5)
    {
        printf("%s\n", elevnamn5);
    }
    if (elev1medel<snittbetyg)
    {
        printf("%s\n", elevnamn1);
    }
    if (elev2medel<snittbetyg)
    {
        printf("%s\n", elevnamn2);
    }
    if (elev3medel<snittbetyg)
    {
        printf("%s\n", elevnamn3);
    }
    if (elev4medel<snittbetyg)
    {
        printf("%s\n", elevnamn4);
    }
    if (elev5medel<snittbetyg)
    {
        printf("%s\n", elevnamn5);
    }
    
        

    return 0;
}

