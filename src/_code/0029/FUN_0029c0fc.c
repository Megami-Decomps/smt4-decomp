/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029c0fc` (_code @ 0x29c0fc, 0x7c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern int FUN_002544e4(void);
/* Supplied declaration required: FUN_00343c3c. */
/* Supplied declaration required: FUN_00343c64. */
/* Supplied declaration required: FUN_00343cac. */
/* Supplied declaration required: FUN_00343dd8. */


void FUN_0029c0fc(int param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002544e4();
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
    FUN_00343cac(param_2);
    return;
  }
  if (param_1 == 9) {
    FUN_00343dd8(param_2);
    return;
  }
  if (param_1 == 0x13) {
    FUN_00343c3c(param_2);
    return;
  }
  if (param_1 != 0x26) {
    return;
  }
  FUN_00343c64(param_2);
  return;
}
