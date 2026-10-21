/* NON_MATCHING: native frame44/shared literal tables versus local-table frame52/.constdata, with table-base hoisting differences (93/93). No dummy stack padding added. */
#include "shard/W6_W6Match8_AnimatedSprite.h"

namespace {
struct SpritePairWork {
    u8 unk000[9];
    u8 kind;
    u8 unk00a[0xe];
    s32 selection;
    u8 unk01c[4];
    s32 count;
    u8 unk024[0x244];
    UiAnimatedSprite first; // 0x268
    u8 unk2f4[0x8c];
    UiAnimatedSprite second; // 0x380
};
struct SpritePairLayout {
    u8 unk00[8];
    s16 first;
    s16 second;
};
}

extern "C" {
const SpritePairLayout* FUN_002bf4f8(u32 table, s32 id);
void pairSetHalves(UiAnimatedSprite* sprite, s16 first, s16 second);

void uiLayoutSelectionSpritePair(void* context)
{
    SpritePairWork* work = static_cast<SpritePairWork*>(context);
    const SpritePairLayout* first = NULL;
    const SpritePairLayout* second = NULL;
    if (work->kind == 0xb) {
        if (work->count == 2) {
            const u32 firstIds[2] = {0xac, 0xad};
            first = FUN_002bf4f8(0xe, firstIds[work->selection]);
            const u32 secondIds[2] = {0xae, 0xaf};
            second = FUN_002bf4f8(0xe, secondIds[work->selection]);
        } else if (work->count == 3) {
            const u32 firstIds[3] = {0xa2, 0xa3, 0xa4};
            first = FUN_002bf4f8(0xe, firstIds[work->selection]);
            const u32 secondIds[3] = {0xa5, 0xa6, 0xa7};
            second = FUN_002bf4f8(0xe, secondIds[work->selection]);
        } else if (work->count == 4) {
            const u32 firstIds[4] = {0xb8, 0xb9, 0xba, 0xbb};
            first = FUN_002bf4f8(0xe, firstIds[work->selection]);
            const u32 secondIds[4] = {0xbc, 0xbd, 0xbe, 0xbf};
            second = FUN_002bf4f8(0xe, secondIds[work->selection]);
        }
    } else if (work->kind == 0x13) {
        return;
    }
    pairSetHalves(&work->first, first->first, first->second);
    pairSetHalves(&work->second, second->first, second->second);
}
} // extern "C"
