#include<stdio.h>
#include<stdlib.h>
struct process
{
	int pid;
	int arrival;
	int priority;
	int share;
	int burst;
	int start;
	int finish;
	int tat;
	int rt;
	int wt;
}*p;

int main(){
	int n,i,tt=0,*a,curr=0,j,count=0,index=-1,min;
	int ttat=0,trt=0,twt=0;
	float atat,art,awt;
	FILE *fp;
	fp = fopen("process.dat","r");
	fscanf(fp,"%d",&n);
	p = (struct process*)malloc(sizeof(struct process)*n);
	for(i=0;i<n;i++){
		fscanf(fp,"%d %d %d %d %d",&p[i].pid,&p[i].arrival,&p[i].priority,&p[i].share,&p[i].burst);
		p[i].start=-1;
		tt+=p[i].burst;
	}
	fclose(fp);
	a = (int*)malloc(sizeof(int)*tt);
	while(count!=n){
		min=21;
		for(i=0;i<n;i++){
			if(p[i].arrival<=curr && p[i].start==-1){
				if(p[i].burst<min){
					min=p[i].burst;
					index=i;
				}
			}
		}
		p[index].start = curr;
		for(j=0;j<p[index].burst;j++){
			a[curr]=p[index].pid;
			curr++;
		}
		p[index].finish = curr;
		count++;
	}
	printf("------------------------------------------------------------------------\n");
	printf("|");
	for(i=0;i<tt;i++)
		printf("  %d  |",a[i]);
	printf("\n------------------------------------------------------------------------\n");
	for(i=0;i<n;i++){
		p[i].tat = p[i].finish - p[i].arrival;
		p[i].rt = p[i].start - p[i].arrival;
		p[i].wt = p[i].tat - p[i].burst;
		ttat+=p[i].tat;
		trt+=p[i].rt;
		twt+=p[i].wt;
	}
	atat = ttat/(float)n;
	art = trt/(float)n;
	awt = twt/(float)n;
	printf("Process  Arrival  Priority  Share  Burst Start Finish Turnaround Response  Waiting\n");
	for(i=0;i<n;i++){
		printf("  %2d       %2d\t    %2d\t     %2d\t     %2d\t   %2d\t  %2d\t  %2d\t   %2d\t     %2d\n",p[i].pid,p[i].arrival,p[i].priority,p[i].share,p[i].burst,p[i].start,p[i].finish,p[i].tat,p[i].rt,p[i].wt);
	}

	printf("\nTotal Turnaround time = %d\n",ttat);
	printf("Total Response time = %d\n",trt);
	printf("Total waiting time = %d\n\n",twt);

	printf("Average Turnaround time = %.2f\n",atat);
	printf("Average Response time = %.2f\n",art);
	printf("Average waiting time = %.2f\n\n",awt);

	return 0;
} 