#include "common.h"
#include "shard/W6_W6Match1_BattleStageModelA.h"

extern "C" {

char *libc_strcat(char *destination, const char *source);
void FUN_0023f2e4(u32 a, u32 b, const char *path, u32 d);

extern const char *DAT_0044d1f0[]; /* 0x44d1f0 */
extern const char *DAT_0044d6f8[]; /* 0x44d6f8 */

/* Builds "player/pl<dir><name>.bam" and passes it on. */
void FUN_00343c58(u32 a, u32 index, u32 dir, u32 d)
{
    char path[64] = "player/pl";

    libc_strcat(path, DAT_0044d1f0[dir]);
    libc_strcat(path, DAT_0044d6f8[index]);
    libc_strcat(path, ".bam");
    FUN_0023f2e4(a, index, path, d);
}

} /* extern "C" */
