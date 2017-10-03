//collage voting system

#include<stdio.h>
int totalsymbol=6;
int noofcandidates;int choice;
int winnervots;
char winnername[100];
int max=0;
//predefined symbol
int computer=0;
int ardino=0;
int transformer=0;
int robot=0;
int gas=0;
int dna=0;
//max only 6 candidates are allowed in voting system

struct candidate{
	char name[100];//here max length of name is 90 letters
	int year;//present year student is studying
	int symbol;
	int countcandidate=0;
	struct candidate *next;
};
struct candidate * head;
head=NULL;
//checking whether candidate are sufficient or not
int checkcandidates(int x){
	if(x>totalsymbol){
	 printf("There are only limited no of positions, so please choose atmost 6 candidates for election process\n");
	 scanf("%d",&noofcandidates);
	 return noofcandidates;
	}
	return 0;
}
//this function is for checking symbol it means if any other candidate has selected this symbol or not
void checksymbol(int x){
	if(x==1){
		if(computer==0)
			computer=1;
		else{
			printf("the candidate symbol which you had choosed has been selected by other canidate pls select other symbol\n");
			printf("1 = computer \n 2 = ardino \n 3 = transformer \n 4 = robot \n 5 = gas \n 6 = dna");
			scanf("%d",&choice);
			checksymbol(choice);
		}
	}
	else if(x==2){
		if(ardino==0)
			ardino=1;
		else{
			printf("the candidate symbol which you had choosed has been selected by other canidate pls select other symbol\n");
			printf("1 = computer \n 2 = ardino \n 3 = transformer \n 4 = robot \n 5 = gas \n 6 = dna");
			scanf("%d",&choice);
			checksymbol(choice);
		}
	}
	else if(x==3){
		if(transformer==0)
			transformer=1;
		else{
			printf("the candidate symbol which you had choosed has been selected by other canidate pls select other symbol\n");
			printf("1 = computer \n 2 = ardino \n 3 = transformer \n 4 = robot \n 5 = gas \n 6 = dna");
			scanf("%d",&choice);
			checksymbol(choice);
		}
	}

	else if(x==4){
		if(robot==0)
			robot=1;
		else{
			printf("the candidate symbol which you had choosed has been selected by other canidate pls select other symbol\n");
			printf("1 = computer \n 2 = ardino \n 3 = transformer \n 4 = robot \n 5 = gas \n 6 = dna");
			scanf("%d",&choice);
			checksymbol(choice);
		}
	}

	else if(x==5){
		if(gas==0)
			gas=1;
		else{
			printf("the candidate symbol which you had choosed has been selected by other canidate pls select other symbol\n");
			printf("1 = computer \n 2 = ardino \n 3 = transformer \n 4 = robot \n 5 = gas \n 6 = dna");
			scanf("%d",&choice);
			checksymbol(choice);
		}
	}

	else{
		if(dna==0)
			dna=1;
		else{
			printf("the candidate symbol which you had choosed has been selected by other canidate pls select other symbol\n");
			printf("1 = computer \n 2 = ardino \n 3 = transformer \n 4 = robot \n 5 = gas \n 6 = dna");
			scanf("%d",&choice);
			checksymbol(choice);
		}
	}
}

void create(int j){
	struct candidate *x=(struct candidate*)malloc(sizeof(struct candidate));
	struct candidate *temp1;
	temp1=head;
	printf("Enter the name of the candidate\n");
	scanf("%s",x->name);
	printf("Enter the candidate present studying year\n");
	scanf("%d",x->year);
	printf("choose the candidate symbol\n");
	printf("1 = computer \n 2 = ardino \n 3 = transformer \n 4 = robot \n 5 = gas \n 6 = dna");
	scanf("%d",&choice);
	checksymbol(choice);
	x->symbol=choice;
	if(j==0){
		head=x;
	    head->next=NULL;
	    temp1=head;
	}
	else{
		if(temp1>next!=NULL)
			temp1=temp1->next;
		temp1->next=NULL;

	}
}

void votingfunc(int x){
	struct candidate *tt;
	tt=head;
	if(x==1){
		tt->countcandidate+=1;
	}
	else if(x==2){
		tt->next->countcandidate+=1;
	}
	else if(x==3)
		tt->next->next->countcandidate+=1;
	else if(x==4)
		tt->next->next->next->countcandidate+=1;	
	else if(x==5)
		tt->next->next->next->next->countcandidate+=1;
	else 
		tt->next->next->next->next->next->countcandidate+=1;
}
void checkmajority(int a){
  struct candidate *tt;
  tt=head;
  if(a==1){
  		if(tt->countcandidate>=max)
  		{
  			max=tt->countcandidate;
  			winnervots=max;
			int v=0;
	  		for(;v<strlen(tt->name);v++)
	  			scanf("%c",winnername[v]);
  		}
	}
  if(a==2){
  		tt=tt->next;
  		if(tt->countcandidate>=max)
  		{
  			max=tt->countcandidate;
  			winnervots=max;
			int v=0;
	  		for(;v<strlen(tt->name);v++)
	  			scanf("%c",winnername[v]);
  		}	}

  if(a==3){
  		tt=tt->next->next;
  	if(tt->countcandidate>=max)
  		{
  			max=tt->countcandidate;
  			winnervots=max;
			int v=0;
	  		for(;v<strlen(tt->name);v++)
	  			scanf("%c",winnername[v]);
  		}
	}


  if(a==4){
  		tt=tt->next->next->next;
  		if(tt->countcandidate>=max)
  		{
  			max=tt->countcandidate;
  			winnervots=max;
			int v=0;
	  		for(;v<strlen(tt->name);v++)
	  			scanf("%c",winnername[v]);
  		}
	}

  if(a==5){
  		tt=tt->next->next->next->next;
  		if(tt->countcandidate>=max)
  		{
  			max=tt->countcandidate;
  			winnervots=max;
			int v=0;
	  		for(;v<strlen(tt->name);v++)
	  			scanf("%c",winnername[v]);
  		}
	}

  else{
  		tt=tt->next->next->next->next->next;
  		if(tt->countcandidate>=max)
  		{
  			max=tt->countcandidate;
  			winnervots=max;
			int v=0;
	  		for(;v<strlen(tt->name);v++)
	  			scanf("%c",winnername[v]);
  		}
	}
}

int main(void){
	//orginal function
	int noofvotes,i;
	printf("Enter total number of students in the campus eligible for voting \n");
	scanf("%d",&noofvotes);
	printf("Enter number of persons who are willing to be as a leader\n");
	scanf("%d",&noofcandidates);
	int temp=checkcandidates(noofcandidates);
	for(i=0;i<noofcandidates;i++){
		create(i);  //structure of candidates are created 
	}
	int basevote;
	basevote=noofvotes/3;
	int orginalvoting=0,int c=0;
	for(i=0;i<noofvotes;i++){
		printf("Enter the candidate symbol whom you want to vote");
		printf("1 = computer \n 2 = ardino \n 3 = transformer \n 4 = robot \n 5 = gas \n 6 = dna");
		scanf("%d",&orginalvoting);
		c++;
		votingfunc(orginalvoting);

   }
   
   for(i=1;i<noofcandidates;i++){
   		checkmajority(i);	
   }
   printf("max votes are %d",winnervots);
   printf("\n name of the winner is : %s",winnername);

	return 0;

}


