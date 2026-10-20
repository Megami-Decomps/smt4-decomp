#include "romwright_types.h"

extern "C" {

extern int DAT_0044e190; /* 0x44e190 */


unsigned char FUN_00293a88(void)

{
  return *(int *)(DAT_0044e190 + 0x400) != 0x12 && *(int *)(DAT_0044e190 + 0x400) != 0x14;
}

} /* extern "C" */
