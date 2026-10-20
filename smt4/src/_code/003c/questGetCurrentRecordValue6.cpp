#include "shard/GameOptions.h"

extern "C" {

extern int FUN_00229f30(u16 id);
extern GameOptions *gameGetOptions(void);
extern int FUN_002b6b38(void);

typedef struct Record {
    /* 0x0 */ u8 unk0[6];
    /* 0x6 */ u16 unk6;
} Record;

u16 questGetCurrentRecordValue6(void)
{
    u16 value = 0;
    GameOptions *options;
    Record *record;

    if (FUN_002b6b38() == 2) {
        options = gameGetOptions();
        record = (Record *)FUN_00229f30(options->unk46);
        value = record->unk6;
    }
    return value;
}

} /* extern "C" */
