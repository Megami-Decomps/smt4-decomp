/* NON_MATCHING: readable rewrite of a raw draft; identical instructions, only the callee-saved register numbering differs (retail: hooks r6, first bucket counter r7, second r5; build: hooks r7, counter r6). */
#include "AsdSDK/Source/Gfx/AsdGfxContext.h"
#include "shard/W6_W6Match7_DefaultTextureWork.h"

namespace {
/* The driver hooks and the memory the graphics layer allocated for itself. */
struct GfxDriverHooks {
    /* 0x00 */ void *allocate;
    /* 0x04 */ DriverTextureRelease *release;
    /* 0x08 */ u8 unk08[8];
    /* 0x10 */ void *context;
};
}

extern "C" {
extern GfxDriverHooks g_gfxAllocateCallback;

void FUN_00149824(void);
void FUN_001493a8(void);
void FUN_00149090(void);
void FUN_001496f0(void);
void FUN_00148f48(void);
void FUN_0014938c(void);
void FUN_0015a270(void);

// Shut the graphics layer down: release every registered block and the layer's own memory.
void FUN_0013be20(void)
{
    if (g_asdGfxContext.initialized == 0) {
        return;
    }
    FUN_00149824();
    FUN_001493a8();
    FUN_00149090();
    FUN_001496f0();
    FUN_00148f48();
    FUN_0014938c();
    g_asdGfxContext.initialized = 0;
    FUN_0015a270();
    for (s32 bucket = 0; bucket < 32; bucket++) {
        CommandBufferHandleNode *next;
        for (CommandBufferHandleNode *node = g_asdGfxContext.buffers[bucket]; node != NULL; node = next) {
            next = node->next;
            if (node->buffer.start != NULL) {
                if (g_gfxAllocateCallback.release != NULL) {
                    g_gfxAllocateCallback.release(0x10000, 0x105, node->buffer.unk00, node->buffer.start);
                }
            }
            if (g_gfxAllocateCallback.release != NULL) {
                g_gfxAllocateCallback.release(0x10000, 0x100, 0, node);
            }
        }
    }
    for (s32 bucket = 0; bucket < 32; bucket++) {
        AsdGfxTarget *next;
        for (AsdGfxTarget *node = g_asdGfxContext.targetChains[bucket]; node != NULL; node = next) {
            next = node->next;
            if (node->pixels != NULL) {
                if (g_gfxAllocateCallback.release != NULL) {
                    g_gfxAllocateCallback.release(node->heap, 0x104, node->id, node->pixels);
                }
            }
            if (g_gfxAllocateCallback.release != NULL) {
                g_gfxAllocateCallback.release(0x10000, 0x100, 0, node);
            }
        }
    }
    if (g_gfxAllocateCallback.release != NULL) {
        g_gfxAllocateCallback.release(0x10000, 0x100, 0, g_gfxAllocateCallback.context);
    }
    g_gfxAllocateCallback.context = NULL;
    g_gfxAllocateCallback.allocate = NULL;
    g_gfxAllocateCallback.release = NULL;
}
}
