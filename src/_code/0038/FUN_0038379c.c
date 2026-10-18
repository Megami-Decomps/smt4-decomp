/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038379c` (_code @ 0x38379c, 0xe4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_001a15a0. */
/* Supplied declaration required: FUN_0026fbd0. */
/* Supplied declaration required: FUN_00270298. */
/* Supplied declaration required: FUN_0027605c. */
extern int FUN_00287afc(void);
extern int FUN_00290694(void);
/* Supplied declaration required: FUN_00291a5c. */
/* Supplied declaration required: FUN_002b6700. */
/* Supplied declaration required: FUN_002b91c4. */


void FUN_0038379c(int param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = *(int *)(param_1 + 8);
  if (temp_v0 != 0) {
    if (temp_v0 != 1) {
      if (((temp_v0 == 2) && (temp_v0 = FUN_00290694(), temp_v0 != 0)) &&
         (temp_v1 = FUN_00287afc(), temp_v1 == 6)) {
        FUN_001a15a0(1);
        FUN_002b6700();
        FUN_0026fbd0(*(unsigned short *)(temp_v0 + 0x148));
        FUN_00291a5c();
        return;
      }
    }
    else {
      if (*(int *)(param_1 + 0xc) == 0) {
        FUN_00270298(1);
      }
      temp_v0 = *(int *)(param_1 + 0xc);
      temp_v1 = temp_v0 + 1;
      *(int *)(param_1 + 0xc) = temp_v1;
      if (temp_v1 >= 4) {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        *(int *)(param_1 + 0xc) = temp_v0 + 2;
        return;
      }
    }
  }
  else {
    temp_v0 = *(int *)(param_1 + 0xc) + 1;
    *(int *)(param_1 + 0xc) = temp_v0;
    if (temp_v0 == 7) {
      FUN_002b91c4(0x1000184);
      FUN_0027605c();
    }
    if (*(int *)(param_1 + 0xc) == 8) {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      *(unsigned int *)(param_1 + 0xc) = 0;
    }
  }
  return;
}
