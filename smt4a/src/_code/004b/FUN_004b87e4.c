/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004b87e4` (_code @ 0x4b87e4, 0xfc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_00168980. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019c364. */
/* Supplied declaration required: FUN_00203d04. */
extern int FUN_002619e0(void);
/* Supplied declaration required: FUN_002e132c. */
/* Supplied declaration required: FUN_00318d6c. */
/* Supplied declaration required: FUN_0035b304. */
/* Supplied declaration required: FUN_0037b450. */
/* Supplied declaration required: FUN_00493154. */
/* Supplied declaration required: FUN_004bb048. */
/* Supplied declaration required: FUN_004bb1a0. */


void FUN_004b87e4(int param_1)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  
  if (*(int *)(param_1 + 0x114c) != 0) {
    FUN_0019c364();
    *(unsigned int *)(param_1 + 0x114c) = 0;
  }
  if (*(int *)(param_1 + 0x1144) != 0) {
    FUN_0019a5a0();
    *(unsigned int *)(param_1 + 0x1144) = 0;
  }
  if (*(int *)(param_1 + 0x1148) != 0) {
    FUN_0019a5a0();
    *(unsigned int *)(param_1 + 0x1148) = 0;
  }
  if (*(int *)(param_1 + 0x1140) != 0) {
    FUN_0019c364();
    *(unsigned int *)(param_1 + 0x1140) = 0;
  }
  if (*(int *)(param_1 + 0x1138) != 0) {
    FUN_0019a5a0();
    *(unsigned int *)(param_1 + 0x1138) = 0;
  }
  if (*(int *)(param_1 + 0x113c) != 0) {
    FUN_0019a5a0();
    *(unsigned int *)(param_1 + 0x113c) = 0;
  }
  FUN_004bb048(param_1 + 0x9c);
  FUN_004bb1a0(param_1 + 0x1114);
  FUN_00493154();
  temp_v0 = FUN_002619e0();
  if (temp_v0 != 0) {
    FUN_00203d04(0);
  }
  FUN_00168980(3);
  FUN_0037b450();
  FUN_00318d6c();
  FUN_0035b304();
  FUN_002e132c(0x18);
  return;
}
