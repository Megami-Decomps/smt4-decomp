/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030d0bc` (_code @ 0x30d0bc, 0x4a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Supplied declaration required: FUN_0030c884. */
/* Supplied declaration required: FUN_0030fd10. */
extern int aeabi_idivmod(int, unsigned int);


void FUN_0030d0bc(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v1 = *param_1;
  temp_v2 = param_1[1];
  temp_v0 = temp_v2;
  temp_v3 = temp_v1;
  if (temp_v1 != temp_v2) {
    for (; temp_v0 != temp_v2; temp_v0 = temp_v0 + 0x18) {
      FUN_0030c884(temp_v3,temp_v0);
      temp_v3 = temp_v3 + 0x18;
    }
    FUN_0030fd10(param_1,temp_v3,param_1[1]);
    temp_v0 = aeabi_idivmod(temp_v2 - temp_v1,0x18);
    param_1[1] = param_1[1] + temp_v0 * -0x18;
  }
  return;
}
