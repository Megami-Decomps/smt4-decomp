#include "common.h"

extern "C" {

typedef struct SizeOverride {
    /* 0x00 */ s16 width;
    /* 0x02 */ s16 height;
    /* 0x04 */ s16 enabled;      /* 1 = use this override */
    /* 0x06 */ u8 unk06[6];
    /* 0x0C */ u8 flags;         /* bit 0: use this override */
} SizeOverride;

typedef struct SizeEntry {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 width;
    /* 0x06 */ u16 height;
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ SizeOverride *override;
    /* 0x10 */ u8 unk10[4];
} SizeEntry;

typedef struct SizeTable {
    /* 0x00 */ SizeEntry *entries;
} SizeTable;

typedef struct SizeTableOwner {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ SizeTable *table;
} SizeTableOwner;

SizeTableOwner *asdTMTexTableCallFileA(void);

/* Looks up the width/height of entry `index % 1000`, preferring its override when enabled; either output may be NULL. */
void uiGetEntrySize(u32 unused, int index, u32 *outWidth, u32 *outHeight)
{
    SizeTableOwner *owner = asdTMTexTableCallFileA();
    SizeEntry *entry = owner->table->entries + index % 1000;
    SizeOverride *override = entry->override;
    u32 width = entry->width & 0xffff7fff;
    u32 height = entry->height & 0xffff7fff;

    if (override != NULL && (override->enabled == 1 || (override->flags & 1) != 0)) {
        width = override->width;
        height = override->height;
    }
    if (outWidth != NULL) {
        *outWidth = width;
    }
    if (outHeight != NULL) {
        *outHeight = height;
    }
}

} /* extern "C" */
