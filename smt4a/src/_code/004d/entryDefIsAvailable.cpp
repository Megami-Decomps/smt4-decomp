#include "common.h"
#include "shard/entryDefIsAvailable.h"

struct EntryDef4daf18 {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 unk02[0x8];
    /* 0x0A */ u16 flags;      /* 1: available */
    /* 0x0C */ u8 unk0C[0x28];
    /* 0x34 */ u32 attributes; /* 0x200000: excluded */
    /* 0x38 */ u8 unk38[0x4];
    /* 0x3C */ u16 saveLink;   /* bit 0: needs a save entry; bits 1-15: its index (0 = own id) */
    /* 0x3E */ u16 requiredFlag;
};

struct SaveEntry4daf18 {
    /* 0x00 */ u8 unk00[0x36];
    /* 0x36 */ u16 state;
    /* 0x38 */ u8 unk38[0x18];
};

extern "C" {

EntryDef4daf18 *FUN_00184310(u16 id);
s32 gameFlagIsSet(u32 flag);
u32 gameDataCopySaveEntry(u32 index, void *dest);

static inline u32 saveEntryIsActive(u32 index)
{
    SaveEntry4daf18 save;
    if (!gameDataCopySaveEntry(index, &save)) {
        return 0;
    }
    return (save.state & 0xFC) != 0;
}

// Whether the entry with this ID is available: not excluded, its flag set and its save entry valid.
u32 entryDefIsAvailable(void *unused, u16 id)
{
    EntryDef4daf18 *entry = FUN_00184310(id);
    if (entry != NULL && !(entry->attributes & 0x200000) &&
        (entry->requiredFlag == 0 || gameFlagIsSet(entry->requiredFlag))) {
        if (entry->saveLink & 1) {
            u32 active;
            if (entry->saveLink & ~1) {
                active = saveEntryIsActive(entry->saveLink >> 1);
            } else {
                active = saveEntryIsActive(entry->id);
            }
            if (!active) {
                return 0;
            }
        }
        if (entry->flags & 1) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
