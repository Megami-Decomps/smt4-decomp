#include "romwright_types.h"

extern "C" {

extern char s_normal_00570ab8[7]; /* 0x570ab8 */


char * FUN_002c17c0(int param_1)

{
  if (param_1 >= 0xe) {
    param_1 = 0;
  }
  return s_normal_00570ab8 + param_1 * 0x30;
}

} /* extern "C" */
