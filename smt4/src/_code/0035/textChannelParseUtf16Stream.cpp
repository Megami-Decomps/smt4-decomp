/* NON_MATCHING: parser/input register allocation, error-return tails and newline branch scheduling differ; -O2 candidate. */
#include "shard/W6_W6Match6_TextChannelParser.h"

extern "C" {
void FUN_0035f290(TextChannel *, u32);
s32 textContainsAtSign(TextChannelParser *, TextChannel *, u32);
void textChannelMatchExpression(TextChannelParser *, u32 *, const u16 *, s32, TextChannel **, u32);

u32 textChannelParseUtf16Stream(TextChannelParser *parser, u32 *flags, TextChannelInput *stream,
                 const void *const *outputs, u32 count)
{
    TextChannel *channels[16];
    for (s32 i = 0; i < 16; ++i)
        channels[i] = &parser->channels[i];
    for (u32 i = 0; i < count; ++i) {
        if (!outputs[i])
            return 0xe0e0ebf6;
        FUN_0035f290(channels[i], 64);
    }
    if (!parser->skipDefaults) {
        for (u32 i = 0; i < count; ++i) {
            if (textContainsAtSign(parser, channels[i], 64))
                flags[i] |= 1u << parser->flagBit;
        }
    }
    u32 size = stream->vtable->size(stream);
    if (size < 2 || (s32)size > 0x4000 || stream->vtable->read(stream, parser->input, size) != size)
        return 0xd820ebec;
    const u16 *input = parser->input;
    if (input[0] != 0xfeff)
        return 0xf820ebf0;
    s32 start = 1;
    s32 cursor = 1;
    if (size > 2) {
        do {
            if (input[cursor] == '\n') {
                ++cursor;
                textChannelMatchExpression(parser, flags, input + start, cursor - start - 1, channels, count);
                start = cursor;
            } else if (!input[cursor]) {
                return 0xf820ebf0;
            }
            ++cursor;
        } while ((u32)(cursor * 2) < size);
        if (cursor - 1 == start)
            return 0;
    }
    textChannelMatchExpression(parser, flags, input + start, cursor - start, channels, count);
    return 0;
}
}
