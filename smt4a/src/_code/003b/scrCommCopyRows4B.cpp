#include "shard/Shard003B.h"

extern "C" {

typedef struct Row64 {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u16 unk34;
    /* 0x36 */ u8 unk36[0x2A];
    /* 0x60 */ u16 unk60;
    /* 0x62 */ u8 unk62[2];
} Row64;

extern s32 scrGetArg(s32 index);
extern void FUN_003f86f8(u32 id);
extern void *dataTableGet(u32 index, u32 type);
extern Row64 *dataTableGetEntries(void *table);
extern void FUN_00333474(Row64 *row);
extern void FUN_001add24(u32 id);

/* Script command: for each row from argument 0 to argument 1 of table 0x4B copies the value at +0x60 to +0x34. */
u32 scrCommCopyRows4B(void)
{
    s32 first = scrGetArg(0);
    s32 last = scrGetArg(1);
    Row64 *row;

    FUN_003f86f8(0x4B);
    for (; first <= last; first++) {
        row = dataTableGetEntries(dataTableGet(0x4B, 0)) + first;
        if (row != NULL) {
            row->unk34 = row->unk60;
            FUN_00333474(row);
        }
    }
    FUN_001add24(0x4B);
    return 1;
}

} /* extern "C" */
