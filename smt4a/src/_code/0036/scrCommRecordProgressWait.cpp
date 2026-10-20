#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[0x54];
    /* 0x54 */ u16 count;
} Record;

extern s32 scrGetCommandFrame(void);
extern Record *FUN_00192550(u32 id);
extern s32 FUN_0036b6cc(void);
extern s32 sceneHolderUpdate(void);

/* Script command: on the first frame starts FUN_0036b6cc when record 0x7B6 has a count; then reports whether sceneHolderUpdate is done. */
u32 scrCommRecordProgressWait(void)
{
    if (scrGetCommandFrame() == 0) {
        Record *record = FUN_00192550(0x7B6);

        if (record == NULL || record->count == 0) {
            return 1;
        }
        FUN_0036b6cc();
    }
    if (sceneHolderUpdate() != 0) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
