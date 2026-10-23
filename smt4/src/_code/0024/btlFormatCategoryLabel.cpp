#include "common.h"

extern "C" s32 libc_sprintf(char *output, const char *format, ...);

/* Format the full-width battle damage or ailment category label. */
extern "C" s32 btlFormatCategoryLabel(char *output, s32 category)
{
    s32 result = 0;
    if (category == 0)
        result = libc_sprintf(output, "\x82\x6F\x82\x88\x82\x99\x82\x93"); /* Ｐｈｙｓ */
    else if (category == 1)
        result = libc_sprintf(output, "\x82\x66\x82\x95\x82\x8E"); /* Ｇｕｎ */
    else if (category == 2)
        result = libc_sprintf(output, "\x82\x65\x82\x89\x82\x92\x82\x85"); /* Ｆｉｒｅ */
    else if (category == 3)
        result = libc_sprintf(output, "\x82\x68\x82\x83\x82\x85"); /* Ｉｃｅ */
    else if (category == 4)
        result = libc_sprintf(output, "\x82\x64\x82\x8C\x82\x85\x82\x83"); /* Ｅｌｅｃ */
    else if (category == 5)
        result = libc_sprintf(output, "\x82\x65\x82\x8F\x82\x92\x82\x83\x82\x85"); /* Ｆｏｒｃｅ */
    else if (category == 6)
        result = libc_sprintf(output, "\x82\x6B\x82\x89\x82\x87\x82\x88\x82\x94"); /* Ｌｉｇｈｔ */
    else if (category == 7)
        result = libc_sprintf(output, "\x82\x63\x82\x81\x82\x92\x82\x8B"); /* Ｄａｒｋ */
    else if (category == 11)
        result = libc_sprintf(output, "\x82\x6F\x82\x8F\x82\x89\x82\x93\x82\x8F\x82\x8E"); /* Ｐｏｉｓｏｎ */
    else if (category == 12)
        result = libc_sprintf(output, "\x82\x6F\x82\x81\x82\x8E\x82\x89\x82\x83"); /* Ｐａｎｉｃ */
    else if (category == 13)
        result = libc_sprintf(output, "\x82\x72\x82\x8C\x82\x85\x82\x85\x82\x90"); /* Ｓｌｅｅｐ */
    else if (category == 14)
        result = libc_sprintf(output, "\x82\x61\x82\x89\x82\x8E\x82\x84"); /* Ｂｉｎｄ */
    else if (category == 15)
        result = libc_sprintf(output, "\x82\x72\x82\x89\x82\x83\x82\x8B"); /* Ｓｉｃｋ */
    else if (category == 16)
        result = libc_sprintf(output, "\x82\x6B\x82\x8F\x82\x93\x82\x94"); /* Ｌｏｓｔ */
    else if (category == 17)
        result = libc_sprintf(output, "\x82\x60\x82\x8C\x82\x8D\x82\x89\x82\x87\x82\x88\x82\x94\x82\x99"); /* Ａｌｍｉｇｈｔｙ */
    else if (category == 18)
        result = libc_sprintf(output, "\x82\x67\x82\x85\x82\x81\x82\x8C"); /* Ｈｅａｌ */
    return result;
}
