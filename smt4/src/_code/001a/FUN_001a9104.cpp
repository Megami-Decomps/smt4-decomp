/* NON_MATCHING: register allocation and branch layout differ (the two quest kinds share counters in retail) */
#include "common.h"
#include "code/Code0028.h"
#include "code/Code0028_Smt4.h"

/* One reward line of a quest: the item and how many (0 = not granted). */
struct QuestRewardEntry {
    /* 0x00 */ s32 amount;
    /* 0x04 */ u16 item;
    /* 0x06 */ u16 unk06;
};

/* The map block (only the item-result slots at 0x1060 are touched). */
struct ResultMapBlock {
    /* 0x0000 */ u8 unk0000[0x2a];
    /* 0x002a */ s16 specialRecord;
    /* 0x002c */ u8 unk002c[0x1034];
    /* 0x1060 */ s16 firstWanted;     /* the item the first quest kind asked for */
    /* 0x1062 */ u16 firstOffered;
    /* 0x1064 */ u16 secondOffered;
    /* 0x1066 */ u16 secondWanted;
};

struct SpecialRecord {
    /* 0x00 */ u8 unk00[0x12];
    /* 0x12 */ s16 value;
};

extern "C" {
extern s8 DAT_0049f9c8;
extern s32 DAT_0049f9cc;
ResultMapBlock *gameGetMapBlock(void);
SpecialRecord *dataTable2fSub1GetRecord(s32 id);
void FUN_00295a18(s32 value, s32 mode);
s32 FUN_00298dc8(u16 quest);
s32 table1bOr1cGetRecordValue(u16 quest);
s32 FUN_00287874(u16 quest);
s32 questPassesAvailabilityConditions(u16 quest);
s32 FUN_00298e40(u16 quest, s32 index, QuestRewardEntry *entry);
void mapIfShowItemResultMessage(s32 message, u32 item, u32 amount);
void FUN_002e8598(s32 message, u32 item);

/* Walks the finished quests (ids 100-399) and shows the result message each one calls for,
   from the items the player handed in and the rewards that were granted. Returns the kind of
   follow-up the map has to run (0 none, 1/2 close the menu, 3 a pending reward, 4 a special
   record). */
s32 FUN_001a9104(void)
{
    s32 result = 0;
    ResultMapBlock *block = gameGetMapBlock();
    u32 firstKindDone = 0;
    if (DAT_0049f9c8 != 0) {
        DAT_0049f9cc = dataTable2fSub1GetRecord(block->specialRecord)->value;
        FUN_00295a18(DAT_0049f9cc, 1);
        DAT_0049f9c8 = 0;
        return 4;
    }
    for (u16 quest = 100; quest < 400; quest++) {
        if (FUN_00298dc8(quest) == 0) {
            continue;
        }
        s32 kind = table1bOr1cGetRecordValue(quest);
        if (kind == 1) {
            u32 matched = 0;
            s32 lines = 0;
            s32 emptyLines = 0;
            u32 itemOther = 0;
            if (FUN_00287874(quest) != 0) {
                s32 total = 0;
                u16 offered = block->secondOffered;
                u16 wanted = block->secondWanted;
                for (s32 i = 0; i < 6; i++) {
                    QuestRewardEntry entry;
                    if (FUN_00298e40(quest, i, &entry) != 0) {
                        lines++;
                        if (entry.amount >= 1) {
                            if (entry.item == (s16)wanted) {
                                matched = 1;
                            } else {
                                itemOther = entry.item;
                            }
                        } else {
                            emptyLines++;
                            if (entry.item == (s16)offered) {
                                matched = 1;
                            }
                        }
                        total += entry.amount;
                    }
                }
                if (matched != 0) {
                    u32 message;
                    u32 item;
                    if (lines >= 2) {
                        if (total != 0) {
                            if ((s16)offered != 0) {
                                if (lines - emptyLines >= 2) {
                                    item = offered;
                                    message = 7;
                                } else {
                                    item = itemOther & 0xffff;
                                    message = 8;
                                }
                            } else {
                                item = wanted;
                                message = 9;
                            }
                            FUN_002e8598(message, item);
                        } else {
                            FUN_002e8598(6, offered);
                            result = 1;
                            firstKindDone = 1;
                        }
                    } else if (total != 0) {
                        FUN_002e8598(0xb, wanted);
                    } else {
                        FUN_002e8598(10, offered);
                        result = 1;
                        firstKindDone = 1;
                    }
                }
                FUN_0028784c(quest, 0);
            }
        } else if (kind == 0) {
            u32 matched = 0;
            s32 lines = 0;
            s32 emptyLines = 0;
            u32 item = 0;
            u32 amountGranted = 0;
            u32 amountOther = 0;
            if (FUN_00287874(quest) != 0) {
                if (questPassesAvailabilityConditions(quest) != 0) {
                    s32 total = 0;
                    u16 offered = block->firstOffered;
                    u32 wanted = (u32)block->firstWanted;
                    for (s32 i = 0; i < 6; i++) {
                        QuestRewardEntry entry;
                        if (FUN_00298e40(quest, i, &entry) != 0) {
                            lines++;
                            if (entry.amount >= 1) {
                                if (entry.item == wanted) {
                                    matched = 1;
                                    amountGranted = entry.amount;
                                    if (item == 0) {
                                        amountOther = entry.amount;
                                        item = entry.item;
                                    }
                                } else {
                                    amountOther = entry.amount;
                                    item = entry.item;
                                }
                            } else {
                                emptyLines++;
                                if (entry.item == (s16)offered) {
                                    matched = 1;
                                }
                            }
                            total += entry.amount;
                        }
                    }
                    if ((matched & ~firstKindDone) != 0) {
                        u32 message;
                        u32 amount;
                        if (lines >= 2) {
                            if (total != 0) {
                                if ((s16)offered != 0) {
                                    s32 remaining = lines - emptyLines;
                                    amount = amountOther;
                                    if (remaining >= 2) {
                                        item = offered;
                                        amount = remaining;
                                    }
                                    amount &= 0xffff;
                                    message = remaining < 2 ? 2 : 1;
                                } else {
                                    amount = amountGranted & 0xffff;
                                    item = wanted & 0xffff;
                                    message = 3;
                                }
                                mapIfShowItemResultMessage(message, item, amount);
                            } else {
                                mapIfShowItemResultMessage(0, offered, 0);
                                result = 2;
                            }
                        } else if (total != 0) {
                            amount = amountGranted & 0xffff;
                            item = wanted & 0xffff;
                            mapIfShowItemResultMessage(5, item, amount);
                        } else {
                            mapIfShowItemResultMessage(4, offered, 0);
                            result = 2;
                        }
                    }
                }
                FUN_0028784c(quest, 0);
            }
        }
    }
    if (result == 0 && FUN_00287800() != 0) {
        result = 3;
    }
    block->secondOffered = 0;
    block->secondWanted = 0;
    block->firstOffered = 0;
    block->firstWanted = 0;
    return result;
}

} /* extern "C" */
