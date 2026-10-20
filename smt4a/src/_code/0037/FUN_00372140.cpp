#include "romwright_types.h"

extern "C" {

extern int DAT_0057f28c; /* 0x57f28c */


unsigned short FUN_00372140(void)

{
  return *(unsigned short *)(DAT_0057f28c + 0xccc);
}

} /* extern "C" */
