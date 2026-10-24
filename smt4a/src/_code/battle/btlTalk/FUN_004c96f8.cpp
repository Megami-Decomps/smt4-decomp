#include "battle/btlTalk.h"
#include <stddef.h>

extern "C" {
void asdMemFree(void *data);
s32 textFormatBuffer(char *buffer, const char *format, ...);
void asdLoadFileAsyncSimple(const char *name, void **output, s32 flags);
extern const char *DAT_0057a7d8[];
extern const char DAT_0052a9d8[]; // "battle/talk/TalkTone%s.mbm"

bool FUN_004c96f8(BtlTalkA *work, s32 tone)
{
    // The public Apocalypse prefix ends before the tone-loader fields.
    struct ToneLoaderView {
        u8 unk00[0x14];
        void *data;
        u32 state;
        u8 unk1c[0x129];
        u8 pending;
        u8 unk146[2];
        s32 tone;
    };
    typedef char ToneLoaderLayoutCheck[offsetof(ToneLoaderView, pending) == 0x145 && offsetof(ToneLoaderView, tone) == 0x148 ? 1 : -1];
    ToneLoaderView *loader = (ToneLoaderView *)work;
    char path[128];
    if (loader->pending != 0) {
        if (loader->state == 2) {
            loader->pending = 0;
            return 1;
        }
    } else if (loader->state == 2) {
        if (loader->tone == tone) {
            return 1;
        }
        if (loader->data != NULL) {
            asdMemFree(loader->data);
            loader->data = NULL;
        }
        loader->tone = tone;
        textFormatBuffer(path, DAT_0052a9d8, DAT_0057a7d8[tone]);
        asdLoadFileAsyncSimple(path, &loader->data, 1);
        loader->pending = 1;
        loader->state = 3;
        return 0;
    }
    return 0;
}
}
