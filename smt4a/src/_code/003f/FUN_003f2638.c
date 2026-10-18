/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f2638` (_code @ 0x3f2638, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned int DAT_0057113c; /* 0x57113c */
extern int DAT_005712f0; /* 0x5712f0 */
extern unsigned int DAT_00573a58; /* 0x573a58 */
extern unsigned int DAT_00573a5c; /* 0x573a5c */

/* Supplied declaration required: FUN_004102d8. */
extern int FUN_004ec93c(unsigned int);
extern int FUN_004ee568(unsigned int);


void FUN_003f2638(int param_1,int param_2,int param_3,int param_4)

{
/* irregular: irregular input(s): in_lr; 2 native warning(s); review required */
  int temp_v0;
  unsigned int unaff_r4;
  unsigned int in_lr;
  
  if (((((param_4 != 0) || (temp_v0 = FUN_004ee568(DAT_0057113c), temp_v0 == 0)) ||
       (temp_v0 = FUN_004ec93c(DAT_0057113c), temp_v0 == 0)) ||
      ((*(unsigned int *)(param_1 + 0x45a4) & DAT_00573a5c) != 0 ||
       (*(unsigned int *)(param_1 + 0x45a0) & DAT_00573a58) != 0)) && (param_2 != 0 && param_3 != 0)) {
    *(short *)(param_3 + 0x1cc) = (short)param_2;
    temp_v0 = DAT_005712f0;
    FUN_004102d8(DAT_005712f0,10,0,0,unaff_r4,in_lr);
    *(unsigned char *)(temp_v0 + 4) = 0x45;
    *(int *)(temp_v0 + 0x14) = param_3;
    return;
  }
  return;
}
