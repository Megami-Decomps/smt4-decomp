/* Releases a script resource: frees its buffers, unlinks it from the resource list and frees it. */
#include "common.h"
#include "script/scrScriptProcess.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {


extern ScriptResourceList g_scrScriptResources;

/* Removes a resource from the global resource list. */
static inline void scriptResourceUnlink(ScriptResource *res)
{
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
}


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
    scriptResourceUnlink(res);
    asdMemFree(res);
}

} /* extern "C" */
