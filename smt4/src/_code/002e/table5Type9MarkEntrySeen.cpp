/* NON_MATCHING: written as the Apocalypse twin FUN_0035dfc0, with the same residue: retail keeps the byte pointer in r2
 * and the loaded byte in r0 (build: pointer r0, byte r2). */
#include "common.h"
#include "status/StatusCamera.h"
#include "gamedata/DataTableAccess.h"

struct IdRecord {
    u16 id;  // 0x00
};

struct BitFlags {
    u8 unk00[0x35];  // 0x00
    u8 bits[1];      // 0x35
};

extern "C" {

IdRecord *dataTableFindRecordWord(u16 index);

/* Sets the flag bit of the entry whose record id is `id`. */
void table5Type9MarkEntrySeen(u16 id)
{
    u32 count = dataTable05Sub9GetCount();

    for (s32 i = 0; i < count; i++) {
        IdRecord *record = dataTableFindRecordWord(i);
        if (record != NULL && record->id == id) {
            u8 *byte = &((BitFlags *)gameDataGetSortPreferences())->bits[i / 8];
            if ((*byte & (1 << (i % 8))) == 0) {
                *byte |= 1 << (i % 8);
            }
            return;
        }
    }
}

} /* extern "C" */
