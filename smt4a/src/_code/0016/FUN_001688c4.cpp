#include "common.h"

/* A text glyph cell: control codes 0xf8xx carry parameters in the following cells. */
struct TextCell {
    /* 0x00 */ u16 code;
    /* 0x02 */ u8 unk02[0x1e];
};

struct TextLine {
    /* 0x00 */ TextCell *cells;
    /* 0x04 */ u8 unk04[8];
    /* 0x0c */ s32 start;
    /* 0x10 */ s32 count;
    /* 0x14 */ s32 active;
};

#define TEXT_CODE_END 0xffff
#define TEXT_CODE_COUNT 0xf801
#define TEXT_CODE_STOP 0xf802
#define TEXT_CODE_SET 0xf81a

extern "C" {
s32 FUN_0019be8c(u32 code);
s32 sentinelLookupGetValue(u32 code);

/* Scans the line's control codes up to a stop: counts 0xf801 codes, or takes the parameter of the last 0xf81a code. */
s32 FUN_001688c4(TextLine *line)
{
    s32 result = 0;
    s32 i;

    if (line->active == 0) {
        return 0;
    }
    for (i = line->start; i < line->start + line->count; i++) {
        u32 code = line->cells[i].code;
        if (code == TEXT_CODE_END) {
            break;
        }
        if (FUN_0019be8c(code) != 0) {
            switch (code) {
            case TEXT_CODE_COUNT:
                result++;
                break;
            case TEXT_CODE_STOP:
                return result;
            case TEXT_CODE_SET:
                i++;
                result = line->cells[i].code;
                break;
            default:
                i += sentinelLookupGetValue(code);
                break;
            }
        }
    }
    return result;
}

} /* extern "C" */
