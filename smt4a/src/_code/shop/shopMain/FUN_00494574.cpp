/* NON_MATCHING: visibility guard and alternate-label branches merge earlier; pair and glyph base registers differ. */
#include "shard/Shard0049.h"
#include <string.h>

struct EquipmentDetailPair { s32 left; s32 right; };
struct EquipmentDetailGlyphTable {
    u8 prefix[0xB8];
    u32 glyphs[16];
};

extern "C" {
extern const EquipmentDetailPair DAT_00588ef0[];
extern const EquipmentDetailPair DAT_00588f28[];
extern const EquipmentDetailGlyphTable g_equipMenuStateHandlerInit;
s32 gameFlagIsSet(u32);
void FUN_0049368c(const AsdTextureRegion *, u32, s32, s32, u32, u32);

void FUN_00494574(EquipmentMenuState *work, s32 selection)
{
    if ((work->sound.mode == 0 || work->sound.mode == 1) && selection == 7)
        return;
    if (work->page == 0 && (work->sound.restricted || !gameFlagIsSet(0x410)) && work->sound.mode != 1)
        return;
    u32 color = work->detail.color;
    FUN_0049368c(&work->detail.region, 0x65, 0, 0, color, 1);
    FUN_0049368c(&work->detail.region, 0x66, 0, 0, color, 1);
    EquipmentDetailPair pair;
    if (work->sound.mode != 1) {
        pair = DAT_00588ef0[work->page];
    } else {
        pair = DAT_00588f28[work->page];
        if (work->page == 0 && (work->sound.restricted || !gameFlagIsSet(0x410)))
            pair = DAT_00588f28[8];
        else if (work->page == 3 && (work->sound.restricted || !gameFlagIsSet(0x410)))
            pair = DAT_00588f28[9];
    }
    u32 glyphs[16];
    memcpy(glyphs, g_equipMenuStateHandlerInit.glyphs, sizeof(glyphs));
    FUN_0049368c(&work->detail.region, glyphs[pair.left], 0, 0, color, 1);
    FUN_0049368c(&work->detail.region, glyphs[pair.right + 8], 0, 0, color, 1);
}
}
