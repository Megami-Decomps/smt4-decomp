#include "common.h"

extern "C" {

/* A record (only the fields read here): a kind byte at 6, a flags byte at 7 and four 8-byte
 * slots starting at 0x100 whose first halfword says whether the slot is used. */
typedef struct KindRecord {
    /* 0x00 */ u8 unk00[6];
    /* 0x06 */ u8 kind;
    /* 0x07 */ u8 flags;           /* 8: unavailable, 0x10: needs the mask */
    /* 0x08 */ u8 unk08[0xF8];
    struct {
        /* 0x100 */ u16 id;
        /* 0x102 */ u8 unk102[6];
    } slots[4];
} KindRecord;

typedef struct FlagEntry {
    u8 unk00[2];
    u8 mask;
} FlagEntry;

FlagEntry *gameFlagBlockGetEntry(void);
KindRecord *FUN_001ad9b4(u32 id);

/* The message id describing record `id`: by its kind, the id of its first slot and how many of
 * its four slots are used. Returns -1 when there is none. */
s32 FUN_003de464(u32 id, u8 mask)
{
    FlagEntry *entry = gameFlagBlockGetEntry();
    KindRecord *record = FUN_001ad9b4(id);

    if (record == NULL) {
        return -1;
    }
    if ((entry->mask & mask) == 0 && (record->flags & 0x10) != 0) {
        return 0x11;
    }
    if ((record->flags & 8) != 0) {
        return -1;
    }
    u16 first = record->slots[0].id;
    u8 kind = record->kind;
    u8 used = first != 0;

    if (record->slots[1].id != 0) {
        used++;
    }
    if (record->slots[2].id != 0) {
        used++;
    }
    if (record->slots[3].id != 0) {
        used++;
    }
    if (kind != 3) {
        if (kind >= 3) {
            if (kind != 7) {
                if (kind == 10 && first == 8) {
                    return 0x42;
                }
                return -1;
            }
            if (used == 1) {
                return 0x34;
            }
            if (used != 2) {
                if (used == 3) {
                    return 0x36;
                }
                if (used == 4) {
                    return 0x37;
                }
                return -1;
            }
            return 0x35;
        }
        if (kind != 0) {
            if (kind != 1) {
                return -1;
            }
            if (used == 1) {
                return 0x16;
            }
            if (used == 2) {
                return 0x17;
            }
            if (used != 3) {
                if (used == 4) {
                    return 0x19;
                }
                return -1;
            }
            return 0x18;
        }
        if (first == 1 || first == 7) {
            if (used == 1) {
                return 0x12;
            }
            if (used == 2) {
                return 0x13;
            }
            if (used == 3) {
                return 0x14;
            }
            if (used == 4) {
                return 0x15;
            }
            return -1;
        }
        if (first == 2) {
            if (used == 1) {
                return 0x2E;
            }
            if (used == 2) {
                return 0x2F;
            }
            if (used == 3) {
                return 0x30;
            }
            if (used == 4) {
                return 0x31;
            }
            return -1;
        }
    } else {
        if (first == 1 || first == 7) {
            if (used == 1) {
                return 0x1A;
            }
            if (used == 2) {
                return 0x1B;
            }
            if (used == 3) {
                return 0x1C;
            }
            if (used == 4) {
                return 0x1D;
            }
            return -1;
        }
        if (first == 2) {
            if (used == 1) {
                return 0x1E;
            }
            if (used == 2) {
                return 0x1F;
            }
            if (used == 3) {
                return 0x20;
            }
            if (used == 4) {
                return 0x21;
            }
            return -1;
        }
    }
    if (first == 6) {
        return 0x29;
    }
    if (first == 5) {
        if (used == 1) {
            return 0x2A;
        }
        if (used == 2) {
            return 0x2B;
        }
        if (used == 3) {
            return 0x2C;
        }
        if (used == 4) {
            return 0x2D;
        }
    }
    return -1;
}

}
