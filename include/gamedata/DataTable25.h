/* Data table 25: 0x2c-byte records searched by the u16 id at 0x20. */
#ifndef GAMEDATA_DATATABLE25_H
#define GAMEDATA_DATATABLE25_H

#include "common.h"

struct AocSystem;

struct DataTable25Record {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 id;
    /* 0x22 */ u8 unk22[0x2c - 0x22];
};

#ifdef __cplusplus
extern "C" {
#endif

DataTable25Record *dataTable25FindById(u32 id);

#ifdef __cplusplus
}
#endif

#endif
