/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b60cc` (_code @ 0x2b60cc, 0x1a0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int uRam000014e5; /* 0x14e5 */
extern unsigned int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_00140d40. */
extern int FUN_00140dac(unsigned int, int);
/* Supplied declaration required: FUN_002b06a0. */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002b60cc(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int unaff_r5;
  unsigned int temp_v1;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  if (-1 < param_1) {
    temp_v1 = 0x2b6cac;
    temp_v0 = FUN_00140dac(DAT_00433158,param_1);
    if (temp_v0 == 0) {
      if (param_1 < 0x200) {
        iStack_28 = (param_1 / 0x10) * 0x10;
        iStack_24 = iStack_28 + 0x10;
        iStack_20 = (param_1 % 0x10) * 0x20;
        iStack_1c = iStack_20 + 0x20;
        FUN_002b06a0(2,0x25,0,param_2,param_2 - unaff_r5,param_4,&iStack_28);
        return;
      }
      if (((param_1 >> 0x1f) & 1U) != 0) {
        uRam000014e5 = temp_v1;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    FUN_00140d40(DAT_00433158,param_1,param_2,param_2 - unaff_r5,param_4);
  }
  return;
}
