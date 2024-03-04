
// Programmer - Tanisha 
// qualification - 12th 
// program name- chatbot
// released date - 28 may 2023
// version - 1.1
#include<stdio.h>
#include<conio.h>
int main()
{

    char name[50],adress[100],email_id[40];
    int choice,select,tarah,ph_nm,cyb,choose,chahiye,info;
    printf("**WELCOME TO SHIVAYE CLASSES**\n-----------\n");
    printf("#NAMASTE\n------------\n");
    printf("Apka name-\n");
    scanf("%s",&name);
    printf("Hum aapki kaise help kr sakte hain?\n***********\n");
    printf("-----Niche diye huye options se select kare:-----\n");
    printf("1.Course ki information chahiye !\n");
    printf("2.Apne bache ki performance ke bare mein jankari chahiye !\n");
    printf("3.Koi aur information chahiye !\n");
    details:
    scanf("%d",&choice);
    // this block is for courses choice.
    if(choice==1)
    {
    printf("Hamare pass 300+ courses hain.Apna course select kro\n");
    printf("1.COMPUTER COURSES\n 2.CYBER SECURITY\n 3.BUSSINESS COURSES\n");
    scanf("%d",&select);
    // this block is for computer courses selection.
    if(select==1)
    {
        printf("COMPUTER COURSES 3 TARAH KE HAIN:\n 1.Computer basic \n 2.Video editing \n 3.Graphic designing \n");
        scanf("%d",&tarah);
        if(tarah==1)
        {
            printf("**APNE COMPUTER BASIC CHOOSE KIYA HAI !**\n");
            printf("FEES = Rs 3000\n DURATION = 3 Months\n ##Hum aapko timing adhe ghante tak confirm kr denge\n");
            printf("(SARE EASY METHODS AVAILABLE HAI PAYEMENT KE)\n");
            printf("Apni details hume bta dijiye :\n");
            printf("NAME-\n");
            scanf("%s",&name);
            printf("PHONE NUMBER-\n");
            scanf("%d",&ph_nm);
            printf("ADDRESS-\n");
            scanf("%s",&adress);
            printf("EMAIL ID-\n");
            scanf("%s",&email_id);
            printf("KISI AUR COURSE KI INFORMATION CHAHIYE?\n 1.YES\n 2.NO\n");
            scanf("%d",&chahiye);
            if(chahiye==1)
            {
            goto details;
            }
            else
            printf("Program ends !\n");
        }
        if(tarah==2)
        {
            printf("**APNE VIDEO EDITING CHOOSE KIYA HAI !**\n");
            printf("FEES = Rs 15000\n DURATION = 3 Months\n ##Hum aapko timing adhe ghante tak confirm kr denge\n");
            printf("(SARE EASY METHODS AVAILABLE HAI PAYEMENT KE)\n");
            printf("Apni details hume bta dijiye :\n");
            printf("NAME-\n");
            scanf("%s",&name);
            printf("PHONE NUMBER-\n");
            scanf("%d",&ph_nm);
            printf("ADDRESS-\n");
            scanf("%s",&adress);
            printf("EMAIL ID-\n");
            scanf("%s",&email_id);
           printf("KISI AUR COURSE KI INFORMATION CHAHIYE?\n 1.YES\n 2.NO\n");
            scanf("%d",&chahiye);
            if(chahiye==1)
            {
            goto details;
            }
            else
            printf("Program ends !\n");
        }
        if(tarah==3)
        {
            printf("**APNE GRAPHIC DESIGNING CHOOSE KIYA HAI !**\n");
            printf("FEES = Rs 30000\n DURATION = 1 yr\n ##Hum aapko timing adhe ghante tak confirm kr denge\n");
            printf("(SARE EASY METHODS AVAILABLE HAI PAYEMENT KE)\n");
            printf("NAME-\n");
            scanf("%s",&name);
            printf("PHONE NUMBER-\n");
            scanf("%d",&ph_nm);
            printf("ADDRESS-\n");
            scanf("%s",&adress);
            printf("EMAIL ID-\n");
            scanf("%s",&email_id);
            printf("KISI AUR COURSE KI INFORMATION CHAHIYE?\n 1.YES\n 2.NO\n");
            scanf("%d",&chahiye);
            if(chahiye==1){
            
            goto details;
            }
            else{
            printf("Program ends !\n");
            }
        }
    }
    // this block is for cyber security choice.
   else if(select==2)
    {
        printf("CYBER SECURITY 3 TARAH KE HAIN:\n 1.Cyber security Basics\n 2.Linux\n 3.ECS\n ");
        scanf("%d",&cyb);
        if(cyb==1)
        {
            printf("APNE CYBER SECURITY BASIC CHOOSE KIYA HAI !\n");
            printf("FEES = Rs 4500\n DURATION = 3 Months\n ##Hum aapko timing adhe ghante tak confirm kr denge\n");
            printf("(SARE EASY METHODS AVAILABLE HAI PAYEMENT KE)\n");
            printf("NAME-\n");
            scanf("%s",&name);
            printf("PHONE NUMBER-\n");
            scanf("%d",&ph_nm);
            printf("ADDRESS-\n");
            scanf("%s",&adress);
            printf("EMAIL ID-\n");
            scanf("%s",&email_id);
           printf("KISI AUR COURSE KI INFORMATION CHAHIYE?\n 1.YES\n 2.NO\n");
            scanf("%d",&chahiye);
            if(chahiye==1)
            
            goto details;
            else
            printf("Program ends !\n");
        }
        if(cyb==2)
        {
            printf("APNE LINUX CHOOSE KIYA HAI\n");
            printf("FEES = Rs 4500\n DURATION = 3 Months\n ##Hum aapko timing adhe ghante tak confirm kr denge\n");
            printf("(SARE EASY METHODS AVAILABLE HAI PAYEMENT KE)\n");
            printf("NAME-\n");
            scanf("%s",&name);
            printf("PHONE NUMBER-\n");
            scanf("%d",&ph_nm);
            printf("ADDRESS-\n");
            scanf("%s",&adress);
            printf("EMAIL ID-\n");
            scanf("%s",&email_id);
            printf("KISI AUR COURSE KI INFORMATION CHAHIYE?\n 1.YES\n 2.NO\n");
            scanf("%d",&chahiye);
            if(chahiye==1)
            
            goto details;
            else
            printf("Program ends !\n");
        }
        if(cyb==3)
        {
            printf("APNE ECS CHOOSE KIYA HAI\n");
            printf("FEES = Rs 45000\n DURATION = 2 years\n ##Hum aapko timing adhe ghante tak confirm kr denge\n");
            printf("(SARE EASY METHODS AVAILABLE HAI PAYEMENT KE)\n");
            printf("NAME-\n");
            scanf("%s",&name);
            printf("PHONE NUMBER-\n");
            scanf("%d",&ph_nm);
            printf("ADDRESS-\n");
            scanf("%s",&adress);
            printf("EMAIL ID-\n");
            scanf("%s",&email_id); 
            printf("KISI AUR COURSE KI INFORMATION CHAHIYE?\n 1.YES\n 2.NO\n");
            scanf("%d",&chahiye);
            if(chahiye==1)
            
            goto details;
            else
            printf("Program ends !\n");
        }
    }
    // this block is for bussiness courses choice.
   else if(select==3)
    {
        printf("BUSSINESS COURSES 3 TARAH KE HAI:\n 1.Global Strategic Leadership\n 2.Global Entreprenurial Leadership\n 3.Global Marketing Leadership\n");
        scanf("%d",&choose);
        if(choose==1)
        {
            printf("APNE GLOBAL STRATEGIC LEADERSHIP CHOOSE KIYA HAI\n");
            printf("FEES = Rs 120000\n DURATION = 6 Months\n ##Hum aapko timing adhe ghante tak confirm kr denge\n");
            printf("(SARE EASY METHODS AVAILABLE HAI PAYEMENT KE)\n");
            printf("NAME-\n");
            scanf("%s",&name);
            printf("PHONE NUMBER-\n");
            scanf("%d",&ph_nm);
            printf("ADDRESS-\n");
            scanf("%s",&adress);
            printf("EMAIL ID-\n");
            scanf("%s",&email_id);
            printf("KISI AUR COURSE KI INFORMATION CHAHIYE?\n 1.YES\n 2.NO\n");
            scanf("%d",&chahiye);
            if(chahiye==1)
            
            goto details;
            else
            printf("Program ends !\n");
        }
       else if(choose==2)
        {
            printf("APNE GLOBAL ENTREPRENURIAL LEADERSHIP CHOOSE KIYA HAI\n");
            printf("FEES = Rs 95000\n DURATION = 6 Months\n ##Hum aapko timing adhe ghante tak confirm kr denge\n");
            printf("(SARE EASY METHODS AVAILABLE HAI PAYEMENT KE)\n");
            printf("NAME-\n");
            scanf("%s",&name);
            printf("PHONE NUMBER-\n");
            scanf("%d",&ph_nm);
            printf("ADDRESS-\n");
            scanf("%s",&adress);
            printf("EMAIL ID-\n");
            scanf("%s",&email_id);
           printf("KISI AUR COURSE KI INFORMATION CHAHIYE?\n 1.YES\n 2.NO\n");
            scanf("%d",&chahiye);
            if(chahiye==1)
            
            goto details;
            else
            printf("Program ends !\n");
        }
       else if(choose==3)
        {
            printf("APNE GLOBAL MARKETING LEADERSHIP CHOOSE KIYA HAI\n");
            printf("FEES = Rs 185000\n DURATION = 1 yr\n ##Hum aapko timing adhe ghante tak confirm kr denge\n");
            printf("(SARE EASY METHODS AVAILABLE HAI PAYEMENT KE)\n");
            printf("NAME-\n");
            scanf("%s",&name);
            printf("PHONE NUMBER-\n");
            scanf("%d",&ph_nm);
            printf("ADDRESS-\n");
            scanf("%s",&adress);
            printf("EMAIL ID-\n");
            scanf("%s",&email_id);
            printf("KISI AUR COURSE KI INFORMATION CHAHIYE?\n 1.YES\n 2.NO\n");
            scanf("%d",&chahiye);
            if(chahiye==1)
            
            goto details;
            else
            printf("Program ends !\n");
        }
    }
     }
     // this block is for students performance enquiry.
      else if(choice==2)
    {
        printf("-----Apne bache ki details hume de dijiye-----\n ***Humari team apko call krlegi within 2 hours***\n");
        printf("NAME-\n");
        scanf("%s",&name);
        printf("PHONE NUMBER-\n");
        scanf("%d",&ph_nm);
        printf("ADDRESS-\n");
        scanf("%s",&adress);
        printf("EMAIL ID-\n");
        scanf("%s",&email_id);
        printf("KISI COURSE KI INFORMATION CHAHIYE?\n 1.YES\n 2.NO\n");
        scanf("%d",&info);
        if(info==1)
        {
            goto details;
        }
        else
        {
            printf("Program ends !\n");
        }
    }
    // this block is for any other information.
    else if(choice==3)
    {
    printf("Enquiry ke liye niche di huyi email id prr mail kre!\n\n shivayeclass87@gmail.com\n");
    printf("Contact us @ 975*******\n");  
    }
    return 0;    
}