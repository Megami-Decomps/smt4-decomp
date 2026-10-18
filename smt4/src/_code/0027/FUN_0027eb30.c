/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027eb30` (_code @ 0x27eb30, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_002a780c. */
extern int FUN_002bf244(unsigned int);
/* Supplied declaration required: FUN_002c43b4. */


void FUN_0027eb30(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002bf244(param_1[1]);
  if (temp_v0 != 0) {
    if (param_1[0x107] != 0) {
      FUN_002a780c();
      param_1[0x107] = 0;
    }
    *param_1 = *param_1 & 0xffffffcf;
    FUN_002c43b4(param_1[1],0);
    return;
  }
  return;
}
