#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "code/Code0019.h"
#include "gamedata/PartyPick.h"
#include "event/2dEvent/EventEffect.h"
extern "C" {
void FUN_003f1b3c(BtlMainStateA *state, u32 message, s32 kind, u32 *text, u32 *color);
void FUN_0047f4cc(u32 color, f32 red, f32 green, f32 blue);
void uiNavigatorStart(u32 category, s32 first, s32 second, s32 third, s32 fourth);

// Pick a party member for the navigator and show the corresponding battle message.
void FUN_00412488(void)
{
    u16 selected = partyPickRandomId();
    BtlMainStateExtA *state = btlGetMainStateExt();
    u32 message = unitMapIdToCategory(selected, 1);
    u32 text, color;
    FUN_003f1b3c(state, message, 3, &text, &color);
    FUN_0047f4cc(color, 1.0f, 0.707f, 0.707f);
    infoWinSetText(reinterpret_cast<const char *>(state->infoWindow), (u16)text);
    uiNavigatorStart(selected, 1, 1, 0, 0);
}
}
