/* NON_MATCHING: text-markup converter; control flow reconstructed from the goto-heavy decompilation (tag match, hex argument parse, control-code argument copy) and not compared structurally with retail */
#include "common.h"

#define TEXT_END 0xFFFF
#define TEXT_TAG_TABLE_END 0xF890
#define TEXT_CONTROL_FIRST 0xF801
#define TEXT_CONTROL_COUNT 0x8F

/* One markup tag or control code. Entries end at code 0xF890; `name` is the textual form
 * ("<...>") the converter recognises, `argCount` the number of following words a control code
 * consumes. */
struct TextTag {
    /* 0x00 */ u16 code;
    /* 0x02 */ u16 unk02;
    /* 0x04 */ s32 argCount;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ const char *name;
};

extern "C" {
extern TextTag g_sentinelLookupEntries[];

u32 packBytesToBigEndianHalfword(s32 low, s32 high);
u32 libc_strlen(const char *text);
s32 libc_strncmp(const char *a, const char *b, u32 count);

/* Converts a source string into text codes, returning the number of codes. With `measureOnly`
 * nothing is written. Named tags become their code (plus a numeric argument), ordinary characters
 * pass through and control codes copy the argument words they own. */
s32 FUN_001eb584(const char *source, u16 *destination, s32 measureOnly)
{
    s32 in = 0;
    s32 out = 0;

    for (;;) {
        u32 code = packBytesToBigEndianHalfword(source[in + 1], source[in]);
        if (code == TEXT_END) {
            if (!measureOnly)
                destination[out] = TEXT_END;
            return out + 1;
        }

        const TextTag *tag = g_sentinelLookupEntries;
        s32 tagLength = 0;
        bool hasArgument = false;
        s16 argument = 0;
        bool matched = false;
        for (s32 i = 0; tag->code != TEXT_TAG_TABLE_END; i++, tag = &g_sentinelLookupEntries[i]) {
            if (tag->name != NULL && libc_strncmp(tag->name, source + in, libc_strlen(tag->name)) == 0) {
                matched = true;
                tagLength = libc_strlen(tag->name);
                if (tag->argCount != 0) {
                    s32 value = 0;
                    if (source[in + tagLength] != '\0') {
                        s32 p = tagLength;
                        while (source[in + p] != '>') {
                            s32 c = source[in + p];
                            value *= 16;
                            if ((u32)(c - '0') < 10)
                                value += c - '0';
                            else if ((u32)(c - 'A') < 6)
                                value += c - 'A' + 10;
                            else if ((u32)(c - 'a') < 6)
                                value += c - 'a' + 10;
                            p++;
                            if (source[in + p] == '\0')
                                break;
                        }
                        tagLength = p + 1;
                        if (value == 0xFF)
                            value = 0;
                    }
                    hasArgument = true;
                    argument = (s16)(value + 1);
                }
                break;
            }
        }

        if (matched && tag->code != TEXT_END) {
            if (!measureOnly)
                destination[out] = (u16)((tag->code << 8) | (tag->code >> 8));
            in += tagLength;
            s32 next = out + 1;
            if (hasArgument) {
                if (!measureOnly)
                    destination[next] = argument;
                next = out + 2;
            }
            out = next;
            continue;
        }

        /* An ordinary character or control code. */
        if (!measureOnly)
            destination[out] = (u16)code;
        s32 written = out + 1;
        in += 2;
        u32 swapped = ((code >> 16) << 24) | ((code >> 24) << 16) | ((code & 0xFF) << 8) | ((code >> 8) & 0xFF);
        if (swapped - TEXT_CONTROL_FIRST < TEXT_CONTROL_COUNT) {
            s32 args = 0;
            for (s32 i = 0; g_sentinelLookupEntries[i].code != TEXT_TAG_TABLE_END; i++) {
                if (g_sentinelLookupEntries[i].code == swapped) {
                    args = g_sentinelLookupEntries[i].argCount;
                    break;
                }
            }
            for (s32 i = 0; i < args; i++) {
                u16 word = packBytesToBigEndianHalfword(source[in + 1], source[in]);
                if (!measureOnly)
                    destination[written] = word;
                written++;
                in += 2;
            }
        }
        out = written;
    }
}

} /* extern "C" */
