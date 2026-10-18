/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e439c` (_code @ 0x2e439c, 0xc8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int FUN_001eb82c(void);
/* Supplied declaration required: FUN_00292dd0. */
/* Supplied declaration required: FUN_00298140. */
extern int FUN_0029e908(int);


void FUN_002e439c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  *(unsigned char *)(param_1 + 0x307f) = 1;
  *(unsigned short *)(param_1 + 0x3072) = 0;
  if (-1 < *(short *)(param_1 + 0x3074)) {
    *(unsigned short *)(param_1 + 0x3072) = 1;
  }
  if (-1 < *(short *)(param_1 + 0x3076)) {
    *(short *)(param_1 + 0x3072) = *(short *)(param_1 + 0x3072) + 1;
  }
  if (-1 < *(short *)(param_1 + 0x3078)) {
    *(short *)(param_1 + 0x3072) = *(short *)(param_1 + 0x3072) + 1;
  }
  if (-1 < *(short *)(param_1 + 0x307a)) {
    *(short *)(param_1 + 0x3072) = *(short *)(param_1 + 0x3072) + 1;
  }
  temp_v0 = FUN_001eb82c();
  if (temp_v0 == 0) {
    temp_v0 = FUN_0029e908(param_1 + *(int *)(param_1 + 0x305c) * 100 + 0x3088);
    FUN_00292dd0(temp_v0 == 0);
  }
  FUN_00298140(param_1,0xe,1);
  return;
}
