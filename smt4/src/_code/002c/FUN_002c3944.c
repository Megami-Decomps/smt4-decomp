/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c3944` (_code @ 0x2c3944, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


/* WARNING: Control flow encountered bad instruction data */

unsigned int * FUN_002c3944(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  unsigned int unaff_r4;
  int temp_v0;
  
  if (param_2 >= 4) {
    if (((unsigned int)param_1 & 3) != 0) {
      temp_v0 = 4 - ((unsigned int)param_1 & 3);
      puVar1 = param_1;
      if (temp_v0 != 2) {
        puVar1 = (unsigned int *)((int)param_1 + 1);
        *(unsigned char *)param_1 = 0;
      }
      param_2 = param_2 - temp_v0;
      param_1 = puVar1;
      if (temp_v0 >= 2) {
        param_1 = (unsigned int *)((int)puVar1 + 2);
        *(unsigned short *)puVar1 = 0;
      }
    }
    if (param_2 >= 0x20) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1 = param_1 + 4;
    }
    *(unsigned int *)((param_2 - 0x20) + (int)param_1) = unaff_r4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((unsigned char)((unsigned char)(param_2 >> 1) & 1)) {
    puVar2 = (unsigned char *)((int)param_1 + 1);
    *(unsigned char *)param_1 = 0;
    param_1 = (unsigned int *)((int)param_1 + 2);
    *puVar2 = 0;
  }
  puVar1 = param_1;
  if ((int)(param_2 << 0x1f) < 0) {
    puVar1 = (unsigned int *)((int)param_1 + 1);
    *(unsigned char *)param_1 = 0;
  }
  return puVar1;
}
