/* NON_MATCHING: found outside every function: its address is in FUN_00175cd8's literal pool; not written yet. */
/* romwright 0.5.0 decompilation of FUN_00191498 for reference (not compiled; its own view of the boundaries):

void FUN_00191498(void)

{
  unsigned int in_fpscr;
  float in_s0;
  unsigned int uVar1;
  
  uVar1 = VectorFloatToUnsigned(in_s0 * 65536.0f,3);
  VectorUnsignedToFloat(uVar1 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
  return;
}
*/
#include "common.h"
