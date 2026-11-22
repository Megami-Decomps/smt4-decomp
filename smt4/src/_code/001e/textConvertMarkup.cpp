/* NON_MATCHING: same instructions and frame as retail (167 diff lines, from 297); retail lays the not-found path right after the tag search and the tag parse after it, and gives source/destination/measureOnly r8/sl/fp where this build uses r7/fp/sl. */
#include "shard/W6_W6Match5_SentinelLookup.h"

#define TEXT_END 0xFFFF
#define TEXT_TAG_TABLE_END 0xF890
#define TEXT_CONTROL_FIRST 0xF801
#define TEXT_CONTROL_COUNT 0x8F

extern "C" {

u32 packBytesToBigEndianHalfword(u32 high, u32 low);
u32 libc_strlen(const char *text);
s32 libc_strncmp(const char *a, const char *b, u32 count);

/* Swaps the bytes of each halfword (`rev16`): a text code between its stored and its numeric order. */
static __inline u32 swapCodeBytes(u32 code)
{
    return ((code & 0xFF00FF00) >> 8) | ((code & 0x00FF00FF) << 8);
}

/* Finds the markup tag `text` starts with and parses its hexadecimal argument. Retail shows the inline
 * boundary: `argument`'s address is bound once per character, before the search, and kept in a spilled
 * pointer, and the flag and the argument stay in memory. */
static bool findTag(const s8 *text, const SentinelLookupEntry **found, s32 *length, s32 *hasArgument, u16 *argument)
{
    const SentinelLookupEntry *tag = g_sentinelLookupEntries;
    for (s32 i = 0; tag->key != TEXT_TAG_TABLE_END; tag = &g_sentinelLookupEntries[++i]) {
        if (tag->name != NULL && libc_strncmp(tag->name, (const char *)text, libc_strlen(tag->name)) == 0) {
            s32 tagLength = libc_strlen(tag->name);
            s32 value = 0;
            if (tag->value != 0) {
                if (text[tagLength] != '\0') {
                    do {
                        s8 c = text[tagLength];
                        if (c == '>') {
                            tagLength++;
                            break;
                        }
                        value <<= 4;
                        if ((u32)(c - '0') <= 9)
                            value += c - '0';
                        else if ((u32)(c - 'A') <= 5)
                            value += c - 'A' + 10;
                        else if ((u32)(c - 'a') <= 5)
                            value += c - 'a' + 10;
                        tagLength++;
                    } while (text[tagLength] != '\0');
                    if (value == 0xFF)
                        value = 0;
                }
                *hasArgument = true;
                *argument = value + 1;
            }
            *found = tag;
            *length = tagLength;
            return true;
        }
    }
    return false;
}

/* Converts a source string into text codes, returning the number of codes. With `measureOnly`
 * nothing is written. Named tags become their code (plus a numeric argument), ordinary characters
 * pass through and control codes copy the argument words they own. */
s32 textConvertMarkup(const s8 *source, u16 *destination, s32 measureOnly)
{
    s32 in = 0;
    s32 out = 0;

    for (;;) {
        const s8 *text = &source[in];
        u32 code = packBytesToBigEndianHalfword(text[1], text[0]);
        if (code == TEXT_END) {
            if (!measureOnly)
                destination[out] = code;
            return out + 1;
        }

        s32 hasArgument = false;
        u16 argument;
        s32 tagLength;
        const SentinelLookupEntry *tag;
        if (findTag(text, &tag, &tagLength, &hasArgument, &argument) && tag->key != TEXT_END) {
            if (!measureOnly)
                destination[out] = swapCodeBytes(tag->key);
            out++;
            in += tagLength;
            if (hasArgument) {
                if (!measureOnly)
                    destination[out] = argument;
                out++;
            }
        } else {
            /* An ordinary character or control code. */
            if (!measureOnly)
                destination[out] = code;
            out++;
            in += 2;
            u32 swapped = swapCodeBytes(code);
            if ((u32)(swapped - TEXT_CONTROL_FIRST) < TEXT_CONTROL_COUNT) {
                s32 args = sentinelLookupValue(swapped);
                for (s32 i = 0; i < args; i++) {
                    u16 word = packBytesToBigEndianHalfword(source[in + 1], source[in]);
                    if (!measureOnly)
                        destination[out] = word;
                    out++;
                    in += 2;
                }
            }
        }
    }
}

} /* extern "C" */
