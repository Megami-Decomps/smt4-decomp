/* Apocalypse's partner comments: data table 0x43, map/all/PartnerInfoTable.tbb (the table ids follow
 * the game's data-file list, NKMBaseTable.tbb = 0). Section 0 holds the triggers (PartnerInfoRecord):
 * when the partner `partnerId` comments on an event of `kind`, under which flags, and the weighted
 * messages to pick from; section 1 holds the messages (PartnerInfoMessage) the triggers name. */
#ifndef GAMEDATA_PARTNERINFOTABLE_H
#define GAMEDATA_PARTNERINFOTABLE_H

#include "gamedata/DataTable.h"
#include <stddef.h>

/* One weighted message of a trigger: the message id (section 1) and its weight in percent. */
struct PartnerInfoChoice {
    /* 0x00 */ s16 message;
    /* 0x02 */ s16 weight;
};

/* A partner comment trigger: one 0x20-byte row of PartnerInfoTable.tbb table 0 (data table 0x43,
 * section 0). popupSelectWeightedMessage picks one of `choices` by weight; the popup starters match
 * `kind` (the popup kind: 4 status ailment, 5 random, 7 scripted, 8/9 HP ratio at most/at least,
 * 0x12 money gift, 1 context message) and `partnerId` (the selected slot's demon id). */
struct PartnerInfoRecord {
    /* 0x00 */ s32 partnerId;
    /* 0x04 */ s32 kind;
    /* 0x08 */ s16 requiredFlag;          /* 0 = always; else the game flag that must be set */
    /* 0x0A */ s16 excludedFlag;          /* 0 = never; else the flag that blocks the trigger (kind 7 sets it) */
    /* 0x0C */ s16 argument;              /* chance in percent (kinds 4, 5), HP ratio threshold in percent
                                           * (kinds 8, 9), the argument or context to match (kinds 7, 1) */
    /* 0x0E */ s16 unk0E;
    /* 0x10 */ PartnerInfoChoice choices[4];
};

/* A partner comment message: one 0x64-byte row of PartnerInfoTable.tbb table 1 (data table 0x43,
 * section 1), found by id (FUN_00365bc4). */
struct PartnerInfoMessage {
    /* 0x00 */ s32 id;
    /* 0x04 */ u8 data[0x20];             /* shown with the text (PopupStateA::messageData) */
    /* 0x24 */ char text[0x40];
};

typedef char PartnerInfoRecordLayoutCheck[
    sizeof(PartnerInfoRecord) == 0x20 &&
    offsetof(PartnerInfoRecord, argument) == 0x0C &&
    offsetof(PartnerInfoRecord, choices) == 0x10 &&
    sizeof(PartnerInfoMessage) == 0x64 &&
    offsetof(PartnerInfoMessage, text) == 0x24 ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif

/* The message `id` of section 1, or NULL. */
PartnerInfoMessage *FUN_00365bc4(s32 id);

#ifdef __cplusplus
}

/* The number of triggers (section 0). */
static inline u32 partnerInfoCount(void)
{
    void *table = dataTableGet(0x43, 0);
    dataTableGetEntries(table);
    return dataTableGetCount(table);
}

/* The trigger at `index`, or NULL past the end. Like conditionalMessageFind's record lookup,
 * this is inlined late: the caller keeps the out-of-range NULL across iterations. */
static PartnerInfoRecord *partnerInfoRecordAt(u32 index)
{
    void *table = dataTableGet(0x43, 0);
    PartnerInfoRecord *records = (PartnerInfoRecord *)dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    if (index >= count)
        return NULL;
    return records + index;
}
#endif

#endif
