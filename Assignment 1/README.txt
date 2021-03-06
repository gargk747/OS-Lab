Simplified version of CPU Scheduling. (We shall be dealing with only one CPU burst).
Write a C program (preferably for linux gcc compiler) to simulate CPU scheduling.
Following CPU scheduling mechanisms need to be implemented:
1. FCFS
2. SJF
3. Priority
4. MLFQ
5. Round Robin
6. Lottery (proportional share)
The process traces should be read from a file called "process.dat". Format for this file is as follows:
<number of processes>
<pid> <arrival time> <priority> <share> <burst>
......
<pid> <arrival time> <priority> <share> <burst>

So first line describes number of processes (say N).
Each of next N lines describe process id <pid> , time this process is put into ready queue <arrival time> . <priority> is the priority assigned to a process. A lower value means higher priority. <share> means number of tickets assigned in lottery (proportional share) scheduling.
We are assuming one CPU.
<burst> shall be an integer value between 1 - 20
For Round Robin scheduling, quantum shall be one.
For MLFQ scheduling, we shall assume that there are three queues - high, medium and low priority. Also process priority (except for those in high priority queue) is incremented every 10 cycles.
For priority queue, both preemptive and non-preemptive versions need to be implemented.
In lottery scheduling, it can be assumed that system is aware of total number of tickets (irrespective of process's arrival time).

Output should be process wise Gantt chart, CPU wise Gantt chart
And
Turnaround Time : process-wise, total and average
Waiting Time : process-wise, total and average
Response Time : process-wise, total and average