#include "romwright_types.h"

extern "C" {

extern int DAT_0058069c; /* 0x58069c */


void FUN_00292b64(void)

{
  if (*(short *)(DAT_0058069c + 0x18) == 1) {
    *(unsigned short *)(DAT_0058069c + 0x18) = 2;
  }
  return;
}

} /* extern "C" */
