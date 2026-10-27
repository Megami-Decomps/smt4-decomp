/* NON_MATCHING: ui pointer load and frame now match retail; only the address of command.position (`add lr, sp, #8`) is computed after the kind store here and before it in retail. */
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
u32 FUN_003aeaa4(u32, u16 kind, u32 value, s16 first, s16 second, u16 third,
                  UiPosition position)
{
    BtlUi *ui = g_btlUi.ui;
    BattleUiCommand command;
    command.kind = kind;
    command.position = position;
    command.value = value;
    command.second = second;
    command.first = first;
    command.third = third;
    return FUN_002d00a4(&ui->objC, &command);
}
}
