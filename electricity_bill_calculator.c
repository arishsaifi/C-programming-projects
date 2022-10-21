/*The Electricity Bill Calculator is an application-based micro project that calculates
the month’s electricity bill based on the appliances or loads and units consumed.
People who do not have a technical understanding of calculating power bills can use
this program to forecast/calculate their electricity bills. The application have
the following features:
 To display the Meter Number
 To display the previous meter reading
 Facility to enter present meter-reading
 To display the no. of units consumed
 To display the complete Tariff Structure (Domestic, Non-Domestic, Industrial)
 Provision to input the no. of units consumed per month
 To display the bill-amount payable as per the tariff structure
 To display the due date of the payment */

// DEVLOPED BY HARISH SAIFI -BCA IInd SEM  

#include <stdio.h>

void main(){
    int n,m, meter_no=123,prev_r=1234,current_read,unit_cons;
    float chg,amt;
    printf("enter the meter no\t");//getting the meter no
    scanf("%d",&meter_no);
    printf("\nenter the previous reading\t");
    scanf("%d",&prev_r);
    printf("\nEnter the current reading\t");
    scanf("%d",&current_read);
    unit_cons = current_read-prev_r;//unit consumed by the user 
    if (current_read<prev_r){
        printf("*************warning!*************");
        printf("\nenter the correct reading\ncurrent reading can't be less than previous reading");//compare the previous reading and present reading
    }
   else{
     printf("\n*********the complete traffic structure is shown below*******\n");
    printf("\nchoose the one option from below\n");   //traffic structure    
    printf("\n1:Domestic");
    printf("\n2:NON Domestic");
    printf("\n3:Industrial\n");
    scanf("%d",&n);

    switch (n)
    {
    case 1:
        if (unit_cons <200 )
         chg = 2.00;
        else if (unit_cons>=200 && unit_cons<400)
         chg = 2.50;
        else if (unit_cons>=400 && unit_cons<600)
         chg = 3.00;
        else
         chg = 4.00;
        break;//calculating the charge of domestic according to the unit consumed
    case 2:
        chg = 4.00;
        break;//Non-Domestic charge
    case 3:
        chg = 5.00;//Industrial charge
        break;
    default:
        printf("\nchoose the valid option  1 either 2 or 3\n");
        break;
    }
    amt=unit_cons*chg;//calculating the amount 
    printf("\n \n");
    printf("\n\n****************your meters data is*****************\n");//presenting the meter data
    printf("Your meter no is = %d\n",meter_no);
    printf("Your previous meter reading is = %d\n",prev_r);
    printf("Total unit consumed = %d\n",unit_cons);
    printf("total ammount of the bill is  ₹\t%f",amt);
    printf("\n\n*********************************************************************************");
    printf("\n\nTHIS MINI PROJECT IS DEVLOPED BY HARISH SAIFI");
    printf("\n\n*********************************************************************************");
   }
}
