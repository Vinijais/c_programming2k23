#include<stdio.h>
float calculateTotalSalary (int ); // Declare the function
int main()
{
    int b_s; // basic salary
    printf("Enter the basic salary:");
    scanf("%d",&b_s);
    float total_salary = calculateTotalSalary(b_s); // calling the function
    return 0;
}
float calculateTotalSalary(int b_s) //define the function
{
    float d_a, h_r_a, m_a, total, p_f, h_i;
    if(b_s<=10000)
    {
        d_a = b_s * 0.66;// daily annouce 
        h_r_a = b_s * 0.2; // home rent annouce
        m_a = b_s * 0.08; // medical annouce
        h_i = b_s * 0.05; // health insurance  
        p_f = b_s * 0.17; // provident fund
    }
    else if (b_s>10000 && b_s<=25000)
    {
        d_a = b_s * 0.7;// daily annouce 
        h_r_a = b_s * 0.25; // home rent annouce
        m_a = b_s * 0.09; // medical annouce 
        h_i = b_s * 0.06; // health insurance
        p_f = b_s * 0.18; // provident fund
    }
    else if(b_s>25000 && b_s<=50000)
    {
        d_a = b_s * 0.75;// daily annouce 
        h_r_a = b_s * 0.3; // home rent annouce
        m_a = b_s * 0.12; // medical annouce 
        h_i = b_s * 0.07; // health insurance  
        p_f = b_s * 0.20; // provident fund
    }
    else
    {
        d_a = b_s * 0.8;// daily annouce 
        h_r_a = b_s * 0.4; // home rent annouce
        m_a = b_s * 0.15; // medical annouce 
        h_i = b_s * 0.08; // health insurance 
        p_f = b_s * 0.20; // provident fund
    }
    printf("Daily Announce:%.2f\n",d_a);
    printf("House rent Announce:%.2f\n",h_r_a);
    printf("Medical Annouce:%.2f\n",m_a);
    printf("Health Insurance:%.2f\n",h_i); 
    printf("Provident fund :%.2f\n",p_f);
    total = (b_s + d_a + h_r_a + m_a - p_f - h_i);
    printf("Total Salary:%.2f",total);
}