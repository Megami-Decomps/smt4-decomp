#include "shard/W6_W6Match2_FormattedTextSource.h"

extern "C" {
extern const char DAT_00544ab8[];
extern const char DAT_00544ac0[];

// Format the current item with its optional prefix, and return the item's ID.
u32 formattedTextCopyLabel(FormattedTextSource* source, char* output)
{
    FormattedTextItem* item = source->item;
    if (item == NULL) {
        return 0;
    }
    const char* prefix = source->prefix->text;
    if (prefix != NULL) {
        textFormatBuffer(output, DAT_00544ab8, prefix, item->text);
    } else {
        textFormatBuffer(output, DAT_00544ac0, item->text);
    }
    return source->item->id;
}
}
