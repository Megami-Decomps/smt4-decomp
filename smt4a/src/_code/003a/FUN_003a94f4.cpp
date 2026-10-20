/* Script command: result = byte +0x39 of the entry for the argument (0 if there is none). Returns 1. */
#include "common.h"

extern "C" {

struct Entry003a94f4 {
    /* 0x00 */ u8 unk00[0x39];
    /* 0x39 */ u8 value;
};

u32 scrGetArg(u32 index);
void scrSetResult(u32 value);
Entry003a94f4 *FUN_00184310(u32 id);

u32 FUN_003a94f4(u32 index)
{
    u16 id = scrGetArg(index);
    u32 result = 0;
    Entry003a94f4 *entry = FUN_00184310(id);

    if (entry != NULL) {
        result = entry->value;
    }
    scrSetResult(result);
    return 1;
}

}
