/* Structs shared by the helper functions in code shard 0049. */
#ifndef SHARD_SHARD0049_H
#define SHARD_SHARD0049_H

#include "common.h"
#include <stddef.h>

#include "shard/Shard0048.h"
#include "shard/W6_W6Match4_FlaggedValueHolder.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"

typedef struct Entry8C {
    /* 0x00 */ u8 data[0x8C];
} Entry8C;

typedef struct Entry80 {
    /* 0x00 */ u8 data[0x80];
} Entry80;

/* Nine equipment pages have matching cursor and item-id tables. */
struct EquipmentMenuCursor {
    union {
        u8 data[0x74];
        FlaggedValueHolder holder;
        struct {
            u8 unk00[8];
            /* 0x08 */ s32 count;
        } range;
    };
};
struct EquipmentMenuItem {
    u16 id;
    u16 unk02;
};
struct EquipmentMenuPage {
    EquipmentMenuItem items[1024];
    u16 unk1000;
};
class EquipmentMenuResource {
public:
    virtual void unk00();
    virtual void destroy();
    /* 0x04 */ u32 handle;
};
struct EquipmentMenuState {
    union {
        /* 0x00000 */ u8 unk00000[0xB40];
        struct {
            u8 prefix[0x14];
            s32 mode;
            u8 restricted;
        } sound;
        struct {
            u32 unk00;
            u32 state;
            u32 frame;
            u32 unk0C;
            u32 previousState;
        } transition;
        struct {
            u8 prefix[0x3A0];
            u32 color;
            AsdTextureRegion region;
        } detail;
        struct {
            u8 prefix[0xB3C];
            /* 0xB3C */ void *indicator;
        } scroll;
    };
    /* 0x00B40 */ s32 page;
    union {
        /* 0x00B44 */ u8 unk00b44[0x1C];
        struct {
            s32 index;
            u32 hasValue; // 0xB48
            s32 value; // 0xB4C
            u32 counter; // 0xB50
            s32 delay; // 0xB54
        } selection;
    };
    /* 0x00B60 */ EquipmentMenuCursor cursors[9];
    /* 0x00F74 */ EquipmentMenuPage pages[9];
    /* 0x09F86 */ u8 unk09f86[0xC07E];
    /* 0x16004 */ u32 state;
    /* 0x16008 */ u8 unk16008[0x20];
    /* 0x16028 */ EquipmentMenuResource *resource;
};
struct EquipmentMenuReadyState {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u8 ready;
};

typedef char EquipmentMenuPageSizeCheck[sizeof(EquipmentMenuPage) == 0x1002 ? 1 : -1];
typedef char EquipmentMenuStateOffsetCheck[offsetof(EquipmentMenuState, state) == 0x16004 ? 1 : -1];
typedef char EquipmentMenuResourceOffsetCheck[offsetof(EquipmentMenuState, resource) == 0x16028 ? 1 : -1];
typedef char EquipmentMenuSoundOffsetCheck[
    offsetof(EquipmentMenuState, sound.mode) == 0x14 &&
    offsetof(EquipmentMenuState, sound.restricted) == 0x18 &&
    offsetof(EquipmentMenuState, selection.index) == 0xB44 &&
    sizeof(EquipmentMenuState) == 0x1602C ? 1 : -1];
typedef char EquipmentMenuDetailOffsetCheck[
    offsetof(EquipmentMenuState, detail.color) == 0x3A0 &&
    offsetof(EquipmentMenuState, detail.region) == 0x3A4 &&
    sizeof(EquipmentMenuState) == 0x1602C ? 1 : -1];
typedef char EquipmentMenuSelectionLayoutCheck[
    sizeof(EquipmentMenuCursor) == 0x74 && offsetof(EquipmentMenuCursor, holder) == 0 &&
    offsetof(EquipmentMenuState, transition.state) == 4 &&
    offsetof(EquipmentMenuState, transition.frame) == 8 &&
    offsetof(EquipmentMenuState, transition.previousState) == 0x10 &&
    offsetof(EquipmentMenuState, selection.hasValue) == 0xB48 &&
    offsetof(EquipmentMenuState, selection.value) == 0xB4C &&
    offsetof(EquipmentMenuState, selection.counter) == 0xB50 &&
    offsetof(EquipmentMenuState, selection.delay) == 0xB54 &&
    offsetof(EquipmentMenuState, cursors) == 0xB60 &&
    offsetof(EquipmentMenuState, pages) == 0xF74 ? 1 : -1];
typedef char EquipmentMenuScrollOffsetCheck[
    offsetof(EquipmentMenuCursor, range.count) == 8 &&
    sizeof(EquipmentMenuCursor) == 0x74 &&
    offsetof(EquipmentMenuState, scroll.indicator) == 0xB3C &&
    sizeof(EquipmentMenuState) == 0x1602C ? 1 : -1];

#endif
