/* NON_MATCHING: message-load branches merge, using conditional resource selections and different saved registers. */
#include "shop/shopMain.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/asdTMTexTableLoadSprites.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"

// Resource and audio handles lie past the shared creation prefix; retain that prefix's extent.
struct ShopResourceSetupViewIV {
    ShopCreateWork startup;
    u8 unk001C[0x144];
    void *script;
    void *messages;
    u8 unk0168[0x15BD8];
    u32 messageHandle;
    u32 soundHandle;
};
typedef char ShopResourceSetupOffsets[
    offsetof(ShopResourceSetupViewIV, script) == 0x160 &&
    offsetof(ShopResourceSetupViewIV, messages) == 0x164 &&
    offsetof(ShopResourceSetupViewIV, messageHandle) == 0x15D40 &&
    offsetof(ShopResourceSetupViewIV, soundHandle) == 0x15D44 ? 1 : -1];

extern "C" {
void FUN_002898e4(void);
void FUN_00289880(void);
void buttonHelpAcquireResources(void);
void buttonHelpCreate(void);
void FUN_002c58c8(u32 table, u32 variant);
u32 FUN_002fdff4(u32 resource);
u32 FUN_00285e44(u32 sound, u32 option, u32 flags);
void FUN_00247bf4(u32 handle, u32 option, u32 flags);
extern const char DAT_004075c0[]; // shop/shop.bf
extern const char DAT_00407600[]; // shop/shop_tkywpn.mbm
extern const char DAT_004075d0[]; // shop/shop_mkdwpn.mbm
extern const char DAT_004075e8[]; // shop/shop_ginzawpn.mbm
extern const char DAT_00407630[]; // shop/shop_tkyitm.mbm
extern const char DAT_00407618[]; // shop/shop_mkditm.mbm

// Load the shop script and the weapon/item message bank appropriate to its location, then start its audio.
void FUN_003a169c(ShopCreateWork *shop)
{
    ShopResourceSetupViewIV *resources = (ShopResourceSetupViewIV *)shop;
    FUN_002898e4();
    FUN_00289880();
    buttonHelpAcquireResources();
    buttonHelpCreate();
    asdLoadFileAsyncSimple(DAT_004075c0, reinterpret_cast<u32 *>(&resources->script), 0);
    asdTMTexTableLoadSprites(43);
    FUN_002c58c8(43, 0);
    u32 resource = 0;
    u32 sound = 0;
    if (shop->unk14 == 0) {
        const char *messages;
        if (shop->result == 8) {
            messages = DAT_004075d0;
            resource = 88;
            sound = 25;
        } else if (shop->result == 6 || shop->result == 7) {
            messages = DAT_004075e8;
            resource = 139;
            sound = 80;
        } else if (shop->result == 9) {
            messages = DAT_00407600;
            resource = 136;
            sound = 162;
        } else {
            messages = DAT_00407600;
            resource = 90;
        }
        asdLoadFileAsyncSimple(messages, reinterpret_cast<u32 *>(&resources->messages), 0);
    } else if (shop->unk14 == 1) {
        const char *messages;
        if (shop->result == 9) {
            messages = DAT_00407618;
            resource = 89;
            sound = 26;
        } else if (shop->result == 5) {
            messages = DAT_00407630;
            resource = 139;
            sound = 80;
        } else if (shop->result == 10) {
            messages = DAT_00407630;
            resource = 137;
            sound = 163;
        } else {
            messages = DAT_00407630;
            resource = 91;
        }
        asdLoadFileAsyncSimple(messages, reinterpret_cast<u32 *>(&resources->messages), 0);
    }
    resources->messageHandle = FUN_002fdff4(resource);
    if (sound) {
        resources->soundHandle = FUN_00285e44(sound, 0, 0);
        FUN_00247bf4(resources->soundHandle, 0, 0);
    }
}
}
