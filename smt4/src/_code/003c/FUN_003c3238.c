/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c3238` (_code @ 0x3c3238, 0x8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0040056c; /* 0x40056c */
extern unsigned char DAT_00400574; /* 0x400574 */
extern unsigned char DAT_0040057c; /* 0x40057c */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
extern unsigned int FUN_002201f4(unsigned int);
/* Supplied declaration required: FUN_00256224. */
/* Supplied declaration required: FUN_002bd06c. */
extern unsigned int FUN_002bd1fc(void);
/* Supplied declaration required: FUN_002be624. */


void FUN_003c3238(unsigned int param_1,unsigned int *param_2)

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
    temp_v0 = FUN_002201f4(3);
    temp_v2 = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    temp_v1 = *param_2;
    if ((temp_v1 & 2) != 0) {
      FUN_002be624(&uStack_28,&DAT_0040056c);
      temp_v2 = FUN_002bd1fc();
    }
    else if ((temp_v1 & 8) != 0) {
      FUN_002be624(&uStack_28,&DAT_00400574);
      temp_v2 = (unsigned int)*(unsigned short *)((int)param_2 + 0xce);
      FUN_002bd06c(temp_v2);
    }
    else if ((temp_v1 & 0x20) != 0) {
      FUN_002be624(&uStack_28,&DAT_0040057c);
      temp_v2 = (unsigned int)*(unsigned short *)((int)param_2 + 0xce);
      FUN_002bd06c(temp_v2);
    }
    else if ((temp_v1 & 0x10) != 0) {
      FUN_002be624(&uStack_28,"䞓＀覉澏璃貃宁肃");
      temp_v2 = (unsigned int)*(unsigned short *)((int)param_2 + 0xce);
      FUN_002bd06c(temp_v2);
    }
    FUN_00256224(&uStack_28);
    VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00256224(temp_v2);
    return;
  }
  return;
}
