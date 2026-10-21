/* NON_MATCHING: the zero constant and the global address swap callee-saved registers (r5/r6). */
#include "common.h"

extern "C" {

typedef struct SceneResources {
    /* 0x00 */ void *context;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ void *resource10;
    /* 0x14 */ void *resource14;
    /* 0x18 */ void *resource18;
    /* 0x1C */ void *resource1C;
    /* 0x20 */ void *resource20;
    /* 0x24 */ void *resource24;
} SceneResources;

extern SceneResources *g_callbackWork;

int jobStop(void *context, int arg);
int FUN_001695a0(void);
int asdMemFree(void);
int scrScriptProcessDestroy(void);
int dataTableFree(int arg);
int asdOperatorDelete(void);
int btlTalkBustUpDestroy(void);

/* Releases every resource held by the global scene resources and frees the structure. */
void FUN_0035ab90(void)
{
    SceneResources *res = g_callbackWork;

    if (res->resource20 != NULL) {
        scrScriptProcessDestroy();
        res->resource20 = NULL;
    }
    if (res->resource24 != NULL) {
        asdMemFree();
        res->resource24 = NULL;
    }
    btlTalkBustUpDestroy();
    if (res->resource14 != NULL) {
        scrScriptProcessDestroy();
    }
    if (res->resource10 != NULL) {
        asdMemFree();
    }
    if (res->resource18 != NULL) {
        asdMemFree();
    }
    if (res->resource1C != NULL) {
        asdMemFree();
    }
    FUN_001695a0();
    dataTableFree(0x3e);
    dataTableFree(0x25);
    dataTableFree(0x14);
    jobStop(res->context, 0);
    if (g_callbackWork != NULL) {
        asdOperatorDelete();
        g_callbackWork = NULL;
    }
}

} /* extern "C" */
