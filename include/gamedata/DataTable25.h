/* Data table 25: 0x2c-byte records searched by the u16 id at 0x20. */
#ifndef GAMEDATA_DATATABLE25_H
#define GAMEDATA_DATATABLE25_H

#include "common.h"
#include <stddef.h>

struct AocSystem;

struct DataTable25Record {
    union {
        /* 0x00 */ u8 unk00[0x20];
        /* 0x00 */ char name[0x20];
    };
    /* 0x20 */ u16 id;
    /* 0x22 */ u8 unk22[0x2b - 0x22];
    /* 0x2B */ u8 flags;    /* bustupTextureStart tests it to place a bustup, though both placements are (25, 25) */
};
typedef char DataTable25RecordLayoutCheck[
    sizeof(DataTable25Record) == 0x2C && offsetof(DataTable25Record, id) == 0x20 ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif

DataTable25Record *aocPackageFindRecordById(AocSystem *system, u32 id);
DataTable25Record *dataTable25FindById(u32 id);

#ifdef __cplusplus
}
#endif

#endif
