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

void FUN_00112490(void);
void FUN_00112014(void);
void FUN_00111cfc(void);
void FUN_0011235c(void);
void FUN_00111bb4(void);
void textureClearBindingState(void);
void FUN_0011d12c(void);

// Shut the graphics layer down: release every registered block and the layer's own memory.
void FUN_00107598(void)
{
    if (g_asdGfxContext.initialized == 0) {
        return;
    }
    FUN_00112490();
    FUN_00112014();
    FUN_00111cfc();
    FUN_0011235c();
    FUN_00111bb4();
    textureClearBindingState();
    g_asdGfxContext.initialized = 0;
    FUN_0011d12c();
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
