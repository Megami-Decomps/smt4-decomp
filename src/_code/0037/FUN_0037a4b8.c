/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037a4b8` (_code @ 0x37a4b8, 0x90 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

/* Supplied declaration required: FUN_002bb170. */
/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */
/* Supplied declaration required: FUN_002c4244. */


void FUN_0037a4b8(int param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  int temp_v0;
  unsigned int temp_v1;
  
  FUN_002c3aa8(param_1 + 0x2c);
  temp_v1 = 0;
  do {
    temp_v0 = param_1 + (temp_v1 & 0xff) * 0xc;
    piVar2 = (int *)*(int *)(temp_v0 + 4);
    while (piVar1 = piVar2, piVar1 != (int *)(temp_v0 + 4)) {
      piVar2 = (int *)*piVar1;
      if (piVar1[5] == param_2) {
        FUN_002bb170(temp_v0);
        *(unsigned char *)(piVar1 + 4) = 4;
        FUN_002c4244(piVar1 + 2);
      }
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 3);
  FUN_002c3a24(param_1 + 0x2c);
  return;
}
