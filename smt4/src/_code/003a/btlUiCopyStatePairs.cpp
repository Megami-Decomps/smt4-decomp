/* NON_MATCHING: retail uses different loop scheduling, comparison branching or packed parameter grouping. */
#include "common.h"
struct ValuePair { u32 first, second; };
struct BattleUiSnapshot {
    /* 0x0000 */ u8 unk00[0x7e28];
    /* 0x7e28 */ ValuePair first;
    /* 0x7e30 */ ValuePair second;
    /* 0x7e38 */ u8 unk7e38[17];
    /* 0x7e49 */ u8 flag;
};
struct BattleUiGlobals { u8 unk00[32]; BattleUiSnapshot *ui; };
extern "C" BattleUiGlobals g_btlUi;
/* Copies the battle UI's flag and both value pairs to the caller. */
extern "C" void btlUiCopyStatePairs(u32 unused, u8 *flag, ValuePair *first, ValuePair *second)
{
    BattleUiSnapshot *ui = g_btlUi.ui;
    *flag = ui->flag;
    *first = ui->first;
    *second = ui->second;
}
