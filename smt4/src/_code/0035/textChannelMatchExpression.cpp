/* NON_MATCHING: typed initializers preserve allocated pointers rather than consuming constructor-return ABI; arena frame and final lifetime epilogue differ. */
#include "shard/W6_W6Match6_TextChannelMatch.h"

extern "C" {
void words3Clear2(TextMatchArena *);
void FUN_0035ea88(TextMatchArena *, u8 *);
void *FUN_00238aac(TextMatchArena *, u32);
void listHeaderInit(TextMatchSyntax *);
void words2Clear(TextMatchSimple *);
void FUN_0035d7c0(TextMatchMask *);
void FUN_0035e584(TextMatchCompiled *);
u32 FUN_0035b154(TextMatchSyntax *, TextMatchArena *, const u16 *, s32);
u32 FUN_0035c11c(TextMatchSimple *, TextMatchSyntax *, const u16 *);
u32 FUN_0035d704(TextMatchMask *, TextMatchArena *, TextMatchSyntax *);
u32 FUN_0035e338(TextMatchCompiled *, TextMatchArena *, TextMatchLink *, u32 *);
u32 FUN_0035aeb4(u32 *, TextMatchLink *, const u16 *);

void textChannelMatchExpression(TextChannelParser *parser, u32 *flags, const u16 *input,
                  s32 length, TextChannel **channels, u32 count)
{
    TextMatchArena arena;
    words3Clear2(&arena);
    FUN_0035ea88(&arena, ((TextMatchArenaSource *)parser)->buffer);
    TextMatchSyntax *syntax = (TextMatchSyntax *)FUN_00238aac(&arena, 2);
    if (syntax) {
        listHeaderInit(syntax);
    }
    TextMatchSimple *simple = (TextMatchSimple *)FUN_00238aac(&arena, 1);
    if (simple) {
        words2Clear(simple);
    }
    TextMatchMask *mask = (TextMatchMask *)FUN_00238aac(&arena, 2);
    if (mask) {
        FUN_0035d7c0(mask);
    }
    TextMatchCompiled *compiled = (TextMatchCompiled *)FUN_00238aac(&arena, 2);
    if (compiled) {
        FUN_0035e584(compiled);
    }
    u32 *cache = (u32 *)FUN_00238aac(&arena, 1);
    if (cache) {
        *cache = 0;
    }
    if (FUN_0035b154(syntax, &arena, input, length) == 0) {
        if (FUN_0035c11c(simple, syntax, (const u16 *)L"")) {
            for (u32 index = 0; index < count; ++index) {
                if (!(flags[index] & (1u << parser->flagBit)) &&
                    FUN_0035c11c(simple, syntax, channels[index]->text) == 1) {
                    flags[index] |= 1u << parser->flagBit;
                }
            }
        } else if (FUN_0035d704(mask, &arena, syntax) == 0) {
            u32 bytes = mask->byteCount;
            if (FUN_0035e338(compiled, &arena, &mask->entries, &bytes)) {
                for (u32 index = 0; index < count; ++index) {
                    if (!(flags[index] & (1u << parser->flagBit)) &&
                        FUN_0035aeb4(cache, &compiled->entries, channels[index]->text)) {
                        flags[index] |= 1u << parser->flagBit;
                    }
                }
            }
        }
    }
}
}
