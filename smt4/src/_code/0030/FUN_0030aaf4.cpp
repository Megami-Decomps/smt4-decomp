#include "romwright_types.h"

extern "C" {

extern int DAT_0044e190; /* 0x44e190 */


unsigned char FUN_0030aaf4(void)

{
  return *(int *)(DAT_0044e190 + 0x400) == 0xf;
}

} /* extern "C" */
