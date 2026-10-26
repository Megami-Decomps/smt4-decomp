/* NON_MATCHING: the 16-byte equipment copy (ldm/stm) now matches; retail still pushes r0-r2 as spilled arguments, keeps a zero u16 in r6 for the unused flags argument and the result pointer in r8, so the register allocation differs. */
#include "common.h"
#include "gamedata/Table04Record.h"

// A skill or card record (the fields this function reads).
struct SkillRecord {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 padButton;
    /* 0x22 */ u8 unk22[0x18];
    /* 0x3a */ u16 effectId;   // low 12 bits: effect kind, high 4 bits: flags
    /* 0x3c */ u8 unk3c[0xf];
    /* 0x4b */ u8 percent;     // scaling percent, 0: none
};

// A table-41 entry (equipment): bits 11..15 of the word at +0x44 are its slot, bits 16..19 its rank.
struct EquipmentEntry {
    u8 unk00[0x44];
    u32 info;
};

// The player's record (only the level is read).
struct PlayerView {
    u8 unk00[0x24];
    s16 level;  // 0x24
};

// The eight equipped-piece ids of a slot, copied as one block.
struct EquipWords {
    u32 words[4];
};

// A party slot record.
struct SlotView {
    u8 unk00[0x16];
    s16 level;      // 0x16
    u8 unk18[0x1c];
    EquipWords equipment;   // 0x34
};

extern "C" {
extern const f32 DAT_0057ffa8[];  // multiplier per equipped bonus count

PlayerView *gameGetPlayerData(void);
SlotView *gameGetSlotRecord(s32 slot);
void playerGetWords(u16 *words, s32 count);
u32 padGetMappedValue(u16 button);
void *FUN_002efc44(SkillRecord *skill, u32 value, s32 flag);
s32 mathApplyReductionMultiplier(s32 value, void *source, u32 flags, f32 multiplier);
s32 FUN_004c6c8c(s32 level, void *source, u32 flags, s32 value, f32 effect, f32 first, f32 second, f32 third);

// Evaluates the effect of `skill` on `value` for the player (slot < 0) or the party slot: the percent scaling and the
// effect itself, with a bonus for equipped pieces of rank 5 and 6 in slot 25.
s32 FUN_0023e6d8(SkillRecord *skill, s32 value, s32 slot)
{
    if ((skill->effectId & 0xfff) == 0 && skill->percent == 0) {
        return 0;
    }
    u16 words[10] = {0};
    void *source = NULL;
    s32 level;
    if (slot < 0) {
        level = gameGetPlayerData()->level;
        playerGetWords(words, 1);
        source = FUN_002efc44(skill, padGetMappedValue(skill->padButton), 2);
    } else {
        SlotView *record = gameGetSlotRecord(slot);
        if (record == NULL) {
            return 0;
        }
        level = record->level;
        *reinterpret_cast<EquipWords *>(words) = record->equipment;
    }

    s32 bonusIndex = 0;
    for (s32 i = 0; i < 9; i++) {
        if (words[i] != 0) {
            EquipmentEntry *entry = reinterpret_cast<EquipmentEntry *>(dataTable41FindById(words[i]));
            if (entry != NULL && ((entry->info >> 11) & 0x1f) == 25) {
                u32 rank = (entry->info >> 16) & 0xf;
                if (rank == 5) {
                    bonusIndex += 1;
                } else if (rank == 6) {
                    bonusIndex += 2;
                }
            }
        }
    }

    s32 result = 0;
    if ((skill->effectId & 0xfff) == 4000) {
        return value;
    }
    u32 percent = skill->percent;
    if ((skill->effectId & 0xfff) != 0) {
        if (percent != 0) {
            result = mathApplyReductionMultiplier(value, source, 0, (f32)percent * 0.01f);
        }
        result = FUN_004c6c8c(level, source, 0, result, (f32)(skill->effectId & 0xfff), 1.0f, 1.0f, DAT_0057ffa8[bonusIndex]);
    } else if (percent != 0) {
        result = mathApplyReductionMultiplier(value, source, 0, (f32)percent * 0.01f);
        if ((skill->effectId & 0xfff) != 0) {
            result += FUN_004c6c8c(level, source, 0, 0, (f32)(skill->effectId & 0xfff), 1.0f, 1.0f,
                                   DAT_0057ffa8[bonusIndex]);
        }
    }
    return result;
}
}
