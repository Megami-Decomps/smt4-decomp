#include "common.h"

extern "C" {

/* A script-driven object (0x1080+ bytes); fields are named for how the destructor uses them. */
typedef struct Obj37dab0 {
    /* 0x0000 */ u32 job;
    /* 0x0004 */ u8 unk04[8];
    /* 0x000C */ void *buffer;
    /* 0x0010 */ void *buffer2;
    /* 0x0014 */ void *scriptProcess;
    /* 0x0018 */ u8 unk18[0x2a];
    /* 0x0042 */ u8 flag;
    /* 0x0043 */ u8 unk43[0x9cd];
    /* 0x0A10 */ void *resourceA[4];
    /* 0x0A20 */ void *resourceB[24];
    /* 0x0A80 */ u8 unkA80[0x5fc];
    /* 0x107C */ void *resourceC;
} Obj37dab0;

extern Obj37dab0 *g_partyPanel;

__weak void *FUN_0037dab0_hook(void *p);
u8 *FUN_0026140c(void);
void scrScriptProcessDestroy(void);
void asdMemFree(void *p);
void asdOperatorDelete(void *p);
void *ptrTable44FreeAll(void *p);
void FUN_00333f6c(void);
void jobStop(u32 job, int arg);

/* Destroys the object: frees its buffers and resources, stops its job and clears the global. */
void partyPanelDestroy(void)
{
    Obj37dab0 *obj = g_partyPanel;
    int i;

    FUN_0026140c()[0x44] = obj->flag;
    if (obj->scriptProcess != NULL) {
        scrScriptProcessDestroy();
    }
    if (obj->buffer2 != NULL) {
        asdMemFree(obj->buffer2);
    }
    if (obj->buffer != NULL) {
        asdMemFree(obj->buffer);
    }
    for (i = 0; i < 4; i++) {
        if (obj->resourceA[i] != NULL) {
            asdOperatorDelete(FUN_0037dab0_hook(obj->resourceA[i]));
        }
    }
    for (i = 0; i < 24; i++) {
        if (obj->resourceB[i] != NULL) {
            asdOperatorDelete(FUN_0037dab0_hook(obj->resourceB[i]));
        }
    }
    if (obj->resourceC != NULL) {
        asdOperatorDelete(ptrTable44FreeAll(obj->resourceC));
    }
    obj->resourceC = NULL;
    FUN_00333f6c();
    jobStop(obj->job, 0);
    asdMemFree(obj);
    g_partyPanel = NULL;
}

} /* extern "C" */
