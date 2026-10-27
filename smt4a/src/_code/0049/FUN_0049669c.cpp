/* NON_MATCHING: retail zeroes the three locals up front in a different order and addresses the stock style through a shared base (shop + 0x16000); ours uses r6-r8 for the locals and sl for the constant 1 (144 rows against 150). */
#include "common.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "event/bustupEvent/BustupTex.h"

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
    /* 0x0018C */ u8 unk0018C[0x15E7C];
    /* 0x16020 */ u32 backdropJob;
    /* 0x16024 */ u32 overlayId;
    /* 0x16028 */ u8 unk16028[0x24];
    /* 0x1604C */ u8 stockStyle;
    /* 0x1604D */ u8 unk1604D[3];
    /* 0x16050 */ u32 npcState;
    /* 0x16054 */ u32 npcModel;
    /* 0x16058 */ u32 npcAnim;
};

/* A record of data table 0 (observed field). */
struct Table00Record {
    /* 0x00 */ u8 unk00[0x8C];
    /* 0x8C */ s16 modelId;
};

extern "C" {

void campCommonBgAcquire(void);
void FUN_003b61ec(void);
void campButtonHelpLoad(void);
void campButtonHelpAcquire(void);
void asdTMTexTableLoadSprites(s32 table);
u32 npcCreateTextureEffectJob(u32 id, s32 x, s32 y);
void FUN_0039af48(u32 id, s32 x, s32 y);
void FUN_0031bca4(void);
void resourceReleaseReference(void);
Table00Record *dataTable00FindById(s32 id);
u32 FUN_00409fe8(s32 id, s32 flag);

/* Loads the shop scene: the shared layout, then the stock file and backdrop of the shop for its district
 * (weapons or items); starts the backdrop job and, for a shop with an NPC, creates its model. */
void FUN_0049669c(ShopScene *shop)
{
    u32 backdropId = 0;
    u32 overlayId = 0;
    s32 npcId = 0;

    campCommonBgAcquire();
    FUN_003b61ec();
    campButtonHelpLoad();
    campButtonHelpAcquire();
    asdLoadFileAsyncSimple("shop/shop.bf", &shop->layoutFile, 0);
    asdTMTexTableLoadSprites(0x20);
    FUN_0014afd0(0x20, 0);
    if (shop->kind == SHOP_KIND_WEAPONS) {
        backdropId = shop->district;
        if (backdropId != 8) {
            if (!(backdropId == 6 || backdropId == 7)) {
                if (backdropId != 9) {
                    backdropId = 0x5A;
                    asdLoadFileAsyncSimple("shop/shop_tkywpn.mbm", &shop->stockFile, 0);
                    shop->stockStyle = 0;
                } else {
                    backdropId = 0x8B;
                    npcId = 0xF9;
                    asdLoadFileAsyncSimple("shop/shop_hutwpn.mbm", &shop->stockFile, 0);
                    shop->stockStyle = 5;
                }
            } else {
                backdropId = 0x8B;
                overlayId = 0x78;
                asdLoadFileAsyncSimple("shop/shop_ginzawpn.mbm", &shop->stockFile, 0);
                shop->stockStyle = 2;
            }
        } else {
            backdropId = 0x58;
            overlayId = 0x149;
            asdLoadFileAsyncSimple("shop/shop_mkdwpn.mbm", &shop->stockFile, 0);
            shop->stockStyle = 3;
        }
    
    } else if (shop->kind == SHOP_KIND_ITEMS) {
        backdropId = shop->district;
        if (backdropId != 9) {
            if (backdropId != 5) {
                if (backdropId != 10) {
                    backdropId = 0x5B;
                    asdLoadFileAsyncSimple("shop/shop_tkyitm.mbm", &shop->stockFile, 0);
                    shop->stockStyle = 1;
                } else {
                    backdropId = 0x89;
                    overlayId = 0xA3;
                    asdLoadFileAsyncSimple("shop/shop_tkyitm.mbm", &shop->stockFile, 0);
                    shop->stockStyle = 1;
                }
            } else {
                backdropId = 0x8B;
                overlayId = 0x50;
                asdLoadFileAsyncSimple("shop/shop_ginzaitm.mbm", &shop->stockFile, 0);
                shop->stockStyle = 6;
            }
        } else {
            backdropId = 0x59;
            overlayId = 0x148;
            asdLoadFileAsyncSimple("shop/shop_mkditm.mbm", &shop->stockFile, 0);
            shop->stockStyle = 4;
        }
    }
    shop->backdropJob = npcCreateTextureEffectJob(backdropId, 0, 0);
    if (overlayId != 0) {
        FUN_0039af48(overlayId, 0, 0);
        shop->overlayId = overlayId;
        FUN_0031bca4();
        return;
    }
    if (npcId != 0) {
        if (shop->npcModel != 0) {
            resourceReleaseReference();
            shop->npcModel = 0;
        }
        {
            u32 model = FUN_00409fe8(dataTable00FindById(npcId)->modelId, 1);

            shop->npcState = 0;
            shop->npcModel = model;
            shop->npcAnim = 0;
        }
        shop->flags |= SHOP_FLAG_ENTRY_PENDING;
    }
}

} /* extern "C" */
