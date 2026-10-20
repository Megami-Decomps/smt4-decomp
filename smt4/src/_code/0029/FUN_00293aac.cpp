#include "romwright_types.h"

extern "C" {

extern int DAT_0044e190; /* 0x44e190 */


unsigned char FUN_00293aac(void)

{
  return *(unsigned char *)(DAT_0044e190 + 0x3fc);
}

} /* extern "C" */
