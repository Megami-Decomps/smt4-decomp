#include "romwright_types.h"

extern "C" {

extern int DAT_0057f698[];


int FUN_0037d494(int param_1)

{
  int base = DAT_0057f698[1];
  return base + param_1 * 2 + 0x280c4;
}

} /* extern "C" */
