#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
struct student 
{
	char name[30],course_name[5],accomodation[10],mobile_no[10];
	int i_marks,eamcet;
	float ssc_grade;
	int p_fee,t_fee,d_fee;
}s[100];
struct faculty
{
	char name[30],accomodation[10],email[20],mobile_no[10],sub_name[10];
	int l_id,salary,experience;
	float rating,attendence;
}f[100];
struct sports
{
	char all_sports[15],staff[20];
	int ground_no,equipments;
	float ground_area;
}gm[100];
struct admissions
{
	char type[10],section[5];
	float p_fee,t_fee,l_fee;
}a;
struct buses
{
	char destination[20];
	int buses,rbus_count,timings;
	float bus_fees;
}b;
struct hostel
{
	char details[30];
	int room_no,warden_no;
	float fees;
}h;
struct college
{
	char avialble_courses[5];
	int classes,blocks,labs,students,sec_id,timings;
	float class_pass_percentage;
}c;
struct employee
{
	char name[30];
	int mobile_no,salary;
}e;
void print_student();
void print_faculty();
void print_sports();
void print_transport();
void print_hostel();
void print_college();
void print_employee();
void print_admissions();
void print_cse();
void print_ece();
void print_eee();
void print_civil();
void print_mech();
void print_teaching();
void print_non_teaching();
void print_outdoor();
void print_indoor();
void print_boys_hostel();
void print_girls_hostel();
main()
{
	struct student s[100];
	struct faculty f[50];
	struct sports gm[100];
	struct admissions a;
	struct buses b;
	struct hostel h;
	struct employee e;
	struct college c;
	int i,n,ch;
	int sport,hostel;
	do
{
	printf("\n\n------------------------------------------------------COLLEGE MANAGEMENT SYSTEM------------------------------------------------------\n\n");
	printf("\t\t\t\t\t1.Student's Information\n");
	printf("\t\t\t\t\t2.Faculty's Information\n");
	printf("\t\t\t\t\t3.Sports Information\n");
	printf("\t\t\t\t\t4.Transport Information\n");
	printf("\t\t\t\t\t5.Hostel Information\n");
	printf("\t\t\t\t\t6.College's Information\n");
	printf("\t\t\t\t\t7.Employee's Information\n");
	printf("\t\t\t\t\t8.Admissions Information\n");
	printf("\t\t\t\t\t9.Exit\n");
	printf("Enter your choice:");
	scanf("%d",&ch);
	
		switch(ch)
		{
			case 1:
				printf("__WELCOME TO STUDENTS PORTAL__\n");
					int choice;
					printf("Avialable branches:\n\n");
					printf("1 CSE\n");
					printf("2 ECE\n");
					printf("3 EEE\n");
					printf("4 CIVIL\n");
					printf("5 MECH\n\n");
					printf("Select the branch:\n");
					scanf("%d",&choice);
					if(choice==1)
					{
						print_cse();
						printf("Thank you for visiting students portal\n");
						
					}
					else if(choice==2)
					{
						print_ece();
						printf("Thank you for visiting students portal\n");
						
					}
					else if(choice==3)
					{
						print_eee();
						printf("Thank you for visiting students portal\n");
						
					}
					else if(choice==4)
					{
						print_civil();
						printf("Thank you for visiting students portal\n");
						
					}
					else if(choice==5)
					{
						print_mech();
						printf("Thank you for visiting students portal\n");
						
					}
					else
					{
						printf("Invalid Choice\n");
						printf("Thank you for visiting students portal\n");
						printf("------------------------Thank you---------------------------- \n");
						
					}	
					break;
			case 2:
				printf("----------------------------------WELCOME TO FACULTYS PORTAL------------------------------\n");
					int select;
					printf("Types of staff: \n");
					printf("1.Teaching Faculty\n");
					printf("2.Non Teaching Faculty\n");
					printf("Select the type of staff:\n");
					scanf("%d",&select);
						if(select==1)
						{
							print_teaching();
							printf("Thank you for visiting facultys portal\n");
							
						}
						else if(select==2)
						{
							print_non_teaching();
							printf("Thank you for visiting facultys portal\n");
							
						}
						else
						{
							printf("Invalid Choice\n");
							printf("Thank you for visiting facultys portal\n");
							printf("------------------------Thank you---------------------------- \n");
							
						}
						break;	
			case 3:
				printf("-------------------------------WELCOME TO SPORTS BLOCK-------------------------\n");
				printf("Types of sport:\n");
				printf("1. Outdoor sports\n");
				printf("2. Indoor sports\n");
				printf("Select the type of sport:\n");
				scanf("%d",&sport);
					if(sport==1)
					{
						print_outdoor();
						printf("Thank you for visiting sports portal\n");
						
					}
					else if(sport==2)
					{
						print_indoor();
						printf("Thank you for visiting sports portal\n");
						
					}
					else
					{
						printf("Invalid Choice\n");
						printf("Thank you for visiting sports portal\n");
						printf("------------------------Thank you---------------------------- \n");
						
					}
					break;
			case 4:
					printf("--------------------------WELCOME TO COLLEGE BUS DESK-------------------------\n");
					print_transport();
					printf("Thank you for visiting Transport portal\n");
					printf("------------------------Thank you---------------------------- \n");
					break;
			case 5:
					printf("------------------------WELCOME TO COLLEGE HOSTEL SERVER------------------------\n");
					printf("Avialable hostels\n");
					printf("1.Boys hostel\n");
					printf("2.Girls hostel\n");
					printf("Select the hostel:\n");
					scanf("%d",&hostel);
					if(hostel==1)
					{
						print_boys_hostel();
						printf("Thank you for visiting Hostel server\n");
						
					}
					else if(hostel==2)
					{
						print_girls_hostel();
						printf("Thank you for visiting Hostel server\n");
						
					}
					else
					{
						printf("Invalid Choice\n");
						printf("Thank you for visiting Hostel server\n");
						printf("------------------------Thank you---------------------------- \n");
					
					}
					break;
			case 6:
						printf("----------------------WELCOME TO COLLEGE INFORMATION------------------------\n");
						print_college();
						printf("Thank you for visiting college info server\n");
						printf("------------------------Thank you---------------------------- \n");
						break;
			case 7:
						printf("--------------------------WELCOME TO EMPLOYEES DATA-----------------------\n");
						print_employee();
						printf("Thank you for visiting employee data server\n");
						printf("------------------------Thank you---------------------------- \n");
						break;
			case 8:
						printf("------------------------------WELCOME TO ADMISSIONS BLOCK--------------------\n");
						print_admissions();
						printf("Thank you for visiting admissions block\n");
						printf("------------------------Thank you---------------------------- \n");
						break;
			case 9:
						printf("THANK YOU FOR VISITING OUR COLLEGE SERVER\n");
						exit(0);
						break;
			default:
						printf("Invalid choice\n");
						printf("Try again\n");
						break;						
		}
	}while (ch!= 0);		
}				
void print_cse()
{
	int total;
 printf("\t  NOTE\n\t    *YOU CAN GET CSE DETAILS IN (college.txt)FILE\n\n");
 FILE *ds;
 ds = fopen("college.txt","w+");
 if(ds == NULL)
 {
 printf("file cant be opened\n");
 }
 else
 {
		fprintf(ds,"The students in CSE is: 30\n");
				fprintf(ds,"Details of CSE students\n");
				fprintf(ds,"\nS.no Ht.no      Name      Course   Mobile.no          Email.id       Year/Sem  Attendence   Grade    Fees     Due     Accomodation \n");
				fprintf(ds,"-------------------------------------------------------------------------------------------------------------------------------------\n");
				fprintf(ds,"\n 1.  51166   A.Sravya Sri    CSE   7842429741    2203a51166@sru.edu.in   1/2      94.3        9.1    300000   110000   college hostel\n");
				fprintf(ds,"\n 2.  51167   B.Aditya        CSE   8919244068    2203a51167@sru.edu.in   1/2      91.4        8.1    230000   180000        Home\n");
				fprintf(ds,"\n 3.  51168   B.Chandu        CSE   9347453157    2203a51168@sru.edu.in   1/2      78.7        7.6    320000   240000   college hostel\n");
				fprintf(ds,"\n 4.  51170   Ch.Srinu        CSE   9014617155    2203a51170@sru.edu.in   1/2      50.6        7.8    240000   170000   	 Home\n");
				fprintf(ds,"\n 5.  51171   D.Shantan       CSE   7013057967    2203a51171@sru.edu.in   1/2      92.4        9.6    130000   120000   	 Home\n");
				fprintf(ds,"\n 6.  51172   D.Vishwa        CSE   7330989332    2203a51172@sru.edu.in   1/2      91.6        9.2    280000   270000   college hostel\n");
				fprintf(ds,"\n 7.  51173   G.Vinay         CSE   8008014681    2203a51173@sru.edu.in   1/2      76.3        7.7    240000   210000   	 Home\n");
				fprintf(ds,"\n 8.  51174   G.Vyshnavi      CSE   9247464717    2203a51174@sru.edu.in   1/2      94.5        8.9    220000   190000   	 Home\n");
				fprintf(ds,"\n 9.  51175   J.Anudeep       CSE   9395135062    2203a51175@sru.edu.in   1/2      40.3        7.1    240000   190000   	 Home\n");
				fprintf(ds,"\n 10. 51176   J.Santhosh     CSE    9989106926    2203a51176@sru.edu.in   1/2      78.6        8.2    300000   270000   college hostel\n");
				fprintf(ds,"\n 11.  51177   K.Harshitha    CSE   9100904585    2203a51177@sru.edu.in   1/2      66.9        7.7    310000   270000   college hostel\n");
				fprintf(ds,"\n 12.  51178   K.Sravani      CSE   6303932034    2203a51178@sru.edu.in   1/2      85.4        8.5    300000   280000   college hostel\n");
				fprintf(ds,"\n 13.  51179   K.Raju         CSE   9553254605    2203a51179@sru.edu.in   1/2      89.3        7.8    240000   230000   	 Home\n");
				fprintf(ds,"\n 14.  51181   M.Sri Sri      CSE   9701632134    2203a51181@sru.edu.in   1/2      98.3        6.1    280000   250000   	 Home\n");
				fprintf(ds,"\n 15.  51182   M.Tejaswini    CSE   9618461562    2203a51182@sru.edu.in   1/2      67.5        7.3    240000   210000   	 Home\n");
				fprintf(ds,"\n 16.  51183   N.Nagaraju     CSE   7330991221    2203a51183@sru.edu.in   1/2      94.1        9.7    220000   180000   	 Home\n");																		
				fprintf(ds,"\n 17.  51184   O.Aditya       CSE   9381291243    2203a51184@sru.edu.in   1/2      81.3        8.1    250000   200000   	 Home\n");
				fprintf(ds,"\n 18.  51185   P.Akshith      CSE   9000365225    2203a51185@sru.edu.in   1/2      91.3        9.3    130000   100000   	 Home\n");
				fprintf(ds,"\n 19.  51186   P.Manideep     CSE   9676418361    2203a51186@sru.edu.in   1/2      94.8        8.8    250000   180000   	 Home\n");
				fprintf(ds,"\n 20.  51187   P.Raghava      CSE   9381839509    2203a51187@sru.edu.in   1/2      79.3        8.5    320000   300000   college hostel\n");
				fprintf(ds,"\n 21.  51188   P.Nandith      CSE   7207149507    2203a51188@sru.edu.in   1/2      78.1        7.0    210000   190000   Private hostel\n");
				fprintf(ds,"\n 22.  51189   P.Naga vishnu  CSE   9849368837    2203a51189@sru.edu.in   1/2      92.3        7.4    260000   240000   	 Home\n");
				fprintf(ds,"\n 23.  51190   R.Santhosh     CSE   9848953258    2203a51190@sru.edu.in   1/2      89.4        8.8    210000   180000   	 Home\n");
				fprintf(ds,"\n 24.  51191   S.Bhuvaneshwar CSE   9028860847    2203a51191@sru.edu.in   1/2      86.3        7.9    330000   310000   college hostel\n");
				fprintf(ds,"\n 25.  51192   V.Vikram       CSE   9652326863    2203a51192@sru.edu.in   1/2      77.3        7.9    240000   180000   	 Home\n");
				fprintf(ds,"\n 26.  51193   S.Vaibhav      CSE   8463995767    2203a51193@sru.edu.in   1/2      41.8        7.1    330000   290000   college hostel\n");
				fprintf(ds,"\n 27.  51194   T.Sriram       CSE   6302150498    2203a51194@sru.edu.in   1/2      87.3        8.1    240000   190000   	 Home\n");
				fprintf(ds,"\n 28.  51195   V.Mahanetesh   CSE   9553302424    2203a51195@sru.edu.in   1/2      00.0        0.0    240000   180000   	 Home\n");
				fprintf(ds,"\n 29.  51196   V.Varun        CSE   8523831868    2203a51196@sru.edu.in   1/2      84.4        8.6    230000   210000   	 Home\n");			 
				fprintf(ds,"\n 30.  51197   K.Kalyan Babu  CSE   9000900090    2203a51197@sru.edu.in   1/2      99.9        9.9    130000   130000        Home\n");
				fprintf(ds,"\n\n**press Ctrl+p to print the details of CSE students");
 fflush(ds);
 fclose(ds);
 }
}
void print_ece()
{
	int total;
 printf("\t  NOTE\n\t    *YOU CAN GET ECE DETAILS IN (college.txt)FILE\n\n");
 FILE *ds;
 ds = fopen("college.txt","w+");
 if(ds == NULL)
 {
 printf("file cant be opened\n");
 }
 else
 {
	fprintf(ds,"The students in ECE is: 30\n");
				fprintf(ds,"Details of ECE students\n");
				fprintf(ds,"\nS.no Ht.no      Name      Course   Mobile.no          Email.id       Year/Sem  Attendence   Grade    Fees     Due     Accomodation \n");
				fprintf(ds,"-------------------------------------------------------------------------------------------------------------------------------------\n");
				fprintf(ds,"\n 1.  41125   A.Koushik       ECE   7842429741    2205a41125@sru.edu.in   1/2      94.3        9.1    300000   110000   college hostel\n");
				fprintf(ds,"\n 2.  41126   A.Sriman        ECE   8919244068    2203a51126@sru.edu.in   1/2      91.4        8.1    230000   180000        Home\n");
				fprintf(ds,"\n 3.  41127   A.karthikeya    ECE   9347453157    2203a51127@sru.edu.in   1/2      78.7        7.6    320000   240000   college hostel\n");
				fprintf(ds,"\n 4.  41128   B.Sai reddy     ECE   9014617155    2203a51128@sru.edu.in   1/2      50.6        7.8    240000   170000   	 Home\n");
				fprintf(ds,"\n 5.  41129   D.Vamshi Krish  ECE   7013057967    2203a51129@sru.edu.in   1/2      92.4        9.6    130000   120000   	 Home\n");
				fprintf(ds,"\n 6.  41130   D.Varsha        ECE   7330989332    2203a51130@sru.edu.in   1/2      91.6        9.2    280000   270000   college hostel\n");
				fprintf(ds,"\n 7.  41131   D.Rahul         ECE   8008014681    2203a51131@sru.edu.in   1/2      76.3        7.7    240000   210000   	 Home\n");
				fprintf(ds,"\n 8.  41132   E.Pranitha      ECE   9247464717    2203a51132@sru.edu.in   1/2      94.5        8.9    220000   190000   	 Home\n");
				fprintf(ds,"\n 9.  41133   G.Sri laxmi     ECE   9395135062    2203a51133@sru.edu.in   1/2      40.3        7.1    240000   190000   	 Home\n");
				fprintf(ds,"\n 10.  41134   K.Sai Ganesh   ECE   9989106926    2203a51134@sru.edu.in   1/2      78.6        8.2    300000   270000   college hostel\n");
				fprintf(ds,"\n 11.  41135   K.Shivaram     ECE   9100904585    2203a51135@sru.edu.in   1/2      66.9        7.7    310000   270000   college hostel\n");
				fprintf(ds,"\n 12.  41136   K.Ajay         ECE   6303932034    2203a51136@sru.edu.in   1/2      85.4        8.5    300000   280000   college hostel\n");
				fprintf(ds,"\n 13.  41137   L.Pranay       ECE   9553254605    2203a51137@sru.edu.in   1/2      89.3        7.8    240000   230000   	 Home\n");
				fprintf(ds,"\n 14.  41138   M.Nitish       ECE   9701632134    2203a51138@sru.edu.in   1/2      98.3        6.1    280000   250000   	 Home\n");
				fprintf(ds,"\n 15.  41139   M.Aravind      ECE   9618461562    2203a51139@sru.edu.in   1/2      67.5        7.3    240000   210000   	 Home\n");
				fprintf(ds,"\n 16.  41140   Md.Asif Pasha  ECE   7330991221    2203a51140@sru.edu.in   1/2      94.1        9.7    220000   180000   	 Home\n");																		
				fprintf(ds,"\n 17.  41141   M.Varsha       ECE   9381291243    2203a51141@sru.edu.in   1/2      81.3        8.1    250000   200000   	 Home\n");
				fprintf(ds,"\n 18.  41142   N.Nireekshan   ECE   9000365225    2203a51142@sru.edu.in   1/2      91.3        9.3    130000   100000   	 Home\n");
				fprintf(ds,"\n 19.  41143   N.Ajay         ECE   9676418361    2203a51143@sru.edu.in   1/2      94.8        8.8    250000   180000   	 Home\n");
				fprintf(ds,"\n 20.  41144   N.Ravali       ECE   9381839509    2203a51144@sru.edu.in   1/2      79.3        8.5    320000   300000   college hostel\n");
				fprintf(ds,"\n 21.  41145   N.Chandhana    ECE   7207149507    2203a51145@sru.edu.in   1/2      78.1        7.0    210000   190000   Private hostel\n");
				fprintf(ds,"\n 22.  41146   P.Keerthi      ECE   9849368837    2203a51146@sru.edu.in   1/2      92.3        7.4    260000   240000   	 Home\n");
				fprintf(ds,"\n 23.  41147   P.Raheem       ECE   9848953258    2203a51147@sru.edu.in   1/2      89.4        8.8    210000   180000   	 Home\n");
				fprintf(ds,"\n 24.  41148   P.Sai Charan   ECE   9028860847    2203a51148@sru.edu.in   1/2      86.3        7.9    330000   310000   college hostel\n");
				fprintf(ds,"\n 25.  41149   P.Akshitha     ECE   9652326863    2203a51149@sru.edu.in   1/2      77.3        7.9    240000   180000   	 Home\n");
				fprintf(ds,"\n 26.  41150   S.Tejaswi      ECE   8463995767    2203a51150@sru.edu.in   1/2      41.8        7.1    330000   290000   college hostel\n");
				fprintf(ds,"\n 27.  41151   S.Dhanakar     ECE   6302150498    2203a51151@sru.edu.in   1/2      87.3        8.1    240000   190000   	 Home\n");
				fprintf(ds,"\n 28.  41152   T.Rahul        ECE   9553302424    2203a51152@sru.edu.in   1/2      00.0        0.0    240000   180000   	 Home\n");
				fprintf(ds,"\n 29.  41153   V.Sai Prasad   ECE   8523831868    2203a51153@sru.edu.in   1/2      84.4        8.6    230000   210000   	 Home\n");			 
				fprintf(ds,"\n 30.  41154   Y.Kruthik      ECE   9000900090    2203a51154@sru.edu.in   1/2      99.9        9.9    130000   130000        Home\n");
				fprintf(ds,"\n\n**press Ctrl+p to print the details of ECE students");
 fflush(ds);
 fclose(ds);
 }
}
void print_eee()
{
	int total;
 printf("\t  NOTE\n\t    *YOU CAN GET EEE DETAILS IN (college.txt)FILE\n\n");
 FILE *ds;
 ds = fopen("college.txt","w+");
 if(ds == NULL)
 {
 printf("file cant be opened\n");
 }
 else
 {
	fprintf(ds,"The students in EEE is: 30\n");
				fprintf(ds,"Details of EEE students\n");
				fprintf(ds,"\nS.no Ht.no      Name      Course   Mobile.no          Email.id       Year/Sem  Attendence   Grade    Fees     Due     Accomodation \n");
				fprintf(ds,"-------------------------------------------------------------------------------------------------------------------------------------\n");
				fprintf(ds,"\n 1.  31166   A.Ajith         EEE   7842429741    2203a31166@sru.edu.in   1/2      94.3        9.1    300000   110000   college hostel\n");
				fprintf(ds,"\n 2.  31167   A.Arshiya       EEE   8919244068    2203a31167@sru.edu.in   1/2      91.4        8.1    230000   180000        Home\n");
				fprintf(ds,"\n 3.  31168   B.Koushik       EEE   9347453157    2203a31168@sru.edu.in   1/2      78.7        7.6    320000   240000   college hostel\n");
				fprintf(ds,"\n 4.  31170   B.Abhinav       EEE   9014617155    2203a31170@sru.edu.in   1/2      50.6        7.8    240000   170000   	 Home\n");
				fprintf(ds,"\n 5.  31171   B.Balaji        EEE   7013057967    2203a31171@sru.edu.in   1/2      92.4        9.6    130000   120000   	 Home\n");
				fprintf(ds,"\n 6.  31172   B.Kranthi       EEE   7330989332    2203a31172@sru.edu.in   1/2      91.6        9.2    280000   270000   college hostel\n");
				fprintf(ds,"\n 7.  31173   D.Nagaraju      EEE   8008014681    2203a31173@sru.edu.in   1/2      76.3        7.7    240000   210000   	 Home\n");
				fprintf(ds,"\n 8.  31174   G.Kishore       EEE   9247464717    2203a31174@sru.edu.in   1/2      94.5        8.9    220000   190000   	 Home\n");
				fprintf(ds,"\n 9.  31175   G.Vardhan       EEE   9395135062    2203a31175@sru.edu.in   1/2      40.3        7.1    240000   190000   	 Home\n");
				fprintf(ds,"\n 10.  31176   G.Gayathri     EEE   9989106926    2203a31176@sru.edu.in   1/2      78.6        8.2    300000   270000   college hostel\n");
				fprintf(ds,"\n 11.  31177   J.Dileep       EEE   9100904585    2203a31177@sru.edu.in   1/2      66.9        7.7    310000   270000   college hostel\n");
				fprintf(ds,"\n 12.  31178   J.Harsha       EEE   6303932034    2203a31178@sru.edu.in   1/2      85.4        8.5    300000   280000   college hostel\n");
				fprintf(ds,"\n 13.  31179   J.Shashank     EEE   9553254605    2203a31179@sru.edu.in   1/2      89.3        7.8    240000   230000   	 Home\n");
				fprintf(ds,"\n 14.  31181   K.Akshitha     EEE   9701632134    2203a31181@sru.edu.in   1/2      98.3        6.1    280000   250000   	 Home\n");
				fprintf(ds,"\n 15.  31182   K.Gopichand    EEE   9618461562    2203a31182@sru.edu.in   1/2      67.5        7.3    240000   210000   	 Home\n");
				fprintf(ds,"\n 16.  31183   K.Rajavradhan  EEE   7330991221    2203a31183@sru.edu.in   1/2      94.1        9.7    220000   180000   	 Home\n");																		
				fprintf(ds,"\n 17.  31184   K.Shreya       EEE   9381291243    2203a31184@sru.edu.in   1/2      81.3        8.1    250000   200000   	 Home\n");
				fprintf(ds,"\n 18.  31185   K.Shakina      EEE   9000365225    2203a31185@sru.edu.in   1/2      91.3        9.3    130000   100000   	 Home\n");
				fprintf(ds,"\n 19.  31186   M.Sravani      EEE   9676418361    2203a31186@sru.edu.in   1/2      94.8        8.8    250000   180000   	 Home\n");
				fprintf(ds,"\n 20.  31187   M.Aravind      EEE   9381839509    2203a31187@sru.edu.in   1/2      79.3        8.5    320000   300000   college hostel\n");
				fprintf(ds,"\n 21.  31188   M.Sathwik      EEE   7207149507    2203a31188@sru.edu.in   1/2      78.1        7.0    210000   190000   Private hostel\n");
				fprintf(ds,"\n 22.  31189   M.Avinash      EEE   9849368837    2203a31189@sru.edu.in   1/2      92.3        7.4    260000   240000   	 Home\n");
				fprintf(ds,"\n 23.  31190   N.Divya        EEE   9848953258    2203a31190@sru.edu.in   1/2      89.4        8.8    210000   180000   	 Home\n");
				fprintf(ds,"\n 24.  31191   P.Adhi         EEE   9028860847    2203a31191@sru.edu.in   1/2      86.3        7.9    330000   310000   college hostel\n");
				fprintf(ds,"\n 25.  31192   R.Varsha       EEE   9652326863    2203a31192@sru.edu.in   1/2      77.3        7.9    240000   180000   	 Home\n");
				fprintf(ds,"\n 26.  31193   S.Harshith     EEE   8463995767    2203a31193@sru.edu.in   1/2      41.8        7.1    330000   290000   college hostel\n");
				fprintf(ds,"\n 27.  31194   N.Adhithi      EEE   6302150498    2203a31194@sru.edu.in   1/2      87.3        8.1    240000   190000   	 Home\n");
				fprintf(ds,"\n 28.  31195   S.Sai Charan   EEE   9553302424    2203a31195@sru.edu.in   1/2      00.0        0.0    240000   180000   	 Home\n");
				fprintf(ds,"\n 29.  31196   S.Chathurvedh  EEE   8523831868    2203a31196@sru.edu.in   1/2      84.4        8.6    230000   210000   	 Home\n");			 
				fprintf(ds,"\n 30.  31197   S.Kamal  	   EEE   9000900090    2203a31197@sru.edu.in   1/2      99.9        9.9    130000   130000        Home\n");
				fprintf(ds,"\n\n**press Ctrl+p to print the details of EEE students");
 fflush(ds);
 fclose(ds);
 }
}
void print_civil()
{
	int total;
 printf("\t  NOTE\n\t    *YOU CAN GET CIVIL DETAILS IN (college.txt)FILE\n\n");
 FILE *ds;
 ds = fopen("college.txt","w+");
 if(ds == NULL)
 {
 printf("file cant be opened\n");
 }
 else
 {
		fprintf(ds,"The students in CIVIL is: 30\n");
				fprintf(ds,"Details of CIVIL students\n");
				fprintf(ds,"\nS.no Ht.no      Name      Course      Mobile.no          Email.id       Year/Sem  Attendence   Grade    Fees     Due     Accomodation \n");
				fprintf(ds,"-------------------------------------------------------------------------------------------------------------------------------------\n");
				fprintf(ds,"\n 1.  21166   A.Ravi Kumar    CIVIL   7842429741    2203a21166@sru.edu.in   1/2      94.3        9.1    300000   110000   college hostel\n");
				fprintf(ds,"\n 2.  21167   B.Thanuj        CIVIL   8919244068    2203a21167@sru.edu.in   1/2      91.4        8.1    230000   180000        Home\n");
				fprintf(ds,"\n 3.  21168   B.Niyathi       CIVIL   9347453157    2203a21168@sru.edu.in   1/2      78.7        7.6    320000   240000   college hostel\n");
				fprintf(ds,"\n 4.  21170   B.SumaSree      CIVIL   9014617155    2203a21170@sru.edu.in   1/2      50.6        7.8    240000   170000   	 Home\n");
				fprintf(ds,"\n 5.  21171   B.Varun         CIVIL   7013057967    2203a21171@sru.edu.in   1/2      92.4        9.6    130000   120000   	 Home\n");
				fprintf(ds,"\n 6.  21172   C.Sri Charan    CIVIL   7330989332    2203a21172@sru.edu.in   1/2      91.6        9.2    280000   270000   college hostel\n");
				fprintf(ds,"\n 7.  21173   Ch.Rishik       CIVIL   8008014681    2203a21173@sru.edu.in   1/2      76.3        7.7    240000   210000   	 Home\n");
				fprintf(ds,"\n 8.  21174   D.Chaithanya    CIVIL   9247464717    2203a21174@sru.edu.in   1/2      94.5        8.9    220000   190000   	 Home\n");
				fprintf(ds,"\n 9.  21175   D.Hasini        CIVIL   9395135062    2203a21175@sru.edu.in   1/2      40.3        7.1    240000   190000   	 Home\n");
				fprintf(ds,"\n 10.  21176   G.Shivamani    CIVIL   9989106926    2203a21176@sru.edu.in   1/2      78.6        8.2    300000   270000   college hostel\n");
				fprintf(ds,"\n 11.  21177   G.Abhi         CIVIL   9100904585    2203a21177@sru.edu.in   1/2      66.9        7.7    310000   270000   college hostel\n");
				fprintf(ds,"\n 12.  21178   Bv.Gomathi     CIVIL   6303932034    2203a21178@sru.edu.in   1/2      85.4        8.5    300000   280000   college hostel\n");
				fprintf(ds,"\n 13.  21179   G.Sai Dattu    CIVIL   9553254605    2203a21179@sru.edu.in   1/2      89.3        7.8    240000   230000   	 Home\n");
				fprintf(ds,"\n 14.  21181   G.Pranathi     CIVIL   9701632134    2203a21181@sru.edu.in   1/2      98.3        6.1    280000   250000   	 Home\n");
				fprintf(ds,"\n 15.  21182   K.Jahnavi      CIVIL   9618461562    2203a21182@sru.edu.in   1/2      67.5        7.3    240000   210000   	 Home\n");
				fprintf(ds,"\n 16.  21183   K.Harsha       CIVIL   7330991221    2203a21183@sru.edu.in   1/2      94.1        9.7    220000   180000   	 Home\n");																		
				fprintf(ds,"\n 17.  21184   K.Greeshma     CIVIL   9381291243    2203a21184@sru.edu.in   1/2      81.3        8.1    250000   200000   	 Home\n");
				fprintf(ds,"\n 18.  21185   L.Hemanth      CIVIL   9000365225    2203a21185@sru.edu.in   1/2      91.3        9.3    130000   100000   	 Home\n");
				fprintf(ds,"\n 19.  21186   Md.Karim Pasha CIVIL   9676418361    2203a21186@sru.edu.in   1/2      94.8        8.8    250000   180000   	 Home\n");
				fprintf(ds,"\n 20.  21187   P.Lokesh       CIVIL   9381839509    2203a21187@sru.edu.in   1/2      79.3        8.5    320000   300000   college hostel\n");
				fprintf(ds,"\n 21.  21188   P.Chowdhary    CIVIL   7207149507    2203a21188@sru.edu.in   1/2      78.1        7.0    210000   190000   Private hostel\n");
				fprintf(ds,"\n 22.  21189   R.Amulya       CIVIL   9849368837    2203a21189@sru.edu.in   1/2      92.3        7.4    260000   240000   	 Home\n");
				fprintf(ds,"\n 23.  21190   S.Prathibha    CIVIL   9848953258    2203a21190@sru.edu.in   1/2      89.4        8.8    210000   180000   	 Home\n");
				fprintf(ds,"\n 24.  21191   S.Uday         CIVIL   9028860847    2203a21191@sru.edu.in   1/2      86.3        7.9    330000   310000   college hostel\n");
				fprintf(ds,"\n 25.  21192   S.Shahnawaz    CIVIL   9652326863    2203a21192@sru.edu.in   1/2      77.3        7.9    240000   180000   	 Home\n");
				fprintf(ds,"\n 26.  21193   S.Malavika     CIVIL   8463995767    2203a21193@sru.edu.in   1/2      41.8        7.1    330000   290000   college hostel\n");
				fprintf(ds,"\n 27.  21194   S.Harish       CIVIL   6302150498    2203a21194@sru.edu.in   1/2      87.3        8.1    240000   190000   	 Home\n");
				fprintf(ds,"\n 28.  21195   P.Sreeja       CIVIL   9553302424    2203a21195@sru.edu.in   1/2      00.0        0.0    240000   180000   	 Home\n");
				fprintf(ds,"\n 29.  21196   T.Abhinay      CIVIL   8523831868    2203a21196@sru.edu.in   1/2      84.4        8.6    230000   210000   	 Home\n");			 
				fprintf(ds,"\n 30.  21197   V.Shruthi      CIVIL   9000900090    2203a21197@sru.edu.in   1/2      99.9        9.9    130000   130000        Home\n");
				fprintf(ds,"\n\n**press Ctrl+p to print the details of CIVIL students");
 fflush(ds);
 fclose(ds);
 }
}
void print_mech()
{
	int total;
 printf("\t  NOTE\n\t    *YOU CAN GET MECH DETAILS IN (college.txt)FILE\n\n");
 FILE *ds;
 ds = fopen("college.txt","w+");
 if(ds == NULL)
 {
 printf("file cant be opened\n");
 }
 else
 {
				fprintf(ds,"The students in MECH is: 30\n");
				fprintf(ds,"Details of MECH students\n");
				fprintf(ds,"\nS.no Ht.no      Name        Course   Mobile.no          Email.id       Year/Sem  Attendence   Grade    Fees     Due     Accomodation \n");
				fprintf(ds,"-------------------------------------------------------------------------------------------------------------------------------------\n");
				fprintf(ds,"\n 1.  11166   A.Ramesh    	   MECH   7842429741    2203a51166@sru.edu.in   1/2      94.3        9.1    300000   110000   college hostel\n");
				fprintf(ds,"\n 2.  11167   B.Narsiah       MECH   8919244068    2203a51167@sru.edu.in   1/2      91.4        8.1    230000   180000        Home\n");
				fprintf(ds,"\n 3.  11168   B.Ramesh        MECH   9347453157    2203a51168@sru.edu.in   1/2      78.7        7.6    320000   240000   college hostel\n");
				fprintf(ds,"\n 4.  11170   Ch.Prahlad      MECH   9014617155    2203a51170@sru.edu.in   1/2      50.6        7.8    240000   170000   	 Home\n");
				fprintf(ds,"\n 5.  11171   D.Rajkumar      MECH   7013057967    2203a51171@sru.edu.in   1/2      92.4        9.6    130000   120000   	 Home\n");
				fprintf(ds,"\n 6.  11172   D.Kotilingam    MECH   7330989332    2203a51172@sru.edu.in   1/2      91.6        9.2    280000   270000   college hostel\n");
				fprintf(ds,"\n 7.  11173   G.Mallesh       MECH   8008014681    2203a51173@sru.edu.in   1/2      76.3        7.7    240000   210000   	 Home\n");
				fprintf(ds,"\n 8.  11174   G.Prabhakar     MECH   9247464717    2203a51174@sru.edu.in   1/2      94.5        8.9    220000   190000   	 Home\n");
				fprintf(ds,"\n 9.  11175   J.Suresh        MECH   9395135062    2203a51175@sru.edu.in   1/2      40.3        7.1    240000   190000   	 Home\n");
				fprintf(ds,"\n 10.  11176   J.Komuraiah    MECH   9989106926    2203a51176@sru.edu.in   1/2      78.6        8.2    300000   270000   college hostel\n");
				fprintf(ds,"\n 11.  11177   K.Chandar      MECH   9100904585    2203a51177@sru.edu.in   1/2      66.9        7.7    310000   270000   college hostel\n");
				fprintf(ds,"\n 12.  11178   K.Gattaiah     MECH   6303932034    2203a51178@sru.edu.in   1/2      85.4        8.5    300000   280000   college hostel\n");
				fprintf(ds,"\n 13.  11179   K.Amarendar    MECH   9553254605    2203a51179@sru.edu.in   1/2      89.3        7.8    240000   230000   	 Home\n");
				fprintf(ds,"\n 14.  11181   M.Nataraj      MECH   9701632134    2203a51181@sru.edu.in   1/2      98.3        6.1    280000   250000   	 Home\n");
				fprintf(ds,"\n 15.  11182   M.Naveen       MECH   9618461562    2203a51182@sru.edu.in   1/2      67.5        7.3    240000   210000   	 Home\n");
				fprintf(ds,"\n 16.  11183   N.Ravindar     MECH   7330991221    2203a51183@sru.edu.in   1/2      94.1        9.7    220000   180000   	 Home\n");																		
				fprintf(ds,"\n 17.  11184   O.Surender     MECH   9381291243    2203a51184@sru.edu.in   1/2      81.3        8.1    250000   200000   	 Home\n");
				fprintf(ds,"\n 18.  11185   P.Rajendar     MECH   9000365225    2203a51185@sru.edu.in   1/2      91.3        9.3    130000   100000   	 Home\n");
				fprintf(ds,"\n 19.  11186   P.Ravi         MECH   9676418361    2203a51186@sru.edu.in   1/2      94.8        8.8    250000   180000   	 Home\n");
				fprintf(ds,"\n 20.  11187   P.Raju         MECH   9381839509    2203a51187@sru.edu.in   1/2      79.3        8.5    320000   300000   college hostel\n");
				fprintf(ds,"\n 21.  111188   P.Lakshman    MECH   7207149507    2203a51188@sru.edu.in   1/2      78.1        7.0    210000   190000   Private hostel\n");
				fprintf(ds,"\n 22.  11189   P.Ramana  	   MECH   9849368837    2203a51189@sru.edu.in   1/2      92.3        7.4    260000   240000   	 Home\n");
				fprintf(ds,"\n 23.  11190   R.Raju         MECH   9848953258    2203a51190@sru.edu.in   1/2      89.4        8.8    210000   180000   	 Home\n");
				fprintf(ds,"\n 24.  11191   S.Pradeep      MECH   9028860847    2203a51191@sru.edu.in   1/2      86.3        7.9    330000   310000   college hostel\n");
				fprintf(ds,"\n 25.  11192   V.Venkatesh    MECH   9652326863    2203a51192@sru.edu.in   1/2      77.3        7.9    240000   180000   	 Home\n");
				fprintf(ds,"\n 26.  11193   S.Anil         MECH   8463995767    2203a51193@sru.edu.in   1/2      41.8        7.1    330000   290000   college hostel\n");
				fprintf(ds,"\n 27.  11194   T.Laxman       MECH   6302150498    2203a51194@sru.edu.in   1/2      87.3        8.1    240000   190000   	 Home\n");
				fprintf(ds,"\n 28.  11195   V.Rajeshwar    MECH   9553302424    2203a51195@sru.edu.in   1/2      00.0        0.0    240000   180000   	 Home\n");
				fprintf(ds,"\n 29.  11196   V.Ravindar     MECH   8523831868    2203a51196@sru.edu.in   1/2      84.4        8.6    230000   210000   	 Home\n");			 
				fprintf(ds,"\n 30.  11197   K.Venkateshwar  MECH   9000900090    2203a51197@sru.edu.in   1/2      99.9        9.9    130000   130000        Home\n");
				fprintf(ds,"\n\n**press Ctrl+p to print the details of MECH students");
 fflush(ds);
 fclose(ds);
 }
}
void print_teaching()
{
	int total;
 printf("\t  NOTE\n\t    *YOU CAN GET TEACHING STAFF DETAILS IN (college.txt)FILE\n\n");
 FILE *ds;
 ds = fopen("college.txt","w+");
 if(ds == NULL)
 {
 printf("file cant be opened\n");
 }
 else
 {
	fprintf(ds,"\nS.no   ID      Name       Subject     Mobile.no        Email.id        Experience     Salary     Rating    Attendence    Accomodation \n");
				fprintf(ds,"-------------------------------------------------------------------------------------------------------------------------------------\n");	
				fprintf(ds,"\n1.    1001    P.Praveen  Computers   9823456718  2020a61001@sru.edu.in     17         200000      4.5         92.4          Home\n");
				fprintf(ds,"\n2.    1002    Ch.Swapna  Mathematics 9823456718  2020a61002@sru.edu.in     15         150000      4.7         98.7          Home\n");
				fprintf(ds,"\n3.    1003    E.Purushotham Physics  9823456718  2020a61003@sru.edu.in     20         250000      4.3         97.4          Home\n");
				fprintf(ds,"\n4.    1004    M.Nagaraju   Physics   9823456718  2020a61004@sru.edu.in     6          170000      4.3         92.5          Home\n");
				fprintf(ds,"\n5.    1005    T.Vinuthna  English    9823456718  2020a61005@sru.edu.in     5          120000      4.2         91.8          Home\n");
				fprintf(ds,"\n6.    1006    R.Krishnaveni English  9823456718  2020a61006@sru.edu.in     3          70000       3.5         90.4          Home\n");
				fprintf(ds,"\n7.    1007    KMF Aurora  English    9823456718  2020a61007@sru.edu.in     6          60000       4.1         90.2          Home\n");
				fprintf(ds,"\n8.    1008    P.Anoosha  Computers   9823456718  2020a61008@sru.edu.in     2          120000      4.2         90.1          Home\n");
				fprintf(ds,"\n9.    1009    K.Bala Krishna BEEE    9823456718  2020a61009@sru.edu.in     13         200000      4.5         92.4          Home\n");
				fprintf(ds,"\n10.   1010    K.Raghu    English     9823456718  2020a61010@sru.edu.in     17         200000      4.1         95.8          Home\n");
				fprintf(ds,"\n11.   1011    Md.Shamshi Mathematics 9823456718  2020a61011@sru.edu.in     13         220000      4.0         89.4          Home\n");
				fprintf(ds,"\n12.   1012    Ch.Sravanthi English   9823456718  2020a61012@sru.edu.in     7          80000       4.3         94.8          Home\n");
				fprintf(ds,"\n13.   1013    M.Bhavana    SSD       9823456718  2020a61013@sru.edu.in     5          120000      4.2         88.4          Home\n");
				fprintf(ds,"\n14.   1014    P.Pramod  Computers    9823456718  2020a61014@sru.edu.in     11         170000      4.3         91.7          Home\n");	
				fprintf(ds,"\n15.   1015    B.Ravindar Mathematics 9823456718  2020a61015@sru.edu.in     10         110000      3.9         92.4          Home\n");	
				fprintf(ds,"\n16.   1016    M.Monisha  English     9823456718  2020a61016@sru.edu.in     11         160000      4.5         95.4          Home\n");
				fprintf(ds,"\n17.   1017    M.Sheshikala Computers 9823456718  2020a61017@sru.edu.in     15         230000      4.2         94.4          Home\n");
				fprintf(ds,"\n\n**press Ctrl+p to print the details of teaching faculty");
 fflush(ds);
 fclose(ds);
 }
}
void print_non_teaching()
{
	int total;
 printf("\t  NOTE\n\t    *YOU CAN GET NON TEACHING FACULTY DETAILS IN (college.txt)FILE\n\n");
 FILE *ds;
 ds = fopen("college.txt","w+");
 if(ds == NULL)
 {
 printf("file cant be opened\n");
 }
 else
 {
				fprintf(ds,"\nS.no   ID      Name       Subject     Mobile.no        Email.id           Salary   Attendence    Accomodation \n");
				fprintf(ds,"-------------------------------------------------------------------------------------------------------------------------------------\n");	
				fprintf(ds,"\n1.    2001    K.Kiran    Computers   9823456718  2020a62001@sru.edu.in    20000      92.4          Home\n");
				fprintf(ds,"\n2.    2002    Aisha      Computers   9823456718  2020a61002@sru.edu.in    15000      91.7          Home\n");
				fprintf(ds,"\n3.    2003    Suresh      Physics    9823456718  2020a61003@sru.edu.in    25000      97.4          Home\n");
				fprintf(ds,"\n4.    2004    Radhika     Physics    9823456718  2020a61004@sru.edu.in    17000      89.5          Home\n");
				fprintf(ds,"\n5.    2005    Mahesh      English    9823456718  2020a61005@sru.edu.in    12000      81.8          Home\n");
				fprintf(ds,"\n6.    2006    Varun       Computers  9823456718  2020a61006@sru.edu.in    17000      90.4          Home\n");
				fprintf(ds,"\n7.    2007    Raju        Admin      9823456718  2020a61007@sru.edu.in    16000      93.2          Home\n");
				fprintf(ds,"\n8.    2008    Ramesh     Computers   9823456718  2020a61008@sru.edu.in    12000      89.1          Home\n");
				fprintf(ds,"\n9.    2009    Rajender      SSD      9823456718  2020a61009@sru.edu.in    60000      92.4          Home\n");
				fprintf(ds,"\n10.   2010    Ravi        English    9823456718  2020a61010@sru.edu.in    20000      75.8          Home\n");
				fprintf(ds,"\n11.   2011    Sudharshan    PDS      9823456718  2020a61011@sru.edu.in    22000      92.4          Home\n");
				fprintf(ds,"\n12.   2012    Shashank      PDS      9823456718  2020a61012@sru.edu.in    18000      91.8          Home\n");
				fprintf(ds,"\n12.   2013    Srikanth     BEEE      9823456718  2020a61013@sru.edu.in    18000      94.8          Home\n");
				fprintf(ds,"\n\n**press Ctrl+p to print the details of non teaching faculty");
 fflush(ds);
 fclose(ds);
 }
}
void print_outdoor()
{
	int total;
 printf("\t  NOTE\n\t    *YOU CAN GET OUTDOOR SPORTS DETAILS IN (college.txt)FILE\n\n");
 FILE *ds;
 ds = fopen("college.txt","w+");
 if(ds == NULL)
 {
 printf("file cant be opened\n");
 }
 else
 {
	fprintf(ds,"\nS.no     Sport        Coach     Courts      Area  \n");
					fprintf(ds,"-------------------------------------------------------\n");
					fprintf(ds,"\n 1      Cricket      D.Mahendra   2       5acres ");
					fprintf(ds,"\n 2       Hockey      S.Sardaar    1       1acres ");
					fprintf(ds,"\n 3     Volley ball    Benson      4       1acres ");
					fprintf(ds,"\n 4     Bdminton      P.Gopichand  5       1.5acres ");
					fprintf(ds,"\n 5      Tennis        Srikanth    3       1.5acres ");
					fprintf(ds,"\n 6      Football      Ch.Sunil    2       4.5acres ");
					fprintf(ds,"\n 7      Basket ball   Jagadeesh   4       1.8acres ");
					fprintf(ds,"\n 8      Kabaddi       Ch.Rahul    3       0.9acres ");
					fprintf(ds,"\n 8      Throw ball    K.Manvitha  5       1.2acres ");
					fprintf(ds,"\n 10      Running       P.Usha     1       4acres ");
					fprintf(ds,"\n 11     Swimming     BVS Ganesh   5       2acres ");
					fprintf(ds,"\n 12     Javelin throw  D.Ajay     1       3acres ");
					fprintf(ds,"\n 13     Kho Kho        F.Vishal   2       2acres \n");
					fprintf(ds,"\n\n**press Ctrl+p to print the details of outdoor sports");
 fflush(ds);
 fclose(ds);
 }
}
void print_indoor()
{
	int total;
 printf("\t  NOTE\n\t    *YOU CAN GET INDOOR SPORTS DETAILS IN (college.txt)FILE\n\n");
 FILE *ds;
 ds = fopen("college.txt","w+");
 if(ds == NULL)
 {
 printf("file cant be opened\n");
 }
 else
 {
		fprintf(ds,"\nS.no     Sport        Coach     \n");
					fprintf(ds,"--------------------------------------\n");
					fprintf(ds,"\n 1       Chess        V.Anand  \n");
					fprintf(ds,"\n 2     Carrom board   Varun  \n");
					fprintf(ds,"\n 3     Table Tennis   Aniketh  \n");
					fprintf(ds,"\n 4      Snooker       Vinitha  \n");
					fprintf(ds,"\n\n**press Ctrl+p to print the details of indoor sports");
 fflush(ds);
 fclose(ds);
 }
}
void print_transport()
{
	int total;
 printf("\t  NOTE\n\t    *YOU CAN GET TRANSPORT DETAILS IN (college.txt)FILE\n\n");
 FILE *ds;
 ds = fopen("college.txt","w+");
 if(ds == NULL)
 {
 printf("file cant be opened\n");
 }
 else
 {
	fprintf(ds,"Total no.of  buses in the college is: 10\n");
					fprintf(ds,"\nS.no      Bus.no      Passengers       Route   \n");
					fprintf(ds,"-------------------------------------------------------\n");
					fprintf(ds,"\n 1         4            Students      Waddepally     \n");
					fprintf(ds,"\n 2         78           Students      Kazipet     \n");
					fprintf(ds,"\n 3         81           Students      Elathurthy     \n");
					fprintf(ds,"\n 4         3            Students      Hnk Chowrastha     \n");
					fprintf(ds,"\n 5         78           Students      Pochammaidhan     \n");
					fprintf(ds,"\n 6         27           Faculty            KU     \n");
					fprintf(ds,"\n 7         32           Faculty       Wgl Chowrastha     \n");
					fprintf(ds,"\n 8         19           Staff         Pochammaidhan     \n");
					fprintf(ds,"\n 9         43           Employees      Alankar     \n");
				    fprintf(ds,"\n 10        45           Students      Subedari     \n");	
				    fprintf(ds,"\n\n**press Ctrl+p to print the details of transport");
 fflush(ds);
 fclose(ds);
 }
}
void print_boys_hostel()
{
	int total;
 printf("\t  NOTE\n\t    *YOU CAN GET BOYS HOSTEL DETAILS IN (college.txt)FILE\n\n");
 FILE *ds;
 ds = fopen("college.txt","w+");
 if(ds == NULL)
 {
 printf("file cant be opened\n");
 }
 else
 {
								fprintf(ds,"-------Welcome to the Boys Hostel----------\n");
								fprintf(ds,"\nNo.of Hostels: 1\n");
								fprintf(ds,"\nNo.of Floors: 4\n");
								fprintf(ds,"\nNo.of Rooms: 40\n");
								fprintf(ds,"\nNo.of Restrooms: 40\n");
								fprintf(ds,"\nNo.of Wardens: 8\n");
								fprintf(ds,"\nNo.of AC rooms: 25\n");
								fprintf(ds,"\nNo.of Non AC rooms: 15\n");
								fprintf(ds,"\nNo.of Students: 210\n");
								fprintf(ds,"\nNo.of Faculties: 30\n");
								fprintf(ds,"\nNo.of Beds per room: 6\n");
								fprintf(ds,"\n\n**press Ctrl+p to print the detailsof boys hostel");
 fflush(ds);
 fclose(ds);
 }
}
void print_girls_hostel()
{
	int total;
 printf("\t  NOTE\n\t    *YOU CAN GET GIRLS HOSTEL DETAILS IN (college.txt)FILE\n\n");
 FILE *ds;
 ds = fopen("college.txt","w+");
 if(ds == NULL)
 {
 printf("file cant be opened\n");
 }
 else
 {
								fprintf(ds,"-------Welcome to the Girls Hostel----------\n");
								fprintf(ds,"\nNo.of Hostels: 1\n");
								fprintf(ds,"\nNo.of Floors: 4\n");
								fprintf(ds,"\nNo.of Rooms: 50\n");
								fprintf(ds,"\nNo.of Restrooms: 50\n");
								fprintf(ds,"\nNo.of Wardens: 12\n");
								fprintf(ds,"\nNo.of AC rooms: 35\n");
								fprintf(ds,"\nNo.of Non AC rooms: 15\n");
								fprintf(ds,"\nNo.of Students: 175\n");
								fprintf(ds,"\nNo.of Faculties: 25\n");
								fprintf(ds,"\nNo.of Beds per room: 4\n");
								fprintf(ds,"\n\n**press Ctrl+p to print the details of girls hostel");
 fflush(ds);
 fclose(ds);
 }
}
void print_college()
{
	int total;
 printf("\t  NOTE\n\t    *YOU CAN GET COLLEGE DETAILS IN (college.txt)FILE\n\n");
 FILE *ds;
 ds = fopen("college.txt","w+");
 if(ds == NULL)
 {
 printf("file cant be opened\n");
 }
 else
 {
						fprintf(ds,"The area of the college is: 200acres\n");
						fprintf(ds,"No.of blocks in the college is: 15\n");
						fprintf(ds,"No.of labs in the college is: 40 \n");
						fprintf(ds,"No.of Grounds in the college is: 15  \n");
						fprintf(ds,"No.of Students in the college is:  600 \n");
						fprintf(ds,"No.of Teaching faculty in the college is:  30 \n");
						fprintf(ds,"No.of Non teaching faculty in the college is:20  \n");
						fprintf(ds,"No.of Employees the college is:100 \n");
						fprintf(ds,"Net income of the college is: 1.8crore\n");
						fprintf(ds,"Net current bill of the college is: 3lakhs \n");
						fprintf(ds,"No.of classes in the college is: 40 \n");
						fprintf(ds,"No.of Seminar halls in the college is:  6 \n");
						fprintf(ds,"No.of auditorium in the college is:  2 \n");
						fprintf(ds,"No.of Libraries in the college: 1\n");
						fprintf(ds,"\n\n**press Ctrl+p to print the details of college");
 fflush(ds);
 fclose(ds);
 }
}
void print_employee()
{
	int total;
 printf("\t  NOTE\n\t    *YOU CAN GET EMPLOYEE DETAILS IN (college.txt)FILE\n\n");
 FILE *ds;
 ds = fopen("college.txt","w+");
 if(ds == NULL)
 {
 printf("file cant be opened\n");
 }
 else
 {
						fprintf(ds,"No.of Watchmen in the college: 30\n");
						fprintf(ds,"Salary of watchmen: 12000\n");
						fprintf(ds,"No.of Sweepers in the college: 40\n");
						fprintf(ds,"Salary of Sweepers: 8000\n");
						fprintf(ds,"No.of Attenders in the college: 20\n");
						fprintf(ds,"Salary of Attenders: 17000\n");
						fprintf(ds,"No.of Bathroom cleaners in the college: 10\n");
						fprintf(ds,"Salary of Bathroom cleaners: 9000\n");
						fprintf(ds,"No.of Daily labours in the college: 70\n");
						fprintf(ds,"Salary of Daily labours: 10000\n");	
						fprintf(ds,"\n\n**press Ctrl+p to print the details of emplyees");
 fflush(ds);
 fclose(ds);
 }
}

void print_admissions()
{
    char name[100],accommodation[10],course_name[100],mobile_no[10];
    int t_fee,i_marks,eamcet,p_fee,d_fee;
    float ssc_grade;
    printf("Enter the name of the student:\n");
    scanf("%s",name);
    printf("Enter the accommodation of the student:\n");
    scanf("%s",accommodation);
    printf("Enter the course of the student:\n");
    scanf("%s",course_name);
    printf("Enter the mobile number of the student:\n");
    scanf("%s",mobile_no);
    printf("Enter the fees of the student:\n");
    scanf("%d",&t_fee);
    printf("Enter the SSC grade of the student:\n");
    scanf("%f",&ssc_grade);
    printf("Enter the Intermediate marks of the student:\n");
    scanf("%d",&i_marks);
    printf("Enter the Eamcet rank of the student:\n");
    scanf("%d",&eamcet);
    printf("Enter the paid fees of the student:\n");
    scanf("%d",&p_fee);
    d_fee=t_fee-p_fee;
    int total;
 printf("\t  NOTE\n\t    *YOU CAN GET ADMISSIONS DETAILS IN (college.txt)FILE\n\n");
 FILE *ds;
 ds = fopen("college.txt","w+");
 if(ds == NULL)
 {
 printf("file cant be opened\n");
 }
 else
 {
    fprintf(ds,"\n   Name      Course      Mobile.no      Year/Sem    Fees     Due     Accommodation \n");
    fprintf(ds,"-------------------------------------------------------------------------------------\n");
    fprintf(ds,"\n   %s      %s\t%s       1/1     %d     %d     %s\n", name, course_name, mobile_no, t_fee, d_fee, accommodation);
    fprintf(ds,"------------------------------ADMISSION SUCCESSFUL-------------\n");
    fprintf(ds,"\n\n**press Ctrl+p to print the details of admissions");
 fflush(ds);
 fclose(ds);
 }
}
