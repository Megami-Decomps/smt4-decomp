/* Releases a script process: frees its variables and command allocation, unlinks it from the process list and frees it. */
#include "common.h"
#include "script/scrScriptProcess.h"

extern "C" {

int asdMemFree(void *ptr);               /* heap free */


/* Removes a process from the global process list. */
static inline void scriptProcessUnlink(ScriptProcess *process)
{
    if (g_scrScriptResources.head == process) {
        g_scrScriptResources.head = process->next;
    } else {
        process->prev->next = process->next;
    }
    if (g_scrScriptResources.tail == process) {
        g_scrScriptResources.tail = process->prev;
    } else {
        process->next->prev = process->prev;
    }
    process->prev = NULL;
    process->next = NULL;
    g_scrScriptResources.count--;
}

void scrScriptProcessDestroy(ScriptProcess *process)
{
    if (process->intVariables != NULL) {
        asdMemFree(process->intVariables);
        process->intVariables = NULL;
    }
    if (process->floatVariables != NULL) {
        asdMemFree(process->floatVariables);
        process->floatVariables = NULL;
    }
    if (process->allocation != NULL) {
        asdMemFree(process->allocation);
        process->allocation = NULL;
    }
    scriptProcessUnlink(process);
    asdMemFree(process);
}

} /* extern "C" */
