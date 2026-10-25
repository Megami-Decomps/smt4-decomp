#ifndef ADDON_AOCLOOKUP_H
#define ADDON_AOCLOOKUP_H

#include "common.h"
#include "addon/aocMain.h"

struct AocTableSearchRecord {
    /* 0x000 */ u16 id;
    /* 0x002 */ u8 unk002[0x1B2];
};

struct AocTableSearchRecordA {
    /* 0x000 */ u16 id;
    /* 0x002 */ u8 unk002[0x132];
};

#ifdef __cplusplus
extern "C" {
#endif

u32 FUN_00471d00(AocSystemA* system);

#ifdef __cplusplus
}
#endif

#endif
