#ifndef SAVELOADUI_SAVELOADCONTROLLERA_H
#define SAVELOADUI_SAVELOADCONTROLLERA_H
#include "saveLoadUI/SaveLoadState.h"
#include <stddef.h>

class SaveLoadScreenResourceA {
public:
    virtual void update();
    virtual void destroy();
    /* 0x04 */ u32 handle;
};
struct SaveLoadControllerA {
    /* 0x000 */ u8 unk000[5];
    /* 0x005 */ s8 colorIndex;
    /* 0x006 */ u8 unk006;
    /* 0x007 */ u8 state;
    /* 0x008 */ u32 frame;
    /* 0x00C */ u8 nextState;
    /* 0x00D */ u8 previousState;
    /* 0x00E */ u8 unk00E[4];
    /* 0x012 */ u8 busy;
    /* 0x013 */ u8 unk013[0x45];
    /* 0x058 */ SaveLoadScreenResourceA* resource;
    /* 0x05C */ u8 unk05C[0xC];
    /* 0x068 */ u8 suspended;
    /* 0x069 */ u8 unk069[0x283];
    /* 0x2EC */ u8 slotFlags[12];
    /* 0x2F8 */ s32 selectedSlot;
    union {
        /* 0x2FC */ u8 unk2FC[0x150];
        struct {
            u8 unk2FC[0x140];
            /* 0x43C */ u32 handles[3];
            /* 0x448 */ s32 count;
        } touch;
    };
    /* 0x44C */ u8 pending;
    /* 0x44D */ u8 confirmed;
    /* 0x44E */ u8 canceled;
};
struct SaveLoadColorRecordA {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u8 color[0x40];
};
typedef char SaveLoadControllerAOffsetsCheck[
    offsetof(SaveLoadControllerA, resource) == 0x58 &&
    offsetof(SaveLoadControllerA, slotFlags) == 0x2EC &&
    offsetof(SaveLoadControllerA, selectedSlot) == 0x2F8 &&
    offsetof(SaveLoadControllerA, pending) == 0x44C &&
    sizeof(SaveLoadColorRecordA) == 0x54 ? 1 : -1];
typedef char SaveLoadControllerATouchOffsetsCheck[
    offsetof(SaveLoadControllerA, touch.handles) == 0x43C &&
    offsetof(SaveLoadControllerA, touch.count) == 0x448 &&
    sizeof(SaveLoadControllerA) == 0x450 ? 1 : -1];
#endif
