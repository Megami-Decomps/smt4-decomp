/* NON_MATCHING: retail frame order is wide path at 0, stream at 0x210, path at 0x228 (here path first), with the constant-1 hoist of its twin FUN_002402c4. Needs _ZTT9Obj420c60 rename applied. */
#include "classes/Obj420c60.h"

struct MbState {
    u32 a, b;
};

extern "C" {
extern s8 g_asdLoadFileUseRawPaths; /* 1: use paths exactly as given */
extern const char DAT_00409800[];   /* "patch:/%s" */
extern const char DAT_0040980c[];   /* "rom:/%s" */

void rt_aeabi_memclr(void *block, u32 bytes);
s32 asdLoadFileHasDevice(const char *name);
s32 asdLoadFileIsPatched(const char *name);
s32 textFormatBuffer(char *output, const char *format, ...);
u32 refIsNullOrZero(s32 *object);
u32 FUN_002b90c8(const char *text, u32 count, MbState *state);
u32 FUN_002c618c(wchar_t *destination, const char *text, u32 count, MbState *state);

/* Tells whether the file can be opened, resolving the name against the patch/rom devices. */
s32 FUN_002cb8d8(const char *name)
{
    char path[256];
    rt_aeabi_memclr(path, sizeof(path));
    if (g_asdLoadFileUseRawPaths != 0 || asdLoadFileHasDevice(name) != 0) {
        textFormatBuffer(path, name);
    } else if (asdLoadFileIsPatched(name) != 0) {
        textFormatBuffer(path, DAT_00409800, name);
    } else {
        textFormatBuffer(path, DAT_0040980c, name);
    }
    Obj420c60 stream;
    wchar_t widePath[264];
    wchar_t *wide = widePath;
    const char *narrow = path;
    MbState state = {0, 0};
    refIsNullOrZero(reinterpret_cast<s32 *>(&state));
    u32 length;
    while ((length = FUN_002b90c8(narrow, 0x105, &state)) != 0 && FUN_002c618c(wide, narrow, length, &state) != 0) {
        wide++;
        narrow += length;
    }
    *wide = 0;
    s32 result = stream.TryInitialize(widePath, 1);
    stream.Close();
    if (result < 0) {
        return 0;
    }
    return 1;
}

}
