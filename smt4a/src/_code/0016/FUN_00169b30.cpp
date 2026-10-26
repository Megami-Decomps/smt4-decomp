/* NON_MATCHING: near: same logic, 153 rows against 151; retail interleaves the four total sums with the slot lookup (ldm of three counters), keeps the old follow-up on the stack and the table copy at sp+24, so scheduling/frame size differ. */
#include "common.h"
#include "sys/RuntimeObjects.h"

#define CARD_PLAYER_COUNT 24
#define CARD_SLOT_COUNT 4
#define CARD_COUNTER_COUNT 6

/* One slot's usage counters: [0..2] count how many players hold each kind of pick, [3..5] each kind of
 * follow-up. */
struct CardSlot {
    s32 counter[CARD_COUNTER_COUNT];
};

/* What a player's card shows (the 0x14-byte record the UI reads). */
struct CardRecord {
    s32 value;
    s32 first;
    s32 second;
    f32 progress;
    s32 reserved;
};

/* The card-assignment table (observed fields), at +0x1078 of the owning object. */
struct CardTable {
    /* 0x000 */ s32 pick[CARD_PLAYER_COUNT];
    /* 0x060 */ s32 pickValue[CARD_PLAYER_COUNT];
    /* 0x0C0 */ s32 followUp[CARD_PLAYER_COUNT];
    /* 0x120 */ CardSlot slot[CARD_SLOT_COUNT];
    /* 0x180 */ CardRecord record[CARD_PLAYER_COUNT];
    /* 0x360 */ s32 firstArgA;
    /* 0x364 */ s32 firstArgB;
    /* 0x368 */ s32 secondArgA;
    /* 0x36C */ s32 secondArgB;
    /* 0x370 */ s32 totalLimit1;
    /* 0x374 */ s32 totalLimit2;
    /* 0x378 */ s32 slotLimit1;
    /* 0x37C */ s32 slotLimit2;
    /* 0x380 */ s32 value0;
    /* 0x384 */ s32 value1;
    /* 0x388 */ s32 randomLow;
    /* 0x38C */ s32 randomHigh;
    /* 0x390 */ s32 unk390;
    /* 0x394 */ s32 value1Held;
    /* 0x398 */ s32 value2Held;
};

struct CardOwner {
    /* 0x0000 */ u8 unk0000[0x1078];
    /* 0x1078 */ CardTable table;
};

extern "C" {

extern const s32 DAT_00530e50[CARD_PLAYER_COUNT];

void __aeabi_memcpy4(void *destination, const void *source, u32 bytes);
s32 randBetween(s32 first, s32 second);

/* Sum of one counter over every slot. */
static __inline s32 cardCounterTotal(const CardTable *table, s32 counter)
{
    s32 total = 0;
    s32 i;

    for (i = 0; i < CARD_SLOT_COUNT; i++) {
        total += table->slot[i].counter[counter];
    }
    return total;
}

/* Reassigns player `player`'s pick and follow-up: it moves to the first pick whose slot and overall
 * counters are under their limits, then to the first under-limit follow-up, updating the counters and
 * the card record. */
void FUN_00169b30(CardOwner *owner, s32 player)
{
    CardTable *table = &owner->table;
    s32 slotOrder[CARD_PLAYER_COUNT];
    CardSlot *slot;
    CardRecord *record;
    s32 oldPick;
    s32 oldFollowUp;
    s32 pickValue;
    s32 followUp;
    s32 total1;
    s32 total2;
    s32 total3;
    s32 total5;

    __aeabi_memcpy4(slotOrder, DAT_00530e50, sizeof(slotOrder));
    oldFollowUp = table->followUp[player];
    oldPick = table->pick[player];
    total2 = cardCounterTotal(table, 2);
    total5 = cardCounterTotal(table, 5);
    total1 = cardCounterTotal(table, 1);
    total3 = cardCounterTotal(table, 3);
    slot = &table->slot[slotOrder[player]];
    if (slot->counter[1] < table->slotLimit1 && total1 < table->totalLimit1) {
        table->pick[player] = 1;
        slot->counter[1]++;
        pickValue = randBetween(0, 3) + 0x7ED;
    } else if (slot->counter[2] < table->slotLimit2 && total2 < table->totalLimit2) {
        table->pick[player] = 2;
        pickValue = 0x7F1;
        slot->counter[2]++;
    } else {
        table->pick[player] = 0;
        pickValue = 2000;
        slot->counter[0]++;
    }
    slot->counter[oldPick]--;
    table->pickValue[player] = pickValue;
    pairSetFirstResetSecond((u8 *)owner + player * 0x8C + 0x54, pickValue);
    record = &table->record[player];
    if (slot->counter[3] < 1 && total3 < 2) {
        followUp = 0;
        record->value = table->value0;
        table->followUp[player] = 0;
    } else if (slot->counter[5] < 1 && total5 < 2) {
        record->value = table->pick[player] == 2 ? table->value1Held : table->value1;
        followUp = 2;
        table->followUp[player] = followUp;
    } else {
        record->value = table->pick[player] == 2 ? table->value2Held : randBetween(table->randomLow, table->randomHigh);
        followUp = 1;
        table->followUp[player] = followUp;
    }
    slot->counter[followUp + 3]++;
    slot->counter[oldFollowUp + 3]--;
    record->first = randBetween(table->firstArgB, table->firstArgA);
    record->second = randBetween(table->secondArgB, table->secondArgA);
    record->progress = 0.0f;
    record->reserved = 0;
}

} /* extern "C" */
