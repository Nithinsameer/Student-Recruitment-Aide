#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct nodes
{
    char data[100];
    int cutoff;
    int tot;
    struct nodes *next;

}node;

node *head1;
node *head2;
node *head3;
node *top;

node* allocate(char name[],int cut,int tota)
{
    node *newnode;
    newnode=(node*)malloc(sizeof(node));
    newnode->next=0;
   strcpy(newnode->data, name);
   newnode->cutoff=cut;
   newnode->tot=tota;
    return newnode;
}

void push1(node *newnode)
{
    if(head1==0)
    {
        head1=newnode;
        top=newnode;
    }
    else
    {
        top->next=newnode;
        top=newnode;
    }
}
void push2(node *newnode)
{
    if(head2==0)
    {
        head2=newnode;
        top=newnode;
    }
    else
    {
        top->next=newnode;
        top=newnode;
    }
}
void push3(node *newnode)
{
    if(head3==0)
    {
        head3=newnode;
        top=newnode;
    }
    else
    {
        top->next=newnode;
        top=newnode;
    }
}
float school,puc,ug,pg;
int gre1=0,toefl=0;
int q=0;
int p=0;
int cp=0;
int java=0;
int py=0;
int option=0;


int  student_details()
{
  char usn,name,branch;
  int choice;
  printf("\nEnter the USN of the student: \t");
  scanf(" %s",&usn);
  printf("\nEnter the name of the student: \t");
  scanf(" %s",&name);
  printf("\nEnter the branch:\t");
  scanf(" %s",&branch);
  printf("\nEnter the percentage secured out of 100 in the below grades:");
  printf("\n\t school/class(10):\t");
  scanf(" %f",&school);
  printf("\n\t PUC/class(12):\t");
  scanf(" %f",&puc);
  printf("\n\t UG:\t");
  scanf(" %f",&ug);
return 0;
}

int companiesC()
{

    node *newnode;
    int count;
    char a[]="TCS",b[]="CTS",c[]="Infosys",d[]="Wipro ",e[]="HP ",f[]="HCL Tech",g[]="Tech Mahindra",h[]="IBM",i[]="Ingram micro",j[]="Redington",k[]="DELL",l[]="Oracle";
    char m[]="SAP",n[]="Cisco",o[]="Microsoft",p[]="IGATE",q[]="APC",r[]="Capgemini",s[]="Intel",t[]="HCL infosystems",u[]="Lenovo",v[]="Savex computers",w[]="Google",x[]="Syntel",y[]="L&T infotech",z[]="Samsung";
    char ab[]="Acer",ac[]="Rolta India",ad[]="Mindtree",ae[]="Genpact",af[]="KPIT Technologies",ag[]="Rashi Peripherals",ah[]="CSC India",ai[]="Vakrangee",aj[]="Cyient",ak[]="Hexaware Technologies",al[]="Tata Technologies",am[]="Zensar Technologies";
    char an[]="Iris computers",ao[]="Apple India",ap[]="CMC",aq[]="EMC India",ar[]="NIIT Technologies",as[]="Asus India",at[]="Compuage Infocom";
    char au[]="Texas Instruments India",av[]="Canon India",aw[]="Lycos Internet",ax[]="Supertron Electronics",ay[]="Polaris Consulting & Services";
    node *temp;
    push1(allocate(a,11,34));
    push1(allocate(b,10,33));
    push1(allocate(c,12,35));
    push1(allocate(d,12,35));
    push1(allocate(e,12,36));
    push1(allocate(f,9,31));
    push1(allocate(g,9,32));
    push1(allocate(h,14,29));
    push1(allocate(i,7,30));
    push1(allocate(j,7,30));
    push1(allocate(k,12,36));
    push1(allocate(l,12,35));
    push1(allocate(m,8,31));
    push1(allocate(n,7,29));
    push1(allocate(o,13,29));
    push1(allocate(p,8,29));
    push1(allocate(q,3,28));
    push1(allocate(r,10,32));
    push1(allocate(s,11,32));
    push1(allocate(t,8,31));
    push1(allocate(u,11,33));
    push1(allocate(v,7,29));
    push1(allocate(w,13,29));
    push1(allocate(x,7,28));
    push1(allocate(y,7,29));
    push1(allocate(z,8,28));
    push1(allocate(ab,8,36));
    push1(allocate(ac,7,31));
    push1(allocate(ad,7,30));
    push1(allocate(ae,8,33));
    push1(allocate(af,7,27));
    push1(allocate(ag,7,27));
    push1(allocate(ah,7,25));
    push1(allocate(ai,6,26));
    push1(allocate(aj,7,27));
    push1(allocate(ak,6,26));
    push1(allocate(al,7,30));
    push1(allocate(am,7,29));
    push1(allocate(an,8,29));
    push1(allocate(ao,13,36));
    push1(allocate(ap,7,28));
    push1(allocate(aq,6,28));
    push1(allocate(ar,4,26));
    push1(allocate(as,5,26));
    push1(allocate(at,8,32));
    push1(allocate(au,7,34));
    push1(allocate(av,6,34));
    push1(allocate(aw,5,20));
    push1(allocate(ax,6,18));
    push1(allocate(ay,6,23));
    top->next=0;
    return 0;
}

int printinglist()
{
    node *newnode;
    int count;
    node *temp;
    companiesC();
    temp=head1;
    count=1;
    while(temp!=0)
    {
       printf("%d",count);
       printf("  ");
       printf("%s",temp->data);
       printf("\n");
       temp=temp->next;
       count=count+1;
    }
    return 0;
}

int companiesJ()
{
    node *newnode;
   char a[]="TCS",b[]="CTS",c[]="Infosys",d[]="Wipro ",e[]="HP ",f[]="HCL Tech",g[]="Tech Mahindra",h[]="IBM",i[]="Ingram micro",j[]="Redington",k[]="DELL",l[]="Oracle";
    char m[]="SAP",n[]="Cisco",o[]="Microsoft",p[]="IGATE",q[]="APC",r[]="Capgemini",s[]="Intel",t[]="HCL infosystems",u[]="Lenovo",v[]="Savex computers",w[]="Google",x[]="Syntel",y[]="L&T infotech",z[]="Samsung";
    char ab[]="Acer",ac[]="Rolta India",ad[]="Mindtree",ae[]="Genpact",af[]="KPIT Technologies",ag[]="Rashi Peripherals",ah[]="CSC India",ai[]="Vakrangee",aj[]="Cyient",ak[]="Hexaware Technologies",al[]="Tata Technologies",am[]="Zensar Technologies";
    char an[]="Iris computers",ao[]="Apple India",ap[]="CMC",aq[]="EMC India",ar[]="NIIT Technologies",as[]="Asus India",at[]="Compuage Infocom";
    char au[]="Texas Instruments India",av[]="Canon India",aw[]="Lycos Internet",ax[]="Supertron Electronics",ay[]="Polaris Consulting & Services";
    node *temp;
    push2(allocate(a,10,34));
    push2(allocate(b,10,33));
    push2(allocate(c,11,35));
    push2(allocate(d,11,35));
    push2(allocate(e,12,36));
    push2(allocate(f,7,31));
    push2(allocate(g,9,32));
    push2(allocate(h,11,29));
    push2(allocate(i,11,30));
    push2(allocate(j,12,30));
    push2(allocate(k,12,36));
    push2(allocate(l,11,35));
    push2(allocate(m,8,31));
    push2(allocate(n,8,29));
    push2(allocate(o,12,29));
    push2(allocate(p,10,29));
    push2(allocate(q,10,28));
    push2(allocate(r,12,32));
    push2(allocate(s,11,32));
    push2(allocate(t,11,31));
    push2(allocate(u,11,33));
    push2(allocate(v,12,29));
    push2(allocate(w,10,29));
    push2(allocate(x,8,28));
    push2(allocate(y,8,29));
    push2(allocate(z,11,28));
    push2(allocate(ab,7,36));
    push2(allocate(ac,10,31));
    push2(allocate(ad,6,30));
    push2(allocate(ae,7,33));
    push2(allocate(af,8,27));
    push2(allocate(ag,3,27));
    push2(allocate(ah,7,25));
    push2(allocate(ai,8,26));
    push2(allocate(aj,9,27));
    push2(allocate(ak,5,26));
    push2(allocate(al,3,30));
    push2(allocate(am,8,29));
    push2(allocate(an,5,29));
    push2(allocate(ao,12,36));
    push2(allocate(ap,3,28));
    push2(allocate(aq,8,28));
    push2(allocate(ar,7,26));
    push2(allocate(as,4,26));
    push2(allocate(at,3,32));
    push2(allocate(au,8,34));
    push2(allocate(av,6,34));
    push2(allocate(aw,7,20));
    push2(allocate(ax,3,18));
    push2(allocate(ay,2,23));
    return 0;
}

int companiesP()
{
    node *newnode;
    char a[]="TCS",b[]="CTS",c[]="Infosys",d[]="Wipro ",e[]="HP ",f[]="HCL Tech",g[]="Tech Mahindra",h[]="IBM",i[]="Ingram micro",j[]="Redington",k[]="DELL",l[]="Oracle";
    char m[]="SAP",n[]="Cisco",o[]="Microsoft",p[]="IGATE",q[]="APC",r[]="Capgemini",s[]="Intel",t[]="HCL infosystems",u[]="Lenovo",v[]="Savex computers",w[]="Google",x[]="Syntel",y[]="L&T infotech",z[]="Samsung";
    char ab[]="Acer",ac[]="Rolta India",ad[]="Mindtree",ae[]="Genpact",af[]="KPIT Technologies",ag[]="Rashi Peripherals",ah[]="CSC India",ai[]="Vakrangee",aj[]="Cyient",ak[]="Hexaware Technologies",al[]="Tata Technologies",am[]="Zensar Technologies";
    char an[]="Iris computers",ao[]="Apple India",ap[]="CMC",aq[]="EMC India",ar[]="NIIT Technologies",as[]="Asus India",at[]="Compuage Infocom";
    char au[]="Texas Instruments India",av[]="Canon India",aw[]="Lycos Internet",ax[]="Supertron Electronics",ay[]="Polaris Consulting & Services";
    node *temp;
    push3(allocate(a,8,34));
    push3(allocate(b,7,33));
    push3(allocate(c,9,35));
    push3(allocate(d,9,35));
    push3(allocate(e,11,36));
    push3(allocate(f,6,31));
    push3(allocate(g,9,32));
    push3(allocate(h,12,29));
    push3(allocate(i,11,30));
    push3(allocate(j,10,30));
    push3(allocate(k,5,36));
    push3(allocate(l,5,35));
    push3(allocate(m,12,31));
    push3(allocate(n,7,29));
    push3(allocate(o,7,29));
    push3(allocate(p,9,29));
    push3(allocate(q,9,28));
    push3(allocate(r,7,32));
    push3(allocate(s,10,32));
    push3(allocate(t,6,31));
    push3(allocate(u,12,33));
    push3(allocate(v,6,29));
    push3(allocate(w,6,29));
    push3(allocate(x,7,28));
    push3(allocate(y,9,29));
    push3(allocate(z,5,28));
    push3(allocate(ab,6,36));
    push3(allocate(ac,8,31));
    push3(allocate(ad,7,30));
    push3(allocate(ae,5,33));
    push3(allocate(af,6,27));
    push3(allocate(ag,6,27));
    push3(allocate(ah,5,25));
    push3(allocate(ai,7,26));
    push3(allocate(aj,8,27));
    push3(allocate(ak,6,26));
    push3(allocate(al,6,30));
    push3(allocate(am,13,29));
    push3(allocate(an,6,29));
    push3(allocate(ao,7,36));
    push3(allocate(ap,8,28));
    push3(allocate(aq,8,28));
    push3(allocate(ar,6,26));
    push3(allocate(as,8,26));
    push3(allocate(at,4,32));
    push3(allocate(au,5,34));
    push3(allocate(av,6,34));
    push3(allocate(aw,5,20));
    push3(allocate(ax,7,18));
    push3(allocate(ay,6,23));
    return 0;
}

void CQ1()
{
    char ans;
    printf("\nC LANGUAGE\n");
   printf("1. What is your comment on the below C statement?\n signed int p=(int)malloc(sizeof(unsigned int)); a)Improper type casting\n b)Would throw runtime error\n c)Memory will be allocated but cannot hold an int value in the memory\n d)No issue with statement\n");
   scanf(" %c",&ans);
   if(ans=='d'||ans=='D')
   {
       q++;
   }
    printf("2. What is the size of the following union definition?\n #include<stdio.h>\n union abc {\n char a,b,c,d,e,f,g,h;\n int i;\n }abc;\n main()\n {\n printf( '%d', sizeof( abc ));\n }\n a)-1\n b)-2\n c)-4\n d)-8\n");
   scanf(" %c",&ans);
   if(ans=='c'||ans=='C')
   {
       q++;
   }
   printf("3. Identify the invalid constant used in fseek() function as 'whence' reference.\n a)SEEK_SET\n b)SEEK_CUR\n c)SEEK_BEG\n d)SEEK_END\n");
   scanf(" %c",&ans);
   if(ans=='c'||ans=='C')
   {
       q++;
   }
   printf("4. Choose the invalid predefined macro as per ANSI C.\n a)_FILE_\n b)_DATE_\n c)_TIME_\n d)_C++_\n");
   scanf(" %c",&ans);
   if(ans=='d'||ans=='D')
   {
       q++;
   }
   printf("5. What is the built in function to compare two strings?\n a)string_cmp()\n b)strcmp()\n c)equals()\n d)str_compare()\n");
   scanf(" %c",&ans);
   if(ans=='b'||ans=='B')
   {
       q++;
   }
   printf("6. The C library function rewind() reposition the file pointer at the beginning of the file C.\n a)TRUE\n");
   scanf(" %c",&ans);
   if(ans=='a'||ans=='A')
   {
       q++;
   }
   printf("7. Similarity between a structure,union and enumeration,\n a)All are helpful in defining new variables\n b)All are helpful in defining new data types\n c)All are helpful in defining new pointers\n d)All are helpful in defining new structures\n");
   scanf(" %c",&ans);
   if(ans=='b'||ans=='B')
   {
       q++;
   }
   printf("8. In the below given code,the P2 is\n Typedef int *ptr;\n ptr p1,p2;\n a)Integer\n b)Integer Pointer\n c)Both Integer and Integer pointer\n d)None of the above\n");
   scanf(" %c",&ans);
   if(ans=='b'||ans=='B')
   {
       q++;
   }
   printf("9. What will be the resultant of the given below program?\n #include<stdio.h>\n #include<stdarg.h>\n void fun(char *msg, ...);\n int main()\n {\n fun('IndiaMAX', 1,2,7,11,0);\n return 0;\n }\n void fun(char *msg, ...)\n {\n va_list ptr;{\n int num;\n va_start(ptr,msg);\n num = va_arg(ptr,int);\n num = va_arg(ptr,int);\n printf('%d',num); }\n a)IndiaMAX 1,7,11,0\n b)IndiaMAX 1,7\n c)Only 4\n d)1,7,11,0\n");
   scanf(" %c",&ans);
   if(ans=='c'||ans=='C')
   {
       q++;
   }
   printf("10. What will be the output of the below given code?\n #include<stdio.h>\n int main()\n {\n const int *ptr = &i;\n char str[] = 'Welcome';\n s = str;\n while(*s)\n printf('%c',*s++);\n return 0\n }\n a)Welcome\n b)0\n c)Wel\n d)Com\n");
   scanf(" %c",&ans);
   if(ans=='a'||ans=='A')
   {
       q++;
   }
   cp=q;
}

void JQ1()
{
    char ans;
    printf("1. ____ is the tool necessary to compile, document and package Java programs?\n a)jdk\n b)jre\n c)jvm\n d)jws\n");
   scanf(" %c",&ans);
   if(ans=='a'||ans=='A')
   {
       q++;
   }
   printf("2. ____ is the one which does not take any inputs.\n a)Parametrized Constructor\n b)Spectator Constructor\n c)Default constructor\n");
   scanf(" %c",&ans);
   if(ans=='c'||ans=='C')
   {
       q++;
   }
   printf("3. ____ defines the increment size\n a)array list\n b)vector\n c)09 stack\n d)pack\n");
   scanf(" %c",&ans);
   if(ans=='b'||ans=='B')
   {
       q++;
   }
   printf("4. ____ in JAVA is a blueprint which includes all your data\n a)colony\n b)group\n c)state\n d)class\n");
   scanf(" %c",&ans);
   if(ans=='d'||ans=='D')
   {
       q++;
   }
   printf("5. ____ converts the JAVA bytecode into instructions that are sent directly to the processor\n a)jit\n b)jet\n c)jxt\n d)jdt\n");
   scanf(" %c",&ans);
   if(ans=='a'||ans=='A')
   {
       q++;
   }
   printf("6. Which of the following options leads to the portability and security of JAVA\n a)Bytecode is executed by JVM\n b)The applet makes JAVA code secure and portable\n c)Use of exception handling\n d)Dynamic binding between objects\n");
   scanf(" %c",&ans);
   if(ans=='a'||ans=='A')
   {
       q++;
   }
   printf("7. Which of the following is not a JAVA feature?\n a)Dynamic\n b)Architecture Neutral\n c)Use of pointers\n d)Object-oriented\n");
   scanf(" %c",&ans);
   if(ans=='c'||ans=='C')
   {
       q++;
   }
   printf("8. The u0021 article is referred to as a\n a)unicode escape sequence\n b)Octal escape\n c)Hexadecimal\n d)Line feed\n");
   scanf(" %c",&ans);
   if(ans=='a'||ans=='A')
   {
       q++;
   }
   printf("9. ____ is used to find and fix bugs in JAVA programs\n a)JVM\n b)JRE\n c)JDK\n d)JDB\n");
   scanf(" %c",&ans);
   if(ans=='d'||ans=='D')
   {
       q++;
   }
   printf("10. Which of the following is a valid declaration of char?\n a)char ch='utea';\n b)char ca = 'tea';\n c)char cr = u0223;\n d)char cc = '\itea';\n");
   scanf(" %c",&ans);
   if(ans=='a'||ans=='A')
   {
       q++;
   }
   java=q;
}

void PQ1()
{
    char ans;
    printf("1. What is the output for\n 'python'[-3]?\n a)'o'\n b)'t'\n c)'h'\n d)Negative Index Error\n");
   scanf(" %c",&ans);
   if(ans=='c'||ans=='C')
   {
       q++;
   }
   printf("2. What is the output for the following code-\n num=3\n while true:\n if(num%0o12 == 0):\n  break\n print(num)\n num+=1\n a)3 4 5 6 7 8 9 10 11 12\n b)3 4 5 6 7 8 9\n c)3 4 5 6 7 8 9 10 11\n d)None of the above\n");
   scanf(" %c",&ans);
   if(ans=='b'||ans=='B')
   {
       q++;
   }
   printf("3. In the following options which are python libraries that are used for data analysis and scientific computations\n a)Numpy\n b)Scipy\n c)Pandas\n d)All of the above\n");
   scanf(" %c",&ans);
   if(ans=='d'||ans=='D')
   {
       q++;
   }
   printf("4. What is the output of the following code\n class Count:\n def_init_(self, count=0):\n self._count=count\n a=count(2)\n b=count(2)\n print(id(a)==id(b),end = "")\n c='hello'\n d='hello'\n print(id(c)==id(d))\n a)True False\n b)False True\n c)False False\n d)True True\n");
   scanf(" %c",&ans);
   if(ans=='b'||ans=='B')
   {
       q++;
   }
   printf("5. What is output of the following\n print('any'.encode())\n a)'any'\n b)'yan'\n c)b'any'\n d)x'any'\n");
   scanf(" %c",&ans);
   if(ans=='c'||ans=='C')
   {
       q++;
   }
   printf("6. What is the output of the code?\n try:\n list = 5*[0] + 5*[10]\n x=list[9]\n print('Done!')\n except IndexError:\n print('Index out of Bound!')\n else:\n print('Nothing is wrong')\n finally:\n print('finally block!')\n a)'Finally block!\n b)'Done!' followed by 'Nothing is Wrong!'\n c)'Nothing is Wrong!' followed by 'Finally block!'\n d)'Done!'follow by 'Nothing is wrong!' followed by 'Finally block'.\n");
   scanf(" %c",&ans);
   if(ans=='d'||ans=='D')
   {
       q++;
   }
   printf("7. What is the output of the code?\n def rev_func(x,length):\n print(x[length-1],end="")\n rev_func(x,length-1)\n x=[11,12,13,14,15]\n rev_func(x,5)\n a)The program runs fine without error\n b)Program displays 15 14 13 12 11.\n c)program displays 11 12 13 14 15.\n d)Program displays 15 14 13 12 11 and then raises and index out of range exception.\n");
   scanf(" %c",&ans);
   if(ans=='d'||ans=='D')
   {
       q++;
   }
   printf("8. Which function can be used on the file to display a dialog for saving a file?\n a)Filename = savefilename()\n b)Filename = askfilename()\n c)Filename = asksaveasfilename()\n d)No such option in python.\n");
   scanf(" %c",&ans);
   if(ans=='c'||ans=='C')
   {
       q++;
   }
   printf("9. Select the valid code to bind a canvas with a key event p\n a)Canvas.entered(Enter, p)\n b)Canvas.entered('<Enter>',p)\n c)Canvas.bind('<key>',p)\n d)Canvas.bind(key,p)\n");
   scanf(" %c",&ans);
   if(ans=='c'||ans=='C')
   {
       q++;
   }
   printf("10. Select the reserved keyword in python\n a)else\n b)import\n c)raise\n d)All of these\n");
   scanf(" %c",&ans);
   if(ans=='d'||ans=='D')
   {
       q++;
   }
   py=q;
}

void questions1()
{
   char ans;
   printf("\nchoose the language of your preference and enter\n 1 for C\n2 for JAVA\n3 for PYTHON\n");
   scanf("%d",&option);
   if(option==1)
   {
     CQ1();
   }
   else if(option == 2)
   {
       JQ1();
   }
   else if(option == 3)
   {
     PQ1();
   }
   printf("\nLANGUAGE\n");
   printf("1. How ____ apples are there on the table?\n a)much\n b)many\n c)a few\n");
   scanf(" %c",&ans);
   if(ans=='b'||ans=='B')
   {
       q++;
   }
   printf("2. I want to buy a new cellphone, but i only have ____ money.\n a)a few\n b)a little c)much\n");
   scanf(" %c",&ans);
   if(ans=='b'||ans=='B')
   {
       q++;
   }
   printf("3. How ___ time do we have before the test?\n a)a little\n b)much\n c)many\n ");
   scanf(" %c",&ans);
   if(ans=='b'||ans=='B')
   {
       q++;
   }
   printf("4. I moved to this city last week, so i still don't have _____ friends.\n a)much\n b)a little\n c)many\n");
   scanf(" %c",&ans);
   if(ans=='c'||ans=='C')
   {
       q++;
   }
   printf("5. There is ___ on the table next to the jam.\n a)some bread\n b)some breads\n c)a few bread\n");
   scanf(" %c",&ans);
   if(ans=='a'||ans=='A')
   {
       q++;
   }
   printf("\nLOGICAL REASONING\n");
   printf("1. If air is called green, green is called red, red is called sea, sea is called blue, blue is called water and water is called pink, then what is the color of grass?\n a. Green\n b. Air\n c. Red\n d. Pink\n");
   scanf(" %c",&ans);
   if(ans=='c'||ans=='C')
   {
       q++;
   }
   printf("2.Complete the given series by finding the missing term  28, 33, 31, ?, 34, 39\n a. 34\n b. 35\n c. 36\n d. 37\n");
   scanf(" %c",&ans);
   if(ans=='c'||ans=='C')
   {
       q++;
   }
   printf("3.Pointing to a boy, a man said to a woman, \His mother is the only daughter of your father/. How was the boy related to the woman?\n a. Brother\n b. Uncle\n c. Husband\n d. Son\n");
   scanf(" %c",&ans);
   if(ans=='d'||ans=='D')
   {
       q++;
   }
   printf("4.In a row of trees, a tree is 7th from left end and 14th from right end. How many trees are there in the row?\n a.18\n b.19\n c.20\n d.21\n ");
   scanf(" %c",&ans);
   if(ans=='c'||ans=='C')
   {
       q++;
   }
   printf("5.Find the out word out.\n a. Discernment\n  b. Perception\n  c. Penetration\n  d. Insinuation\n");
   scanf(" %c",&ans);
   if(ans=='c'||ans=='C')
   {
       q++;
   }
}

void CQ2()
{
    char res;
    printf("1. What is your comment on the below C statement?\n signed int p=(int)malloc(sizeof(unsigned int)); a)Improper type casting\n b)Would throw runtime error\n c)Memory will be allocated but cannot hold an int value in the memory\n d)No issue with statement\n");
   scanf(" %c",&res);
   if(res=='d'||res=='D')
   {
       q++;
   }
    printf("2. What is the size of the following union definition?\n #include<stdio.h>\n union abc {\n char a,b,c,d,e,f,g,h;\n int i;\n }abc;\n main()\n {\n printf( '%d', sizeof( abc ));\n }\n a)-1\n b)-2\n c)-4\n d)-8\n");
   scanf(" %c",&res);
   if(res=='c'||res=='C')
   {
       q++;
   }
   printf("3. Identify the invalid constant used in fseek() function as 'whence' reference.\n a)SEEK_SET\n b)SEEK_CUR\n c)SEEK_BEG\n d)SEEK_END\n");
   scanf(" %c",&res);
   if(res=='c'||res=='C')
   {
       q++;
   }
   printf("4. Choose the invalid predefined macro as per ANSI C.\n a)_FILE_\n b)_DATE_\n c)_TIME_\n d)_C++_\n");
   scanf(" %c",&res);
   if(res=='d'||res=='D')
   {
       q++;
   }
   printf("5. What is the built in function to compare two strings?\n a)string_cmp()\n b)strcmp()\n c)equals()\n d)str_compare()\n");
   scanf(" %c",&res);
   if(res=='b'||res=='B')
   {
       q++;
   }
   printf("6. The C library function rewind() reposition the file pointer at the beginning of the file C.\n a)TRUE\n");
   scanf(" %c",&res);
   if(res=='a'||res=='A')
   {
       q++;
   }
   printf("7. Similarity between a structure,union and enumeration,\n a)All are helpful in defining new variables\n b)All are helpful in defining new data types\n c)All are helpful in defining new pointers\n d)All are helpful in defining new structures\n");
   scanf(" %c",&res);
   if(res=='b'||res=='B')
   {
       q++;
   }
   printf("8. In the below given code,the P2 is\n Typedef int *ptr;\n ptr p1,p2;\n a)Integer\n b)Integer Pointer\n c)Both Integer and Integer pointer\n d)None of the above\n");
   scanf(" %c",&res);
   if(res=='b'||res=='B')
   {
       q++;
   }
   printf("9. What will be the resultant of the given below program?\n #include<stdio.h>\n #include<stdarg.h>\n void fun(char *msg, ...);\n int main()\n {\n fun('IndiaMAX', 1,2,7,11,0);\n return 0;\n }\n void fun(char *msg, ...)\n {\n va_list ptr;{\n int num;\n va_start(ptr,msg);\n num = va_arg(ptr,int);\n num = va_arg(ptr,int);\n printf('%d',num); }\n a)IndiaMAX 1,7,11,0\n b)IndiaMAX 1,7\n c)Only 4\n d)1,7,11,0\n");
   scanf(" %c",&res);
   if(res=='c'||res=='C')
   {
       q++;
   }
   printf("10. What will be the output of the below given code?\n #include<stdio.h>\n int main()\n {\n const int *ptr = &i;\n char str[] = 'Welcome';\n s = str;\n while(*s)\n printf('%c',*s++);\n return 0\n }\n a)Welcome\n b)0\n c)Wel\n d)Com\n");
   scanf(" %c",&res);
   if(res=='a'||res=='A')
   {
       q++;
   }
     printf("11. int main()\n {\n extern int i;\n i=20;\n printf('%d',sizeof(i));\n return 0;\n }\n a)20\n b)0\n c)Undefined reference to i\n d)Linking Error\n");
   scanf(" %c",&res);
   if(res=='c'||res=='C')
   {
       q++;
   }
    printf("12. is the following statement a declaration or definition\n extern int i;\n a)Declaration\n b)Definition\n");
   scanf(" %c",&res);
   if(res=='a'||res=='A')
   {
       q++;
   }
    printf("13. int x=10;\n int main()\n {\n int x=0;\n printf('%d',x);\n return 0;\n }\n a)10\n b)0\n c)Compilation Error\n d)Undefined\n");
   scanf(" %c",&res);
   if(res=='b'||res=='B')
   {
       q++;
   }
   cp=q;
}

void JQ2()
{
    char res;
    printf("1. ____ is the tool necessary to compile, document and package Java programs?\n a)jdk\n b)jre\n c)jvm\n d)jws\n");
   scanf(" %c",&res);
   if(res=='a'||res=='A')
   {
       q++;
   }
   printf("2. ____ is the one which does not take any inputs.\n a)Parametrized Constructor\n b)Spectator Constructor\n c)Default constructor\n");
   scanf(" %c",&res);
   if(res=='c'||res=='C')
   {
       q++;
   }
   printf("3. ____ defines the increment size\n a)array list\n b)vector\n c)09 stack\n d)pack\n");
   scanf(" %c",&res);
   if(res=='b'||res=='B')
   {
       q++;
   }
   printf("4. ____ in JAVA is a blueprint which includes all your data\n a)colony\n b)group\n c)state\n d)class\n");
   scanf(" %c",&res);
   if(res=='d'||res=='D')
   {
       q++;
   }
   printf("5. ____ converts the JAVA bytecode into instructions that are sent directly to the processor\n a)jit\n b)jet\n c)jxt\n d)jdt\n");
   scanf(" %c",&res);
   if(res=='a'||res=='A')
   {
       q++;
   }
   printf("6. Which of the following options leads to the portability and security of JAVA\n a)Bytecode is executed by JVM\n b)The applet makes JAVA code secure and portable\n c)Use of exception handling\n d)Dynamic binding between objects\n");
   scanf(" %c",&res);
   if(res=='a'||res=='A')
   {
       q++;
   }
   printf("7. Which of the following is not a JAVA feature?\n a)Dynamic\n b)Architecture Neutral\n c)Use of pointers\n d)Object-oriented\n");
   scanf(" %c",&res);
   if(res=='c'||res=='C')
   {
       q++;
   }
   printf("8. The u0021 article is referred to as a\n a)unicode escape sequence\n b)Octal escape\n c)Hexadecimal\n d)Line feed\n");
   scanf(" %c",&res);
   if(res=='a'||res=='A')
   {
       q++;
   }
   printf("9. ____ is used to find and fix bugs in JAVA programs\n a)JVM\n b)JRE\n c)JDK\n d)JDB\n");
   scanf(" %c",&res);
   if(res=='d'||res=='D')
   {
       q++;
   }
   printf("10. Which of the following is a valid declaration of char?\n a)char ch='utea';\n b)char ca = 'tea';\n c)char cr = u0223;\n d)char cc = '\itea';\n");
   scanf(" %c",&res);
   if(res=='a'||res=='A')
   {
       q++;
   }
   printf("11. What is the return type of the hashcode() method in the Object class?\n a)Object\n b)int\n c)Long\n d)void\n");
   scanf(" %c",&res);
   if(res=='b'||res=='B')
   {
       q++;
   }
   printf("12. Which of the following is a valid long literal?\n a)ABH8097\n b)L990023\n c)904423\n d)0xnf029L\n");
   scanf(" %c",&res);
   if(res=='d'||res=='D')
   {
       q++;
   }
   printf("13. What does the expression float a=35/0 return?\n a)0\n b)Not a number\n c)Infinity\n d)Run time exception\n");
   scanf(" %c",&res);
   if(res=='c'||res=='C')
   {
       q++;
   }
   java=q;
}

void PQ2()
{
    char res;
    printf("1. What is the output for\n 'python'[-3]?\n a)'o'\n b)'t'\n c)'h'\n d)Negative Index Error\n");
   scanf(" %c",&res);
   if(res=='c'||res=='C')
   {
       q++;
   }
   printf("2. What is the output for the following code-\n num=3\n while true:\n if(num%0o12 == 0):\n  break\n print(num)\n num+=1\n a)3 4 5 6 7 8 9 10 11 12\n b)3 4 5 6 7 8 9\n c)3 4 5 6 7 8 9 10 11\n d)None of the above\n");
   scanf(" %c",&res);
   if(res=='b'||res=='B')
   {
       q++;
   }
   printf("3. In the following options which are python libraries that are used for data analysis and scientific computations\n a)Numpy\n b)Scipy\n c)Pandas\n d)All of the above\n");
   scanf(" %c",&res);
   if(res=='d'||res=='D')
   {
       q++;
   }
   printf("4. What is the output of the following code\n class Count:\n def_init_(self, count=0):\n self._count=count\n a=count(2)\n b=count(2)\n print(id(a)==id(b),end = "")\n c='hello'\n d='hello'\n print(id(c)==id(d))\n a)True False\n b)False True\n c)False False\n d)True True\n");
   scanf(" %c",&res);
   if(res=='b'||res=='B')
   {
       q++;
   }
   printf("5. What is output of the following\n print('any'.encode())\n a)'any'\n b)'yan'\n c)b'any'\n d)x'any'\n");
   scanf(" %c",&res);
   if(res=='c'||res=='C')
   {
       q++;
   }
   printf("6. What is the output of the code?\n try:\n list = 5*[0] + 5*[10]\n x=list[9]\n print('Done!')\n except IndexError:\n print('Index out of Bound!')\n else:\n print('Nothing is wrong')\n finally:\n print('finally block!')\n a)'Finally block!\n b)'Done!' followed by 'Nothing is Wrong!'\n c)'Nothing is Wrong!' followed by 'Finally block!'\n d)'Done!'follow by 'Nothing is wrong!' followed by 'Finally block'.\n");
   scanf(" %c",&res);
   if(res=='d'||res=='D')
   {
       q++;
   }
   printf("7. What is the output of the code?\n def rev_func(x,length):\n print(x[length-1],end="")\n rev_func(x,length-1)\n x=[11,12,13,14,15]\n rev_func(x,5)\n a)The program runs fine without error\n b)Program displays 15 14 13 12 11.\n c)program displays 11 12 13 14 15.\n d)Program displays 15 14 13 12 11 and then raises and index out of range exception.\n");
   scanf(" %c",&res);
   if(res=='d'||res=='D')
   {
       q++;
   }
   printf("8. Which function can be used on the file to display a dialog for saving a file?\n a)Filename = savefilename()\n b)Filename = askfilename()\n c)Filename = asksaveasfilename()\n d)No such option in python.\n");
   scanf(" %c",&res);
   if(res=='c'||res=='C')
   {
       q++;
   }
   printf("9. Select the valid code to bind a canvas with a key event p\n a)Canvas.entered(Enter, p)\n b)Canvas.entered('<Enter>',p)\n c)Canvas.bind('<key>',p)\n d)Canvas.bind(key,p)\n");
   scanf(" %c",&res);
   if(res=='c'||res=='C')
   {
       q++;
   }
   printf("10. Select the reserved keyword in python\n a)else\n b)import\n c)raise\n d)All of these\n");
   scanf(" %c",&res);
   if(res=='d'||res=='D')
   {
       q++;
   }
   printf("11. Which keyword is used to define methods in Python?\n a)function\n b)def\n c)method\n d)All of these\n");
   scanf(" %c",&res);
   if(res=='b'||res=='B')
   {
       q++;
   }
   printf("12. Which of the following is the correct way to declare string variable in Python?\n a)fruit = 'banana'\n b)fruit = 'banana'\n c)fruit =  banana\n d)fruit =(banana)\n");
   scanf(" %c",&res);//have the change option b to double quotes
   if(res=='b'||res=='B')
   {
       q++;
   }
   printf("13. Which defined Python function is used to find length of a string?\n a)length()\n b)len()\n c)strlen()\n d)stringlength()\n");
   scanf(" %c",&res);
   if(res=='b'||res=='B')
   {
       q++;
   }
   py=q;
}

void questions2()
{
   char res;
    printf("\nchoose the language of your preference and enter\n 1 for C\n2 for JAVA\n3 for PYTHON\n");
   scanf("%d",&option);
   if(option==1)
   {
     CQ2();
   }
   else if(option == 2)
   {
       JQ2();
   }
   else if(option == 3)
   {
     PQ2();
   }
   printf("\nLANGUAGE\n");
   printf("1. How ____ apples are there on the table?\n a)much\n b)many\n c)a few\n");
   scanf(" %c",&res);
   if(res=='b'||res=='B')
   {
       q++;
   }
   printf("2. I want to buy a new cellphone, but i only have ____ money.\n a)a few\n b)a little c)much\n");
   scanf(" %c",&res);
   if(res=='b'||res=='B')
   {
       q++;
   }
   printf("3. How ___ time do we have before the test?\n a)a little\n b)much\n c)many\n ");
   scanf(" %c",&res);
   if(res=='b'||res=='B')
   {
       q++;
   }
   printf("4. I moved to this city last week, so i still don't have _____ friends.\n a)much\n b)a little\n c)many\n");
   scanf(" %c",&res);
   if(res=='c'||res=='C')
   {
       q++;
   }
   printf("5. There is ___ on the table next to the jam.\n a)some bread\n b)some breads\n c)a few bread\n");
   scanf(" %c",&res);
   if(res=='a'||res=='A')
   {
       q++;
   }
   printf("\nLOGICAL REASONING\n");
   printf("1. If air is called green, green is called red, red is called sea, sea is called blue, blue is called water and water is called pink, then what is the color of grass?\n a. Green\n b. Air\n c. Red\n d. Pink\n");
   scanf(" %c",&res);
   if(res=='c'||res=='C')
   {
       q++;
   }
   printf("2.Complete the given series by finding the missing term  28, 33, 31, ?, 34, 39\n a. 34\n b. 35\n c. 36\n d. 37\n");
   scanf(" %c",&res);
   if(res=='c'||res=='C')
   {
       q++;
   }
   printf("3.Pointing to a boy, a man said to a woman, \His mother is the only daughter of your father/. How was the boy related to the woman?\n a. Brother\n b. Uncle\n c. Husband\n d. Son\n");
   scanf(" %c",&res);
   if(res=='d'||res=='D')
   {
       q++;
   }
   printf("4.In a row of trees, a tree is 7th from left end and 14th from right end. How many trees are there in the row?\n a.18\n b.19\n c.20\n d.21\n ");
   scanf(" %c",&res);
   if(res=='c'||res=='C')
   {
       q++;
   }
   printf("5.Find the out word out.\n a. Discernment\n  b. Perception\n  c. Penetration\n  d. Insinuation\n");
   scanf(" %c",&res);
   if(res=='c'||res=='C')
   {
       q++;
   }
   printf("6. If TOUR is written in a certain code as 1234, CLEAR as 56784, and SPARE as 90847. What will be the 5th digit for SCULPTURE in the same code.\n a. 3\n b. 4\n c. 6\n d. 0\n ");
   scanf(" %c",&res);
    if(res=='d'||res=='D')
   {
       q++;
   }
   printf("7. Float: sink :: boat : ?\n a. Ship\n b. War\n c. Submarine\n d. Car\n ");
   scanf(" %c",&res);
    if(res=='c'||res=='C')
   {
       q++;
   }

}
void test1()
{
    int x;
  do
    {
        printf("\nEnter the score obtained in GRE by the student\n");
     scanf("%d",&gre1);
     if(gre1>430)
     {
        printf("\n Invalid score \n");
        printf("\n Enter again \n");
     }
    }while(gre1>430);
do
    {
        printf("\nEnter the score obtained in toefl \n");
   scanf("%d",&toefl);
        if(toefl>120)
        {
        printf("\n Invalid score \n");
        printf("\n Enter again \n");
        }

    }while(toefl>120);
printf("\nEnter 1 to take test\n enter 0 to exit program\n");
scanf("%d",&x);
if(x==1)
{
 questions1();
}
else
{
 exit(0);
}
}

void test2()
{
    int y;
    printf("\nEnter 1 to take test\n enter 0 to exit program\n");
    scanf("%d",&y);
    if(y==1)
    {
        questions2();
    }
    else
    {
        exit(0);
    }
}

void school_marks()
{
    float total;
    float savg=0,cavg=0;
    int track;
    node *placement;
    savg=(school/20)+(puc/20)+(ug/20);
    if(gre1==0&&toefl==0)
    {
        total=p+q+savg;
    }
    else
    {
        cavg=(gre1/86)+(toefl/24);
        total= p+q+savg+(cavg/2);
    }
    printf("\n");
    printf("\nThe Marks Obtained out of 40 are\n");
    printf(" %f/40",total);
    printf("\n");
    printf("\n");
    if(total==0 || total<=20)
  {
      printf("Not eligible please try again");
  }
  else if(total>20)
  {
      printf("According to your score the approaching the following comapanies will increase your chances of placement.");
      printf("\n");
      printf("\n");
    if(option==1)
    {
        node *temp;
        temp = head1;
        while(temp->next!=0)
        {
            if(temp->cutoff<=cp)
            {
                printf("%s",temp->data);
                printf("\n");
            }
            temp=temp->next;
        }
    }
      else if(option==2)
      {
        node *temp;
        companiesJ();
        temp = head2;
        while(temp->next!=0)
        {
            if(temp->cutoff<=java)
            {
                printf("%s",temp->data);
                printf("\n");
            }
            temp=temp->next;
        }
      }
      else if(option==3)
      {
        node *temp;
        companiesP();
        temp = head3;
        while(temp->next!=0)
        {
            if(temp->cutoff<=py)
            {
                printf("%s",temp->data);
                printf("\n");
            }
            temp=temp->next;
        }
      }
  }
}


int main()
{
    head1=0;
    head2=0;
    head3=0;
  int score=0,ch;
  printf("\nEnter the student details");
  student_details();
  printf("\nCOMPANIES LIST\n");
  printinglist();
  printf("\nEnter the no of companies you have done an internship at in the above listed companies paid or unpaid\n");
  scanf("%d",&p);
  printf("\nEnter 1 if the student has attempted GRE and TOEFL if not press 0\n");
  scanf("%d",&ch);
  if(ch==1)
  {
      test1();
  }
  else
  {
      test2();
  }
  school_marks();
  printf("\n");
  printf("\n Thank you\n");
  printf("\n ALL THE BEST \n");

  return 0;
}


