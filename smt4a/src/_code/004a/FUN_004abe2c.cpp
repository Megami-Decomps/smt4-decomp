/* NON_MATCHING: selector activation and party IDs restored; recovered settings subobject produces different addressing and register allocation. */
#include "battle/btlUI.h"

extern "C" {
extern BtlUiGlobalsA g_btlUi;
void eventPanelSelectSpritePreset(BtlUiObjBA *panel, s32 mode, s32 selection, s32 animate, s32 enabled);
void FUN_002cd118(BtlUiObjAA *panel, s32 mode, s32 first, s32 second);
void FUN_00227af0(const char *message);
void menuStateReset();
void menuStateStartSelect(s32 selection);
void fillTwoWordsWithByte(void *destination, u32 value);
u16 uiFindValidIdOrdinal(u32 owner, u32 ordinal);
void FUN_001a9104(BtlUiObjCA *panel, u16 *ids);
void menu32Advance(BtlUiObjCA *panel);
void uiMenuActivateAndCountEntries(BtlUiObjCA *panel);

// Activate battle selection widgets and populate their four valid party-entry identifiers.
void FUN_004abe2c(BtlUiA *unused, s32 mode, s8 first, s8 second, s32 animate, s32 selection)
{
    struct SelectionSettings {
        s32 state;
        s32 mode;
        u32 unk08;
        u32 pending;
        u8 padding[0x55];
        s8 first;
        s8 second;
    };
    struct AmbushMessageState {
        u8 enabled;
        u8 padding[3];
        s32 frames;
        s32 elapsed;
    };
    BtlUiA *work = g_btlUi.ui;
    SelectionSettings *settings = reinterpret_cast<SelectionSettings *>(&work->state);
    settings->state = 3;
    settings->pending = 0;
    settings->mode = mode;
    settings->first = first;
    settings->second = second;
    eventPanelSelectSpritePreset(&work->objB, mode, selection, mode == 0 ? 0 : animate, 1);
    FUN_002cd118(&work->objA, settings->mode, settings->first, settings->second);
    if (mode == 1 && animate != 0) {
        AmbushMessageState *message = reinterpret_cast<AmbushMessageState *>(&work->objD.unk[0x4B18]);
        message->frames = 40;
        message->elapsed = 0;
        message->enabled = 1;
        // Full-width Shift-JIS: "The enemy strikes first!"
        FUN_00227af0("\x82\x73\x82\x88\x82\x85\x81\x40\x82\x85\x82\x8e\x82\x85\x82\x8d\x82\x99\x81\x40\x82\x93\x82\x94\x82\x92\x82\x89\x82\x8b\x82\x85\x82\x93\x81\x40\x82\x86\x82\x89\x82\x92\x82\x93\x82\x94\x81\x49");
        menuStateReset();
        menuStateStartSelect(0);
    }
    if (selection == 0 && mode == 0)
        return;
    BtlUiA *current = g_btlUi.ui;
    fillTwoWordsWithByte(current->ids, 0xFFFFFFFF);
    current->ids[0] = uiFindValidIdOrdinal(current->owner, 0);
    current->ids[1] = uiFindValidIdOrdinal(current->owner, 1);
    current->ids[2] = uiFindValidIdOrdinal(current->owner, 2);
    current->ids[3] = uiFindValidIdOrdinal(current->owner, 3);
    FUN_001a9104(&current->objC, current->ids);
    if (mode != 0)
        menu32Advance(&work->objC);
    else
        uiMenuActivateAndCountEntries(&work->objC);
}
}
