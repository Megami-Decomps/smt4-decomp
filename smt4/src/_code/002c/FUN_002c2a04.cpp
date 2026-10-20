#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_004d9758; /* 0x4d9758 */


unsigned char FUN_002c2a04(int param_1)

{
  return (&(*(unsigned char *)((unsigned char *)&DAT_004d9758 + 0x10)))[param_1 * 0x14];
}

} /* extern "C" */
