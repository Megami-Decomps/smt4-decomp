/* NON_MATCHING: fixed missing sequence-request size argument; retail hoists constant 1 before work load and has one extra word before the literal pool. */
#include "common.h"

/* The loading task's work: its state word is at +8. */
struct LoadTask {
    u8 unk00[8];
    s32 state;
};

extern "C" {
extern u32 g_btlUiBlock;
extern u8 DAT_00446db4;
void FUN_00192884(void);
void configSettingsResetDefaults(void);
void mapSystemLoadSharedFiles(void);
void spriteTableRefAcquire(void);
void texTableLoadWithEntries(void);
void commonBgLoadSpritesOnFirstUse(void);
void FUN_001ddb40(void);
void texTableRefAcquire(void);
void battleLoadCommonResources(void);
void dataTable19ResolveVariants(void);
void FUN_00201ac8(void);
void FUN_00211d00(void);
void statusBustUpAcquire(void);
void FUN_0026f824(s32 value);
void buttonHelpAcquireResources(void);
void asdTMTexTableLoadSprites(s32 table);
void FUN_002c5620(void);
void asdSequenceRequest(u32 sequence, const void *argument, u32 size);
void FUN_002c58c8(s32 a, s32 b);
void asdTMTexTableLoadTmx(s32 table, s32 flags);
void FUN_002fc1a8(void);
void FUN_00317e78(void);
void FUN_00324a20(void);
void fileSlotsPreloadShuffled(void);
void FUN_0033f784(void);
void spriteTables14And15Load(u32 block);

/* Run one step of the boot-time resource loading sequence. Returns -1 once it is finished. */
u32 FUN_001c0404(LoadTask **task)
{
    LoadTask *work = *task;
    switch (work->state) {
    case 0:
        work->state = 1;
        break;
    case 1:
        work->state = 2;
        break;
    case 2:
        FUN_002fc1a8();
        work->state++;
        break;
    case 3:
        fileSlotsPreloadShuffled();
        work->state++;
        break;
    case 4:
        dataTable19ResolveVariants();
        FUN_0033f784();
        asdTMTexTableLoadTmx(0xC, 0);
        asdTMTexTableLoadTmx(0x18, 0);
        asdTMTexTableLoadTmx(2, 0);
        asdTMTexTableLoadTmx(3, 0);
        asdTMTexTableLoadTmx(4, 0);
        asdTMTexTableLoadTmx(0x1F, 0);
        asdTMTexTableLoadTmx(0x20, 0);
        asdTMTexTableLoadTmx(0x26, 0);
        asdTMTexTableLoadSprites(0x32);
        asdTMTexTableLoadSprites(0x28);
        asdTMTexTableLoadTmx(0x16, 0);
        work->state++;
        break;
    case 5:
        FUN_002c58c8(5, 2);
        FUN_002c58c8(5, 3);
        commonBgLoadSpritesOnFirstUse();
        work->state++;
        break;
    case 6:
        texTableLoadWithEntries();
        work->state++;
        break;
    case 7:
        texTableRefAcquire();
        FUN_00211d00();
        work->state++;
        break;
    case 8:
        buttonHelpAcquireResources();
        FUN_00192884();
        FUN_00201ac8();
        spriteTableRefAcquire();
        statusBustUpAcquire();
        FUN_001ddb40();
        spriteTables14And15Load(g_btlUiBlock);
        FUN_00317e78();
        work->state++;
        break;
    case 9:
        FUN_00324a20();
        work->state++;
        break;
    case 10:
        battleLoadCommonResources();
        work->state++;
        break;
    case 11:
        configSettingsResetDefaults();
        FUN_0026f824(0);
        FUN_002c5620();
        mapSystemLoadSharedFiles();
        work->state++;
        break;
    case 12:
        work->state = 100;
        break;
    case 100:
        ++work->state;
        break;
    case 0x65:
        DAT_00446db4 = 1;
        asdSequenceRequest(0x16, NULL, 0);
        return 0xFFFFFFFF;
    }
    return 0;
}
}
