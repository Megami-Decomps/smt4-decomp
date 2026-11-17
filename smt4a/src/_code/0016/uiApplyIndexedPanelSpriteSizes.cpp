#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

struct PanelSizeObjectA { u8 unk00[0x18]; u16 width, height; };
struct IndexedPanelSizeWorkA {
    u8 unk00[9];
    u8 kind;
    u8 unk0a[0xe];
    s32 selection;
    u32 unk1c;
    s32 columns;
    u8 unk24[0x334];
    PanelSizeObjectA first;
    u8 unk374[0xfc];
    PanelSizeObjectA second;
    u8 unk48c[0x1420];
    PanelSizeObjectA overlay;
};
struct SpriteIndices2 { u32 ids[2]; };
struct SpriteIndices3 { u32 ids[3]; };
struct SpriteIndices4 { u32 ids[4]; };
struct PanelSizeIndexSetsA {
    u8 unk00[0x88];
    SpriteIndices3 firstThree;
    SpriteIndices3 secondThree;
    SpriteIndices4 firstFour;
    SpriteIndices4 secondFour;
};
struct PanelSizePairIndexSetsA {
    u8 unk00[0x10];
    SpriteIndices2 first;
    SpriteIndices2 second;
};
extern "C" {
extern const PanelSizeIndexSetsA DAT_00530a4c;
extern const PanelSizePairIndexSetsA DAT_0052fe4c;
void pairSetHalves(PanelSizeObjectA *object, s32 width, s32 height);

// Apply the sprite dimensions chosen for a two-, three- or four-column panel.
void uiApplyIndexedPanelSpriteSizes(IndexedPanelSizeWorkA *work)
{
    const TextureTableEntryIV *first = NULL;
    const TextureTableEntryIV *second = NULL;
    if (work->kind == 11) {
        switch (work->columns) {
        case 2: {
            SpriteIndices2 primary = DAT_0052fe4c.first;
            first = asdTMTexTableEntryAt(8, primary.ids[work->selection]);
            SpriteIndices2 secondary = DAT_0052fe4c.second;
            second = asdTMTexTableEntryAt(8, secondary.ids[work->selection]);
            break;
        }
        case 3: {
            SpriteIndices3 primary = DAT_00530a4c.firstThree;
            first = asdTMTexTableEntryAt(8, primary.ids[work->selection]);
            SpriteIndices3 secondary = DAT_00530a4c.secondThree;
            second = asdTMTexTableEntryAt(8, secondary.ids[work->selection]);
            break;
        }
        case 4: {
            SpriteIndices4 primary = DAT_00530a4c.firstFour;
            first = asdTMTexTableEntryAt(8, primary.ids[work->selection]);
            SpriteIndices4 secondary = DAT_00530a4c.secondFour;
            second = asdTMTexTableEntryAt(8, secondary.ids[work->selection]);
            break;
        }
        }
    } else if (work->kind == 20) {
        return;
    }
    pairSetHalves(&work->first, first->x, first->y);
    pairSetHalves(&work->overlay, first->x, first->y);
    pairSetHalves(&work->second, second->x, second->y);
}
}
