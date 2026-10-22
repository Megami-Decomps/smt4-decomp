#include "common.h"

extern "C" {

typedef struct SlotTable {
    /* 0x0 */ s32 money;
} SlotTable;

#define MONEY_MAX 999999999

extern SlotTable *gameGetSlotTable(void);
extern void gameCounterAddSaturating(s32 kind, s32 amount);

/* Adds `amount` to the player's money (reporting gains through gameCounterAddSaturating) and clamps it to 0..999999999. */
void gameMoneyAdd(s32 amount)
{
    SlotTable *table = gameGetSlotTable();

    table->money += amount;
    if (amount > 0) {
        gameCounterAddSaturating(0, amount);
    }
    if (table->money < 0) {
        table->money = 0;
    }
    if (table->money > MONEY_MAX) {
        table->money = MONEY_MAX;
    }
}

} /* extern "C" */
