#ifndef MODEL_IDARRAYSIZE_H
#define MODEL_IDARRAYSIZE_H

#include "common.h"

/* Bytes of a u16 id array holding `count` entries (a one-instruction function armlink inlined). */
extern "C" u32 idArrayByteSize(s32 count);

#endif
