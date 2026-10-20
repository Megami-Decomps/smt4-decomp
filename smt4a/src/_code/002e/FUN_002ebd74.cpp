#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f25c; /* 0x57f25c */


unsigned char FUN_002ebd74(void)

{
  return *(int *)((*(int *)((unsigned char *)&DAT_0057f25c + 0x4)) + 8) == 0;
}

} /* extern "C" */
