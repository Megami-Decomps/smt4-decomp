/* NON_MATCHING: relative-field address hoisting and null-target/tail layout differ; recursive self-tailcall retains a relocation absent retail. Candidate -O2 for scheduling. */
#include "shard/W6_W6Match8_TextureResourceFixup.h"

extern "C" {
void FUN_004504d8(TextureResourceHeaderView *owner, TextureImageStorage *image, u32 flags);
void FUN_00451898(TextureResourceHeaderView *resource);
}

static inline void bindImageResource(TextureResourceHeaderView *original, u32 requiredType)
{
    TextureResourceHeaderView *resource = original;
    if (original != NULL && (requiredType & ~(u32)original->kind) != 0) {
        resource = NULL;
    }
    if (resource->boundOwner != NULL) {
        return;
    }
    resource->boundOwner = original;
    TextureImageStorage *image = (TextureImageStorage *)resource->image.get();
    u32 flags = resource->allocationFlags;
    if (image->address != NULL) {
        image->memoryArea = 0;
        return;
    }
    FUN_004504d8(original, image, flags == 0 ? 0x02010000 : flags);
}

extern "C" void resTextureBindReferencedImages(TextureResourceLink *link)
{
    s32 kind = ((TextureResourceHeaderView *)link->resource.get())->kind;
    switch (kind) {
    case 0x20000002:
        return;
    case 0x20000004:
        resTextureBindReferencedImages((TextureResourceLink *)link->resource.get());
        return;
    case 0x20000009:
        FUN_00451898((TextureResourceHeaderView *)link->resource.get());
        return;
    case 0x20000011:
        bindImageResource((TextureResourceHeaderView *)link->resource.get(), 0x20000011);
        return;
    case 0x20000021:
        bindImageResource((TextureResourceHeaderView *)link->resource.get(), 0x20000021);
        return;
    }
}
