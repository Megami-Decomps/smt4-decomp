#include "romwright_types.h"

extern "C" {

extern int DAT_0044e190; /* 0x44e190 */


unsigned char FUN_0030ab14(void)

{
  return *(int *)(DAT_0044e190 + 0x400) == 10;
}

} /* extern "C" */
