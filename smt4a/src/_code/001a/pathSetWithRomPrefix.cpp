#include "common.h"

extern "C" {

typedef struct PathOwner {
    /* 0x00 */ u8 unk00[0x2c];
    /* 0x2C */ char path[1];
} PathOwner;

s32 libc_sprintf(char *output, const char *format, ...);
char *libc_strcpy(char *dest, const char *src);
s32 libc_strlen(const char *string);

extern const char DAT_0053d47c[]; /* "rom:/%s" */

/* Whether a ':' within the path's first eight characters names a device. */
static s32 pathHasDevice(const char *path)
{
    s32 len = libc_strlen(path);
    s32 i;

    if (len > 8) {
        len = 8;
    }
    for (i = 0; i < len; i++) {
        if (path[i] == ':') {
            return 1;
        }
    }
    return 0;
}

/* Stores a file path, prefixing "rom:/" unless it names a device. */
void pathSetWithRomPrefix(PathOwner *owner, const char *path)
{
    if (pathHasDevice(path)) {
        libc_strcpy(owner->path, path);
    } else {
        libc_sprintf(owner->path, DAT_0053d47c, path);
    }
}

} /* extern "C" */
