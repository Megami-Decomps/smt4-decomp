/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003561d4` (_code @ 0x3561d4, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern int *DAT_004d437c; /* 0x4d437c */
extern int DAT_004d4384; /* 0x4d4384 */
extern unsigned int DAT_004d4388; /* 0x4d4388 */

extern unsigned int FUN_00239ab8(int *);
/* Supplied declaration required: FUN_002c3820. */
/* Supplied declaration required: FUN_002c38a4. */
/* Supplied declaration required: FUN_00356af8. */


void FUN_003561d4(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v1 = param_4;
  if (param_1[1] != 0) {
    temp_v1 = FUN_00239ab8(param_1);
    FUN_00356af8(&temp_v1);
  }
  (**(romwright_code **)(*param_1 + 0x30))(param_1);
  FUN_002c38a4(&DAT_004d4388);
  *param_1 = (int)DAT_004d437c;
  DAT_004d4384 = DAT_004d4384 - 1;
  DAT_004d437c = param_1;
  FUN_002c3820(&DAT_004d4388,temp_v0,param_3,temp_v1);
  return;
}
