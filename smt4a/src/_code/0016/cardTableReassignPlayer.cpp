/* NON_MATCHING: retail's frame is 32 bytes larger (the order table at sp+24, the old follow-up spilled to sp+8:
 * an unused stack area, as if the totals were a six-entry array), the first follow-up arm stores its index itself,
 * and the join moves the follow-up into r1 before the counter updates (67 lines; both held-value choices are
 * ternaries, as one form: if/else in both is 73). */
#include "ui/UiSpriteApi.h"
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

/* Reassigns player `player`'s pick and follow-up: it moves to the first pick whose slot and overall
 * counters are under their limits, then to the first under-limit follow-up, updating the counters and
 * the card record. */
void cardTableReassignPlayer(CardOwner *owner, s32 player)
{
    CardTable *table = &owner->table;
    s32 slotOrder[CARD_PLAYER_COUNT];
    s32 slotIndex;
    s32 oldPick;
    s32 oldFollowUp;
    s32 pickValue;
    s32 followUp;
    s32 total1;
    s32 total2;
    s32 total3;
    s32 total5;

    __aeabi_memcpy4(slotOrder, DAT_00530e50, sizeof(slotOrder));
    slotIndex = slotOrder[player];
    oldFollowUp = table->followUp[player];
    oldPick = table->pick[player];
    total1 = 0;
    total2 = 0;
    total3 = 0;
    total5 = 0;
    for (s32 i = 0; i < CARD_SLOT_COUNT; i++) {
        total1 += table->slot[i].counter[1];
        total2 += table->slot[i].counter[2];
        total3 += table->slot[i].counter[3];
        total5 += table->slot[i].counter[5];
    }
    if (table->slot[slotIndex].counter[1] < table->slotLimit1 && total1 < table->totalLimit1) {
        table->pick[player] = 1;
        table->slot[slotIndex].counter[1]++;
        pickValue = randBetween(0, 3) + 0x7ED;
    } else if (table->slot[slotIndex].counter[2] < table->slotLimit2 && total2 < table->totalLimit2) {
        table->pick[player] = 2;
        pickValue = 0x7F1;
        table->slot[slotIndex].counter[2]++;
    } else {
        table->pick[player] = 0;
        pickValue = 2000;
        table->slot[slotIndex].counter[0]++;
    }
    table->slot[slotIndex].counter[oldPick]--;
    table->pickValue[player] = pickValue;
    pairSetFirstResetSecond((UiSpriteState *)((u8 *)owner + player * 0x8C + 0x54), pickValue);
    if (table->slot[slotIndex].counter[3] <= 0 && total3 < 2) {
        table->record[player].value = table->value0;
        followUp = 0;
    } else if (table->slot[slotIndex].counter[5] <= 0 && total5 < 2) {
        table->record[player].value = table->pick[player] == 2 ? table->value1Held : table->value1;
        followUp = 2;
    } else {
        table->record[player].value =
            table->pick[player] == 2 ? table->value2Held : randBetween(table->randomLow, table->randomHigh);
        followUp = 1;
    }
    table->followUp[player] = followUp;
    table->slot[slotIndex].counter[followUp + 3]++;
    table->slot[slotIndex].counter[oldFollowUp + 3]--;
    table->record[player].first = randBetween(table->firstArgB, table->firstArgA);
    table->record[player].second = randBetween(table->secondArgB, table->secondArgA);
    table->record[player].progress = 0.0f;
    table->record[player].reserved = 0;
}

} /* extern "C" */
