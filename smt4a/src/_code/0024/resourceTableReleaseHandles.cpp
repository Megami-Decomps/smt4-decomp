#include "common.h"

struct ResourceSlot27581c {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[0x7];
    /* 0x08 */ u32 handle;
    /* 0x0C */ u32 data;
    /* 0x10 */ s16 kind; /* 0: handle only; 1: handle with data */
    /* 0x12 */ s16 unk12;
    /* 0x14 */ u8 unk14[0xC];
};

struct ResourceTable27581c {
    /* 0x00 */ u8 unk00[0x4];
    /* 0x04 */ s32 count;
    /* 0x08 */ u8 released;
    /* 0x09 */ s8 loaded;
    /* 0x0A */ u8 unk0A[0x2];
    /* 0x0C */ ResourceSlot27581c slots[1];
};

extern "C" {

extern ResourceTable27581c *g_soundActorQueue;
void resourceHandleRelease(u32 handle);

// Release the handles of every active slot once, after the table has been loaded.
void resourceTableReleaseHandles(void)
{
    if (g_soundActorQueue->loaded && !g_soundActorQueue->released) {
        s32 i;
        g_soundActorQueue->released = 1;
        for (i = 0; i < g_soundActorQueue->count; i++) {
            ResourceSlot27581c *slot = &g_soundActorQueue->slots[i];
            if (slot->active) {
                if (slot->kind == 0) {
                    resourceHandleRelease(slot->handle);
                    slot->handle = 0;
                } else if (slot->kind == 1 && slot->data != 0) {
                    resourceHandleRelease(slot->handle);
                    slot->data = 0;
                    slot->unk12 = 0;
                    slot->handle = 0;
                }
            }
        }
    }
}

} /* extern "C" */
