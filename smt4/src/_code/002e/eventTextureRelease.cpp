#include "common.h"

extern "C" {
void asdMemFree(void *memory);
extern void *g_eventTex;

/* Releases and clears the event texture allocation. */
void eventTextureRelease(void)
{
    asdMemFree(g_eventTex);
    g_eventTex = NULL;
}
}
