/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029be5c` (_code @ 0x29be5c, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00343a04(unsigned int);
int FUN_00343a2c(unsigned int);
int FUN_00343a74(unsigned int);
int FUN_00343ba0(unsigned int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern int FUN_002542a4(void);
/* Supplied declaration required: FUN_00343a04. */
/* Supplied declaration required: FUN_00343a2c. */
/* Supplied declaration required: FUN_00343a74. */
/* Supplied declaration required: FUN_00343ba0. */


void FUN_0029be5c(int param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002542a4();
  puVar2 = (unsigned int *)(temp_v0 + param_1 * 4);
  temp_v1 = *puVar2;
  if (param_2 < ~temp_v1) {
    temp_v1 = temp_v1 + param_2;
  }
  else {
    temp_v1 = 0xffffffff;
  }
  *puVar2 = temp_v1;
  if (param_1 == 2) {
    FUN_00343a74(param_2);
    return;
  }
  if (param_1 == 9) {
    FUN_00343ba0(param_2);
    return;
  }
  if (param_1 == 0x13) {
    FUN_00343a04(param_2);
    return;
  }
  if (param_1 != 0x26) {
    return;
  }
  FUN_00343a2c(param_2);
  return;
}

} /* extern "C" */
