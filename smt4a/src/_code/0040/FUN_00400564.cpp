/* NON_MATCHING: block layout only: retail resolves the member (gameGetSlotRecord inline path) after the shared checks, lays the 'status cure' tail (orr #4 / tst #1 / 0x1b test) out after the exit branch and sets up result/wanted in a different order. */
#include "common.h"

/* A skill/item effect definition as the usability check reads it. */
struct EffectDefinition {
    /* 0x00 */ u8 unk00[0x23];
    /* 0x23 */ u8 kind;
    /* 0x24 */ u8 unk24[0xB];
    /* 0x2F */ u8 target;
    /* 0x30 */ u8 unk30[8];
    /* 0x38 */ u8 flags;
    /* 0x39 */ u8 unk39;
    /* 0x3A */ u16 healing;
    /* 0x3C */ u32 condition;
};

/* The player's own record: the status mask is at 0x5E. */
struct PlayerRecord {
    /* 0x00 */ u8 unk00[0x2A];
    /* 0x2A */ s16 hp;
    /* 0x2C */ u8 unk2C[0x32];
    /* 0x5E */ u16 status;
};

/* A party member's record: the status mask is at 0x60. */
struct MemberRecord {
    /* 0x00 */ u8 unk00[0x2A];
    /* 0x2A */ s16 hp;
    /* 0x2C */ u8 unk2C[0x34];
    /* 0x60 */ u16 status;
};

extern "C" {
PlayerRecord *gameGetPlayerData(void);
MemberRecord *gameGetSlotRecord(s32 slot);
MemberRecord *gameGetSaveSlotData(s32 slot);
MemberRecord *btlMainGetUnk14(void);
u32 FUN_00291e14(void);
s32 FUN_002b4e7c(PlayerRecord *record);
s32 FUN_002b4dcc(MemberRecord *record);
void FUN_003ff524(u16 *flags, s32 kind);
u32 btlCanSelectReservePartyMember(const void *entry);
s32 FUN_003ff888(void);

/* Checks whether the effect would do anything to the member: 0 when it would, 3 when it would not. */
u32 FUN_00400564(s32 slot, s32 fromSave, EffectDefinition *effect)
{
    u32 result = 0;
    u32 wanted = (effect->healing & 0xfff) != 0;
    u32 useful = 0;
    if ((effect->condition & 0x7f) != 0) {
        wanted |= 4;
    }
    if ((effect->flags & 4) != 0) {
        wanted |= 0x2000000;
    } else if (effect->kind == 7 || effect->kind == 9) {
        wanted |= 0x1000000;
    }
    if (effect->target == 4) {
        wanted |= 0x4000000;
    }
    u16 curable;
    if (slot < 0 && FUN_00291e14() == 0) {
        PlayerRecord *player = gameGetPlayerData();
        if ((wanted & 1) != 0 && (player->status & 2) == 0 && FUN_002b4e7c(player) != player->hp) {
            useful = 1;
        }
        if ((wanted & 4) != 0) {
            curable = 0;
            FUN_003ff524(&curable, effect->condition & 0x7f);
            if ((curable & player->status) != 0) {
                useful |= 4;
            }
            if ((useful & 4) != 0) {
                if ((wanted & 1) != 0) {
                    useful |= 1;
                }
            } else if ((useful & 1) != 0) {
                u16 other = 0;
                FUN_003ff524(&other, effect->condition & 0x7f);
                if ((other & 2) != 0 || (useful |= 4, (useful & 1) != 0)) {
                    if ((effect->condition & 0x7f) == 0x1b) {
                        useful |= 4;
                    }
                }
            }
        }
        if ((wanted & 0x4000000) != 0 && player->status == 0) {
            useful |= 0x4000000;
        }
    } else {
        MemberRecord *member;
        if (slot < 0 && FUN_00291e14() != 0) {
            member = btlMainGetUnk14();
        } else if (fromSave != 0) {
            member = gameGetSaveSlotData(slot);
        } else {
            member = gameGetSlotRecord(slot);
        }
        if (member == 0) {
            return 3;
        }
        if ((wanted & 1) != 0 && (member->status & 0x402) == 0 && FUN_002b4dcc(member) != member->hp) {
            useful = 1;
        }
        if ((wanted & 4) != 0) {
            curable = 0;
            FUN_003ff524(&curable, effect->condition & 0x7f);
            if ((curable & member->status) != 0) {
                useful |= 4;
            }
            if ((useful & 4) != 0) {
                if ((wanted & 1) != 0) {
                    useful |= 1;
                }
            } else if ((useful & 1) != 0) {
                u16 other = 0;
                FUN_003ff524(&other, effect->condition & 0x7f);
                if ((other & 2) != 0 || (useful |= 4, (useful & 1) != 0)) {
                    if ((effect->condition & 0x7f) == 0x1b) {
                        useful |= 4;
                    }
                }
            }
        }
        if ((wanted & 0x4000000) != 0 && member->status == 0) {
            useful |= 0x4000000;
        }
    }
    if ((wanted & 0x1000000) != 0 && btlCanSelectReservePartyMember(0) != 0) {
        useful |= 0x1000000;
    }
    if ((wanted & 0x2000000) != 0 && FUN_003ff888() != 0) {
        useful |= 0x2000000;
    }
    if (wanted != useful) {
        result = 3;
    }
    return result;
}
}
