#include "shard/Shard0032.h"

extern "C" {

#include "shard/Shard0031.h"
extern OverlayRef g_campCec;
extern void messageSetMode(u8 value);
extern void asdMemFree(void *ptr);
extern void scrScriptProcessDestroy(u32 process);
extern void jobStop(u32 job, u16 arg);
extern u8 gameDataTestFlags(u8 value);
extern s32 FUN_002a469c(void);
extern void FUN_0032e25c(void *block, s32 value);
extern void cecProcessCall2(void);
extern u32 cecProcessForward(void *block);
extern u32 *rt_aeabi_memclr(void *block, u32 size);
extern MarkEntry *gameDataGetMarkEntry(u32 index);
extern void cecProcessDestroy(void);
extern u32 dataTableFree(u32 id);
extern void btlTalkBustUpDestroy(void);
extern void asdTMTexTableReleaseNode(s32 a, s32 b);
extern void asdTMTexTableFreeEntry(s32 index);
extern void statusSceneDestroy(StatusScene *scene);
extern u8 *FUN_0039a17c(u32 handle);
extern void soundChannelStopAll(s32 value);
extern void bgmFadeOut(u32 value);

/* Tears down the status screen. With `leaving` set to 0 it also runs the final switch. */
void FUN_0032d388(s32 leaving)
{
    OverlayObj *overlay = g_campCec.instance;
    s32 i;
    MarkEntry *entry;

    messageSetMode(1);
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
        g_campCec.instance = NULL;
    } else {
        if (overlay->unk16C != 0 && gameDataTestFlags(0x20) != 0) {
            if (FUN_002a469c() == 0) {
                FUN_0032e25c(g_campCec.instance->block40, 0);
            }
            cecProcessCall2();
            cecProcessForward(g_campCec.instance->block40);
            if (FUN_002a469c() == 0) {
                rt_aeabi_memclr(g_campCec.instance->block90, 0x14);
            }
        }
        for (i = 0; i < 0x20; i++) {
            entry = gameDataGetMarkEntry(i);
            if ((entry->flags & 0x10) != 0) {
                entry->flags &= ~0x10;
            }
        }
        cecProcessDestroy();
        dataTableFree(0x25);
        btlTalkBustUpDestroy();
        if (overlay->buffer0 != NULL) {
            asdMemFree(overlay->buffer0);
        }
        if (overlay->buffer1 != NULL) {
            asdMemFree(overlay->buffer1);
        }
        dataTableFree(0x4A);
        if (overlay->scriptProcess != 0) {
            scrScriptProcessDestroy(overlay->scriptProcess);
        }
        asdTMTexTableReleaseNode(0x2E, 0);
        asdTMTexTableFreeEntry(0x2E);
        statusSceneDestroy(&g_campCec.instance->scene);
        FUN_0039a17c(overlay->unk174);
        jobStop(overlay->job, 0);
        asdMemFree(overlay);
        g_campCec.instance = NULL;
        if (leaving == 0) {
            soundChannelStopAll(0xF);
            bgmFadeOut(0x2D);
        }
    }
}

} /* extern "C" */
