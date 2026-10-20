/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cf28c` (_code @ 0x2cf28c, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00167ab4(int, int, int, int, int, int);

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;

extern unsigned int *DAT_006471a0; /* 0x6471a0 */
extern unsigned int *DAT_006471b4; /* 0x6471b4 */

/* Supplied declaration required: FUN_00167ab4. */


void FUN_002cf28c(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned long long param_5)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  puVar2 = (unsigned int *)0x10000;
  FUN_00167ab4(0x10000,0x100,0,0x68,0x10,1);
  puVar2[2] = param_1;
  puVar2[3] = param_2;
  puVar2[4] = param_3;
  puVar2[5] = param_4;
  puVar2[6] = (int)param_5;
  puVar2[7] = (int)((unsigned long long)param_5 >> 0x20);
  puVar2[1] = 5;
  puVar1 = puVar2;
  if (DAT_006471a0 != (unsigned int *)0x0) {
    *DAT_006471b4 = (unsigned int)puVar2;
    puVar1 = DAT_006471a0;
  }
  DAT_006471a0 = puVar1;
  DAT_006471b4 = puVar2;
  *puVar2 = 0;
  return;
}

} /* extern "C" */
