#include <stdio.h>
int main(){
    int employee_id;
    int total_hours_in_month;
    int amount_received_per_hour;
    printf("Enter Employee ID:");   
    scanf("%d",&employee_id);
    printf("Enter total working hours in a month");
    scanf("%d",&total_hours_in_month);
    printf("Enter amount received per hour");
    scanf("%d",&amount_received_per_hour);
    printf("Employee ID: %d\n",employee_id);
    printf("Employee Salary: %d\n",total_hours_in_month*amount_received_per_hour);
    return 0;
}