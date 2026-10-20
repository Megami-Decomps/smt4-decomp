#include "romwright_types.h"

extern "C" {

extern char s_normal_00433a70[7]; /* 0x433a70 */


char * FUN_00200c80(int param_1)

{
  if (param_1 >= 0xe) {
    param_1 = 0;
  }
  return s_normal_00433a70 + param_1 * 0x30;
}

} /* extern "C" */
