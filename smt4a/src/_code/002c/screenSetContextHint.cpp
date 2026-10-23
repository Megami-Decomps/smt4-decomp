#include "common.h"
extern "C" {
s32 textFormatBuffer(char *buffer, const char *format, ...);
void FUN_0019de98(const char *text, u32 color);
void screenSetColor670(u32 color, s32 row, s32 first, s32 length);
const char *requestSubmitScrLookup(u8 index, s32 alternate);

/* Select a context hint, adding the numeric amount and its colored span when needed. */
void screenSetContextHint(void *owner, s32 kind, s32 alternate)
{
    struct HintValueView {
        u8 prefix[0x38A0];
        s32 amount;
    };
    HintValueView *work = static_cast<HintValueView *>(owner);
    u8 lookup = 0;
    switch (kind) {
    case 1: lookup = 1; break;
    case 2: lookup = 2; break;
    case 7: lookup = 3; break;
    case 3: lookup = 4; break;
    case 10: lookup = 5; break;
    case 9: lookup = 6; break;
    case 5: lookup = 8; break;
    case 4: lookup = 7; break;
    case 12: lookup = 9; break;
    }
    const char *text = requestSubmitScrLookup(lookup, alternate == 0);
    if (kind == 9) {
        char buffer[128];
        textFormatBuffer(buffer, text, work->amount);
        FUN_0019de98(buffer, 0xF4F4F4FF);
        s32 length;
        if (work->amount >= 100)
            length = 5;
        else if (work->amount >= 10)
            length = 4;
        else
            length = 3;
        screenSetColor670(0x48C722FF, 1, 18, length);
    } else {
        FUN_0019de98(text, 0xF4F4F4FF);
    }
}
}
