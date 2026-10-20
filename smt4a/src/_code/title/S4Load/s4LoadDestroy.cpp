#include "title/S4Load.h"

extern "C" {

void jobStop(u32 job, s32 arg);
void asdMemFree(void *block);
void scrScriptProcessDestroy(void *process);
void FUN_00237210(u32 arg);

extern S4Load *g_s4Load;

/* Destroy callback of the loading screen: frees its blocks, stops the job and frees the screen. */
void s4LoadDestroy(void)
{
    S4Load *load = g_s4Load;

    if (load->dataA != NULL) {
        asdMemFree(load->dataA);
    }
    if (load->dataB != NULL) {
        asdMemFree(load->dataB);
    }
    if (load->process != NULL) {
        scrScriptProcessDestroy(load->process);
    }
    if (load->data != NULL) {
        asdMemFree(load->data);
        load->data = NULL;
    }
    FUN_00237210(load->unk2B8);
    jobStop(load->job, 0);
    load->closing = 1;
    if (g_s4Load != NULL) {
        asdMemFree(g_s4Load);
        g_s4Load = NULL;
    }
}

} /* extern "C" */
