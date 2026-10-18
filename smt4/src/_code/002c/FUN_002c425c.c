/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c425c` (_code @ 0x2c425c, 0x140 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_004e3cf4; /* 0x4e3cf4 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002c425c(unsigned int param_1,unsigned int param_2)

{
/* irregular: 3 goto(s); 7 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int temp_v0;
  int unaff_r6;
  int temp_v1;
  int *piVar6;
  
  for (temp_v0 = *(int *)(DAT_004e3cf4 + (param_1 >> 0x14) * 8); temp_v0 != 0;
      temp_v0 = *(int *)(temp_v0 + 0x4c)) {
    if (*(unsigned int *)(temp_v0 + 0x24) == (param_1 & 0xfffff)) goto LAB_002c42a0;
  }
  temp_v0 = 0;
LAB_002c42a0:
  piVar1 = *(int **)(DAT_004e3cf4 + (param_2 >> 0x14) * 8);
  for (piVar2 = piVar1; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[0x13]) {
    if (piVar2[9] == (param_2 & 0xfffff)) goto LAB_002c42d4;
  }
  piVar2 = (int *)0x0;
LAB_002c42d4:
  if (piVar2[0x15] != 0) {
    for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x13]) {
      if (piVar1[9] == (param_2 & 0xfffff)) goto LAB_002c4308;
    }
    piVar1 = (int *)0x0;
LAB_002c4308:
    temp_v1 = piVar1[0x15];
    if (temp_v1 != 0) {
      piVar3 = *(int **)(temp_v1 + 0x58);
      if (piVar3 == piVar1) {
        *(int *)(temp_v1 + 0x58) = piVar1[0x17];
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      piVar6 = (int *)piVar3[0x17];
      if (piVar6 == piVar1) {
        *piVar3 = temp_v0;
        piVar3[1] = (int)piVar2;
        piVar3[2] = 0;
        piVar3[3] = unaff_r6;
        piVar3 = (int *)((int)(piVar3 + 4) >> 0x20);
        if ((int *)0x1f < piVar1) {
          *piVar3 = temp_v0;
          piVar3[1] = (int)piVar2;
          piVar3[2] = (int)piVar6;
          piVar3[3] = temp_v0;
          piVar3 = piVar3 + 4;
        }
        *(unsigned int *)((int)(piVar1 + -8) + (int)piVar3) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      software_interrupt(0xcf);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
