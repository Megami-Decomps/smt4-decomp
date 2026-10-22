#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[0x54];
    /* 0x54 */ u16 count;
} Record;

extern s32 scrGetCommandFrame(void);
extern Record *dataTable8FindRecord(u32 id);
extern s32 arousalSkillOpen(void);
extern s32 sceneHolderUpdate(void);

/* Script command: on the first frame starts arousalSkillOpen when record 0x7B6 has a count; then reports whether sceneHolderUpdate is done. */
u32 scrCommRecordProgressWait(void)
{
    if (scrGetCommandFrame() == 0) {
        Record *record = dataTable8FindRecord(0x7B6);

        if (record == NULL || record->count == 0) {
            return 1;
        }
        arousalSkillOpen();
    }
    if (sceneHolderUpdate() != 0) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
