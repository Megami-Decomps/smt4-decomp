#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_004d4000; /* 0x4d4000 */


unsigned char * FUN_003536a8(void)

{
  return &DAT_004d4000;
}

} /* extern "C" */
