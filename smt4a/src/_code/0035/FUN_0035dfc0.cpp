/* NON_MATCHING: register allocation only: retail keeps the byte pointer in r2 and the loaded byte in r0 (build: pointer r0, byte r2). */
#include "common.h"

extern "C" {

u32 dataTable5Type9Count(void);
u8 *FUN_0026140c(void);
u16 *dataTableFindRecordWord(u32 index);

/* Marks table 5 type 9 entry `id` in the save data's bit array at +0x39. */
void FUN_0035dfc0(u32 id)
{
    u32 count = dataTable5Type9Count();

    for (s32 i = 0; i < count; i++) {
        u16 *record = dataTableFindRecordWord((u16)i);
        if (record != NULL && *record == id) {
            u8 *byte = FUN_0026140c() + 0x39 + i / 8;
            if ((*byte & (1 << (i % 8))) == 0) {
                *byte |= 1 << (i % 8);
            }
            return;
        }
    }
}

} /* extern "C" */
