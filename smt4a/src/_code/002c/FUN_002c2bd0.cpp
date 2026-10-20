#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f23c; /* 0x57f23c */


unsigned char FUN_002c2bd0(void)

{
  return *(char *)((*(int *)((unsigned char *)&DAT_0057f23c + 0x4)) + 4) == '\0' || *(char *)((*(int *)((unsigned char *)&DAT_0057f23c + 0x4)) + 4) == '\n';
}

} /* extern "C" */
