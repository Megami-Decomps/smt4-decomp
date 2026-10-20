#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_006357d8; /* 0x6357d8 */


unsigned char FUN_0013def0(int param_1)

{
  return (&(*(unsigned char *)((unsigned char *)&DAT_006357d8 + 0x10)))[param_1 * 0x14];
}

} /* extern "C" */
