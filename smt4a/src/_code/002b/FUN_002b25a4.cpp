#include "battle/btlMain.h"

struct BattleFlagCheckView {
    /* 0x00 */ u8 unk00[0xac];
    /* 0xac */ s32 unkAC;
};

extern "C" {
extern BtlMainGlobalsA g_btlMain;
bool gameFlagIsSet(u32 flag);
s32 flagSelectVariant();
bool FUN_002e2b38();

bool FUN_002b25a4(void)
{
    if (gameFlagIsSet(0x4f8)) {
        return false;
    }
    switch (flagSelectVariant()) {
    case 1:
        if (!FUN_002e2b38()) {
            return false;
        }
        break;
    case 2:
        if (gameFlagIsSet(0x4db)) {
            return true;
        }
        break;
    default:
        return false;
    }
    BattleFlagCheckView *state = (BattleFlagCheckView *)g_btlMain.state;
    if (!state) {
        return false;
    }
    if (gameFlagIsSet(0x1fd)) {
        return true;
    }
    return state->unkAC == 1;
}
}
