#ifndef GAMEDATA_ITEM_FLAG_STATE_H
#define GAMEDATA_ITEM_FLAG_STATE_H
#include "common.h"
#include <stddef.h>

/* The roll state of one (map, area) encounter (gameDataGetTableEntry; gamedata/EncountData.h). */
struct ItemFlagCacheState {
    /* 0x00 */ u16 value;                 /* the encounter table chosen last */
    /* 0x02 */ u8 count;                  /* bit mask of the weight groups already used this phase */
    union {
        /* 0x03 */ u8 flags;
        struct {
            u8 holdFrames : 5;            /* rolls left before the table is rolled again */
            u8 changed : 1;               /* set when a roll changed the table (and notify is on) */
            u8 notify : 1;
            u8 enabled : 1;
        } bits;
    };
};
typedef char ItemFlagDefinitionALayout[
    offsetof(ItemFlagCacheState, count) == 2 &&
    offsetof(ItemFlagCacheState, flags) == 3 &&
    sizeof(ItemFlagCacheState) == 4 ? 1 : -1];
#endif
