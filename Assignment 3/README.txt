Write a C program (preferably for linux gcc compiler) to simulate CPU scheduling.
Following CPU scheduling mechanisms need to be implemented:
1. FCFS
2. SJF
3. Priority (non-preemptive)
4. Preemptive priority
5. MLFQ
6. Round Robin
7. Lottery (proportional share)

The process traces should be read from a file called "process.dat". Format for this file is as follows:

<number of processes>
<pid> <arrival time> <priority> <share> C <burst> I/O <burst> C <burst> ....... -1
....
<pid> <arrival time> <priority> <share> C <burst> I/O <burst> C <burst> ....... -1


First line describes number of processes (say N).
Each of next N lines describe process trace.
<pid> is process id.
<arrival time> is the time this process is put into ready queue.
<priority> is the priority assigned to a process. A lower value means higher priority.
<share> means % of tickets assigned in lottery (proportional share) scheduling.
This is followed by sequence of bursts. Before each burst interval, there is a character indicating type of burst. Here C stands for CPU, I stands for Input device and O
stands for output device. -1 indicates the end of trace for a process.

We are assuming one CPU, one Input device and one output device. Input/output devices follow first come first served policy i.e. once a process is assigned input/output device, this device can not be assigned to any other process till its burst is over.

For Round Robin scheduling, quantum shall be one.
For MLFQ scheduling, we shall assume that there are three queues - high, medium and low priority. Also process priority (except for those in high priority queue) is incremented every 100 cycles.

For priority queue, both preemptive and non-preemptive versions need to be implemented.
In lottery scheduling, total number of tickets are 100. So share of all processes should sum to 100.