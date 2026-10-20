#include "romwright_types.h"

extern "C" {

extern int DAT_0057f574; /* 0x57f574 */


void FUN_00261a14(unsigned char param_1)

{
  *(unsigned char *)(DAT_0057f574 + 0x30) = param_1;
  return;
}

} /* extern "C" */
