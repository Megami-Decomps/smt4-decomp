#include "common.h"

extern "C" {

void asdMemFree(void *block);
extern void *g_eventTex;

void eventTexFree(void)
{
    asdMemFree(g_eventTex);
    g_eventTex = NULL;
}

} /* extern "C" */
