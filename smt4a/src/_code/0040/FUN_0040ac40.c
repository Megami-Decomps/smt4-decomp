/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040ac40` (_code @ 0x40ac40, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */

/* Supplied declaration required: FUN_001aea28. */
/* Supplied declaration required: FUN_002e3328. */
/* Supplied declaration required: FUN_003fd790. */


void FUN_0040ac40(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  *param_1 = param_2;
  temp_v0 = param_1[1];
  param_1[4] = 0;
  if (temp_v0 != 0) {
    if ((*(unsigned int *)(temp_v0 + 4) & 4) != 0) {
      FUN_003fd790(temp_v0);
    }
    FUN_001aea28(DAT_0056fcc0,param_1[1]);
  }
  if ((int *)param_1[2] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[2] + 4))();
    param_1[2] = 0;
  }
  if ((int *)param_1[1] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[1] + 4))();
    param_1[1] = 0;
  }
  if ((int *)param_1[3] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[3] + 4))();
    param_1[3] = 0;
  }
  FUN_002e3328(param_1);
  return;
}
