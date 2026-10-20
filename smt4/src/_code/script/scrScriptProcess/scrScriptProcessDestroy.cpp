/* NON_MATCHING: in the tail unlink the retail compares the list tail in r2 where this uses r1 (register allocation) */
/* Releases a script resource: frees its buffers, unlinks it from the resource list and frees it. */
#include "common.h"
#include "script/scrScriptProcess.h"

extern "C" {

int asdMemFree(void *ptr);               /* heap free */

extern ScriptResourceList g_scrScriptResources;

void scrScriptProcessDestroy(ScriptResource *res)
{
    if (res->bufA != NULL) {
        asdMemFree(res->bufA);
        res->bufA = NULL;
    }
    if (res->bufB != NULL) {
        asdMemFree(res->bufB);
        res->bufB = NULL;
    }
    if (res->bufC != NULL) {
        asdMemFree(res->bufC);
        res->bufC = NULL;
    }
    if (g_scrScriptResources.head == res) {
        g_scrScriptResources.head = res->next;
    } else {
        res->prev->next = res->next;
    }
    if (g_scrScriptResources.tail == res) {
        g_scrScriptResources.tail = res->prev;
    } else {
        res->next->prev = res->prev;
    }
    res->prev = NULL;
    res->next = NULL;
    g_scrScriptResources.count--;
    asdMemFree(res);
}

} /* extern "C" */
