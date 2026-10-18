/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ab5fc` (_code @ 0x3ab5fc, 0x168 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Supplied declaration required: FUN_0022d944. */
/* Supplied declaration required: FUN_00230e54. */
/* Supplied declaration required: FUN_00231d60. */
/* Supplied declaration required: FUN_002337a0. */
extern int FUN_002338ac(int);
/* Supplied declaration required: FUN_00240e8c. */
/* Supplied declaration required: FUN_002890d0. */
/* Supplied declaration required: FUN_0029cbec. */
extern int FUN_0029ebc4(int);
/* Supplied declaration required: FUN_003abd08. */


void FUN_003ab5fc(int param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  
  FUN_00230e54(param_1 + 200,3,0,0,0x1f);
  FUN_00231d60(param_1 + 200,0x4c7,0,0,0x1f,1);
  FUN_00231d60(param_1 + 200,0x4c8,0,0,0x1f,1);
  FUN_00231d60(param_1 + 200,0x4ca,0,0,0x1f,1);
  if (*(int *)(param_1 + 0x28) != 0) {
    temp_v0 = FUN_0029ebc4(param_1 + 0x20);
    temp_v1 = FUN_002338ac(param_1 + 0x20);
    temp_v5 = 0;
    if (temp_v5 < temp_v1) {
      do {
        if ((*(int *)(param_1 + 0x14) != 3) ||
           (temp_v2 = FUN_00240e8c(param_1 + 0x20), temp_v2 != temp_v5)) {
          FUN_003abd08(param_1,temp_v5,temp_v0 + temp_v5,0,0x1f);
        }
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < temp_v1);
    }
    if (*(int *)(param_1 + 0x14) == 3) {
      temp_v3 = FUN_002337a0(param_1 + 0x20);
      temp_v4 = FUN_00240e8c(param_1 + 0x20);
      FUN_003abd08(param_1,temp_v4,temp_v3,1,0x20);
      temp_v0 = FUN_002337a0(param_1 + 0x20);
      FUN_002890d0((int)*(short *)(param_1 + temp_v0 * 0x20 + 0x5ac));
      FUN_0029cbec();
    }
    FUN_0022d944(param_1,0x1f);
    return;
  }
  return;
}
