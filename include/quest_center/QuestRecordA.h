#ifndef QUEST_CENTER_QUESTRECORDA_H
#define QUEST_CENTER_QUESTRECORDA_H

#include "common.h"
#include <stddef.h>
#include "quest_center/QuestRequirement.h"

/* The reward of an Apocalypse quest record (16 bytes). */
struct QuestRewardA {
    /* 0x00 */ u16 kind;       /* 1: one item, 3: money, 4: rolls on a drop table */
    /* 0x02 */ u16 id;         /* item id, or the drop table entry */
    /* 0x04 */ u32 count;      /* amount, or number of rolls */
    /* 0x08 */ u8 unk08[2];
    /* 0x0A */ u16 percent;    /* share of the level-scaled value, 0: use `base` */
    /* 0x0C */ u32 base;
};

/* Apocalypse's quest record: a row of event/quest/QuestData.tbb (data tables 0x1B and 0x1C, 0x134 bytes, sorted by id), as
   questDataGetRecord returns it; add-on content supplies further records of the same layout.
   IV's differs: QuestRecord in quest_center/QuestRecord.h. */
struct QuestRecordA {
    /* 0x000 */ u16 id;
    /* 0x002 */ s16 eventId;            /* event/eNNN/eNNN.bf run when the quest is started from the camp */
    /* 0x004 */ u16 order;              /* list order */
    /* 0x006 */ u8 kind;                /* quest category (9: mode-24 records) */
    /* 0x007 */ u8 flags;               /* bit 0, bit 1: tested flags; 8: unavailable; 0x10: needs the mask */
    /* 0x008 */ char title[0x6C];
    /* 0x074 */ char description[0x50]; /* encoded description text */
    /* 0x0C4 */ char token[15];
    /* 0x0D3 */ u8 requiresEntryFlag;
    union {
        /* 0x0D4 */ u16 values[4];      /* read by index from scripts (scrLookupTableValue) */
        struct {
            /* 0x0D4 */ u16 package;    /* event script package run for the quest, 0 = none */
            /* 0x0D6 */ u16 entry;      /* entry in that package */
        } event;
    };
    /* 0x0DC */ u16 rank;
    /* 0x0DE */ u16 category;           /* also read as the required level of a party entry */
    /* 0x0E0 */ u16 setFlags[3];
    /* 0x0E6 */ u16 clearFlags[3];
    /* 0x0EC */ u16 value;
    /* 0x0EE */ u8 unk0EE[2];
    /* 0x0F0 */ QuestRewardA reward;
    /* 0x100 */ QuestRequirement requirements[4];
    /* 0x120 */ s16 requiredLevel;      /* 0: never unlocked by level */
    /* 0x122 */ u16 requiredFlag;
    /* 0x124 */ u16 filterKind;
    /* 0x126 */ u16 requiredMembers[3];
    /* 0x12C */ u8 unk12C[4];
    /* 0x130 */ u16 lockFlag;           /* game flag that locks the record, 0 for none */
    /* 0x132 */ u16 unlockFlag;         /* game flag that lifts lockFlag, 0 for none */
};

typedef char QuestRecordASizeCheck[sizeof(QuestRecordA) == 0x134 && sizeof(QuestRewardA) == 16 ? 1 : -1];
typedef char QuestRecordAPrefixCheck[
    offsetof(QuestRecordA, order) == 4 && offsetof(QuestRecordA, kind) == 6 && offsetof(QuestRecordA, flags) == 7 &&
    offsetof(QuestRecordA, description) == 0x74 && offsetof(QuestRecordA, token) == 0xC4 &&
    offsetof(QuestRecordA, requiresEntryFlag) == 0xD3 && offsetof(QuestRecordA, event.package) == 0xD4 && offsetof(QuestRecordA, event.entry) == 0xD6 &&
    offsetof(QuestRecordA, rank) == 0xDC && offsetof(QuestRecordA, category) == 0xDE ? 1 : -1];
typedef char QuestRecordAFieldsCheck[
    offsetof(QuestRecordA, setFlags) == 0xE0 && offsetof(QuestRecordA, clearFlags) == 0xE6 &&
    offsetof(QuestRecordA, value) == 0xEC && offsetof(QuestRecordA, reward) == 0xF0 &&
    offsetof(QuestRecordA, requirements) == 0x100 && offsetof(QuestRecordA, requiredLevel) == 0x120 &&
    offsetof(QuestRecordA, requiredFlag) == 0x122 && offsetof(QuestRecordA, filterKind) == 0x124 &&
    offsetof(QuestRecordA, requiredMembers) == 0x126 && offsetof(QuestRecordA, lockFlag) == 0x130 ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif
/* The quest record for an id (add-on records first, then tables 0x1B and 0x1C); NULL when none. */
QuestRecordA *questDataGetRecord(u32 id);
#ifdef __cplusplus
}
#endif

#endif
