#include "common.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

/* The font system's table of glyph sets. */
typedef struct AsdFontTable {
    void *items; /* 0x00 */
    s32 count;   /* 0x04 */
} AsdFontTable;

extern AsdFontTable DAT_00464a70;

extern void FUN_00100238(int kind, const char *name);
extern void *asdMemoryAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);

/* Selects the Shift-JIS encoding and allocates a table of `count` 0x2c-byte entries. */
void asdFontAllocateGlyphSets(s32 count)
{
    u32 size;

    FUN_00100238(2, "SJIS");
    DAT_00464a70.count = count;
    size = count * 0x2c;
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Gfx\\Font\\AsdFont.cpp", 617);
    DAT_00464a70.items = asdMemoryAlloc(0x100, 0x100, 0, size, 1);
}

} /* extern "C" */
