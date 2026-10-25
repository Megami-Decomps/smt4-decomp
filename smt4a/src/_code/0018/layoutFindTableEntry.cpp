#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

typedef struct LayoutFile {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 file;
} LayoutFile;

u16 *FUN_001834a4(u32 file, s32 index);

/* Looks up the table entry `index` in the file of a layout; the tail call to the next function is linked as a nop. */
u16 *layoutFindTableEntry(void *layout, s32 index)
{
    return FUN_001834a4(static_cast<LayoutFile *>(layout)->file, index);
}

} /* extern "C" */
