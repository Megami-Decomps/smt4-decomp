/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016bad8` (_code @ 0x16bad8, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_0016b824. */
/* Supplied declaration required: FUN_0016b8a8. */
/* Supplied declaration required: FUN_0016bde0. */
/* Supplied declaration required: FUN_0016c058. */


void FUN_0016bad8(int *param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  *(unsigned char *)(param_1 + 0x2d) = 0;
  FUN_0016bde0(param_1,0);
  FUN_0016b824(param_1,0);
  FUN_0016b8a8(param_1,0);
  temp_v1 = param_1[1];
  for (temp_v0 = *param_1; temp_v0 != temp_v1; temp_v0 = temp_v0 + 0x30) {
    FUN_0016c058(param_1,temp_v0);
  }
  temp_v0 = param_1[1];
  if (*param_1 != temp_v0) {
    param_1[1] = temp_v0 + ((temp_v0 - *param_1) / 0x30) * -0x30;
  }
  return;
}
