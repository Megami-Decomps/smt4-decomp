/* NON_MATCHING: initial registration branch layout and zero/one constant registers differ; -O2 candidate. */
#include "ui/MessageMain.h"
extern "C" MessageGlobalsA g_messageMain;

struct DemonBannerSprite { u8 data[0x8c]; };
struct DemonBannerQueue { u8 status[12]; u32 ids[12]; };
struct DemonBanner {
    u8 unk000[0x8d];
    u8 phase;
    u8 unk08e[2];
    u8 active;
    u8 unk091[3];
    u32 unk094;
    s32 timer, index;
    union { DemonBannerQueue queue; u32 clearWords[15]; } entries;
    u8 queued[12]; // 0xdc
    u8 unk0e8[0xac];
    u8 owner[1]; // 0x194
    u8 unk195[0x96b];
    DemonBannerSprite background; // 0xb00
    u8 unkb8c[0x230];
    DemonBannerSprite sprites[12]; // 0xdbc
};
struct BannerDemon { u8 unk00[4]; u16 id; };
extern "C" {
u32 scrGetArg(u32);
s32 scrGetCommandFrame();
void FUN_0014e188(DemonBannerSprite *, s32, s32, void *, s32, f32);
void uiSpriteSelectAnim(DemonBannerSprite *, s32);
void uiSpriteSetKeyframe(DemonBannerSprite *, s32, s32);
void *saveSlotFindById(u16);
void FUN_004bd410(u16);
void FUN_003e48dc(unsigned int);
const BannerDemon *FUN_00370ecc(u16);
void sysPlayVoice(u32);

u32 scrShowDemonNotification()
{
    DemonBanner *banner = (DemonBanner *)g_messageMain.panel;
    u32 id = scrGetArg(0);
    if (scrGetCommandFrame() == 0) {
        if (banner->active) {
            ++banner->index;
            banner->timer = 20;
        } else {
            DemonBanner *current = (DemonBanner *)g_messageMain.panel;
            current->active = 1;
            current->phase = 1;
            FUN_0014e188(&current->background, 20, 3001, current->owner, 11, 1.0f);
            uiSpriteSelectAnim(&current->background, 0);
            for (s32 i = 0; i < 15; ++i)
                current->entries.clearWords[i] = 0;
            banner->index = 0;
        }
        if (!saveSlotFindById((u16)id)) {
            FUN_004bd410((u16)id);
            FUN_003e48dc((u16)id);
        }
        const BannerDemon *record = FUN_00370ecc((u16)id);
        if (record && record->id != id) {
            FUN_004bd410((u16)id);
            FUN_003e48dc((u16)id);
        }
        banner->entries.queue.status[banner->index] = 0;
        banner->entries.queue.ids[banner->index] = id;
        banner->queued[banner->index] = 1;
    }
    if (banner->timer == 20) {
        FUN_0014e188(&banner->sprites[banner->index], 20, 3090, banner->owner, 11, 1.0f);
        uiSpriteSetKeyframe(&banner->sprites[banner->index], 10, 0);
        banner->entries.queue.status[banner->index] = 1;
        sysPlayVoice(0x100016e);
    }
    return banner->active && banner->phase == 2 && banner->entries.queue.status[banner->index] == 2;
}
}
