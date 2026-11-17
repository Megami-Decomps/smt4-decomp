/* The party panel's help lines: data table 0x39, camp/PartyPanelHelp.tbb (the table ids follow the
 * game's data-file list, NKMBaseTable.tbb = 0). The row differs between the games (IV 0x54 bytes,
 * Apocalypse 0x5C); the panel shows a row's text with buttonHelpSetText. */
#ifndef GAMEDATA_PARTYPANELHELP_H
#define GAMEDATA_PARTYPANELHELP_H

#include "gamedata/DataTable.h"
#include <stddef.h>

/* IV: one 0x54-byte row of PartyPanelHelp.tbb table 0 (data table 0x39, section 0). */
struct PartyPanelHelpRecord {
    /* 0x00 */ u8 kind;
    /* 0x01 */ char text[0x53];
};

/* Apocalypse: one 0x5C-byte row of PartyPanelHelp.tbb table 0 (data table 0x39, section 0). */
struct PartyPanelHelpRecordA {
    /* 0x00 */ u8 kind;
    /* 0x01 */ char text[0x5B];
};

typedef char PartyPanelHelpRecordLayoutCheck[
    sizeof(PartyPanelHelpRecord) == 0x54 &&
    sizeof(PartyPanelHelpRecordA) == 0x5C &&
    offsetof(PartyPanelHelpRecordA, text) == 1 ? 1 : -1];

#ifdef __cplusplus
/* IV: the rows of section 0 of `table` (dataTableGet(0x39, 0)). */
static inline PartyPanelHelpRecord *partyPanelHelpRecords(void *table)
{
    return static_cast<PartyPanelHelpRecord *>(dataTableGetEntries(table));
}

/* Apocalypse: the rows of section 0 of `table` (dataTableGet(0x39, 0)). */
static inline PartyPanelHelpRecordA *partyPanelHelpRecordsA(void *table)
{
    return static_cast<PartyPanelHelpRecordA *>(dataTableGetEntries(table));
}
#endif

#endif
