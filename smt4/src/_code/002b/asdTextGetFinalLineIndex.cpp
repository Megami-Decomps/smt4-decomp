#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "AsdSDK/Source/Gfx/Effect/effBehavior.h"
#include "font/TextLayoutApi.h"

/* Return the final zero-based line index in the bounded encoded stream.
 * Newlines increment it; explicit line commands replace it. */
extern "C" u32 asdTextGetFinalLineIndex(AsdText *text)
{
    u32 line = 0;
    if (text->primaryOwner == NULL)
        return 0;
    s32 index = text->begin;
    do {
        u16 code = text->records[index].code;
        if (code == 0xffff) return line;
        if (charCodeIsPrivateUseGlyph(code)) {
            switch (code) {
            case 0xf801:
                ++line;
                break;
            case 0xf802:
                return line;
            case 0xf81a:
                line = text->records[++index].code;
                break;
            default:
                index += sentinelLookupGetValue(code);
                break;
            }
        }
        ++index;
    } while (index < text->begin + 999);
    return line;
}
