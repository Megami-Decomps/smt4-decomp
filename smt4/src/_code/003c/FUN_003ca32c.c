/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ca32c` (_code @ 0x3ca32c, 0x180 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
} param_2_stack;

/* Supplied declaration required: FUN_00229a3c. */
/* Supplied declaration required: FUN_0027df30. */
/* Supplied declaration required: FUN_00282820. */


void FUN_003ca32c(int *param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  
  temp_v5 = 0;
  temp_v2 = 0;
  do {
    puVar4 = (unsigned int *)(*(int *)(*param_1 + 0x1fc0) + temp_v2 * 0x288);
    if ((((*puVar4 & 1) != 0) && ((*puVar4 & 0x40) == 0)) &&
       (temp_v1 = (int)(short)puVar4[2], -1 < temp_v1)) {
      temp_v3 = (*(short *)((int)puVar4 + 0x1b6) * 0x32) / 100;
      if (temp_v3 == 0) {
        temp_v3 = -1;
      }
      temp_v4 = (*(short *)((int)puVar4 + 0x1ba) * 0x32) / 100;
      if (temp_v4 == 0) {
        temp_v4 = -1;
      }
      if ((0 < temp_v3) && ((*(unsigned short *)((int)puVar4 + 0x1c6) & 8) != 0)) {
        temp_v3 = 1;
      }
      if ((0 < temp_v4) && ((*(unsigned short *)((int)puVar4 + 0x1c6) & 8) != 0)) {
        temp_v4 = 1;
      }
      temp_v0 = temp_v5 * 5;
      FUN_00282820(temp_v0,param_2,temp_v1,temp_v1,9,0,5,0);
      FUN_0027df30(5,param_2,*(int *)(*param_1 + 0x1e98) + (short)puVar4[2] * 0x114,0,temp_v3,temp_v4,
                   0xffffffff,0,temp_v0,temp_v0,9,1,0);
      temp_v5 = temp_v5 + 1;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 4);
  FUN_00229a3c(0,param_2,0,0x1e,0);
  return;
}
