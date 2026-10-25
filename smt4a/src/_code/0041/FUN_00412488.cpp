/* NON_MATCHING: selected navigator and battle-state pointers take swapped r4/r5 registers. */
#include "battle/btlMain.h"
#include "gamedata/UnitStatInitialization.h"
#include "util/CalleeContracts.h"
#include "event/2dEvent/EventEffect.h"
extern "C" {
InitializedUnitStatsA *FUN_003e4d68(u32 slot);
s32 FUN_00187168(InitializedUnitStatsA *unit);
InitializedUnitStatsA *saveSlotFindSelected(void);
u32 lcgRandomRange(u32 maximum);
BtlMainStateA *btlGetMainState(void);
void FUN_003f1b3c(BtlMainStateA *state, u32 message, s32 kind, u32 *text, u32 *color);
void FUN_0047f4cc(u32 color, f32 red, f32 green, f32 blue);
void uiNavigatorStart(u32 category, s32 first, s32 second, s32 third, s32 fourth);

// Pick a party member for the navigator and show the corresponding battle message.
void FUN_00412488(void)
{
    u16 selected;
    {
        u16 candidates[12] = {0};
        s32 count = 0;
        for (s32 slot = 0; slot < 12; ++slot) {
            InitializedUnitStatsA *unit = FUN_003e4d68((u16)slot);
            if (FUN_00187168(unit))
                candidates[count++] = unit->categoryId;
        }
        if (count == 0) {
            InitializedUnitStatsA *fallback = saveSlotFindSelected();
            if (fallback != NULL) {
                candidates[0] = fallback->categoryId;
                count = 1;
            }
        }
        if (count != 0)
            selected = candidates[lcgRandomRange((u16)(count - 1))];
        else
            selected = 0;
    }
    BtlMainStateA *state = btlGetMainState();
    u32 message = FUN_0019acdc(selected, 1);
    u32 text, color;
    FUN_003f1b3c(state, message, 3, &text, &color);
    FUN_0047f4cc(color, 1.0f, 0.707f, 0.707f);
    // The information-window handle follows the shared battle-state extent.
    struct BattleInfoWindowView { u8 prefix[0x4D64]; u32 window; };
    typedef char BattleInfoWindowOffset[offsetof(BattleInfoWindowView, window) == 0x4D64 ? 1 : -1];
    infoWinSetText(reinterpret_cast<const char *>(((BattleInfoWindowView *)state)->window), (u16)text);
    uiNavigatorStart(selected, 1, 1, 0, 0);
}
}
