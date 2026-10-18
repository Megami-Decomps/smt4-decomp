/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00500ee4` (_code @ 0x500ee4, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_3_stack;

/* Supplied declaration required: FUN_00192de4. */


void FUN_00500ee4(char *param_1,unsigned int *param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  *param_2 = (unsigned int)(*param_1 != '\0') | ((unsigned int)(unsigned char)param_1[2] << 4) |
             ((unsigned int)(unsigned char)param_1[1] << 8);
  param_2[1] = 0x30104;
  if (param_3 != 0) {
    FUN_00192de4(*(int *)(param_1 + 4) + 0x7c,param_2 + 2,1);
    return;
  }
  return;
}
