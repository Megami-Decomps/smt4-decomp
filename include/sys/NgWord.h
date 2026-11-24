#ifndef SYS_NGWORD_H
#define SYS_NGWORD_H

#include "classes/Obj420fa4.h"
#include "nn/Result.h"

extern "C" {
/* Partitions the working buffer and mounts the archive. */
s32 asdNgcSetWorkBuffer(Obj420fa4 *scanner, u8 *buffer);

/* Mounts the NG-word archive using the workspace already assigned to the scanner. */
nn::Result ngwordMountArchive(Obj420fa4 *state, const char *file);
nn::Result ngwordMountArchive(Obj420fa4 *state, const char *file);
} /* extern "C" */

#endif
