#ifndef SMT4_UTIL_BTLSCRIPTRESOLVEGROUPARG_H
#define SMT4_UTIL_BTLSCRIPTRESOLVEGROUPARG_H

#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif
/* Resolves a script's group argument: 1-4 name a group, 0 and -1 use the selected group (0 also marks an active entry); 1 when none. */
s32 btlScriptResolveGroupArg(s32 group);
#ifdef __cplusplus
}
#endif

#endif
