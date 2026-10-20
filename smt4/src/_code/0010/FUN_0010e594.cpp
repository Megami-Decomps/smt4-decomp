#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00464d48; /* 0x464d48 */


void FUN_0010e594(unsigned int param_1)

{
  (*(unsigned int *)((unsigned char *)&DAT_00464d48 + 0x10)) = param_1;
  return;
}

} /* extern "C" */
