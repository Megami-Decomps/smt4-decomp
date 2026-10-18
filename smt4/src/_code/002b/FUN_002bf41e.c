/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bf41e` (_code @ 0x2bf41e, 0x2 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coprocessor_load (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x002bfc3a) */
/* WARNING: Removing unreachable block (ram,0x002bfc3e) */
/* WARNING: Removing unreachable block (ram,0x002bfc46) */

void FUN_002bf41e(int param_1,int param_2)

{
/* irregular: irregular input(s): in_cr8, in_lr; 12 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned short *unaff_r8;
  unsigned short in_lr;
  unsigned int in_cr8;
  unsigned char uStack00000000;
  
  coprocessor_load(7,in_cr8,&uStack00000000);
  temp_v0 = *(unsigned int *)(param_1 + param_2 * 4);
  puVar2 = *(unsigned int **)((temp_v0 & 0x1f) * 4 + 0x4c62ac);
  if (puVar2 == (unsigned int *)0x0) {
    *unaff_r8 = in_lr;
    software_interrupt(0x3ae28d);
    software_interrupt(0x37e28d);
    software_interrupt(0x34e28d);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*puVar2 != temp_v0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
