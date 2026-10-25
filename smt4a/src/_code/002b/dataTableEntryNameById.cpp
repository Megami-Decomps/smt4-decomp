/* NON_MATCHING: retail hoists the constant 0 for the missing entry into r9 across the loop (movgt r9,#0 / movcs r0,r9) and saves r9/sl; the build loads the immediate */
#include "gamedata/DataTable.h"

extern "C" {

typedef struct Entry002b7af0 {
    /* 0x00 */ char name[0x20];
    /* 0x20 */ s16 id;          /* -1 ends the table */
    /* 0x22 */ u8 unk22[0xa];
} Entry002b7af0;


/* Name of entry `id` in data table 0x2e section 2 (0 when the table ends first); id 10 read as kind 9 or 10 has its own fixed name. */
const char *dataTableEntryNameById(s32 id, s32 kind)
{
    u32 i = 0;

    if ((s32)dataTableGetCount(dataTableGet(0x2e, 2)) > 0) {
        do {
            DataTableView<Entry002b7af0> table(0x2e, 2);
            Entry002b7af0 *entry = table.at(i);
            if (entry->id == -1) {
                return NULL;
            }
            if (entry->id == id) {
                if (entry->id == 10 && (kind == 9 || kind == 10)) {
                    return "\x82r\x82\x8b\x82\x99\x81@\x82s\x82\x8f\x82\x97\x82\x85\x82\x92";
                }
                return entry->name;
            }
            i++;
        } while ((s32)i < (s32)dataTableGetCount(dataTableGet(0x2e, 2)));
    }
    return NULL;
}

} /* extern "C" */
