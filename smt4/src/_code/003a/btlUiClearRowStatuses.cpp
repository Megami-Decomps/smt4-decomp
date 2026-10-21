#include "common.h"

struct BattleUiStatusRow {
    u8 unk00[0xa6];
    u16 status;
    u8 unkA8[0x55c];
};
struct BattleUiStatusRows {
    u8 unk0000[0x5d00];
    BattleUiStatusRow rows[5];
};
struct BattleUiStatusOwner {
    u8 unk00[0x20];
    BattleUiStatusRows *state;
};

extern "C" {
extern BattleUiStatusOwner g_btlUi;

void btlUiClearRowStatuses()
{
    BattleUiStatusRows *state = g_btlUi.state;
    for (s32 i = 0; i < 5; ++i) {
        state->rows[i].status = 0;
    }
}
}
