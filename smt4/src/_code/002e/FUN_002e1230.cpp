/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e1230` (_code @ 0x2e1230, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00254a2c(unsigned int);
int FUN_002e11f4(unsigned int, int);

typedef int romwright_code(...);
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern int nw_anim_PlayPolicy_Loop(...); /* 0x151500 */
extern unsigned char LAB_00155650; /* 0x155650 */

/* Supplied declaration required: FUN_00254a2c. */
/* Supplied declaration required: FUN_002e11f4. */


void FUN_002e1230(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  romwright_code *pcVar2;
  
  FUN_00254a2c(*(unsigned int *)(param_1 + 8));
  FUN_002e11f4(*(unsigned int *)(param_1 + 8),param_2);
  if (((0 < *(int *)(*(int *)(param_1 + 8) + 0x68)) &&
      (temp_v0 = *(int *)(*(int *)(param_1 + 8) + 0x2c), *(int *)(temp_v0 + 0x150) != 0)) &&
     (temp_v0 = *(int *)(*(int *)(*(int *)(temp_v0 + 0x28) + 0x1c) +
                      *(int *)(temp_v0 + 0x154) * *(int *)(*(int *)(temp_v0 + 0x28) + 0x28) * 4),
     temp_v0 != 0)) {
    if (param_2 == 0) {
      pcVar2 = (romwright_code *)&LAB_00155650;
    }
    else {
      pcVar2 = nw_anim_PlayPolicy_Loop;
    }
    *(unsigned char *)(temp_v0 + 0x58) = 1;
    *(romwright_code **)(temp_v0 + 0x4c) = pcVar2;
  }
  return;
}

} /* extern "C" */
