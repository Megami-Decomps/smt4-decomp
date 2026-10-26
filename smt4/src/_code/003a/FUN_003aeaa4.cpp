/* NON_MATCHING: frame (push {r4,lr}; sub 48) matches; retail computes the UI object pointer first and keeps it in r0 while the command is assembled (ldr before the push), the build holds it in r4 and loads it after the command stores. */
#include "battle/btlUI.h"

struct UiPosition {
    f32 x, y, z;
};
struct BattleUiCommand {
    u16 kind; // 0x00
    u16 first; // 0x02
    u16 second; // 0x04
    u16 third; // 0x06
    UiPosition position; // 0x08
    u32 value; // 0x14
    u8 unk18[0x18];
};

extern "C" {
extern BtlUiGlobals g_btlUi;
u32 FUN_002d00a4(BtlUiObjC *, const BattleUiCommand *);

// Queue a battle-UI command with its position and four halfword parameters.
void FUN_003aeaa4(u32, u16 kind, u32 value, u16 first, u16 second, u16 third,
                  UiPosition position)
{
    BtlUiObjC *ui = &g_btlUi.ui->objC;
    BattleUiCommand command;
    command.kind = kind;
    command.first = first;
    command.second = second;
    command.third = third;
    command.position = position;
    command.value = value;
    FUN_002d00a4(ui, &command);
}
}
