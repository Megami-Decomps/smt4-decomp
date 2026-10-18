/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c3460` (_code @ 0x3c3460, 0x8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004005b8; /* 0x4005b8 */
extern unsigned char DAT_004005c0; /* 0x4005c0 */
extern unsigned char DAT_004005c8; /* 0x4005c8 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
extern unsigned int FUN_002200f8(unsigned int);
/* Supplied declaration required: FUN_00256464. */
/* Supplied declaration required: FUN_002bd25c. */
extern unsigned int FUN_002bd3ec(void);
/* Supplied declaration required: FUN_002be7fc. */


void FUN_003c3460(unsigned int param_1,unsigned int *param_2)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int in_fpscr;
  int uStack_28;
  unsigned int uStack_24;
  unsigned int uStack_20;
  
  if (param_2 != (unsigned int *)0x0) {
    temp_v0 = FUN_002200f8(3);
    temp_v2 = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    temp_v1 = *param_2;
    if ((temp_v1 & 2) != 0) {
      FUN_002be7fc(&uStack_28,&DAT_004005b8);
      temp_v2 = FUN_002bd3ec();
    }
    else if ((temp_v1 & 8) != 0) {
      FUN_002be7fc(&uStack_28,&DAT_004005c0);
      temp_v2 = (unsigned int)*(unsigned short *)((int)param_2 + 0xce);
      FUN_002bd25c(temp_v2);
    }
    else if ((temp_v1 & 0x20) != 0) {
      FUN_002be7fc(&uStack_28,&DAT_004005c8);
      temp_v2 = (unsigned int)*(unsigned short *)((int)param_2 + 0xce);
      FUN_002bd25c(temp_v2);
    }
    else if ((temp_v1 & 0x10) != 0) {
      FUN_002be7fc(&uStack_28,"䞓＀覉澏璃貃宁肃");
      temp_v2 = (unsigned int)*(unsigned short *)((int)param_2 + 0xce);
      FUN_002bd25c(temp_v2);
    }
    FUN_00256464(&uStack_28);
    VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00256464(temp_v2);
    return;
  }
  return;
}
