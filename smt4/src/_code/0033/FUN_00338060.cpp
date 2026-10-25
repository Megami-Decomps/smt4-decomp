/* NON_MATCHING: global loads move later and signed halfword loads fold to unsigned before narrowing. */
#include "battle/btlUI.h"
#include "shard/FUN_003ae120.h"

struct BattleUiChangeOwner {
    /* 0x0000 */ u8 unk0000[0x4968];
    /* 0x4968 */ s16 unk4968;
    /* 0x496a */ u16 unk496a;
    /* 0x496c */ u16 unk496c;
    /* 0x496e */ u16 unk496e;
};
struct BattleUiChangeView {
    /* 0x0000 */ u8 unk0000[0x2194];
    /* 0x2194 */ s16 unk2194;
    /* 0x2196 */ s16 unk2196;
};

extern "C" {
extern BtlUi *g_btlUiBlock;
void FUN_003aea90(BtlUi *ui, s8 first, s8 second);

void FUN_00338060(BattleUiChangeOwner *owner, s32 mode)
{
    s16 difference = (s16)(owner->unk496a - owner->unk4968);
    s16 end = owner->unk4968;
    if (difference > 0) {
        end = (s16)(end + difference);
    }
    BattleUiChangeView *ui = (BattleUiChangeView *)g_btlUiBlock;
    s16 first = (s16)(end - ui->unk2194);
    s16 second = (s16)(difference - ui->unk2196);
    switch (mode) {
    case 0:
        FUN_003ae120(g_btlUiBlock, (s8)first, (s8)second);
        break;
    case 1:
        FUN_003aea90(g_btlUiBlock, (s8)first, (s8)second);
        break;
    }
    owner->unk496c = owner->unk4968;
    owner->unk496e = owner->unk496a;
}
}
