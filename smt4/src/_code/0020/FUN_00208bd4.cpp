#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0049f91c; /* 0x49f91c */


void FUN_00208bd4(void)

{
  (*(unsigned char *)((unsigned char *)&DAT_0049f91c + 0x2f8)) = 0;
  return;
}

} /* extern "C" */
