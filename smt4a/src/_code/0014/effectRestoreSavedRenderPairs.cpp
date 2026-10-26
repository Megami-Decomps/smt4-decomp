#include "common.h"

struct ModelBindingResource {
    /* 0x000 */ u8 unk000[0x68];
    /* 0x068 */ u8 defaultTransform[0x40];
    /* 0x0A8 */ u8 defaultConfiguration[0x160];
    /* 0x208 */ u8 firstTransform[0x40];
    /* 0x248 */ u8 firstConfiguration[0x70];
    /* 0x2B8 */ u8 secondTransform[0x40];
    /* 0x2F8 */ u8 secondConfiguration[1];
};
struct ModelBindingOwner {
    /* 0x0000 */ u8 unk0000[0x52c];
    /* 0x052C */ s32 variant;
    /* 0x0530 */ u32 handle;
    /* 0x0534 */ u8 binding[0xc4];
    /* 0x05F8 */ u8 state;
    /* 0x05F9 */ u8 unk05f9[0x103];
    /* 0x06FC */ ModelBindingResource *resource;
    /* 0x0700 */ u8 unk0700[0xa98];
    /* 0x1198 */ u8 script[1];
};
extern "C" {
s32 FUN_001696f4(ModelBindingOwner *owner, ModelBindingResource *resource);
void FUN_00187a84(ModelBindingOwner *owner, const void *configuration,
                   const void *transform, void *binding);
void FUN_00187d90(u32 handle, void *script);
}

/* Bind the resource's mode-selected preset and move the model owner to state five. */
extern "C" void effectRestoreSavedRenderPairs(ModelBindingOwner *owner, ModelBindingResource *resource)
{
    if (resource == NULL) {
        return;
    }
    const void *configuration = NULL;
    const void *transform = NULL;
    if (FUN_001696f4(owner, resource) == 1) {
        switch (owner->variant) {
        case 0:
            configuration = resource->firstConfiguration;
            transform = resource->firstTransform;
            break;
        case 1:
            configuration = resource->secondConfiguration;
            transform = resource->secondTransform;
            break;
        case 2:
            configuration = resource->defaultConfiguration;
            transform = resource->defaultTransform;
            break;
        }
    } else {
        configuration = resource->defaultConfiguration;
        transform = resource->defaultTransform;
    }
    FUN_00187a84(owner, configuration, transform, owner->binding);
    FUN_00187d90(owner->handle, owner->script);
    owner->resource = resource;
    owner->state = 5;
}
