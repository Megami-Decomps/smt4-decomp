#include "common.h"

extern "C" {

extern int questRecordFindById(u16 id);
extern u8 *gameGetOptions(void);
extern int FUN_002b6b38(void);

typedef struct Record {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u16 unk4;
    /* 0x6 */ u16 unk6;
    /* 0x8 */ u16 unk8;
} Record;

u16 questGetCurrentRecordValue8(void)
{
    u16 value = 0;
    u8 *options;
    Record *record;

    if (FUN_002b6b38() == 2) {
        options = gameGetOptions();
        record = (Record *)questRecordFindById(*(u16 *)(options + 0x46));
        value = record->unk8;
    }
    return value;
}

} /* extern "C" */
