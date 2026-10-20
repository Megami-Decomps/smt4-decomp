#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057a9b8; /* 0x57a9b8 */


void FUN_004aa780(unsigned int param_1,unsigned char param_2)

{
  *(unsigned char *)((*(int *)((unsigned char *)&DAT_0057a9b8 + 0x10)) + 0x6174) = param_2;
  return;
}

} /* extern "C" */
