/* NON_MATCHING: armcc unrolls the entry scan by two and merges the first file guard into the entries test; retail keeps one rolled loop. */
#include "common.h"

extern "C" {

typedef struct TableEntry {
    /* 0x00 */ void *data;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ u8 used;
    /* 0x0D */ u8 unk0D[3];
} TableEntry;

typedef struct TableOwner {
    /* 0x00 */ u8 unk00[0x45];
    /* 0x45 */ u8 loaded;
    /* 0x46 */ u8 unk46[2];
    /* 0x48 */ void *file;
    /* 0x4C */ TableEntry *entries;
} TableOwner;

void dataTableFileGetTable(void *file, s32 index);
TableEntry *dataTableGetEntries(void);
u32 dataTableGetCount(void);

static void *tableOwnerFile(TableOwner *owner)
{
    return owner->loaded ? owner->file : NULL;
}

/* Return 0 when any used entry of the owner's table has no data yet, else 1. */
s32 FUN_0038ba40(TableOwner *owner)
{
    void *file;
    TableEntry *entries;
    u32 count;
    u32 i;

    if (owner->entries == NULL) {
        return 1;
    }
    file = tableOwnerFile(owner);
    if (file != NULL) {
        dataTableFileGetTable(file, 0);
        dataTableGetEntries();
    }
    file = tableOwnerFile(owner);
    if (file == NULL) {
        return 1;
    }
    dataTableFileGetTable(file, 0);
    count = dataTableGetCount();
    entries = count != 0 ? owner->entries : NULL;
    for (i = 0; i < count; i++) {
        if (entries[i].used && entries[i].data == NULL) {
            return 0;
        }
    }
    return 1;
}

} /* extern "C" */
