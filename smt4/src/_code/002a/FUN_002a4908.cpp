/* NON_MATCHING: resource pair load, flag tests, and callback register allocation differ. */
#include "common.h"
#include <stddef.h>

extern "C" void asdModelRefreshRenderData(void *);
extern "C" void FUN_00156814(void *, void *);
extern "C" void nw_gfx_RenderContext_MaterialHash_ResetMaterialHash(void *, u32);

// Bind a changed model resource, invalidating cached material state as necessary.
extern "C" void FUN_002a4908(void *model, void *renderCallback)
{
    // Local views include data beyond the existing ModelRefreshState layout.
    struct Material {
        u8 unk00[0x10];
        s32 flags; // 0x10
    };
    struct Node {
        u8 unk00[8];
        Material *material; // 0x08
    };
    struct Resource;
    struct State;
    struct Callback;
    struct CallbackTable {
        void *unk00[3];
        void (*bind)(Callback *, State *, Resource *); // 0x0c
    };
    struct Callback { CallbackTable *vtable; };
    struct ResourceOwner {
        u8 unk00[0x1ec];
        Callback *callback; // 0x1ec
    };
    struct Resource {
        u8 unk00[0x1c];
        ResourceOwner *owner; // 0x1c
        Material *material; // 0x20
    };
    struct State {
        u8 unk00[8];
        Node *node; // 0x08
        u8 unk0c[6];
        u8 materialReset; // 0x12
        u8 materialChanged; // 0x13
        u32 flags; // 0x14
        u32 unk18;
        u32 commandFlags; // 0x1c
        Resource *resource; // 0x20
        Resource *boundResource; // 0x24
        u8 unk28[0xc0];
        u8 materialsDirty; // 0xe8
        u8 bindingDirty; // 0xe9
        u8 nodesDirty; // 0xea
        u8 stateDirty; // 0xeb
        u8 textureDirty; // 0xec
        u8 unked[0x13];
        u32 materialHash; // 0x100
    };
    typedef char LayoutCheck[offsetof(State, resource) == 0x20 &&
        offsetof(State, materialsDirty) == 0xe8 &&
        offsetof(State, materialHash) == 0x100 ? 1 : -1];
    State *state = static_cast<State *>(model);
    Callback *callback = static_cast<Callback *>(renderCallback);
    Resource *resource = state->resource;
    if (state->boundResource != resource) {
        if ((~state->flags & 2) != 0) {
            Material *material = resource->material;
            Material *oldMaterial = state->node->material;
            if (oldMaterial == material) {
                state->materialChanged = 0;
            } else {
                if (oldMaterial != NULL && oldMaterial->flags >= 0 && material->flags < 0) {
                    state->materialReset = 1;
                    nw_gfx_RenderContext_MaterialHash_ResetMaterialHash(&state->materialHash, 0x1015);
                    state->textureDirty = 1;
                    state->bindingDirty = 1;
                    state->materialsDirty = 1;
                    state->nodesDirty = 1;
                    state->stateDirty = 1;
                    state->commandFlags = 0;
                }
                FUN_00156814(state->node, material);
                state->materialChanged = 1;
            }
        }
        asdModelRefreshRenderData(state);
        if ((~state->flags & 1) != 0) {
            if (callback == NULL)
                callback = state->resource->owner->callback;
            callback->vtable->bind(callback, state, state->resource);
        }
        state->textureDirty = 0;
        state->bindingDirty = 0;
        state->materialsDirty = 0;
        state->nodesDirty = 0;
        state->stateDirty = 0;
        state->boundResource = state->resource;
    }
}
