/* NON_MATCHING: retail keeps NULL in a saved register (r9, with sl saved too) for the out-of-range entry, loads the add-on pointer unconditionally and materialises dataTableGet arguments as r0 then r1. */
#include "gamedata/DataTable.h"

/* Table 0x23 section 0 record (0x20 bytes). */
struct Table23Type0Entry {
    /* 0x00 */ s32 id;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ s8 kind; /* -1: end of the list */
    /* 0x09 */ u8 unk09[0x17];
};

/* Records the add-on content appends to table 0x23 section 0. */
struct Table23Type0Extra {
    /* 0x000 */ u8 unk000[0x3E4];
    /* 0x3E4 */ s32 count;
    /* 0x3E8 */ Table23Type0Entry *entries;
};

extern "C" {
extern Table23Type0Extra *g_aocSystem;

static __inline s32 table23Type0Count(void)
{
    return dataTableGetCount(dataTableGet(0x23, 0)) + g_aocSystem->count;
}

static __inline Table23Type0Entry *table23Type0Get(u32 index)
{
    void *section = dataTableGet(0x23, 0);
    Table23Type0Entry *entries = (Table23Type0Entry *)dataTableGetEntries(section);
    u32 count = dataTableGetCount(section);
    if (index < count) {
        return &entries[index];
    }
    if (index < count + g_aocSystem->count) {
        return &g_aocSystem->entries[index - count];
    }
    return NULL;
}

/* Returns the index of the table 0x23 section 0 record (base, then add-on) with `id`, or -1. */
s32 dataTable23Type0FindIndexById(s32 id)
{
    for (s32 i = 0; i < table23Type0Count(); i++) {
        Table23Type0Entry *entry = table23Type0Get(i);
        if (entry->kind == -1) {
            return -1;
        }
        if (entry->id == id) {
            return i;
        }
    }
    return -1;
}
}
