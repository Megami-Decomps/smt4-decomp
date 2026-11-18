#ifndef QUEST_CENTER_QUESTRECORD_H
#define QUEST_CENTER_QUESTRECORD_H

#include "common.h"
#include <stddef.h>
#include "quest_center/QuestRequirement.h"

/* One reward slot of an IV quest record (12 bytes). */
struct QuestReward {
    /* 0x00 */ u16 kind;       /* 1: fixed item, 3: set value, 4: loot table */
    /* 0x02 */ u16 arg;        /* item id, or the loot table id */
    /* 0x04 */ u16 amount;     /* item count, or the value for kind 3 */
    /* 0x06 */ u16 percent;    /* nonzero: the gold is this percent of the level's base */
    /* 0x08 */ u32 gold;
};

/* IV's quest record: a row of event/quest/QuestData.tbb (the game's data tables 0x1B and 0x1C, 0x1B4 bytes, sorted by id), as
   questDataGetRecord returns it; add-on content supplies further records of the same layout.
   Apocalypse's differs: QuestRecordA in quest_center/QuestRecordA.h. */
struct QuestRecord {
    /* 0x000 */ u16 id;
    /* 0x002 */ s16 eventId;            /* event/eNNN/eNNN.bf run when the quest is started from the camp */
    /* 0x004 */ u16 order;              /* list order */
    /* 0x006 */ u8 kind;                /* quest category (6: activated by questActivateEligibleCategorySix, 9: mode-24 records) */
    /* 0x007 */ u8 flags;               /* bit 0, bit 1: tested flags; bit 2: also gated on flags 0x674-0x67B; 0x10: unavailable; 0x20: needs the mask; 0x40: has a detail page; 0x80: active */
    /* 0x008 */ char title[0x30];
    /* 0x038 */ char description[0x80];
    /* 0x0B8 */ u8 payload[0x30];        /* named-data payload (dataTableGetNamePayload) */
    /* 0x0E8 */ u8 detail[0x50];         /* encoded detail text */
    /* 0x138 */ char token[15];
    /* 0x147 */ u8 flagIndex;
    union {
        /* 0x148 */ u16 values[4];      /* read by index from scripts (scrComm_Data_GetRecordValue) */
        struct {
            /* 0x148 */ u16 package;    /* event script package run for the quest, 0 = none */
            /* 0x14A */ u16 entry;      /* entry in that package */
        } event;
    };
    /* 0x150 */ u32 sortKey;
    /* 0x154 */ QuestReward rewards[2];
    /* 0x16C */ QuestRequirement requirements[6];
    /* 0x19C */ u16 area;                /* category of the quest list (area) */
    /* 0x19E */ u16 requiredFlag;
    /* 0x1A0 */ u16 requiredQuests[3];
    /* 0x1A6 */ u16 requiredInput;       /* stick direction condition */
    /* 0x1A8 */ u16 forbiddenFlag;
    /* 0x1AA */ u16 excludedQuests[2];
    /* 0x1AE */ u16 route;               /* route the quest belongs to (list subcategory) */
    /* 0x1B0 */ u16 hideStartFlag;       /* the quest is hidden from this flag... */
    /* 0x1B2 */ u16 hideEndFlag;         /* ...until this one */
};

typedef char QuestRecordSizeCheck[sizeof(QuestRecord) == 0x1B4 && sizeof(QuestReward) == 12 ? 1 : -1];
typedef char QuestRecordPrefixCheck[
    offsetof(QuestRecord, order) == 4 && offsetof(QuestRecord, kind) == 6 && offsetof(QuestRecord, flags) == 7 &&
    offsetof(QuestRecord, title) == 8 && offsetof(QuestRecord, description) == 0x38 &&
    offsetof(QuestRecord, payload) == 0xB8 && offsetof(QuestRecord, detail) == 0xE8 ? 1 : -1];
typedef char QuestRecordFieldsCheck[
    offsetof(QuestRecord, token) == 0x138 && offsetof(QuestRecord, flagIndex) == 0x147 &&
    offsetof(QuestRecord, values) == 0x148 && offsetof(QuestRecord, event.entry) == 0x14A && offsetof(QuestRecord, rewards) == 0x154 &&
    offsetof(QuestRecord, requirements) == 0x16C && offsetof(QuestRecord, area) == 0x19C &&
    offsetof(QuestRecord, requiredFlag) == 0x19E && offsetof(QuestRecord, requiredQuests) == 0x1A0 &&
    offsetof(QuestRecord, requiredInput) == 0x1A6 && offsetof(QuestRecord, forbiddenFlag) == 0x1A8 &&
    offsetof(QuestRecord, excludedQuests) == 0x1AA && offsetof(QuestRecord, route) == 0x1AE &&
    offsetof(QuestRecord, sortKey) == 0x150 && offsetof(QuestRecord, hideEndFlag) == 0x1B2 ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif
/* The quest record for an id (add-on records first, then tables 0x1B and 0x1C); NULL when none. */
QuestRecord *questDataGetRecord(u32 id);
#ifdef __cplusplus
}
#endif

#endif
