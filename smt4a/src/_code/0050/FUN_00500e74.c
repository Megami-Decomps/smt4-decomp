/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00500e74` (_code @ 0x500e74, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_3_stack;

/* Supplied declaration required: FUN_00192de4. */


void FUN_00500e74(char *param_1,unsigned int *param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  if (*param_1 != '\0') {
    *param_2 = 0xe40000;
    param_2[1] = 0x30100;
    param_2[2] = 0x1010000;
    param_2[3] = 0xf0101;
    param_2[4] = (unsigned int)(unsigned char)param_1[1];
    param_2[5] = 0xf0102;
    param_2 = param_2 + 6;
  }
  if (param_3 != 0) {
    FUN_00192de4(*(int *)(param_1 + 4) + 0x7c,param_2,1);
    return;
  }
  return;
}
