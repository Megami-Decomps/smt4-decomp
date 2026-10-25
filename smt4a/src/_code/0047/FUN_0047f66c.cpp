#include "common.h"

extern "C" {
void textFormatBuffer(char *, const char *, ...);
u32 FUN_0014af98(void);
void FUN_001628c0(const char *, u32, u32, u32, f32, f32);
extern const char DAT_0052a998[]; // \"I009021\"
extern const char DAT_0052a988[]; // \"I009022\"
extern const char DAT_0052a990[]; // \"I009023\"
extern const char DAT_0052a9a0[]; // \"I009024\"
}

static __inline void itemImageNameFormat(char *name, s32 itemId)
{
    switch (itemId) {
    case 0x120:
        textFormatBuffer(name, DAT_0052a988);
        break;
    case 0x121:
        textFormatBuffer(name, DAT_0052a990);
        break;
    case 0x122:
        textFormatBuffer(name, DAT_0052a998);
        break;
    case 0x123:
        textFormatBuffer(name, DAT_0052a9a0);
        break;
    }
}

extern "C" void FUN_0047f66c(s32 itemId)
{
    char imageName[64] = {0};
    itemImageNameFormat(imageName, itemId);
    FUN_001628c0(imageName, FUN_0014af98(), 2, 0, 0.707f, 0.707f);
}
