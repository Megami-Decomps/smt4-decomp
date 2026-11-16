#ifndef BATTLE_BTLUIOPENING_H
#define BATTLE_BTLUIOPENING_H

#include "battle/btlUI.h"

/* Apocalypse battle UI fields set when a command selection opens. Local overlays of BtlUiA avoid
 * changing opaque storage used by other battle UI panels. */
union BtlUiOpeningView {
    BtlUiA base;
    struct {
        u8 unk0000[0x74A0];
        /* 0x74A0 */ s32 state;
        /* 0x74A4 */ s32 mode;
        /* 0x74A8 */ u32 unk74A8;
        /* 0x74AC */ u32 counter;
        u8 unk74B0[0x55];
        /* 0x7505 */ s8 first;
        /* 0x7506 */ s8 second;
    } opening;
    struct {
        u8 unk0000[0xC040];
        /* 0xC040 */ u8 active;
        u8 unkC041[3];
        /* 0xC044 */ u32 duration;
        /* 0xC048 */ u32 frame;
    } notice;
};

/* Callees of the command-selection openers (btlUiStartCommandSelection, FUN_004abe2c). */
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
}

#endif
