#include "romwright_types.h"

extern "C" {

extern int DAT_0059dbb8; /* 0x59dbb8 */


int FUN_003180ac(int param_1)

{
  return DAT_0059dbb8 + param_1 * 0x18;
}

} /* extern "C" */
