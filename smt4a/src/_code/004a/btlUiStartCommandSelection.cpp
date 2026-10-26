/* NON_MATCHING: mode/cursor address hoisting, stacked-boolean lifetimes and warning-state store batching differ; candidate -O2. */
#include "battle/btlUI.h"

struct EventPanelPresetWork;
struct Menu32;
struct MenuState;
struct BattleCommandModeView {
    s32 mode;
    u8 unk04[4];
    u32 counter;
};
struct BattleCommandCursorView {
    u8 unk00;
    s8 first;
    s8 second;
};
struct BattleCommandWarningView {
    u8 unk0000[0xc040];
    u8 active;
    u8 unkc041[3];
    s32 state;
    u32 counter;
};
extern "C" {
extern BtlUiGlobalsA g_btlUi;
void eventPanelSelectSpritePreset(EventPanelPresetWork *, s32 mode, s32 optionB, s32 optionA, s32 animated);
void FUN_002cd118(BtlUiObjAA *, s32 mode, s16 first, s16 second);
void FUN_00227af0(const char *message);
void menuStateReset();
void menuStateStartSelect(u8 selection);
void fillTwoWordsWithByte(u16 *ids, s32 value);
u16 uiFindValidIdOrdinal(u32 owner, s32 index);
void FUN_001a9104(BtlUiObjCA *menu, u16 *ids);
void menu32Advance(Menu32 *menu);
void uiMenuActivateAndCountEntries(MenuState *menu);

void btlUiStartCommandSelection(u32 unusedContext, s32 mode, s8 first, s8 second,
                  s32 enemyFirst, s32 activate)
{
    BtlUiA *ui = g_btlUi.ui;
    BattleCommandModeView *command = (BattleCommandModeView *)ui->unk74A4;
    BattleCommandCursorView *cursor = (BattleCommandCursorView *)ui->unk7504;
    ui->state = 1;
    command->counter = 0;
    command->mode = mode;
    cursor->first = first;
    cursor->second = second;
    eventPanelSelectSpritePreset((EventPanelPresetWork *)&ui->objB, mode, activate,
                  mode == 0 ? false : enemyFirst, 0);
    FUN_002cd118(&ui->objA, command->mode, cursor->first, cursor->second);
    if (mode == 1 && enemyFirst) {
        BattleCommandWarningView *warning = (BattleCommandWarningView *)ui;
        warning->state = 40;
        warning->counter = 0;
        warning->active = 1;
        // "The enemy strikes first!" in full-width Shift-JIS.
        FUN_00227af0("\x82\x73\x82\x88\x82\x85\x81\x40"
                      "\x82\x85\x82\x8e\x82\x85\x82\x8d\x82\x99\x81\x40"
                      "\x82\x93\x82\x94\x82\x92\x82\x89\x82\x8b\x82\x85\x82\x93\x81\x40"
                      "\x82\x86\x82\x89\x82\x92\x82\x93\x82\x94\x81\x49");
        menuStateReset();
        menuStateStartSelect(0);
    }
    if (mode == 0 && !activate) {
        return;
    }
    BtlUiA *current = g_btlUi.ui;
    fillTwoWordsWithByte(current->ids, -1);
    current->ids[0] = uiFindValidIdOrdinal(current->owner, 0);
    current->ids[1] = uiFindValidIdOrdinal(current->owner, 1);
    current->ids[2] = uiFindValidIdOrdinal(current->owner, 2);
    current->ids[3] = uiFindValidIdOrdinal(current->owner, 3);
    FUN_001a9104(&current->objC, current->ids);
    if (mode != 0) {
        menu32Advance((Menu32 *)&ui->objC);
        return;
    }
    uiMenuActivateAndCountEntries((MenuState *)&ui->objC);
}
}
