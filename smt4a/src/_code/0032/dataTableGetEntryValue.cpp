/* NON_MATCHING: retail emits 'mov r1, r0'; compiler emits 'add r1, r4, r4, lsl #1' at the first differing instruction. */
#include "common.h"
extern "C" {
void *dataTableGet(u32, u32);
const void *dataTableGetEntries(void *);
struct Entry { u8 unk00[0x20]; u16 value; u8 unk22[0xA]; };
u16 dataTableGetEntryValue(u32 index) {
    const Entry *entry = (const Entry *)dataTableGetEntries(dataTableGet(0x4A, 0)) + index;
    return entry ? entry->value : 0;
}
}
