#ifndef SMT4A_SYS_EXTENDED_SAVE_DATA_H
#define SMT4A_SYS_EXTENDED_SAVE_DATA_H

#include "common.h"

extern "C" {

/* Mounts the title's extended save data under the given archive name. */
s32 FUN_00429fcc(const char *name, u64 titleId);

/* Creates an extended save-data archive with the supplied creation options. */
u32 FUN_0042a068(u64 titleId, u32 extraOption0, u32 extraOption1,
                 u32 creationOption0, u32 creationOption1);

/* Creates the archive from a file, then mounts it if creation succeeds. */
u32 extendedSaveDataCreateAndMount(u32 titleIdLow, u32 titleIdHigh, u32 creationOption1,
                 u32 creationOption0, const char *input);

} /* extern "C" */
#endif
