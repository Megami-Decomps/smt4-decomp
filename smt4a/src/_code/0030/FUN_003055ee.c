/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003055ee` (_code @ 0x3055ee, 0x56 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_5_stack;

/* Supplied declaration required: FUN_0011742c. */
/* Supplied declaration required: FUN_0011e910. */
/* Supplied declaration required: FUN_0011e9c8. */
/* Supplied declaration required: FUN_002f8728. */
/* Supplied declaration required: FUN_002fd180. */


int FUN_003055ee(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,int param_5)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [24];
  int iStack_24;
  unsigned int uStack_20;
  unsigned int temp_v2;
  unsigned int uStack_18;
  
  iStack_24 = param_1;
  uStack_20 = param_2;
  temp_v2 = param_3;
  uStack_18 = param_4;
  FUN_002f8728(temp_v1);
  FUN_0011742c(param_1,temp_v1);
  temp_v0 = param_1 + 0x10;
  if (*(int *)(param_5 + 4) != 0) {
    FUN_0011e9c8(temp_v0,param_2,temp_v2,temp_v1,*(int *)(param_1 + 8) + 0x10,param_4,param_5);
  }
  else {
    FUN_0011e910(temp_v0,param_2,temp_v2,temp_v1,*(int *)(param_1 + 8) + 0x10,param_4);
  }
  FUN_002fd180(temp_v1);
  return temp_v0;
}
