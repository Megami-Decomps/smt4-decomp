/* NON_MATCHING: retail retains redundant inline null checks and different texture-list registers. */
#include "common.h"
#include <stddef.h>

struct TextureObject {
    void *data;
    u8 unk04[0x38];
    u32 heap;
    u32 allocationFlags;
    TextureObject *next;
};
struct TextureObjectBinding {
    u32 state[3];
    TextureObject *object;
};
struct TextureObjectBindingGroup {
    TextureObjectBinding bindings[2];
    u32 unk20;
    TextureObjectBindingGroup *next;
};
struct TextureObjectLists {
    TextureObjectBindingGroup *bindings;
    TextureObject *objects;
    TextureObjectBindingGroup *active;
};
typedef char TextureObjectListLayout[
    sizeof(TextureObject) == 0x48 && offsetof(TextureObject, heap) == 0x3c &&
    offsetof(TextureObject, allocationFlags) == 0x40 && offsetof(TextureObject, next) == 0x44 &&
    sizeof(TextureObjectBinding) == 0x10 && offsetof(TextureObjectBinding, object) == 0xc &&
    offsetof(TextureObjectBindingGroup, next) == 0x24 ? 1 : -1];

extern "C" {
extern void (*g_gfxReleaseCallback)(u32 heap, u32 alignment, u32 flags, void *allocation);
extern TextureObjectLists *DAT_005b40e8;
extern u32 *g_textureBindingState;

void FUN_00148f48()
{
    if (!DAT_005b40e8) {
        return;
    }
    TextureObject *object = DAT_005b40e8->objects;
    while (object) {
        TextureObject *next = object->next;
        TextureObjectLists *lists = DAT_005b40e8;
        for (TextureObjectBindingGroup *group = lists->bindings; group; group = group->next) {
            for (s32 i = 0; i < 2; ++i) {
                TextureObjectBinding &binding = group->bindings[i];
                if (binding.object == object) {
                    if (lists->active == group) {
                        *g_textureBindingState |= 1;
                    }
                    binding.object = NULL;
                    binding.state[0] = 0;
                    binding.state[1] = 0;
                    binding.state[2] = 0;
                }
            }
        }
        if (object->data) {
            if (!g_gfxReleaseCallback) {
                object = next;
                continue;
            }
            g_gfxReleaseCallback(object->heap, 0x103, object->allocationFlags, object->data);
        }
        if (g_gfxReleaseCallback) {
            g_gfxReleaseCallback(0x10000, 0x100, 0, object);
        }
        object = next;
    }
    TextureObjectBindingGroup *group = DAT_005b40e8->bindings;
    while (group) {
        TextureObjectBindingGroup *next = group->next;
        if (g_gfxReleaseCallback) {
            g_gfxReleaseCallback(0x10000, 0x100, 0, group);
        }
        group = next;
    }
    DAT_005b40e8 = NULL;
}
}
