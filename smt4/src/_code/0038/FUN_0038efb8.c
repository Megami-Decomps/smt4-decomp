/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038efb8` (_code @ 0x38efb8, 0x170 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char LAB_0038f12c; /* 0x38f12c */
extern int DAT_00432fc8; /* 0x432fc8 */

/* Supplied declaration required: FUN_0023392c. */
/* Supplied declaration required: FUN_00233db8. */
/* Supplied declaration required: FUN_002ac8b0. */
/* Supplied declaration required: FUN_0038b544. */


void FUN_0038efb8(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = DAT_00432fc8;
  temp_v0 = *(int *)(param_1 + 8);
  if (temp_v0 == 0) {
    *(unsigned int *)(param_1 + 8) = 1;
  }
  else {
    if (temp_v0 == 1) {
      *(unsigned int *)(DAT_00432fc8 + 0x694) = 0;
      *(unsigned int *)(temp_v1 + 0x698) = 0;
      *(unsigned int *)(temp_v1 + 0x69c) = 0;
      *(unsigned int *)(temp_v1 + 0x6a0) = 0;
      *(unsigned int *)(temp_v1 + 0x6a4) = 0;
      *(unsigned int *)(temp_v1 + 0x6a8) = 0;
      *(unsigned int *)(temp_v1 + 0x6ac) = 0;
      *(unsigned int *)(temp_v1 + 0x6b0) = 0;
      *(unsigned int *)(temp_v1 + 0x6b4) = 0;
      *(unsigned int *)(temp_v1 + 0x6b8) = 0;
      *(unsigned int *)(temp_v1 + 0x6bc) = 0;
      *(unsigned int *)(temp_v1 + 0x6c0) = 0;
      *(unsigned int *)(temp_v1 + 0x6c4) = 0;
      *(unsigned int *)(temp_v1 + 0x6c8) = 0;
      *(unsigned int *)(temp_v1 + 0x6cc) = 0;
      *(unsigned int *)(temp_v1 + 0x6d0) = 0;
      FUN_0038b544(temp_v1,temp_v1 + 0x694,&LAB_0038f12c,0x10,0,1,temp_v1 + 0x6d4);
      if (temp_v1 == 0) {
        *(unsigned int *)(param_1 + 8) = 2;
        *(unsigned int *)(param_1 + 0xc) = 3;
        return;
      }
      FUN_002ac8b0(DAT_00432fc8 + 0x6d4,DAT_00432fc8 + 0x694,0x40);
      *(unsigned int *)(param_1 + 4) = 0xe;
      *(unsigned int *)(param_1 + 8) = 0;
      if (*(int **)(param_1 + 0x208) != (int *)0x0) {
        (**(romwright_code **)(**(int **)(param_1 + 0x208) + 4))();
        *(unsigned int *)(param_1 + 0x208) = 0;
      }
      FUN_00233db8(param_1,0);
      FUN_0023392c(param_1,0xffffffff,0);
      return;
    }
    if ((temp_v0 == 2) &&
       (temp_v1 = *(int *)(param_1 + 0xc) - 1, *(int *)(param_1 + 0xc) = temp_v1, temp_v1 < 1)) {
      *(unsigned int *)(param_1 + 4) = 6;
      *(unsigned int *)(param_1 + 8) = 0;
      if (*(int **)(param_1 + 0x208) != (int *)0x0) {
        (**(romwright_code **)(**(int **)(param_1 + 0x208) + 4))();
        *(unsigned int *)(param_1 + 0x208) = 0;
      }
    }
  }
  return;
}
