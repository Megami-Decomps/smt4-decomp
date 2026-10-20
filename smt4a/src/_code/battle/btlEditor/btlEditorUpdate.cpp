#include "common.h"

extern "C" {

extern void *g_btlEditor;

extern u32 jobGetWork(void);
extern s32 FUN_004f4938(void *editor, u32 work);

/* Runs the battle editor's step for the current job work; 0 when no editor exists. */
s32 btlEditorUpdate(void)
{
    u32 work = jobGetWork();

    if (g_btlEditor == NULL) {
        return 0;
    }
    return FUN_004f4938(g_btlEditor, work);
}

} /* extern "C" */
