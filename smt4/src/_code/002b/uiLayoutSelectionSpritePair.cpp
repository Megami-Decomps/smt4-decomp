#include "shard/W6_W6Match8_AnimatedSprite.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

namespace {
struct SpritePairWork {
    u8 unk000[9];
    u8 kind;
    u8 unk00a[0xe];
    s32 selection;
    u8 unk01c[4];
    s32 count;
    u8 unk024[0x244];
    UiSpriteState first; // 0x268
    u8 unk2f4[0x8c];
    UiSpriteState second; // 0x380
};
struct SpriteIndices2 { u32 ids[2]; };
struct SpriteIndices3 { u32 ids[3]; };
struct SpriteIndices4 { u32 ids[4]; };
/* Sprite id sets for the three- and four-entry selections. */
struct SpritePairIndexSets {
    u8 unk00[0x58];
    SpriteIndices3 firstThree;  // 0x58
    SpriteIndices3 secondThree; // 0x64
    SpriteIndices4 firstFour;   // 0x70
    SpriteIndices4 secondFour;  // 0x80
};
/* Sprite id sets for the two-entry selection. */
struct SpritePairTwoIndexSets {
    SpriteIndices2 first;
    SpriteIndices2 second;
};
}

extern "C" {
extern const SpritePairIndexSets DAT_004040d4;
extern const SpritePairTwoIndexSets DAT_00403cd4;
void pairSetHalves(UiSpriteState* sprite, s16 first, s16 second);

// Size the selection's two sprites from the table entries chosen for a two-, three- or four-entry list.
void uiLayoutSelectionSpritePair(SpritePairWork* work)
{
    const TextureTableEntryIV* first = NULL;
    const TextureTableEntryIV* second = NULL;
    if (work->kind == 11) {
        switch (work->count) {
        case 2: {
            SpriteIndices2 primary = DAT_00403cd4.first;
            first = asdTMTexTableEntryAt(0xe, primary.ids[work->selection]);
            SpriteIndices2 secondary = DAT_00403cd4.second;
            second = asdTMTexTableEntryAt(0xe, secondary.ids[work->selection]);
            break;
        }
        case 3: {
            SpriteIndices3 primary = DAT_004040d4.firstThree;
            first = asdTMTexTableEntryAt(0xe, primary.ids[work->selection]);
            SpriteIndices3 secondary = DAT_004040d4.secondThree;
            second = asdTMTexTableEntryAt(0xe, secondary.ids[work->selection]);
            break;
        }
        case 4: {
            SpriteIndices4 primary = DAT_004040d4.firstFour;
            first = asdTMTexTableEntryAt(0xe, primary.ids[work->selection]);
            SpriteIndices4 secondary = DAT_004040d4.secondFour;
            second = asdTMTexTableEntryAt(0xe, secondary.ids[work->selection]);
            break;
        }
        }
    } else if (work->kind == 19) {
        return;
    }
    pairSetHalves(&work->first, first->x, first->y);
    pairSetHalves(&work->second, second->x, second->y);
}
} // extern "C"
