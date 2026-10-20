#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_004e7f64; /* 0x4e7f64 */


unsigned int FUN_0014fa90(void)

{
  return (*(unsigned int *)((unsigned char *)&DAT_004e7f64 + 0x32c));
}

} /* extern "C" */
