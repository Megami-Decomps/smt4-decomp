#include "title/titleMain.h"

extern "C" {

void FUN_00152bec(AsdMdlObject *model);
void FUN_00263588(u32 arg);
void FUN_00275be8(s32 arg);
void FUN_002917b8(void);
void FUN_0029c2cc(u32 arg, s32 flag);
void FUN_002a46d8(s32 arg);
void FUN_002a4d14(void);
void FUN_002a72c0(s32 arg);
void asdMdlManagerDestroy(AsdMdlObject *model);
void asdMemFree(void *block);
void FUN_00310098(void);

extern TitleMain *g_titleMain;

/* Destroy callback of the title job: lets go of its resources, marks the block to be freed and
 * frees it. */
void titleMainDestroy(void)
{
    TitleMain **slot = &g_titleMain;
    TitleMain *title = *slot;

    title->freeOnEnd = 1;
    FUN_002a46d8(0x3A);
    FUN_00310098();
    FUN_00152bec(title->modelA);
    asdMdlManagerDestroy(title->modelA);
    title->modelA = NULL;
    FUN_00152bec(title->modelB);
    asdMdlManagerDestroy(title->modelB);
    title->modelB = NULL;
    if (title->unk85 != 0) {
        FUN_002a72c0(0);
        FUN_0029c2cc(title->unk88, 0);
    }
    FUN_00263588(title->unk88);
    title->unk88 = 0;
    FUN_002a4d14();
    FUN_00275be8(0);
    FUN_002917b8();
    if (*slot != NULL) {
        asdMemFree(*slot);
        *slot = NULL;
    }
}

} /* extern "C" */
