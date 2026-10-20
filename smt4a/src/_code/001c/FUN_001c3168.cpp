#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00646e54; /* 0x646e54 */


void FUN_001c3168(int param_1,unsigned short param_2)

{
  *(unsigned short *)(&DAT_00646e54 + param_1 * 2) = param_2;
  return;
}

} /* extern "C" */
