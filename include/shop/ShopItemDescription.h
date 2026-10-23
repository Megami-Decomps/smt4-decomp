#ifndef SHOP_SHOPITEMDESCRIPTION_H
#define SHOP_SHOPITEMDESCRIPTION_H
#include "common.h"
#include <stddef.h>
struct ShopDescriptionEntry {
    u16 scriptEntry;
    union {
        u8 unk02[10];
        struct {
            u8 prefix[4];
            u16 sound;
            u8 suffix[4];
        } voice;
    };
};
struct ShopItemDescription {
    u32 unk00;
    u32 mode;
    s32 state;
    u32 previousMode;
    u32 unk10;
    u32 tableGroup;
    u32 script;
    union {
        u8 unk1C[0x10];
        struct {
            u8 prefix[0xA];
            u16 sound;
            u8 suffix[4];
        } initialVoice;
    };
    union {
        ShopDescriptionEntry entries[3];
        struct {
            u8 unk2C[0x1C];
            s32 nextEntry;
        } progress;
    };
};
typedef char ShopItemDescriptionLayoutCheck[
    offsetof(ShopItemDescription, entries) == 0x2C &&
    offsetof(ShopItemDescription, progress.nextEntry) == 0x48 && sizeof(ShopItemDescription) == 0x50 ? 1 : -1];
typedef char ShopItemVoiceOffsetsCheck[
    sizeof(ShopDescriptionEntry) == 0xC &&
    offsetof(ShopDescriptionEntry, voice.sound) == 6 &&
    offsetof(ShopItemDescription, initialVoice.sound) == 0x26 &&
    sizeof(ShopItemDescription) == 0x50 ? 1 : -1];
#endif
