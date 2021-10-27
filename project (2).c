#include<stdio.h>
#include<string.h>

void reg();
void viewsearch();
void search();
void view();
void roominfo();
void del();
void edit();
struct info
{
    char name[30],blood[3];
    char gender[8],diseases[30];
    int room,age,contact;

} hos[100];
int n,i,count=1;


int main()
{
    while(1)
    {
        printf("\n\t\t\t***HOSPITAL MANAGEMENT SYSTEM***");
        menu();
    }
    return 1;
}

void menu()
{

    int a;
    do
    {
        printf("\n\n1.Register New Patient\n2.Patient Information \n3.Room Information\n4.Edit Patient Information \n5.Delete Patient Information\n6.Exit");
        printf("\n\nSelect your choice:");
        scanf("%d",&a);
        if(a==1)
        {
            system("cls");
            printf("\n\t\t\t** Register New Patient **\n");
            reg();
            printf("\n\t\t\t--*New Patient Added Successfully*--\n\n");
            getch();
            break;
        }

        else if(a==2)
        {
            system("cls");
            printf("\n\t\t\t** Patient Information **");
            viewsearch();
            getch();
            break;
        }

        else if(a==3)
        {
            system("cls");
            printf("\n\t\t\t** Room Information **");
            roominfo();
            printf("\n\n\t\t\t\t ---**---\n\n");
            getch();
            break;
        }
        else if(a==4)
        {
            system("cls");
            printf("\n\t\t\t** Edit Patient Information **");
            edit();
            printf("\n\t\t\t\t ---**---\n\n");
            getch();
            break;
        }
        else if(a==5)
        {
            system("cls");
            printf("\n\t\t\t** Delete Patient Information **");
            del();
            printf("\n\n\n\t\t\t\t ---**---\n\n");
            getch();
            break;
        }
        else if(a==6)
        {
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\t\t\t ***THANK YOU (^_^) *** \n\n\n");
            getch();
            return 0;
        }
        else
        {
            system("cls");
            printf("\n\n * You have chosen wrong option. Please try again!! THANK YOU (^_^)*\n\n");
            return 0;
        }
    }
    while(a!=6);
}


void reg()
{
    printf("\nRegister Number=%d\n",count);
    printf("\nNew Register No=");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("\n\n");
        printf("\n Patient id=%d\n",count);
        fflush(stdin);
        printf("\n Name:");
        gets(hos[count].name);
        fflush(stdin);
        printf("\n Contact Number:");
        scanf("%d",&hos[count].contact);
        fflush(stdin);
        printf("\n Age:");
        scanf("%d",&hos[count].age);
        fflush(stdin);
        printf("\n Gender:");
        gets(hos[count].gender);
        fflush(stdin);
        printf("\n Blood group:");
        gets(hos[count].blood);
        fflush(stdin);
        printf("\n Diseases:");
        gets(hos[count].diseases);
        fflush(stdin);
        printf("\n Room:");
        scanf("%d",&hos[count].room);
        count++;
        printf("\n\n\t\t\t\t--------\n\n");
    }
}

void viewsearch()
{
    int k;
    printf("\n\n * You can choose any one of the following options as per your wish.*\n");
    printf("\n\n1.Search Patient Information\n2.All Patient Information ");
    printf("\n\nSelect a Option:");
    scanf("%d",&k);

    if(k==1)
    {
        system("cls");
        printf("\n\t\t\t**Search Patient Information**\n");
        search();
        printf("\n\t\t\t\t---**---\n\n");
        getch();
    }
    else if(k==2)
    {
        system("cls");
        printf("\n\t\t\t**All patient information**\n");
        view();
        printf("\n\t\t\t\t--***--\n\n");
        getch();

    }
    else
        printf("\n\n * You have chosen wrong option. Please try again!! THANK YOU (^_^) *\n\n");

}

void search()
{

    int flag=1,pn,pi,s;
    printf("\n\n * You can choose any one of the following options as per your wish to know the information of any patient. *\n\n");

    printf("\n1.Patient Id\n2.Patient Name");
    printf("\n\nSelect a Option:");

    scanf("%d",&s);
    if(s==1)
    {
        fflush(stdin);
        printf("\nEnter Patient Id=");
        scanf("%d",&pi);
        fflush(stdin);
        if(pi<count)
        {
            printf("\n");
            printf("\n\n Patient Id= %d\n",pi);
            printf(" Name: ");
            puts(hos[pi].name);
            printf(" Contact Number: %d\n Age: %d",hos[pi].contact,hos[pi].age);
            printf(" Gender: ");
            puts(hos[pi].gender);
            printf(" Blood Group: ");
            puts(hos[pi].blood);
            printf(" Diseases: ");
            puts(hos[pi].diseases);
            printf(" Room No: %d\n",hos[pi].room);
            printf(" Register Number=%d\n\n",pi);
            printf("\n\n");
        }
        else
            printf("\n\n**SORRY!! No patient information is available on this name. Please try again!!**\n\n\t\t\t\tTHANK YOU (^_^) \n\n");
    }
    else if(s==2)
    {
        fflush(stdin);
        printf("\nEnter Patient Name: ");
        gets(pn);
        fflush(stdin);
        for(i=0; i<count; i++)
        {
            if(strcmp(pn,hos[i].name)==0)
            {
                printf("\n");
                printf("\n\n Patient Id=%d\n",i);
                printf(" Name: ");
                puts(hos[i].name);
                printf(" Contact Number: %d\n Age: %d",hos[i].contact,hos[i].age);
                printf(" Gender: ");
                puts(hos[i].gender);
                printf(" Blood Group: ");
                puts(hos[i].blood);
                printf(" Diseases: ");
                puts(hos[i].diseases);
                printf(" Room No: %d\n",hos[i].room);
                printf(" Register Number=%d\n\n",i);
                printf("\n\n");
                flag=0;
            }
        }
        if(flag==1)
            printf("\n\n**SORRY!! No patient information is available on this name. Please try again!!**\n\n\t\t\t\tTHANK YOU (^_^) \n\n");
    }

}

void view()
{
    fflush(stdin);
    for(i=1; i<count; i++)
    {
        printf("\n");
        printf("\n\n Patient Id=%d\n",i);
        printf(" Name : ");
        puts(hos[i].name);
        printf(" Contact Number: %d\n Age: %d",hos[i].contact,hos[i].age);
        printf(" Gender: ");
        puts(hos[i].gender);
        printf(" Blood Group: ");
        puts(hos[i].blood);
        printf(" Diseases: ");
        puts(hos[i].diseases);
        printf(" Room No: %d\n",hos[i].room);
        printf(" Register Number=%d\n\n",i);
        printf("\n\n\t\t\t\t--------\n\n");
    }
}

void roominfo()
{
    int r,flag=1;
    fflush(stdin);
    printf("\n\nEnter room number: ");
    scanf("%d",&r);
    printf("\n\nRoom No:%d",r);
    fflush(stdin);
    if(r<=100)
    {
        for(i=1; i<count; i++)
        {
            if(r==hos[i].room)

            {
                if(r>=1&&r<=2)
                {
                    printf("\n\nRoom Type: ICU\n");
                    printf("\nPrice: 3000/= per day\n");
                }
                else if(r>=3&&r<=70)
                {
                    printf("\nRoom Type: Cabin\n");
                    printf("\nPrice: 1000/= per day\n");
                }
                else if(r>=71 && r<=100)
                {
                    printf("\nRoom Type: Ward\n");
                    printf("\nPrice: 500/= per day\n");

                }

                printf("\n\n\t\t\t** This room is Not Available !!**");

                flag=0;
            }
        }
        if(flag==1)
        {
            if(r>=1&&r<=2)
            {
                printf("\n\nRoom Type: ICU\n");
                printf("\nPrice:3000/= per day\n");
            }
            else if(r>=3&&r<=70)
            {
                printf("\n\nRoom Type: Cabin\n");
                printf("\n\nPrice:1000/= per day\n");
            }
            else if(r>=71 && r<=100)
            {
                printf("\n\nRoom Type: Ward\n");
                printf("\nPrice:500/= per day\n");
            }
            printf("\n\n\t\t\t** This room is Available !!**\n");
        }

    }
    else
        printf("\n\n**Invalid Room Number**\n\n");
}

void del() //to delete the function
{
    int h,l;
    fflush(stdin);
    printf("\n\nEnter Register Number=");
    scanf("%d",&h);
    fflush(stdin);
    if(h<count)
    {
        printf("\n");
        printf(" Patient Id=%d\n",h);
        printf(" Name = ");
        puts(hos[h].name);
        printf(" Contact Number: %d\n Age: %d",hos[h].contact,hos[h].age);
        printf(" Gender: ");
        puts(hos[h].gender);
        printf(" Blood Group: ");
        puts(hos[h].blood);
        printf(" Diseases: ");
        puts(hos[h].diseases);
        printf(" Room No: %d\n",hos[h].room);
        printf(" Register Number=%d\n\n",h);
        printf("\n Are you sure to delete the whole information?\n 1. Yes\n 2. No\n");
        printf("\n Select a option: ");
        scanf("%d",&l);
        if(l==1)
        {
            strcpy(hos[h].name,hos[h+1].name);
            hos[h].contact=hos[h+1].contact;
            hos[h].age=hos[h+1].age;
            strcpy(hos[h].gender,hos[h+1].gender);
            strcpy(hos[h].blood,hos[h+1].blood);
            strcpy(hos[h].diseases,hos[h+1].diseases);
            hos[h].room=hos[h+1].room;
            h++;
            printf("\n\t\t\t--* The Whole Information is Deleted *--\n\n");
            count--;
        }

        else if (l==2)
        {
            main();
        }
        else
            printf("\n\n * You have chosen wrong option. Please try again!! THANK YOU  (^_^) *\n\n");
    }
    else
        printf("\n\n**SORRY!! No patient information is available on this name. Please try again!!**\n\n\t\t\t\tTHANK YOU (^_^) \n\n");
}

void edit()
{
    int x,y,c,j,flag=1;
    printf("\n\n\nWhat do you want to edit ??\n");
    printf("\n1.Edit Name\n2.Edit Contact Number\n3.Edit Age\n4.Edit Gender\n5.Edit Blood Group\n6.Edit Diseases\n7.Edit Room No\n8.Edit The Whole Information\n");
    printf("\n\nSelect a option: ");
    scanf("%d",&x);
    fflush(stdin);
    printf("\n\n * You can choose any one of the following options as per your wish to edit the information of any patient. *\n\n");
    printf("\n1.Patient Id\n2.Patient Name");
    printf("\n\n Select a Option:");
    scanf("%d",&c);
    if(x<9)
    {
        if(c==1)
        {
            printf("\n Enter patient id: ");
            scanf("%d",&y);
            if(y<count)
            {
                if(x==1)
                {
                    fflush(stdin);
                    printf("\n Recorded Name :");
                    puts(hos[y].name);
                    fflush(stdin);
                    printf(" Enter the new name :");
                    gets(hos[y].name);

                }
                else if(x==2)
                {
                    fflush(stdin);
                    printf("\n Recorded Contact Number : %d\n",hos[y].contact);
                    fflush(stdin);
                    printf(" Enter the new contact number :");
                    scanf("%d",&hos[y].contact);

                }
                else if(x==3)
                {
                    fflush(stdin);
                    printf("\n Recorded Age : %d\n",hos[y].age);
                    fflush(stdin);
                    printf(" Enter the new age :");
                    scanf("%d",&hos[y].age);
                }
                else if(x==4)
                {
                    fflush(stdin);
                    printf("\n Recorded Gender :");
                    puts(hos[y].gender);
                    fflush(stdin);
                    printf(" Enter the new gender :");
                    gets(hos[y].gender);

                }
                else if(x==5)
                {
                    fflush(stdin);
                    printf("\n Recorded Blood Group :");
                    puts(hos[y].blood);
                    fflush(stdin);
                    printf(" Enter the new blood group :");
                    gets(hos[y].blood);

                }
                else if(x==6)
                {
                    fflush(stdin);
                    printf("\n Recorded Diseases :");
                    puts(hos[y].diseases);
                    fflush(stdin);
                    printf(" Enter the new diseases :");
                    gets(hos[y].diseases);
                }
                else if(x==7)
                {
                    fflush(stdin);
                    printf("\n Recorded Room No : %d\n",hos[y].room);
                    fflush(stdin);
                    printf(" Enter the new room no :");
                    scanf("%d",&hos[y].room);
                }
                else if(x==8)
                {
                    fflush(stdin);
                    printf("\n\n\t\t\t Recorded information\n\n\n");
                    fflush(stdin);
                    printf(" Recorded Name = ");
                    puts(hos[y].name);
                    fflush(stdin);
                    printf(" Recorded Contact Number = %d\n",hos[y].contact);
                    fflush(stdin);
                    printf(" Recorded Age = %d\n",hos[y].age);
                    fflush(stdin);
                    printf(" Recorded Gender = ");
                    puts(hos[y].gender);
                    fflush(stdin);
                    printf(" Recorded Blood Group = ");
                    puts(hos[y].blood);
                    fflush(stdin);
                    printf(" Recorded Diseases = ");
                    puts(hos[y].diseases);
                    fflush(stdin);
                    fflush(stdin);
                    printf(" Recorded Room No= %d\n",hos[y].room);
                    printf("\n\n\n\t\t\t Enter new information\n\n\n");
                    fflush(stdin);
                    printf(" Enter the new name :");
                    gets(hos[y].name);
                    fflush(stdin);
                    printf(" Enter the new contact number :");
                    scanf("%d",&hos[y].contact);
                    fflush(stdin);
                    printf(" Enter the new age :");
                    scanf("%d",&hos[y].age);
                    fflush(stdin);
                    printf(" Enter the new gender :");
                    gets(hos[y].gender);
                    fflush(stdin);
                    printf(" Enter the new blood group :");
                    gets(hos[y].blood);
                    fflush(stdin);
                    printf(" Enter the new diseases :");
                    gets(hos[y].diseases);
                    printf(" Enter the new room no :");
                    scanf("%d",&hos[y].room);
                }

            }
            else
            {
                printf("\n\n**SORRY! No patient information is available on this ID. Please try again!!**\n\n\t\t\t\tTHANK YOU (^_^) \n\n");
            }
        }
        else if(c==2)
        {

            fflush(stdin);
            printf("\n Enter Patient Name: ");
            gets(j);
            fflush(stdin);
            for(i=0; i<count; i++)
            {


                if(strcmp(j,hos[i].name)==0)
                {
                    if(x==1)
                    {
                        fflush(stdin);
                        printf("\n Recorded Name :");
                        puts(hos[i].name);
                        fflush(stdin);
                        printf(" Enter the new name :");
                        gets(hos[i].name);

                    }
                    else if(x==2)
                    {
                        fflush(stdin);
                        printf("\n Recorded Contact Number : %d\n",hos[i].contact);
                        fflush(stdin);
                        printf(" Enter the new contact number :");
                        scanf("%d",&hos[i].contact);

                    }
                    else if(x==3)
                    {
                        fflush(stdin);
                        printf("\n Recorded Age : %d\n",hos[i].age);
                        fflush(stdin);
                        printf(" Enter the new age :");
                        scanf("%d",&hos[i].age);
                    }
                    else if(x==4)
                    {
                        fflush(stdin);
                        printf("\n Recorded Gender :");
                        puts(hos[i].gender);
                        fflush(stdin);
                        printf(" Enter the new gender :");
                        gets(hos[i].gender);

                    }
                    else if(x==5)
                    {
                        fflush(stdin);
                        printf("\n Recorded Blood Group :");
                        puts(hos[i].blood);
                        fflush(stdin);
                        printf(" Enter the new blood group :");
                        gets(hos[i].blood);

                    }
                    else if(x==6)
                    {
                        fflush(stdin);
                        printf("\n Recorded Diseases :");
                        puts(hos[i].diseases);
                        fflush(stdin);
                        printf(" Enter the new diseases :");
                        gets(hos[i].diseases);
                    }
                    else if(x==7)
                    {
                        fflush(stdin);
                        printf("\n Recorded Room No : %d\n",hos[i].room);
                        fflush(stdin);
                        printf(" Enter the new room no :");
                        scanf("%d",&hos[i].room);
                    }
                    else if(x==8)
                    {
                        fflush(stdin);
                        printf("\n\n\t\t\t Recorded information\n\n\n");
                        fflush(stdin);
                        printf(" Recorded Name = ");
                        puts(hos[i].name);
                        fflush(stdin);
                        printf(" Recorded Contact Number = %d\n",hos[i].contact);
                        fflush(stdin);
                        printf(" Recorded Age = %d\n",hos[i].age);
                        fflush(stdin);
                        printf(" Recorded Gender = ");
                        puts(hos[i].gender);
                        fflush(stdin);
                        printf(" Recorded Blood Group = ");
                        puts(hos[i].blood);
                        fflush(stdin);
                        printf(" Recorded Diseases = ");
                        puts(hos[i].diseases);
                        fflush(stdin);
                        fflush(stdin);
                        printf(" Recorded Room No= %d\n",hos[i].room);
                        printf("\n\n\n\t\t\t Enter new information\n\n\n");
                        fflush(stdin);
                        printf(" Enter the new name :");
                        gets(hos[i].name);
                        fflush(stdin);
                        printf(" Enter the new contact number :");
                        scanf("%d",&hos[i].contact);
                        fflush(stdin);
                        printf(" Enter the new age :");
                        scanf("%d",&hos[i].age);
                        fflush(stdin);
                        printf(" Enter the new gender :");
                        gets(hos[i].gender);
                        fflush(stdin);
                        printf(" Enter the new blood group :");
                        gets(hos[i].blood);
                        fflush(stdin);
                        printf(" Enter the new diseases :");
                        gets(hos[i].diseases);
                        printf(" Enter the new room no :");
                        scanf("%d",&hos[i].room);
                    }
                    flag=0;
                }
            }
            if(flag==1)
                printf("\n\n**SORRY!! No patient information is available on this name. Please try again!!**\n\n\t\t\t\tTHANK YOU (^_^) \n\n");

        }
        else
            printf("\n\n * You have chosen wrong option. Please try again!! THANK YOU  (^_^) *\n\n");

    }
    else
        printf("\n\n * You have chosen wrong option. Please try again!! THANK YOU (^_^) *\n\n");


}


