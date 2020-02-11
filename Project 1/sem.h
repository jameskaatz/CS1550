#ifndef _SEM_PROJ1_H_
#define _SEM_PROJ1_H_

struct prior_queue
{
    struct task_struct * currentProcess;
    int priority;
    struct prior_queue * next;
};
    
struct cs1550_sem
{
   int value;
   struct prior_queue * queueHead;
};

#endif
