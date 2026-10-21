/* NON_MATCHING: erased pre-length weak call has no relocation target; allocation and copy are translated normally. */
#include "common.h"
extern "C" {
extern u8 DAT_0064c010;
u32 wstrlen(const u16 *text);
void *FUN_00101518(void *holder, u32 offset, u32 size, u32 capacity);
void FUN_002e40ec(void *output, const u16 *text, u32 length);
void **FUN_002e3ef4(void **holder, const u16 *text, u32 option) {
    /* Retail has an erased call with holder and option before computing the length. */
    u32 length = wstrlen(text);
    void *data = length ? FUN_00101518(holder, 0, length, length) : &DAT_0064c010;
    *holder = data;
    FUN_002e40ec(data, text, length);
    return holder;
}
}
