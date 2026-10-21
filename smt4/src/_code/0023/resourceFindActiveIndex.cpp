#include "common.h"
extern "C" {
struct EntryState { u32 unk00; u32 active; u8 unk08[8]; };
extern EntryState g_fileSlots[67];
/* Test whether an in-range table entry is active. */
s32 resourceFindActiveIndex(u32 index) { return index<67 ? g_fileSlots[index].active!=0 : 0; }
}
