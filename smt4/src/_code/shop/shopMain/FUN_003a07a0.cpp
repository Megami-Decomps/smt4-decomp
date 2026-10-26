#include "shop/shopMain.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"

struct ShopDecorationPair { s32 first, second; };
struct ShopImageGroup { u32 images[8]; };
struct ShopDecorationImages {
    u8 prefix[0xa4];
    ShopImageGroup first;
    ShopImageGroup second;
};
struct AlternateShopDecorations {
    ShopDecorationPair pages[8];
    ShopDecorationPair lockedFirst;
    ShopDecorationPair lockedFourth;
};

extern "C" {
extern const ShopDecorationPair DAT_0044df98[7];
extern const AlternateShopDecorations DAT_0044dfd0;
extern const ShopDecorationImages DAT_004074a4;
void FUN_00231bcc(const AsdTextureRegion *region, u32 image, s32 x, s32 y, u32 color, u32 flags);
s32 gameFlagIsSet(u32 flag);

void FUN_003a07a0(ShopWork *shop, s32 state)
{
    struct ShopDecorationView {
        u8 unk000[0x10];
        s32 mode;
        u8 restricted;
        u8 unk015[3];
        u32 result;
        u8 unk01c[0x360];
        u32 color;
        AsdTextureRegion region;
        u8 unk3a0[0x4c0];
        s32 page;
    };
    // Drawing fields and category pages extend beyond the public ShopWork prefix.
    ShopDecorationView *work = reinterpret_cast<ShopDecorationView *>(shop);
    if (work->mode == 0) {
        if (state == 7) {
            return;
        }
    } else if (work->mode == 1) {
        if (state == 7) {
            return;
        }
    }
    if (work->page != 0 ||
        (!work->restricted && work->result != 8 && gameFlagIsSet(0x410)) ||
        work->mode == 1) {
        u32 color = work->color;
        FUN_00231bcc(&work->region, 0x65, 0, 0, color, 1);
        FUN_00231bcc(&work->region, 0x66, 0, 0, color, 1);
        s32 firstIndex;
        s32 secondIndex;
        if (work->mode == 1) {
            firstIndex = DAT_0044dfd0.pages[work->page].first;
            secondIndex = DAT_0044dfd0.pages[work->page].second;
            if (work->page == 0 &&
                (work->restricted || work->result == 8 || !gameFlagIsSet(0x410))) {
                firstIndex = DAT_0044dfd0.lockedFirst.first;
                secondIndex = DAT_0044dfd0.lockedFirst.second;
            } else if (work->page == 3 &&
                (work->restricted || work->result == 8 || !gameFlagIsSet(0x410))) {
                firstIndex = DAT_0044dfd0.lockedFourth.first;
                secondIndex = DAT_0044dfd0.lockedFourth.second;
            }
        } else {
            firstIndex = DAT_0044df98[work->page].first;
            secondIndex = DAT_0044df98[work->page].second;
        }
        ShopImageGroup first = DAT_004074a4.first;
        ShopImageGroup second = DAT_004074a4.second;
        FUN_00231bcc(&work->region, first.images[firstIndex], 0, 0, color, 1);
        FUN_00231bcc(&work->region, second.images[secondIndex], 0, 0, color, 1);
    }
}
}
