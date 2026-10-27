#include "battle/btlUI.h"
#include "gamedata/SaveLoadProcess.h"

extern "C" {
extern BtlUiGlobals g_btlUi;
void FUN_001e1104(BtlUiObjB *, s32 mode, s32 options, s32 firstStrike);
void FUN_00206368(BtlUiObjA *, s32 mode, s32 first, s32 second);
u16 slotFindNonnegativeRank(void *owner, u32 slot);
void communicationBeginTransition(s32 mode);
void communicationSetResultPointer(void);
void memFill8(void *output, u32 value);
void FUN_002ad8a8(BtlUiObjC *, const BtlUiSettings *settings);
void FUN_002dc464(BtlUiObjC *);
void FUN_002e439c(BtlUiObjC *);

// Open the battle UI and prepare slot ranks, optionally announcing an enemy first strike.
void FUN_003ae134(void *, s32 mode, u8 first, u8 second, s32 firstStrike, s32 options)
{
    union OpeningView {
        BtlUi base;
        struct {
            u8 unk0000[0x7e38];
            s32 state;
            s32 mode;
            u32 unk7e40;
            u32 counter;
            u8 unk7e48[0x55];
            s8 first;
            s8 second;
        } opening;
        struct {
            u8 unk0000[0xc9d8];
            u8 active;
            u8 unkc9d9[3];
            u32 duration;
            u32 frame;
        } notice;
    };
    // Local overlays avoid changing opaque storage used by other battle UI panels.
    OpeningView *ui = reinterpret_cast<OpeningView *>(g_btlUi.ui);
    ui->opening.state = 1;
    ui->opening.counter = 0;
    ui->opening.mode = mode;
    ui->opening.first = first;
    ui->opening.second = second;
    FUN_001e1104(&ui->base.objB, mode, options, mode == 0 ? 0 : firstStrike);
    FUN_00206368(&ui->base.objA, ui->opening.mode, ui->opening.first, ui->opening.second);
    if (mode == 1 && firstStrike) {
        ui->notice.active = 1;
        ui->notice.duration = 40;
        ui->notice.frame = 0;
        comWinSetText("The enemy strikes first!");
        communicationSetResultPointer();
        communicationBeginTransition(0);
    }
    if (options != 0 || mode != 0) {
        BtlUi *current = g_btlUi.ui;
        memFill8(&current->settings, ~0u);
        current->settings.slotRanks[0] = slotFindNonnegativeRank(current->owner, 0);
        current->settings.slotRanks[1] = slotFindNonnegativeRank(current->owner, 1);
        current->settings.slotRanks[2] = slotFindNonnegativeRank(current->owner, 2);
        current->settings.slotRanks[3] = slotFindNonnegativeRank(current->owner, 3);
        FUN_002ad8a8(&current->objC, &current->settings);
        if (mode != 0)
            FUN_002dc464(&ui->base.objC);
        else
            FUN_002e439c(&ui->base.objC);
    }
}
}
