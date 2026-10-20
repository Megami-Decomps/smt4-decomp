#include "romwright_types.h"

extern "C" {

extern int DAT_0044e050; /* 0x44e050 */


unsigned int FUN_001922e4(void)

{
  return *(unsigned int *)(DAT_0044e050 + 0x18);
}

} /* extern "C" */
