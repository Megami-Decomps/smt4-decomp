#include "common.h"

extern "C" {

/* A 64-byte path buffer (copied word-wise). */
struct PathBuffer {
    union {
        u32 words[16];
        char chars[64];
    };
};

extern const PathBuffer DAT_00533378; /* "player/pl" */
extern const char *DAT_00588628[]; /* player model names */
char *libc_strcat(char *destination, const char *source);
void FUN_003e573c(u32 owner, s32 index, const char *path, u32 option);

/* Builds "player/pl08_000<name>.bam" for player model `index` and loads it. */
void playerModelLoadByIndex(u32 owner, s32 index, u32 unused, u32 option)
{
    PathBuffer path = DAT_00533378;

    libc_strcat(path.chars, "08_000");
    libc_strcat(path.chars, DAT_00588628[index]);
    libc_strcat(path.chars, ".bam");
    FUN_003e573c(owner, index, path.chars, option);
}

} /* extern "C" */
