/* NON_MATCHING: per-step recovery of the party's HP while walking (a percentage from the active flags, +2 more for one player id, applied to the player and, for the strongest flag, to the party slots; then a 2% bonus for slots that know skill 0x1c6); written from the decompilation, the slot-record getter's argument was lost and is assumed to be the slot id byte, and the skill scan covers the 8 stored skills (the ninth word the decompiler reads is zero) */
#include "common.h"

#define WALK_HEAL_SKIP_FLAG 2
#define WALK_FLAG_STRONG_A 0x6B
#define WALK_FLAG_STRONG_B 0x69
#define WALK_FLAG_WEAK 0x68
#define WALK_PERCENT_STRONG 5
#define WALK_PERCENT_WEAK 2
#define WALK_PLAYER_BONUS_ID 0x2A6
#define WALK_PLAYER_BONUS_PERCENT 2
#define WALK_SKILL_HEAL 0x1C6
#define WALK_SKILL_HEAL_PERCENT 2
#define WALK_PARTY_SLOTS 3
#define WALK_SKILL_COUNT 8
#define WALK_SLOT_TABLE_OFFSET 0x1CA0
#define WALK_RECORD_BLOCKED_MASK 0x402
#define WALK_HP_BOOST_SCALE 1.25f

struct WalkPlayerData {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ s16 id;
    /* 0x0E */ u8 unk0E[0xE];
    /* 0x1C */ s16 maxHp;
    /* 0x1E */ u8 unk1E[0xC];
    /* 0x2A */ s16 hp;
    /* 0x2C */ u8 unk2C[0x32];
    /* 0x5E */ u16 flags;
};

struct WalkSlotRecord {
    /* 0x00 */ u8 unk00[0xE];
    /* 0x0E */ s16 baseMaxHp;
    /* 0x10 */ u8 unk10[0x1A];
    /* 0x2A */ s16 hp;
    /* 0x2C */ u8 unk2C[8];
    /* 0x34 */ s16 skills[WALK_SKILL_COUNT];
    /* 0x44 */ u8 unk44[0x1C];
    /* 0x60 */ u16 flags;
    /* 0x62 */ u16 boostId;
};

extern "C" {
WalkPlayerData *gameGetPlayerData(void);
s32 FUN_0018416c(u16 id);
WalkSlotRecord *gameGetSlotRecord(s32 slot);
s8 *gameGetSlotTable(void);
s32 gameDataFlagTestBit(u32 flag);

/* The record's maximum HP, boosted by 25% when its boost id is active. */
static __inline s32 walkMaxHp(WalkSlotRecord *record)
{
    s32 maxHp = 0;
    if (record != NULL) {
        maxHp = record->baseMaxHp;
        if (FUN_0018416c(record->boostId) != 0)
            maxHp = (s16)(s32)((f32)record->baseMaxHp * WALK_HP_BOOST_SCALE);
    }
    return maxHp;
}

/* Heals the record by `percent` of its maximum HP, keeping 1 <= hp <= maximum. */
static __inline void walkHealRecord(WalkSlotRecord *record, s32 percent)
{
    s32 maxHp = walkMaxHp(record);
    s32 amount = maxHp * percent / 100;
    if (amount < 0)
        amount = 0;
    s32 healed = record->hp + amount;
    if (maxHp < healed)
        healed = maxHp;
    s32 limit = walkMaxHp(record);
    if (record != NULL) {
        s16 hp = (s16)healed;
        if (hp > limit)
            hp = (s16)limit;
        else if (hp < 1)
            hp = 1;
        record->hp = hp;
    }
}

static __inline bool walkSlotIsHealable(s8 *table, s32 slot, WalkSlotRecord **record)
{
    if (table[WALK_SLOT_TABLE_OFFSET + slot] < 0)
        return false;
    *record = gameGetSlotRecord(table[WALK_SLOT_TABLE_OFFSET + slot]);
    return ((*record)->flags & WALK_RECORD_BLOCKED_MASK) == 0;
}

void FUN_004a0524(void)
{
    s32 percent = 0;
    if ((gameGetPlayerData()->flags & WALK_HEAL_SKIP_FLAG) != 0)
        return;

    if (gameDataFlagTestBit(WALK_FLAG_STRONG_A) != 0 || gameDataFlagTestBit(WALK_FLAG_STRONG_B) != 0)
        percent = WALK_PERCENT_STRONG;
    else if (gameDataFlagTestBit(WALK_FLAG_WEAK) != 0)
        percent = WALK_PERCENT_WEAK;

    s32 playerPercent = percent;
    if (gameGetPlayerData()->id == WALK_PLAYER_BONUS_ID)
        playerPercent += WALK_PLAYER_BONUS_PERCENT;
    if (playerPercent != 0) {
        s32 maxHp = gameGetPlayerData()->maxHp;
        s32 amount = maxHp * playerPercent / 100;
        if (amount < 0)
            amount = 0;
        WalkPlayerData *player = gameGetPlayerData();
        s32 healed = amount + player->hp;
        if (maxHp < healed)
            healed = maxHp;
        player = gameGetPlayerData();
        s16 hp = (s16)healed;
        if (hp > player->maxHp)
            hp = player->maxHp;
        else if (hp < 1)
            hp = 1;
        player->hp = hp;
    }

    if (percent != 0 && gameDataFlagTestBit(WALK_FLAG_STRONG_A) != 0) {
        s8 *table = gameGetSlotTable();
        for (s32 slot = 0; slot < WALK_PARTY_SLOTS; slot++) {
            WalkSlotRecord *record;
            if (walkSlotIsHealable(table, slot, &record))
                walkHealRecord(record, percent);
        }
    }

    s8 *table = gameGetSlotTable();
    for (s32 slot = 0; slot < WALK_PARTY_SLOTS; slot++) {
        WalkSlotRecord *record;
        if (!walkSlotIsHealable(table, slot, &record))
            continue;
        for (s32 i = 0; i < WALK_SKILL_COUNT; i++) {
            if (record->skills[i] == WALK_SKILL_HEAL) {
                walkHealRecord(record, WALK_SKILL_HEAL_PERCENT);
                break;
            }
        }
    }
}

} /* extern "C" */
