#include "common.h"

extern "C" {

void *jobGetWork(void *job);
void asdMemFree(void *block);
extern void *g_eventCommand;

void eventCommandFreeWork(void *job)
{
    asdMemFree(jobGetWork(job));
    g_eventCommand = NULL;
}

} /* extern "C" */
