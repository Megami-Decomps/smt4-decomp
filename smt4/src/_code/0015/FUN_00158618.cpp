#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_004ea494; /* 0x4ea494 */


void FUN_00158618(int param_1,unsigned short param_2)

{
  *(unsigned short *)(&DAT_004ea494 + param_1 * 2) = param_2;
  return;
}

} /* extern "C" */
