/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c450c` (_code @ 0x2c450c, 0x3f8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00464a70; /* 0x464a70 */
extern unsigned int *DAT_00464a74; /* 0x464a74 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002c450c(unsigned int *param_1,int param_2,unsigned int param_3,int param_4)

{
/* irregular: irregular input(s): in_r12; 8 native warning(s); review required */
  int *piVar1;
  unsigned int *puVar2;
  int temp_v0;
  int *piVar4;
  int *piVar5;
  int temp_v1;
  int *piVar7;
  int in_r12;
  
  temp_v0 = DAT_00464a70;
  puVar2 = (unsigned int *)&DAT_00464a70;
  if (DAT_00464a70 != 0) {
    puVar2 = DAT_00464a74;
  }
  if ((DAT_00464a70 == 0 || puVar2 <= param_1) ||
     (piVar1 = (int *)((int)param_1 * 3), piVar4 = piVar1, DAT_00464a70 + (int)param_1 * 0x2c == 0))
  {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  for (; (piVar5 = piVar1, piVar4 != (int *)0x0 && (piVar5 = piVar4, piVar4[9] != in_r12));
      piVar4 = (int *)piVar4[0x13]) {
  }
  temp_v1 = piVar5[0x15];
  if (temp_v1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar4 = *(int **)(temp_v1 + 0x58);
  if (piVar4 == piVar5) {
    *(int *)(temp_v1 + 0x58) = piVar5[0x17];
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar7 = (int *)piVar4[0x17];
  if (piVar7 == piVar5) {
    *piVar4 = DAT_00464a70;
    piVar4[1] = param_4;
    piVar4[2] = (int)piVar1;
    piVar4[3] = param_2;
    piVar4 = (int *)((int)(piVar4 + 4) >> 0x20);
    if ((int *)0x1f < piVar5) {
      *piVar4 = temp_v0;
      piVar4[1] = param_4;
      piVar4[2] = (int)piVar7;
      piVar4[3] = temp_v0;
      piVar4 = piVar4 + 4;
    }
    *(int **)((int)(piVar5 + -8) + (int)piVar4) = piVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  software_interrupt(0xcf);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
