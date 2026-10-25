/* NON_MATCHING: signed filter flags restore shared high-offset base and saved registers; bracket count/selector loads remain unconditional below the zero branch rather than predicated above it. */
#include "common.h"
#include <stddef.h>

/* A demon skill-like record as the fusion/search filter reads it. */
struct FilterRecord {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 category;   /* 0x26 marks the excluded category */
    /* 0x03 */ u8 unk03[3];
    /* 0x06 */ u16 count;
    /* 0x08 */ u8 unk08[2];
    /* 0x0A */ u16 flags;     /* bit 0: the record can be matched */
};

/* The conditions a record must meet; each group is enabled by its flag byte. */
struct RecordFilter {
    /* 0x000 */ u8 unk000[0x148];
    /* 0x148 */ u8 matchId;
    /* 0x149 */ u8 unk149;
    /* 0x14A */ u16 id;
    /* 0x14C */ s8 matchCategory;
    /* 0x14D */ u8 unk14D;
    /* 0x14E */ u16 category;
    /* 0x150 */ s8 matchBracket;
    /* 0x151 */ u8 unk151[3];
    /* 0x154 */ s32 bracket;    /* 0: any, 1..9: count in [10 * (n - 1), 10 * n), 10: 90 and up */
    /* 0x158 */ u8 unk158[0x16];
    /* 0x16E */ s8 requireMembers;
    /* 0x16F */ u8 unk16F;
    /* 0x170 */ s16 requiredSlotA;
    /* 0x172 */ s16 requiredSlotB;
    /* 0x174 */ s8 excludeMembers;
    /* 0x175 */ u8 unk175;
    /* 0x176 */ s16 excludedSlotA;
    /* 0x178 */ s16 excludedSlotB;
    /* 0x17A */ s8 allowExcludedCategory;
    /* 0x17B */ u8 unk17B[0x39];
    /* 0x1B4 */ s8 skipLearned;
    /* 0x1B5 */ s8 limitCount;
};

struct SlotRecord {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ u16 id;
};

typedef char RecordFilterOffsets[sizeof(RecordFilter) == 0x1B8 &&
    offsetof(RecordFilter, bracket) == 0x154 &&
    offsetof(RecordFilter, requiredSlotA) == 0x170 &&
    offsetof(RecordFilter, excludedSlotB) == 0x178 &&
    offsetof(RecordFilter, allowExcludedCategory) == 0x17A &&
    offsetof(RecordFilter, limitCount) == 0x1B5 ? 1 : -1];

extern "C" {

FilterRecord *FUN_00184310(u32 id);
s32 slotRecordFindById(u32 id);
SlotRecord *gameGetSlotRecord(s32 slot);
s32 FUN_002a4b28(u32 id);
u32 computeCountLimit(void);

/* Whether the record `recordId` passes the filter, with the two member ids given for the party-slot conditions. */
s32 FUN_004dab08(RecordFilter *filter, u32 memberA, u32 memberB, u32 recordId)
{
    FilterRecord *record = FUN_00184310(recordId);
    FilterRecord *first;
    FilterRecord *second;
    s32 count;

    if (!(record->flags & 1)) {
        return 0;
    }
    if (filter->matchId) {
        if (record->id != filter->id) {
            return 0;
        }
    } else {
        if (filter->matchCategory && record->category != filter->category) {
            return 0;
        }
        if (filter->matchBracket) {
            count = record->count;
            switch (filter->bracket) {
            case 0:
                break;
            case 1:
                if (count <= 9) {
                    break;
                }
                return 0;
            case 2:
                if (count >= 10 && count <= 19) {
                    break;
                }
                return 0;
            case 3:
                if (count >= 20 && count <= 29) {
                    break;
                }
                return 0;
            case 4:
                if (count >= 30 && count <= 39) {
                    break;
                }
                return 0;
            case 5:
                if (count >= 40 && count <= 49) {
                    break;
                }
                return 0;
            case 6:
                if (count >= 50 && count <= 59) {
                    break;
                }
                return 0;
            case 7:
                if (count >= 60 && count <= 69) {
                    break;
                }
                return 0;
            case 8:
                if (count >= 70 && count <= 79) {
                    break;
                }
                return 0;
            case 9:
                if (count >= 80 && count <= 89) {
                    break;
                }
                return 0;
            case 10:
                if (count >= 90) {
                    break;
                }
                return 0;
            default:
                return 0;
            }
        }
    }
    if (filter->limitCount && record->count > computeCountLimit()) {
        return 0;
    }
    if (filter->skipLearned && FUN_002a4b28(record->id) != 0) {
        return 0;
    }
    if (filter->limitCount && slotRecordFindById(record->id) != 0) {
        return 0;
    }
    first = FUN_00184310(memberA);
    second = FUN_00184310(memberB);
    if (!filter->allowExcludedCategory) {
        if (first->category == 0x26 || second->category == 0x26) {
            return 0;
        }
    }
    if (filter->requireMembers) {
        if ((u32)filter->requiredSlotA < 24) {
            SlotRecord *slot = gameGetSlotRecord(filter->requiredSlotA);

            if (slot->id != memberA && slot->id != memberB) {
                return 0;
            }
        }
        if ((u32)filter->requiredSlotB < 24) {
            SlotRecord *slot = gameGetSlotRecord(filter->requiredSlotB);

            if (slot->id != memberA && slot->id != memberB) {
                return 0;
            }
        }
    }
    if (filter->excludeMembers) {
        if ((u32)filter->excludedSlotA < 24) {
            SlotRecord *slot = gameGetSlotRecord(filter->excludedSlotA);

            if (slot->id == memberA || slot->id == memberB) {
                return 0;
            }
        }
        if ((u32)filter->excludedSlotB < 24) {
            SlotRecord *slot = gameGetSlotRecord(filter->excludedSlotB);

            if (slot->id == memberA || slot->id == memberB) {
                return 0;
            }
        }
    }
    return 1;
}

} /* extern "C" */
