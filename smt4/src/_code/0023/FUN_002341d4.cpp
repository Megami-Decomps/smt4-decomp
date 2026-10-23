/* NON_MATCHING: native result temporaries and identifier buffer occupy different stack slots. */
#include "classes/WindowStatus.h"
#include "sys/ResourceDisplayMetadata.h"
#include "nn/Result.h"

extern "C" {
WindowStatusResult FUN_00353154(void *provider, void *identifier);
WindowStatusResult FUN_002345a4(void *provider, void *record, const void *identifier);
s32 legacyResourceIdRemap(const WindowStatusResult *result);
u32 FUN_002ba81c(char *destination, const char *source, u32 capacity);
u32 FUN_002344d8(void *owner, u16 *buffer, u32 length, const void *identifier);

// Populate the product name and localized title/description, preserving the first provider failure.
WindowStatusResult FUN_002341d4(ResourceDisplayMetadata *metadata)
{
    WindowStatusResult result;
    u8 identifier[0x20];
    ResourceDisplayProductRecord product;
    ResourceDisplayTextRecord text;
    result = FUN_00353154(metadata->provider, identifier);
    if (nnResultIsFailure(legacyResourceIdRemap(&result)))
        return result;
    result = FUN_002345a4(metadata->provider, &product, identifier);
    if (nnResultIsFailure(legacyResourceIdRemap(&result)))
        return result;
    FUN_002ba81c(metadata->productName, product.name, 0x40);
    result = FUN_002345a4(metadata->provider, &text, identifier);
    if (nnResultIsFailure(legacyResourceIdRemap(&result)))
        return result;
    result = WindowStatusResult(FUN_002344d8(metadata, metadata->title, 0x20, text.titleIdentifier));
    result = WindowStatusResult(FUN_002344d8(metadata, metadata->description, 0x20, text.descriptionIdentifier));
    return WindowStatusResult(0);
}
}
