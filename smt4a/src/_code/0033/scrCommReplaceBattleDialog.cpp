#include "battle/btlMain.h"

struct BattleDialogFlagsView {
    u8 unk0000[0x45a0]; // 0x0000
    u64 flags;          // 0x45a0
};

extern "C" {
extern u64 DAT_00570de8;
BtlMainStateA* btlGetMainState();
void btlHelpFreeEntries();
s32 dialogIsActive();
void dialogClose(s32 immediate);
const char* scrGetArgString(u32 index);
void FUN_004c8894(const char* text, s32 mode);

// Set the dialog flags, replace any active dialog, and display the script string.
u32 scrCommReplaceBattleDialog()
{
    BattleDialogFlagsView* state = (BattleDialogFlagsView*)btlGetMainState();
    state->flags |= DAT_00570de8;
    btlHelpFreeEntries();
    if (dialogIsActive()) {
        dialogClose(1);
    }
    FUN_004c8894(scrGetArgString(0), 1);
    return 1;
}
}
