/* NON_MATCHING: native result temporaries and identifier buffer occupy different stack slots. */
#include "classes/WindowStatus.h"
#include "sys/ResourceDisplayMetadata.h"
#include "nn/Result.h"

extern "C" {
WindowStatusResult FUN_00427f6c(void *provider, void *identifier);
s32 legacyResourceIdRemap(const WindowStatusResult *result);
u32 FUN_0019a46c(char *destination, const char *source, u32 capacity);
u32 textConvertToBoundedWide(void *owner, u16 *buffer, u32 length, const void *identifier);

// Populate the product name and localized title/description, preserving the first provider failure.
WindowStatusResult FUN_00473980(ResourceDisplayMetadata *metadata)
{
    WindowStatusResult result;
    u8 identifier[0x20];
    ResourceDisplayProductRecord product;
    ResourceDisplayTextRecord text;
    result = FUN_00427f6c(metadata->provider, identifier);
    if (nnResultIsFailure(legacyResourceIdRemap(&result)))
        return result;
    result = FUN_00428060(metadata->provider, &product, identifier);
    if (nnResultIsFailure(legacyResourceIdRemap(&result)))
        return result;
    FUN_0019a46c(metadata->productName, product.name, 0x40);
    result = FUN_00428060(metadata->provider, &text, identifier);
    if (nnResultIsFailure(legacyResourceIdRemap(&result)))
        return result;
    result = WindowStatusResult(textConvertToBoundedWide(metadata, metadata->title, 0x20, text.titleIdentifier));
    result = WindowStatusResult(textConvertToBoundedWide(metadata, metadata->description, 0x20, text.descriptionIdentifier));
    return WindowStatusResult(0);
}
}
