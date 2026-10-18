/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c36d0` (_code @ 0x2c36d0, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_2_stack;


/* WARNING: Instruction at (ram,0x002c3702) overlaps instruction at (ram,0x002c3700)
    */
/* WARNING: Control flow encountered bad instruction data */

void FUN_002c36d0(int *param_1,unsigned int *param_2)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  puVar1 = (unsigned int *)param_1[1];
  if (puVar1 == (unsigned int *)0x0) {
    *param_1 = (int)param_2;
    param_1[1] = (int)param_2;
    param_2[2] = 0;
    param_2[3] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  while (*param_2 <= *puVar1) {
    puVar1 = (unsigned int *)puVar1[2];
    if (puVar1 == (unsigned int *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  if (puVar1 == (unsigned int *)0x0) {
    halt_baddata();
  }
  temp_v0 = puVar1[3];
  puVar1[3] = (unsigned int)param_2;
  param_2[2] = (unsigned int)puVar1;
  param_2[3] = temp_v0;
  if (temp_v0 != 0) {
    halt_baddata();
  }
  param_1[1] = (int)param_2;
  halt_baddata();
}
