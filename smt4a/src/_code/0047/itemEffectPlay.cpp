#include "common.h"

extern "C" {

extern const char DAT_0052a9a8[]; /* "I009017" */
extern const char DAT_0052a9b0[]; /* "I009018" */

void textFormatBuffer(char *buffer, const char *format, ...);
u32 FUN_0014af98(void);
void FUN_001628c0(const char *name, u32 handle, s32 a, s32 b, f32 x, f32 y);

static void itemEffectFormatName(char *name, s32 item)
{
    switch (item) {
    case 0x124:
        textFormatBuffer(name, DAT_0052a9a8);
        break;
    case 0x125:
        textFormatBuffer(name, DAT_0052a9b0);
        break;
    }
}

/* Play the image effect for item 0x124 or 0x125. */
void itemEffectPlay(s32 item)
{
    char name[64] = {0};

    itemEffectFormatName(name, item);
    FUN_001628c0(name, FUN_0014af98(), 2, 0, 0.707f, 0.707f);
}

} /* extern "C" */
