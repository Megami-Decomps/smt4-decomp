/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b6e78` (_code @ 0x2b6e78, 0x54 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern float fRam00000018; /* 0x18 */

/* Unsupported intrinsic, declaration required: coprocessor_store (CALLOTHER). */
extern int FUN_002b6e60(void);


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x002b6ea8) overlaps instruction at (ram,0x002b6ea6)
    */

void FUN_002b6e78(void)

{
/* irregular: irregular input(s): in_cr15, in_s4, in_s6; 5 native warning(s); review required */
  int temp_v0;
  unsigned short *puVar2;
  int unaff_r7;
  unsigned int in_cr15;
  float in_s4;
  float in_s6;
  
  temp_v0 = FUN_002b6e60();
  puVar2 = (unsigned int)(uint)*(unsigned int)(temp_v0 + 0x608);
  if ((*(unsigned short *)(temp_v0 + 0x608) & 1) != 0) {
    if (*(short *)(temp_v0 + 0x46) == 0) {
      fRam00000018 = in_s4 * in_s6;
      coprocessor_store(0xf,in_cr15,0x78);
      return;
    }
    temp_v0 = 2;
  }
  else {
    puVar2 = (unsigned short *)(unaff_r7 << 2);
  }
  *puVar2 = (short)temp_v0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
