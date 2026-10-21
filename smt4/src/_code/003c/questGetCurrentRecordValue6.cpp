#include "shard/GameOptions.h"

extern "C" {

extern int questRecordFindById(u16 id);
extern GameOptions *gameGetSupportUnitData(void);
extern int gameGetOptionProgressStatus(void);

typedef struct Record {
    /* 0x0 */ u8 unk0[6];
    /* 0x6 */ u16 unk6;
} Record;

u16 questGetCurrentRecordValue6(void)
{
    u16 value = 0;
    GameOptions *options;
    Record *record;

    if (gameGetOptionProgressStatus() == 2) {
        options = gameGetSupportUnitData();
        record = (Record *)questRecordFindById(options->unk46);
        value = record->unk6;
    }
    return value;
}

} /* extern "C" */
