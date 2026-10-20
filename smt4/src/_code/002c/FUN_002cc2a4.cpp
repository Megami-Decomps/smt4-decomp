#include "romwright_types.h"

extern "C" {

extern int DAT_0043da28[]; /* 0x43da28 */


int FUN_002cc2a4(int param_1)

{
  int base = DAT_0043da28[1];
  return base + param_1 * 0x40 + 0x4d0;
}

} /* extern "C" */
