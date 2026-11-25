/* The name tests used by the battle effect request resolvers in both games. */
#ifndef BATTLE_BTLEFFECTNAMETESTS_H
#define BATTLE_BTLEFFECTNAMETESTS_H

#include "battle/BtlEffectLoad.h"
#include "runtime/String.h"
#include <string.h>

extern "C" {
extern BtlEffectNames g_btlEffect; // declcheck: local (the battle effect global's users still declare it themselves; for these helpers only)
u32 libc_strlen(const char *text); // declcheck: local (no C-library string header owns it yet; for these helpers only)
} /* extern "C" */

/* Each test checks the name for NULL itself, so retail repeats the test before every comparison and reads
 * g_btlEffect's entry only after it. */
static __inline bool btlEffectIsIgnoredName(const char *name)
{
    return name != NULL && strcmp(name, g_btlEffect.ignoredName) == 0;
}

static __inline bool btlEffectHasIgnoredPrefix(const char *name)
{
    return name != NULL && libc_strncmp(name, g_btlEffect.ignoredPrefix, libc_strlen(g_btlEffect.ignoredPrefix)) == 0;
}

static __inline bool btlEffectHasNumberedPrefix(const char *name)
{
    return name != NULL && libc_strncmp(name, g_btlEffect.numberedPrefix, libc_strlen(g_btlEffect.numberedPrefix)) == 0;
}

static __inline bool btlEffectIsIgnoredNameB(const char *name)
{
    return name != NULL && strcmp(name, g_btlEffect.ignoredNameB) == 0;
}

#endif
