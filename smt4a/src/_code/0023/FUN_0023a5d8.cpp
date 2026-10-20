#include "romwright_types.h"

extern "C" {

extern int DAT_0057f57c; /* 0x57f57c */


unsigned char FUN_0023a5d8(void)

{
  return *(int *)(DAT_0057f57c + 8) == 2;
}

} /* extern "C" */
