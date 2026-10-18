/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014d390` (_code @ 0x14d390, 0x74 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00151fa0. */
/* Supplied declaration required: FUN_00151fc8. */
extern unsigned int *FUN_00152170(int);
extern int FUN_002a6d28(void);
extern int FUN_002a6d58(unsigned int);


unsigned int FUN_0014d390(int param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  unsigned int *puVar5;
  
  temp_v0 = FUN_002a6d58(*(unsigned int *)(*(int *)(param_1 + 4) + 0x3c));
  temp_v2 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_002a6d28();
    if (temp_v1 != 3) {
      temp_v2 = 0;
    }
    else {
      puVar4 = (unsigned int *)FUN_00152170(temp_v0);
      *param_3 = *puVar4;
      param_3[1] = puVar4[1];
      puVar5 = puVar4;
      FUN_00151fa0();
      *(char *)(param_3 + 2) = (char)puVar5;
      FUN_00151fc8();
      *(unsigned char *)((int)param_3 + 9) = puVar4 != (unsigned int *)0x0;
      temp_v2 = 1;
    }
  }
  return temp_v2;
}
