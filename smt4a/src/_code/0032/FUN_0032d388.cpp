#include "shard/Shard0032.h"

extern "C" {

#include "shard/Shard0031.h"
extern OverlayRef DAT_0057f110;
extern void FUN_0019ea64(u8 value);
extern void asdMemFree(void *ptr);
extern void scrScriptProcessDestroy(u32 process);
extern void jobStop(u32 job, u16 arg);
extern u8 FUN_00345388(u8 value);
extern s32 FUN_002a469c(void);
extern void FUN_0032e25c(void *block, s32 value);
extern void cecProcessCall2(void);
extern u32 FUN_002c0b5c(void *block);
extern u32 *FUN_002e6dd0(void *block, u32 size);
extern MarkEntry *FUN_00330a80(u32 index);
extern void FUN_00237680(void);
extern u32 FUN_001add24(u32 id);
extern void FUN_00321744(void);
extern void FUN_0019a7f4(s32 a, s32 b);
extern void asdTMTexTableFreeEntry(s32 index);
extern void statusSceneDestroy(StatusScene *scene);
extern u8 *FUN_0039a17c(u32 handle);
extern void FUN_003d2d6c(s32 value);
extern void FUN_0021c354(u32 value);

/* Tears down the status screen. With `leaving` set to 0 it also runs the final switch. */
void FUN_0032d388(s32 leaving)
{
    OverlayObj *overlay = DAT_0057f110.instance;
    s32 i;
    MarkEntry *entry;

    FUN_0019ea64(1);
    if (overlay->unk168 != 0) {
        if (overlay->buffer0 != NULL) {
            asdMemFree(overlay->buffer0);
        }
        if (overlay->buffer1 != NULL) {
            asdMemFree(overlay->buffer1);
        }
        if (overlay->scriptProcess != 0) {
            scrScriptProcessDestroy(overlay->scriptProcess);
        }
        jobStop(overlay->job, 0);
        asdMemFree(overlay);
        DAT_0057f110.instance = NULL;
    } else {
        if (overlay->unk16C != 0 && FUN_00345388(0x20) != 0) {
            if (FUN_002a469c() == 0) {
                FUN_0032e25c(DAT_0057f110.instance->block40, 0);
            }
            cecProcessCall2();
            FUN_002c0b5c(DAT_0057f110.instance->block40);
            if (FUN_002a469c() == 0) {
                FUN_002e6dd0(DAT_0057f110.instance->block90, 0x14);
            }
        }
        for (i = 0; i < 0x20; i++) {
            entry = FUN_00330a80(i);
            if ((entry->flags & 0x10) != 0) {
                entry->flags &= ~0x10;
            }
        }
        FUN_00237680();
        FUN_001add24(0x25);
        FUN_00321744();
        if (overlay->buffer0 != NULL) {
            asdMemFree(overlay->buffer0);
        }
        if (overlay->buffer1 != NULL) {
            asdMemFree(overlay->buffer1);
        }
        FUN_001add24(0x4A);
        if (overlay->scriptProcess != 0) {
            scrScriptProcessDestroy(overlay->scriptProcess);
        }
        FUN_0019a7f4(0x2E, 0);
        asdTMTexTableFreeEntry(0x2E);
        statusSceneDestroy(&DAT_0057f110.instance->scene);
        FUN_0039a17c(overlay->unk174);
        jobStop(overlay->job, 0);
        asdMemFree(overlay);
        DAT_0057f110.instance = NULL;
        if (leaving == 0) {
            FUN_003d2d6c(0xF);
            FUN_0021c354(0x2D);
        }
    }
}

} /* extern "C" */
