#include "common.h"

struct Table02Record;
struct Table02LinkedIds {
    u8 unk00[0x14];
    u16 ids[6];
    u8 unk20[8];
};
struct Table00FlagEntry {
    u8 unk00[2];
    u16 flags;
};

extern "C" {
Table02Record *FUN_004bb80c(s32 index);
const Table00FlagEntry *dataTable00FindById(u16 id);


u32 dataTable02RecordHasFlaggedLink(s32 index)
{
    const Table02LinkedIds *record = (const Table02LinkedIds *)FUN_004bb80c(index);
    if (record != NULL) {
        for (s32 slot = 0; slot < 6; ++slot) {
            u16 id = record->ids[slot];
            if (id != 0) {
                const Table00FlagEntry *entry = dataTable00FindById(id);
                if (entry != NULL && (entry->flags & 0x8000) != 0) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

} /* extern "C" */
