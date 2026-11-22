/* NON_MATCHING: 56 lines (195 vs 195 rows): all branches, offsets (0x16020..0x16058), real prototypes, and literal pool match retail; only r4 (shop) and r5 (shop + 0x16000) are swapped. */
#include "common.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "event/bustupEvent/BustupTex.h"
#include "gamedata/NkmEnemyLookup.h"

#define SHOP_KIND_WEAPONS 0
#define SHOP_KIND_ITEMS 1
#define SHOP_FLAG_ENTRY_PENDING 0x2000

/* A shop scene's work area (observed fields; the offsets are word indices of the original dump). */
struct ShopScene {
    /* 0x00000 */ u32 flags;
    /* 0x00004 */ u8 unk00004[0x14];
    /* 0x00018 */ u8 kind;            /* SHOP_KIND_* */
    /* 0x00019 */ u8 unk00019[3];
    /* 0x0001C */ u32 district;
    /* 0x00020 */ u8 unk00020[0x164];
    /* 0x00184 */ u32 layoutFile;
    /* 0x00188 */ u32 stockFile;
    /* 0x0018C */ u8 unk0018C[0x15E94];
    /* 0x16020 */ u32 backdropJob;
    /* 0x16024 */ u32 overlayId;
    /* 0x16028 */ u8 unk16028[0x24];
    /* 0x1604C */ u8 stockStyle;
    /* 0x1604D */ u8 unk1604D[3];
    /* 0x16050 */ u32 npcState;
    /* 0x16054 */ u32 npcModel;
    /* 0x16058 */ u32 npcAnim;
};

extern "C" {

void campCommonBgAcquire(void);
void commonBgStopChildAndBeginTransition(void);
void campButtonHelpLoad(void);
void campButtonHelpAcquire(void);
void asdTMTexTableLoadSprites(s32 table);
u32 npcCreateTextureEffectJob(u32 id, s32 x, s32 y);
u32 npc2dCreatePortraitJob(u32 id, u32 a, u32 b, u32 c, f32 scale);
void jobStartAlphaFade(u32 handle, s32 extent, s32 flip);
void resourceReleaseReference(u32 model);
u32 resourceCacheGetOrLoadModel(s32 resource, u32 first, u32 second);

/* Loads the shop scene: the shared layout, then the stock file and backdrop of the shop for its district
 * (weapons or items); starts the backdrop job and, for a shop with an NPC, creates its model. */
void FUN_0049669c(ShopScene *shop)
{
    campCommonBgAcquire();
    commonBgStopChildAndBeginTransition();
    campButtonHelpLoad();
    campButtonHelpAcquire();
    asdLoadFileAsyncSimple("shop/shop.bf", &shop->layoutFile, 0);
    asdTMTexTableLoadSprites(0x20);
    asdTMTexTablePrepareNodeImage(0x20, 0);

    u32 backdropId = 0;
    u32 overlayId = 0;
    s32 npcId = 0;
    switch (shop->kind) {
    case SHOP_KIND_WEAPONS:
        if (shop->district == 8) {
            backdropId = 0x58;
            overlayId = 0x149;
            asdLoadFileAsyncSimple("shop/shop_mkdwpn.mbm", &shop->stockFile, 0);
            shop->stockStyle = 3;
        } else if (shop->district == 6 || shop->district == 7) {
            backdropId = 0x8B;
            overlayId = 0x78;
            asdLoadFileAsyncSimple("shop/shop_ginzawpn.mbm", &shop->stockFile, 0);
            shop->stockStyle = 2;
        } else if (shop->district == 9) {
            backdropId = 0x8B;
            npcId = 0xF9;
            asdLoadFileAsyncSimple("shop/shop_hutwpn.mbm", &shop->stockFile, 0);
            shop->stockStyle = 5;
        } else {
            backdropId = 0x5A;
            asdLoadFileAsyncSimple("shop/shop_tkywpn.mbm", &shop->stockFile, 0);
            shop->stockStyle = 0;
        }
        break;
    case SHOP_KIND_ITEMS:
        if (shop->district == 9) {
            backdropId = 0x59;
            overlayId = 0x148;
            asdLoadFileAsyncSimple("shop/shop_mkditm.mbm", &shop->stockFile, 0);
            shop->stockStyle = 4;
        } else if (shop->district == 5) {
            backdropId = 0x8B;
            overlayId = 0x50;
            asdLoadFileAsyncSimple("shop/shop_ginzaitm.mbm", &shop->stockFile, 0);
            shop->stockStyle = 6;
        } else if (shop->district == 10) {
            backdropId = 0x89;
            overlayId = 0xA3;
            asdLoadFileAsyncSimple("shop/shop_tkyitm.mbm", &shop->stockFile, 0);
            shop->stockStyle = 1;
        } else {
            backdropId = 0x5B;
            asdLoadFileAsyncSimple("shop/shop_tkyitm.mbm", &shop->stockFile, 0);
            shop->stockStyle = 1;
        }
        break;
    }
    shop->backdropJob = npcCreateTextureEffectJob(backdropId, 0, 0);
    if (overlayId != 0) {
        shop->overlayId = npc2dCreatePortraitJob(overlayId, 0, 0, 0, 1.0f);
        jobStartAlphaFade(shop->overlayId, 0, 0);
        return;
    }
    if (npcId != 0) {
        if (shop->npcModel != 0) {
            resourceReleaseReference(shop->npcModel);
            shop->npcModel = 0;
        }
        {
            u32 model = resourceCacheGetOrLoadModel(nkmEnemyFindById((u16)npcId)->battleTextureId, 1, 1);

            shop->npcState = 0;
            shop->npcModel = model;
            shop->npcAnim = 0;
        }
        shop->flags |= SHOP_FLAG_ENTRY_PENDING;
    }
}

} /* extern "C" */
