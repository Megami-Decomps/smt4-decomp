#include "romwright_types.h"

extern "C" {

extern int DAT_00448c58; /* 0x448c58 */


unsigned int FUN_0020e708(int param_1)

{
  return *(unsigned int *)(DAT_00448c58 + param_1 * 8 + 0x780);
}

} /* extern "C" */
