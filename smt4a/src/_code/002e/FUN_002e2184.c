/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e2184` (_code @ 0x2e2184, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern int FUN_003e5414(void);
/* Supplied declaration required: FUN_003e5b1c. */
/* Supplied declaration required: FUN_0040ba84. */


void FUN_002e2184(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  if (param_1[7] != 0) {
    param_1[6] = 0x3c449ba6;
    param_1[4] = 0x43af0000;
    temp_v0 = FUN_003e5414();
    if (temp_v0 == 0x23) {
      temp_v1 = 0x3f800000;
      temp_v2 = 0x40accccd;
      temp_v3 = 0x3fc00000;
    }
    else {
      temp_v1 = 0x3f99999a;
      temp_v2 = 0x40a9999a;
      temp_v3 = 0x3f000000;
    }
    *param_1 = temp_v1;
    param_1[1] = temp_v2;
    param_1[2] = temp_v3;
    param_1[8] = param_2;
    FUN_0040ba84(param_1[7],param_2,7);
    if (param_1[7] != 0) {
      FUN_003e5b1c();
      return;
    }
  }
  return;
}
