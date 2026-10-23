#include "common.h"

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
struct SpriteSizeRecordA { u8 unk00[8]; s16 width, height; };
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
const SpriteSizeRecordA *FUN_001834a4(u32 table, u32 sprite);
void pairSetHalves(PanelSizeObjectA *object, s32 width, s32 height);

// Apply the sprite dimensions chosen for a two-, three- or four-column panel.
void uiApplyIndexedPanelSpriteSizes(IndexedPanelSizeWorkA *work)
{
    const SpriteSizeRecordA *first = NULL;
    const SpriteSizeRecordA *second = NULL;
    if (work->kind == 11) {
        switch (work->columns) {
        case 2: {
            SpriteIndices2 primary = DAT_0052fe4c.first;
            first = FUN_001834a4(8, primary.ids[work->selection]);
            SpriteIndices2 secondary = DAT_0052fe4c.second;
            second = FUN_001834a4(8, secondary.ids[work->selection]);
            break;
        }
        case 3: {
            SpriteIndices3 primary = DAT_00530a4c.firstThree;
            first = FUN_001834a4(8, primary.ids[work->selection]);
            SpriteIndices3 secondary = DAT_00530a4c.secondThree;
            second = FUN_001834a4(8, secondary.ids[work->selection]);
            break;
        }
        case 4: {
            SpriteIndices4 primary = DAT_00530a4c.firstFour;
            first = FUN_001834a4(8, primary.ids[work->selection]);
            SpriteIndices4 secondary = DAT_00530a4c.secondFour;
            second = FUN_001834a4(8, secondary.ids[work->selection]);
            break;
        }
        }
    } else if (work->kind == 20) {
        return;
    }
    pairSetHalves(&work->first, first->width, first->height);
    pairSetHalves(&work->overlay, first->width, first->height);
    pairSetHalves(&work->second, second->width, second->height);
}
}
