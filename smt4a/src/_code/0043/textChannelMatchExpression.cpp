/* NON_MATCHING: typed initializers preserve allocated pointers rather than consuming constructor-return ABI; arena frame and final lifetime epilogue differ. */
#include "shard/W6_W6Match6_TextChannelMatch.h"

extern "C" {
void words3Clear2(TextMatchArena *);
void FUN_0043879c(TextMatchArena *, u8 *);
void *FUN_004387f0(TextMatchArena *, u32);
void listHeaderInit(TextMatchSyntax *);
void words2Clear(TextMatchSimple *);
void FUN_00436be8(TextMatchMask *);
void FUN_00437a84(TextMatchCompiled *);
u32 FUN_00433e08(TextMatchSyntax *, TextMatchArena *, const u16 *, s32);
u32 FUN_00434e88(TextMatchSimple *, TextMatchSyntax *, const u16 *);
u32 FUN_00436b2c(TextMatchMask *, TextMatchArena *, TextMatchSyntax *);
u32 FUN_00437828(TextMatchCompiled *, TextMatchArena *, TextMatchLink *, u32 *);
u32 FUN_00433b58(u32 *, TextMatchLink *, const u16 *);

void textChannelMatchExpression(TextChannelParser *parser, u32 *flags, const u16 *input,
                  s32 length, TextChannel **channels, u32 count)
{
    TextMatchArena arena;
    words3Clear2(&arena);
    FUN_0043879c(&arena, ((TextMatchArenaSource *)parser)->buffer);
    TextMatchSyntax *syntax = (TextMatchSyntax *)FUN_004387f0(&arena, 2);
    if (syntax) {
        listHeaderInit(syntax);
    }
    TextMatchSimple *simple = (TextMatchSimple *)FUN_004387f0(&arena, 1);
    if (simple) {
        words2Clear(simple);
    }
    TextMatchMask *mask = (TextMatchMask *)FUN_004387f0(&arena, 2);
    if (mask) {
        FUN_00436be8(mask);
    }
    TextMatchCompiled *compiled = (TextMatchCompiled *)FUN_004387f0(&arena, 2);
    if (compiled) {
        FUN_00437a84(compiled);
    }
    u32 *cache = (u32 *)FUN_004387f0(&arena, 1);
    if (cache) {
        *cache = 0;
    }
    if (FUN_00433e08(syntax, &arena, input, length) == 0) {
        if (FUN_00434e88(simple, syntax, (const u16 *)L"")) {
            for (u32 index = 0; index < count; ++index) {
                if (!(flags[index] & (1u << parser->flagBit)) &&
                    FUN_00434e88(simple, syntax, channels[index]->text) == 1) {
                    flags[index] |= 1u << parser->flagBit;
                }
            }
        } else if (FUN_00436b2c(mask, &arena, syntax) == 0) {
            u32 bytes = mask->byteCount;
            if (FUN_00437828(compiled, &arena, &mask->entries, &bytes)) {
                for (u32 index = 0; index < count; ++index) {
                    if (!(flags[index] & (1u << parser->flagBit)) &&
                        FUN_00433b58(cache, &compiled->entries, channels[index]->text)) {
                        flags[index] |= 1u << parser->flagBit;
                    }
                }
            }
        }
    }
}
}
