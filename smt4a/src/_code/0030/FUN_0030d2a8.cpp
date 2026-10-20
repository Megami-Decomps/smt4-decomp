/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030d2a8` (_code @ 0x30d2a8, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00307bce(int, int);
int FUN_0030fdc0(int *, int, int);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

/* Supplied declaration required: FUN_00307bce. */
extern int FUN_0030c6a2(int *);
/* Supplied declaration required: FUN_0030fdc0. */
extern int aeabi_idivmod(int, unsigned int);


void FUN_0030d2a8(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v4 = *param_1;
  temp_v0 = param_1[1];
  temp_v1 = FUN_0030c6a2(param_1);
  if (temp_v1 == 0) {
    temp_v2 = param_1[1];
    temp_v1 = temp_v4;
    for (temp_v3 = temp_v0; temp_v3 != temp_v2; temp_v3 = temp_v3 + 0x18) {
      FUN_00307bce(temp_v1,temp_v3);
      temp_v1 = temp_v1 + 0x18;
    }
    FUN_0030fdc0(param_1,temp_v1,param_1[1]);
    temp_v0 = aeabi_idivmod(temp_v0 - temp_v4,0x18);
    param_1[1] = param_1[1] + temp_v0 * -0x18;
  }
  return;
}

} /* extern "C" */
