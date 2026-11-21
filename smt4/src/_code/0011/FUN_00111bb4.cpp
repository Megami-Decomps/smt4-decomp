/* NON_MATCHING: instructions and layout match; register allocation only (retail: zero r4, object r5, next r6,
 * binding state r7, callback r8, lists global sl). textureObjectDestroy and gfxReleaseBlock are the inlined bodies
 * whose own NULL tests retail repeats after the loops have already dereferenced the pointer. */
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
extern TextureObjectLists *DAT_004652a8;
extern u32 *g_textureBindingState;

/* Hands one block back through the graphics release callback, if there is a block and a callback. */
static __inline void gfxReleaseBlock(void *block)
{
    if (block != NULL && g_gfxReleaseCallback != NULL) {
        g_gfxReleaseCallback(0x10000, 0x100, 0, block);
    }
}

/* Unbinds a texture object from every binding group, then releases its data and the object. */
static void textureObjectDestroy(TextureObject *object)
{
    if (object == NULL) {
        return;
    }
    TextureObjectLists *lists = DAT_004652a8;
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
    if (object->data != NULL) {
        if (g_gfxReleaseCallback != NULL) {
            g_gfxReleaseCallback(object->heap, 0x103, object->allocationFlags, object->data);
        }
    }
    if (g_gfxReleaseCallback != NULL) {
        g_gfxReleaseCallback(0x10000, 0x100, 0, object);
    }
}

/* Destroys every texture object and binding group and drops the texture lists. */
void FUN_00111bb4()
{
    if (!DAT_004652a8) {
        return;
    }
    TextureObject *object = DAT_004652a8->objects;
    while (object) {
        TextureObject *next = object->next;
        textureObjectDestroy(object);
        object = next;
    }
    TextureObjectBindingGroup *group = DAT_004652a8->bindings;
    while (group) {
        TextureObjectBindingGroup *next = group->next;
        gfxReleaseBlock(group);
        group = next;
    }
    DAT_004652a8 = NULL;
}
}
