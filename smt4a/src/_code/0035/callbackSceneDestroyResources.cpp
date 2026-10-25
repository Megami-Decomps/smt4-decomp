#include "script/scrScriptProcess.h"

extern "C" {

typedef struct SceneResources {
    /* 0x00 */ void *context;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ void *resource10;
    /* 0x14 */ ScriptResource *resource14;
    /* 0x18 */ void *resource18;
    /* 0x1C */ void *resource1C;
    /* 0x20 */ ScriptResource *resource20;
    /* 0x24 */ void *resource24;
} SceneResources;

extern SceneResources *g_callbackWork;

int jobStop(void *context, int arg);
int FUN_001695a0(void);
void asdMemFree(void *memory);
void scrScriptProcessDestroy(ScriptResource *resource);
int dataTableFree(int arg);
void asdOperatorDelete(void *memory);
int btlTalkBustUpDestroy(void);

/* Releases every resource held by the global scene resources and frees the structure. */
void callbackSceneDestroyResources(void)
{
    SceneResources *res = g_callbackWork;

    if (res->resource20 != NULL) {
        scrScriptProcessDestroy(res->resource20);
        res->resource20 = NULL;
    }
    if (res->resource24 != NULL) {
        asdMemFree(res->resource24);
        res->resource24 = NULL;
    }
    btlTalkBustUpDestroy();
    if (res->resource14 != NULL) {
        scrScriptProcessDestroy(res->resource14);
    }
    if (res->resource10 != NULL) {
        asdMemFree(res->resource10);
    }
    if (res->resource18 != NULL) {
        asdMemFree(res->resource18);
    }
    if (res->resource1C != NULL) {
        asdMemFree(res->resource1C);
    }
    FUN_001695a0();
    dataTableFree(0x3e);
    dataTableFree(0x25);
    dataTableFree(0x14);
    jobStop(res->context, 0);
    if (g_callbackWork != NULL) {
        asdOperatorDelete(g_callbackWork);
        g_callbackWork = NULL;
    }
}

} /* extern "C" */
