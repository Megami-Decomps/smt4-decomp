/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f80e4` (_code @ 0x2f80e4, 0x8c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: FUN_00249950. */
extern int FUN_0024c740(int);
/* Supplied declaration required: FUN_002ae3f0. */
extern int FUN_002ae464(int);


void FUN_002f80e4(int *param_1,int *param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  short temp_v3;
  short temp_v4;
  
  temp_v0 = FUN_002ae464(*param_1);
  if (temp_v0 != 0) {
    temp_v0 = 99;
    temp_v4 = 0;
  }
  else {
    temp_v0 = FUN_0024c740(*param_1);
    temp_v1 = *param_1;
    FUN_002ae3f0();
    temp_v4 = *(short *)(temp_v1 + 0x2c);
  }
  temp_v1 = FUN_002ae464(*param_2);
  if (temp_v1 != 0) {
    temp_v1 = 99;
    temp_v3 = 0;
  }
  else {
    temp_v1 = FUN_0024c740(*param_2);
    temp_v2 = *param_2;
    FUN_002ae3f0();
    temp_v3 = *(short *)(temp_v2 + 0x2c);
  }
  if (temp_v1 != temp_v0 || temp_v4 != temp_v3) {
    return;
  }
  FUN_00249950(param_1,param_2);
  return;
}
