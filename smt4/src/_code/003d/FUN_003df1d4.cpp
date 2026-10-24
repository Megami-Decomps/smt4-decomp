/* NON_MATCHING: the zero-filled name buffer and the destination pointer swap registers (retail zero in r4, destination in r5) and the holder is loaded into r1 first. */
#include "common.h"

struct NameSource {
    u8 unk00[4];
    char name[0x1c];
};

struct NameHolder {
    u8 unk00[0x10];
    NameSource *source; // 0x10
    s32 sourceCount;    // 0x14
};

extern "C" {

char *strncpy(char *destination, const char *source, u32 count);
void *rt_memcpy(void *destination, const void *source, u32 count);

// Copy the holder's source name (up to 31 characters, NUL padded) into the 32-byte destination.
void FUN_003df1d4(void *destination, NameHolder **holderRef)
{
    NameHolder *holder = *holderRef;
    char name[32] = {0};
    if (holder->sourceCount != 0) {
        strncpy(name, holder->source->name, 32);
        name[31] = 0;
    }
    rt_memcpy(destination, name, 32);
}

} /* extern "C" */
