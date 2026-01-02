
#include <stdio.h>
#include <string.h>
/*
  my project today to bulid a simple based of relational DataBase
  * 1) I want to Create a database named Unversity, first Entity is Students,they has name conpount of 20 charctaris ,std_id,std_age,std_addr,grade
  * 2) Secound Entity is instructor,they has a ins_name[25],ins_id,ins_age,adder_ins[15]
  * 3) Therd Entity is Cource,it has a crs_name[15],crs_id,crs_lectrue[15]
  * 4) Forth Entity in Majer,it has a maj_name[15],maj_id,maj_type[15]

*/


// declare a const Size of student
const int Student_no = 5;

typedef struct
{
  char std_name[25];
  int  std_id;
  int std_age;
  char std_addr[15];
  double std_grade;
  
}Student;

typedef struct
{
  char ins_name[25];
  int  ins_id;
  int ins_age;
  char ins_addr[15];
}instructor;

typedef struct
{
  char crs_name[25];
  int crs_id;
  char crs_lecture[15];
}course;

typedef struct
{
  char maj_name[25];
  int maj_id;
  char maj_type[15];
}mejar;


void SetData(Student* s0)
{
 
  printf("Enter Detils of Student\n");
  printf("Enter Your Name: \n");
  scanf("%s",s0->std_name);
  printf("Enter your id: \n");
  scanf("%d",&s0->std_id);
  printf("Enter Your Age: \n");
  scanf("%d",&s0->std_age);
  printf("Enter Your adress: \n");
  scanf("%s",s0->std_addr);
  printf("Enter Your grade: \n");
  scanf("%lf",&s0->std_grade);
}


void GetData(Student s)
{
  printf("%s\t",s.std_name);          // take this rule , to print you not need a Address operator , just if you need input from users
  printf("%d\t",s.std_id);
  printf("%d\t",s.std_age);
  printf("%s\t",s.std_addr);
  printf("%2.lf\t",s.std_grade);    // 4.97 , two digit
  
}


void project_std(Student s,char choice[])
{
  if(strcmp(choice, "name") == 0){
    printf("Name: %s\t",s.std_name );
  }
  if(strcmp(choice, "Address") == 0) {
    printf("Adderss: %s\t",s.std_addr);
  }
  if(strcmp(choice,"id")== 0){
    printf("ID: %d\t",s.std_id);
  }
  if(strcmp(choice, "age")== 0) {
    printf("Age: %d\t",s.std_age);
  }
  if(strcmp(choice,"grade")== 0) {
    printf("Grade: %2.lf\t",s.std_grade);
  }
  
  if(choice == NULL)
    {
      printf("Not Valid");
    }
  
}

void insert_Values(Student* sptr,char name[],int id,int age,char addr[],double grade)
{
  strcpy(sptr->std_name,name);
  sptr ->std_id = id;
  strcpy(sptr->std_addr,addr);
  sptr->std_age = age;
  sptr->std_grade = grade;
}


int main()
{
  // setData, two way if 1 you display all Data , if 2 you dispaly a column
  // to insert value must be Entered by users , Enter 3

  
  Student s1;
  int choice;
  int itro = 0;

  do{
    printf("\n$$ BULD YOUR TABLE $$\n");
    SetData(&s1);
    
    printf("\n");

    printf("\nEnter 1 to Display all Information, or Enter 2 to Display a column\n");
    printf("Enter: ");
    scanf("%d",&choice);

    if(choice == 1)
    {
      printf("\nInformation of Student\n");
      GetData(s1);
    }

    else if(choice == 2)
    {
      char col_name[10];
      printf("\nEnter Your column you went: \n");
      scanf("%9s",col_name);
      project_std(s1,col_name);
      printf("\n");
    }
    itro++;

    
  }while(itro < Student_no);


 

  return 0;
}

