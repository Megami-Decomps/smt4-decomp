#include "shard/W6_W6Match2_FormattedTextSource.h"

extern "C" {
extern const char g_formatStringPrefixedText[];
extern const char g_formatStringPercentS[];

// Format the current item with its optional prefix, and return the item's ID.
u32 formattedTextCopyLabel(FormattedTextSource* source, char* output)
{
    FormattedTextItem* item = source->item;
    if (item == NULL) {
        return 0;
    }
    const char* prefix = source->prefix->text;
    if (prefix != NULL) {
        __2sprintf(output, g_formatStringPrefixedText, prefix, item->text);
    } else {
        __2sprintf(output, g_formatStringPercentS, item->text);
    }
    return source->item->id;
}
}
