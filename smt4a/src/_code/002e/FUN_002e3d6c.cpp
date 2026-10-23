/* NON_MATCHING: flag-table PC-relative addressing, parser register pressure and field-parser block layout differ. */
#include "common.h"

struct FormatConversionContext {
    u32 flags;
    void (*emit)(u32, void *);
    void *sink;
    u32 (*read)(FormatConversionContext *);
    u32 unk10[2];
    union {
        struct { s32 width; s32 precision; } dimensions;
        s32 numericFields[2];
    };
    u32 written;
};
extern "C" {
s32 isAsciiDigit(u32);
s32 FUN_00135b64(FormatConversionContext *, u32, u32 *);

u32 FUN_002e3d6c(FormatConversionContext *context, u32 *arguments)
{
    // Retail's ASCII flag-classification table has no standalone data symbol.
    const u8 *flagTable = reinterpret_cast<const u8 *>(0x54EF7C);
    context->written = 0;
    for (;;) {
        u32 character = context->read(context);
        if (!character)
            return context->written;
        if (character == '%') {
            u32 flags = 0;
            character = context->read(context);
            while (character >= 32 && character <= 48 && flagTable[character]) {
                flags |= flagTable[character];
                character = context->read(context);
            }
            if (flags & 2)
                flags &= ~4;
            context->dimensions.precision = 0;
            context->dimensions.width = 0;
            for (s32 field = 0; field < 2; ++field) {
                s32 *value = &context->numericFields[field];
                if (character == '*') {
                    *value = *arguments++;
                    character = context->read(context);
                    if (field == 1 && context->dimensions.precision < 0)
                        flags &= ~0x20;
                } else if (isAsciiDigit(character)) {
                    *value = character - '0';
                    character = context->read(context);
                    while (isAsciiDigit(character)) {
                        *value = *value * 10 + character - '0';
                        character = context->read(context);
                    }
                }
                if (field == 1 || character != '.')
                    break;
                character = context->read(context);
                flags |= 0x20;
            }
            if (context->dimensions.width < 0) {
                context->dimensions.width = -context->dimensions.width;
                flags |= 1;
            }
            if (flags & 1)
                flags &= ~0x10;
            if (character == 'l' || character == 'h') {
                u32 next = context->read(context);
                if (next == character) {
                    flags |= character == 'l' ? 0x80 : 0x400;
                    character = context->read(context);
                } else {
                    flags |= character == 'l' ? 0x40 : 0x100;
                    character = next;
                }
            } else if (character == 'L' || character == 'j' || character == 't' || character == 'z') {
                if (character == 'j')
                    flags |= 0x80;
                character = context->read(context);
            }
            if (!character)
                return context->written;
            if (character >= 'A' && character <= 'Z') {
                flags |= 0x800;
                character += 'a' - 'A';
            }
            context->flags = flags;
            s32 consumed = FUN_00135b64(context, character, arguments);
            if (consumed) {
                if (consumed == 1)
                    ++arguments;
                else
                    arguments = reinterpret_cast<u32 *>(((reinterpret_cast<u32>(arguments) + 7) & ~7U) + 8);
                continue;
            }
        }
        context->emit(character, context->sink);
        ++context->written;
    }
}
}
