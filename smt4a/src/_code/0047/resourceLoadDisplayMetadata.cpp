#include "sys/ResourceDisplayMetadata.h"

extern "C" {
WindowStatusResult FUN_00427f6c(void *provider, void *identifier);
u32 stringCopyTruncated(char *destination, const char *source, u32 capacity);
u32 textConvertToBoundedWide(void *owner, u16 *buffer, u32 length, const void *identifier);

/* Populates the product name and localized title and description, preserving the first provider failure. */
WindowStatusResult resourceLoadDisplayMetadata(ResourceDisplayMetadata *metadata)
{
    WindowStatusResult result;
    u8 identifier[0x20];
    ResourceDisplayProductRecord product;
    ResourceDisplayTextRecord text;
    result = FUN_00427f6c(metadata->provider, identifier);
    if (windowStatusFailed(result))
        return result;
    result = FUN_00428060(metadata->provider, &product, identifier);
    if (windowStatusFailed(result))
        return result;
    stringCopyTruncated(metadata->productName, product.name, sizeof(metadata->productName));
    result = FUN_00428060(metadata->provider, &text, identifier);
    if (windowStatusFailed(result))
        return result;
    result = WindowStatusResult(textConvertToBoundedWide(metadata, metadata->title, 0x20, text.titleIdentifier));
    result = WindowStatusResult(textConvertToBoundedWide(metadata, metadata->description, 0x20, text.descriptionIdentifier));
    return WindowStatusResult(0);
}
} /* extern "C" */
