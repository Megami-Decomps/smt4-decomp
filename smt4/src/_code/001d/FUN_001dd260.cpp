#include "common.h"

struct TouchValueRecord {
    /* 0x00 */ u16 unk00;
    /* 0x02 */ s16 value;
    /* 0x04 */ u32 unk04;
};

struct TouchValueTable {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ TouchValueRecord records[1];
};

struct TouchValueHolder {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ TouchValueTable *table;
};

extern "C" TouchValueHolder g_ifTouch;

// Read the selected touch value, or zero when the table is unavailable.
extern "C" s32 FUN_001dd260(u32 index)
{
    return g_ifTouch.table != NULL ? g_ifTouch.table->records[index].value : 0;
}
