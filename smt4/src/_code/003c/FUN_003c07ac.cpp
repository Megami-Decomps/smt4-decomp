#include "common.h"

extern "C" {

typedef struct TalkTone {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ void *file;
    /* 0x18 */ s32 state;
    /* 0x1C */ u8 unk1C[0xA9];
    /* 0xC5 */ u8 loading;
    /* 0xC6 */ u8 unkC6[2];
    /* 0xC8 */ s32 tone;
} TalkTone;

extern const char DAT_004017c0[]; /* "battle/talk/TalkTone%s.mbm" */
extern const char *DAT_00439b70[]; /* tone file name suffixes */

void asdLoadFileAsyncSimple(const char *path, void **data, s32 flags);
void textFormatBuffer(char *buffer, const char *format, ...);
void asdMemFree(void *memory);

/* Load the talk tone file for `tone`; returns 1 once it is loaded. */
s32 FUN_003c07ac(TalkTone *talk, s32 tone)
{
    char path[128];

    if (talk->loading) {
        if (talk->state == 2) {
            talk->loading = 0;
            return 1;
        }
        return 0;
    }
    if (talk->state != 2) {
        return 0;
    }
    if (talk->tone == tone) {
        return 1;
    }
    if (talk->file != NULL) {
        asdMemFree(talk->file);
        talk->file = NULL;
    }
    talk->tone = tone;
    textFormatBuffer(path, DAT_004017c0, DAT_00439b70[tone]);
    asdLoadFileAsyncSimple(path, &talk->file, 0);
    talk->loading = 1;
    talk->state = 3;
    return 0;
}

} /* extern "C" */
