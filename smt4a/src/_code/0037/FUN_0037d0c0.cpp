#include "common.h"

extern "C" {

int eventTexSetCurrent(void);
int eventInsertSortedTextureJob(u32 obj);
u32 npc2dCreatePortraitCenterJob(u32 obj);
u32 scrGetArg(void);
int eventTexHasEmptySlot(void);

/* Script command: if eventTexHasEmptySlot reports success, runs npc2dCreatePortraitCenterJob on the object from scrGetArg, then eventTexSetCurrent and eventInsertSortedTextureJob. */
u32 FUN_0037d0c0(void)
{
    u32 obj = scrGetArg();

    if (eventTexHasEmptySlot() != 0) {
        obj = npc2dCreatePortraitCenterJob(obj);
        eventTexSetCurrent();
        eventInsertSortedTextureJob(obj);
    }
    return 1;
}

} /* extern "C" */
