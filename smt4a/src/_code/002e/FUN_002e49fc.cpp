#include "common.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {

u32 scrGetArg(u32 index);
void sysMemClear(void *buffer, s32 size);
char *libc_strcpy(char *dest, const char *src);
const char *FUN_0015f858(u32 id, s32 arg);
const char *FUN_00180118(u16 id);
const char *contentEntryDataGet(s16 id, s32 arg);
const char *FUN_0014bd84(u32 id);
int FUN_00359974(u32 kind, u32 id, s32 arg0, s32 arg1);

/* Script command: looks up the text for the argument by kind (0-0x1F) and passes it to FUN_003180c4;
 * kinds 0x18-0x1F go to FUN_00359974 instead. */
u32 FUN_002e49fc(void)
{
    char text[132];
    u32 kind = scrGetArg(0);
    u32 id = scrGetArg(1);

    sysMemClear(text, 128);
    switch (kind) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 32:
    case 33:
    case 34:
    case 35:
        libc_strcpy(text, FUN_0015f858(id, 1));
        FUN_003180c4(kind, text);
        break;
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
        libc_strcpy(text, FUN_00180118((u16)id));
        FUN_003180c4(kind, text);
        break;
    case 16:
    case 17:
    case 18:
    case 19:
        libc_strcpy(text, contentEntryDataGet((s16)id, 0));
        FUN_003180c4(kind, text);
        break;
    case 20:
    case 21:
    case 22:
    case 23:
        libc_strcpy(text, FUN_0014bd84(id));
        FUN_003180c4(kind, text);
        break;
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
        FUN_00359974(kind, id, -1, 0);
        break;
    }
    return 1;
}

} /* extern "C" */
