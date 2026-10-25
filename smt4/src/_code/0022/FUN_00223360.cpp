/* NON_MATCHING: reward/passive loops retain different registers and stack spills; first unit record now supplies the final member index and the money guard encloses its linker-inlined bonus query. */
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;

extern "C" {

#define REWARD_ITEM_SLOTS 6
#define PARTY_SLOTS 24

/* Battle reward (observed fields only). */
struct BattleReward {
    s32 exp;                        /* 0x00: base experience */
    s32 level;                      /* 0x04: level used for the experience table */
    s32 money;                      /* 0x08 */
    s32 itemId[REWARD_ITEM_SLOTS];  /* 0x0C */
    s32 itemCount[REWARD_ITEM_SLOTS]; /* 0x24 */
};

/* Totals collected by the result screen (observed fields only). */
struct ResultTotals {
    u8 pad0000[0x35B4];
    s32 totalExp;                   /* 0x35B4 */
    s32 expByMember[PARTY_SLOTS];   /* 0x35B8 */
    s32 itemId[REWARD_ITEM_SLOTS];  /* 0x3618 */
    s32 itemCount[REWARD_ITEM_SLOTS]; /* 0x3630 */
    s32 pad3648[2];
    s32 totalMoney;                 /* 0x3650 */
};

struct PlayerData {
    u8 pad00[0x76];
    u8 expTable;                    /* 0x76 */
};

struct SlotTable {
    u8 pad0000[0x90F0];
    s8 member[PARTY_SLOTS];         /* 0x90F0 */
};

struct UnitRecord {
    u8 pad00[0x34];
    u16 passive[8];                 /* 0x34 */
    u8 pad44[4];
    u8 expTable;                    /* 0x48 */
    u8 pad49[1];
    u8 memberIndex;                 /* 0x4A */
};

struct PassiveSkill {
    u8 pad00[0x2F];
    u8 expBonusPercent;             /* 0x2F */
};

extern ResultTotals *g_result;      /* 0x44dc20 */

s32 dataTable09Sub3GetRecord(u8 table, s32 level);
PassiveSkill *passiveSkillLookupRecord(u32 skill);
s32 playerPadTestBit(u32 bit);
s32 flagWordTestBit(UnitRecord *record, u32 bit);
UnitRecord *gameGetUnitRecord(s32 member);
SlotTable *gameGetSlotTable(void);
PlayerData *gameGetPlayerData(void);
s32 questQueryFalse(void);

/* Adds one battle reward (money, items, experience) into the result screen totals and splits the
 * experience over the party members that are in the party, reduced for members not in the active slots. */
void FUN_00223360(BattleReward *reward)
{
    ResultTotals *totals = g_result;
    SlotTable *slots = gameGetSlotTable();
    PlayerData *player = gameGetPlayerData();

    u32 money = reward->money;
    if (money != 0) {
        u32 bonusPercent = questQueryFalse();
        if (bonusPercent != 0) {
            u32 bonus = money * bonusPercent / 100;
            if (bonus == 0) {
                bonus = 1;
            }
            money += bonus;
        }
    }
    totals->totalMoney += money;

    for (s32 i = 0; i < REWARD_ITEM_SLOTS; i++) {
        s32 id = reward->itemId[i];
        s32 count = 0;
        if (id != 0) {
            count = reward->itemCount[i];
        }
        if (id != 0 && count != 0) {
            for (s32 j = 0; j < REWARD_ITEM_SLOTS; j++) {
                if (totals->itemId[j] == id) {
                    totals->itemCount[j] += count;
                    break;
                }
                if (totals->itemId[j] == 0) {
                    totals->itemId[j] = id;
                    totals->itemCount[j] = count;
                    break;
                }
            }
        }
    }

    s32 level = reward->level;
    s32 exp = reward->exp;
    s32 partyExp = exp * dataTable09Sub3GetRecord(player->expTable, level) / 100;
    if (partyExp <= 0 && exp != 0) {
        partyExp = 1;
    }
    if (playerPadTestBit(1) == 0 && playerPadTestBit(10) == 0) {
        totals->totalExp += partyExp;
    }

    for (s32 i = 0; i < PARTY_SLOTS; i++) {
        if (slots->member[i] < 0) {
            continue;
        }
        UnitRecord *firstUnit = gameGetUnitRecord(slots->member[i]);
        if (flagWordTestBit(firstUnit, 1) != 0 || flagWordTestBit(firstUnit, 10) != 0 || flagWordTestBit(firstUnit, 2) != 0) {
            continue;
        }
        s32 member = slots->member[i];
        s32 active = 0;
        if (slots->member[8] == member || slots->member[9] == member || slots->member[10] == member) {
            active = 1;
        }
        UnitRecord *unit = gameGetUnitRecord(member);
        f32 scale = 1.0f;
        for (s32 k = 0; k < 8; k++) {
            if (unit->passive[k] != 0) {
                PassiveSkill *skill = passiveSkillLookupRecord(unit->passive[k]);
                if (skill != 0 && skill->expBonusPercent != 0) {
                    scale = (f32)skill->expBonusPercent * 0.01f * scale;
                }
            }
        }
        u32 share = (u32)exp * (s32)(scale * 100.0f) / 100;
        u32 value = share * dataTable09Sub3GetRecord(unit->expTable, level) / 100;
        if (value == 0 && share != 0) {
            value = 1;
        }
        if (active == 0) {
            value = (u32)((f32)value * 0.3f);
        }
        if ((s32)value <= 0 && exp != 0) {
            value = 1;
        }
        totals->expByMember[firstUnit->memberIndex] += value;
    }
}

} /* extern "C" */
