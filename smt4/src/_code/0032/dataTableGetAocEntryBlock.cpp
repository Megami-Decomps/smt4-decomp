#include "common.h"

extern "C" {

extern u32 fileSlotGetBuffer(u32 slot);
extern u32 binFileGetValue(void);
extern u32 FUN_0024ba44(u32 buffer, u32 group);
extern u32 tbcrBlockGetPayload(void);
extern void dataTableFileGetTable(u32 table, u32 index);
extern u8 *dataTableGetEntries(void);

/* Looks up the entry block (0x19C bytes) for table group `kind` (0..12, three variants each) in
 * the add-on data table; `variant` 1 and 6 pick the second/third table of the group, `isSecond`
 * and `swap` pick the first or second block. Returns 0 for an unknown kind. */
u8 *dataTableGetAocEntryBlock(s32 isSecond, u32 kind, s32 swap, s32 variant)
{
    u32 group = 0x26;
    u32 row = 0;
    u32 second;
    u32 table;
    u8 *entries;

    switch (kind) {
    case 0:
        break;
    case 1:
        row = 3;
        break;
    case 2:
        row = 6;
        break;
    case 3:
        row = 9;
        break;
    case 4:
        row = 12;
        break;
    case 5:
        row = 15;
        break;
    case 6:
        row = 18;
        break;
    case 7:
        row = 21;
        break;
    case 8:
        row = 24;
        break;
    case 9:
        row = 27;
        break;
    case 10:
        row = 30;
        break;
    case 11:
        row = 33;
        break;
    case 12:
        row = 36;
        break;
    default:
        return 0;
    }
    if (variant == 1) {
        row = row + 1;
    } else if (variant == 6) {
        row = row + 2;
    }
    table = fileSlotGetBuffer(7);
    if (binFileGetValue() <= 0x26) {
        group = 0;
    }
    table = FUN_0024ba44(table, group);
    if (tbcrBlockGetPayload() <= row) {
        row = 0;
    }
    dataTableFileGetTable(table, row);
    entries = dataTableGetEntries();
    second = 0;
    if (isSecond != 0) {
        second = 1;
    }
    if (swap != 0) {
        second = 1 - second;
    }
    return entries + second * 0x19C;
}

} /* extern "C" */
