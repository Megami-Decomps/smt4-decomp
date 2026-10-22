/* NON_MATCHING: found outside every function: the Thumb body of the ARM entry stub FUN_0010079c; not written yet. */
/* romwright 0.5.0 decompilation of FUN_00100822 for reference (not compiled; its own view of the boundaries):

/* WARNING: Control flow encountered bad instruction data * /

void FUN_00100822(void)

{
  unsigned int *in_r3;
  unsigned int unaff_r4;
  unsigned int unaff_r5;
  unsigned int unaff_r10;
  unsigned int in_r12;
  unsigned char in_OV;
  
  if (in_OV) {
    *in_r3 = 0x10082a;
    in_r3[-1] = register0x00000054;
    in_r3[-2] = in_r12;
    in_r3[-3] = unaff_r10;
    in_r3[-4] = unaff_r5;
    in_r3[-5] = unaff_r4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here * /
  halt_baddata();
}
*/
#include "common.h"
