#include "common.h"
#include "classes/Obj422448.h"

extern "C" {

typedef struct ItemEntry {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 itemId;
    /* 0x06 */ u8 unk06[6];
    /* 0x0C */ s32 amount;
    /* 0x10 */ u8 unk10[0x10];
} ItemEntry;                          /* 0x20 bytes */

typedef struct ItemMenu {
    /* 0x000 */ u8 unk000[0x14];
    /* 0x014 */ s32 state;
    /* 0x018 */ s32 step;
    /* 0x01C */ u8 unk01C[4];
    /* 0x020 */ u8 selector[0x588];
    /* 0x5A8 */ ItemEntry entries[1];
} ItemMenu;

extern int messageMainSetTargetFlags(int arg);
extern int playerSkillInsertFirstFree(u16 itemId);
extern int partyMoneyAddForward(int amount);
extern int gameCounterAddSaturating(int kind, int amount);
extern int flaggedValueHolderGetTotal(void *selector);
extern int messageMainTargetIsClear(void);
extern int sys43e188GetState(void);

/* Takes the selected entry's item from the menu: when ready, plays the take sequence with its amount and moves to state 3. */
}

void Obj422448::itemMenuTakeSelected()
{
    ItemMenu * menu = reinterpret_cast<ItemMenu *>(this);
    ItemEntry *entries;
    int amount;

    if (sys43e188GetState() != 0 && messageMainTargetIsClear() == 1) {
        messageMainSetTargetFlags(0);
        entries = menu->entries;
        playerSkillInsertFirstFree(entries[flaggedValueHolderGetTotal(menu->selector)].itemId);
        amount = menu->entries[flaggedValueHolderGetTotal(menu->selector)].amount;
        partyMoneyAddForward(-amount);
        gameCounterAddSaturating(1, amount);
        menu->state = 3;
        menu->step = 0;
    }
}
