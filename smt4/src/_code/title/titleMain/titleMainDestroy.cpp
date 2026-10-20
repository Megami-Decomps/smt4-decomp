#include "title/titleMain.h"

extern "C" {

void asdMdlManagerMarkDestroy(AsdMdlObject *model);
void gfxObjectDestroy(u32 arg);
void FUN_00275be8(s32 arg);
void buttonHelpRelease(void);
void FUN_0029c2cc(u32 arg, s32 flag);
void fileSlotFree(s32 arg);
void asdWorkAreaReset(void);
void asdModelSlotRelease(s32 arg);
void asdMdlManagerDestroy(AsdMdlObject *model);
void asdMemFree(void *block);
void titleTexTableFreeEntries(void);

extern TitleMain *g_titleMain;

/* Destroy callback of the title job: lets go of its resources, marks the block to be freed and
 * frees it. */
void titleMainDestroy(void)
{
    TitleMain **slot = &g_titleMain;
    TitleMain *title = *slot;

    title->freeOnEnd = 1;
    fileSlotFree(0x3A);
    titleTexTableFreeEntries();
    asdMdlManagerMarkDestroy(title->modelA);
    asdMdlManagerDestroy(title->modelA);
    title->modelA = NULL;
    asdMdlManagerMarkDestroy(title->modelB);
    asdMdlManagerDestroy(title->modelB);
    title->modelB = NULL;
    if (title->unk85 != 0) {
        asdModelSlotRelease(0);
        FUN_0029c2cc(title->unk88, 0);
    }
    gfxObjectDestroy(title->unk88);
    title->unk88 = 0;
    asdWorkAreaReset();
    FUN_00275be8(0);
    buttonHelpRelease();
    if (*slot != NULL) {
        asdMemFree(*slot);
        *slot = NULL;
    }
}

} /* extern "C" */
