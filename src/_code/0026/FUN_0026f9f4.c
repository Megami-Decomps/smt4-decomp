/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026f9f4` (_code @ 0x26f9f4, 0x7c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_00294054. */
/* Supplied declaration required: FUN_002940ac. */
/* Supplied declaration required: FUN_0029411c. */
extern int FUN_00294180(unsigned int);
/* Supplied declaration required: FUN_00297920. */
/* Supplied declaration required: FUN_0029bc1c. */


unsigned int FUN_0026f9f4(unsigned int *param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  temp_v1 = 0;
  if (param_1[7] != 0) {
    FUN_00297920();
    temp_v0 = FUN_00294180(param_1[7]);
    if (temp_v0 != 0) {
      temp_v2 = *param_1;
      uStack_14 = param_1[1];
      uStack_10 = param_1[2];
      FUN_0029411c(param_1[7],&temp_v2);
      FUN_002940ac(param_1[7]);
      FUN_00294054(param_1[7],param_1 + 3);
      FUN_0029bc1c(0);
      temp_v1 = 1;
    }
  }
  return temp_v1;
}
