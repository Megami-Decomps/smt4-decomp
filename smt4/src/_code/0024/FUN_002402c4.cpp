/* NON_MATCHING: retail hoists the constant 1 into a register (so 0x105 becomes `add sl, r8, #260`) and keeps the zeroing of the file words interleaved with the call setup; stream class and VTT construction match. Needs _ZTT9Obj420c60 rename applied. */
#include "classes/Obj420c60.h"

struct MbState {
    u32 a, b;
};

extern "C" {
void memClear(void *block, u32 bytes);
s32 asdLoadFileIsPatched(const char *name);
s32 textFormatBuffer(char *output, const char *format, ...);
u32 refIsNullOrZero(s32 *object);
u32 FUN_002b90c8(const char *text, u32 count, MbState *state);
u32 FUN_002c618c(wchar_t *destination, const char *text, u32 count, MbState *state);

/* Tells whether the named file can be opened (patch:/ copy first, else rom:/). */
s32 FUN_002402c4(void *unused, const char *name)
{
    char path[256];
    memClear(path, sizeof(path));
    if (asdLoadFileIsPatched(name) != 0) {
        textFormatBuffer(path, "patch:/%s", name);
    } else {
        textFormatBuffer(path, "rom:/%s", name);
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
    return result >= 0;
}

}
