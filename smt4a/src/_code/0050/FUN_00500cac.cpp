/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00500cac` (_code @ 0x500cac, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00192de4(int, unsigned int *, int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_3_stack;

/* Supplied declaration required: FUN_00192de4. */


void FUN_00500cac(char *param_1,unsigned int *param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  *param_2 = (unsigned int)(*param_1 != '\0') | ((unsigned int)(unsigned char)param_1[4] << 4) |
             ((unsigned int)(unsigned char)param_1[1] << 8) | (*(int *)(param_1 + 8) << 0x10) |
             (*(int *)(param_1 + 0xc) << 0x18);
  param_2[1] = 0xf0105;
  param_2[2] = (unsigned int)(unsigned char)param_1[0x10] | ((unsigned int)(unsigned char)param_1[0x11] << 4) |
               ((unsigned int)(unsigned char)param_1[0x12] << 8);
  param_2[3] = 0xf0106;
  if (param_3 != 0) {
    FUN_00192de4(*(int *)(param_1 + 0x14) + 0x7c,param_2 + 4,1);
    return;
  }
  return;
}

} /* extern "C" */
