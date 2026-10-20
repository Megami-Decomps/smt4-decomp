#include "shard/Shard003B.h"

extern "C" {

extern s32 FUN_003e4a00(void);
extern s32 randRange(u32 value);
extern Rec12C *FUN_003e4d68(u32 index);
extern s32 FUN_00187168(Rec12C *entry);
extern void scrSetResult(u32 value);

/* Script command: result is a halfword (+0x12C) of the n-th active entry selected by FUN_003e4a00, or 0xAD. */
u32 scrCommPickEntryHalf(void)
{
    u16 result = 0xAD;
    s32 count = FUN_003e4a00();
    s32 skip;
    u32 i;
    Rec12C *entry;

    if (0 < count) {
        skip = randRange((count + 1U) & 0xFFFF);
        i = 0;
        do {
            entry = FUN_003e4d68(i & 0xFFFF);
            if (FUN_00187168(entry) != 0) {
                if (skip == 0) {
                    result = entry->unk12C;
                    break;
                }
                skip--;
            }
            i++;
        } while ((s32)i < 0xC);
    }
    scrSetResult(result);
    return 1;
}

} /* extern "C" */
