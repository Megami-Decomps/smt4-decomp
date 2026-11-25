#ifndef GAMEDATA_DATATABLE25APOCALYPSE_H
#define GAMEDATA_DATATABLE25APOCALYPSE_H

#include "common.h"
#include <stddef.h>

struct AocSystemA;

/* Apocalypse's table-25 row, also used by kind-11 add-on package tables. */
struct DataTable25RecordA {
    /* 0x00 */ char name[0x20];
    /* 0x20 */ s16 id;
    /* 0x22 */ u16 portraitId; /* npc2dCreatePortraitJob selects the NPC portrait with its negation */
    /* 0x24 */ u8 unk24[3];
    /* 0x27 */ u8 flags; /* bustupTextureStart tests it when setting the default position */
};
typedef char DataTable25RecordALayoutCheck[
    sizeof(DataTable25RecordA) == 0x28 && offsetof(DataTable25RecordA, id) == 0x20 &&
    offsetof(DataTable25RecordA, portraitId) == 0x22 && offsetof(DataTable25RecordA, flags) == 0x27 ? 1 : -1];

extern "C" {
DataTable25RecordA *aocPackageFindRecordById(AocSystemA *system, u32 id);
DataTable25RecordA *dataTable25FindById(u32 id);
}

#endif
