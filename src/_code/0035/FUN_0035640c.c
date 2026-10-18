/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035640c` (_code @ 0x35640c, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern int *DAT_004d43b8; /* 0x4d43b8 */
extern int DAT_004d43c0; /* 0x4d43c0 */
extern unsigned int DAT_004d43c4; /* 0x4d43c4 */

/* Supplied declaration required: FUN_002c3820. */
/* Supplied declaration required: FUN_002c38a4. */
/* Supplied declaration required: FUN_00356c40. */


void FUN_0035640c(int *param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = param_1[1];
  temp_v0 = param_4;
  if (temp_v2 != 0) {
    FUN_00356c40(&temp_v2);
    temp_v0 = temp_v2;
  }
  temp_v2 = temp_v0;
  (**(romwright_code **)(*param_1 + 0x10))(param_1);
  FUN_002c38a4(&DAT_004d43c4);
  *param_1 = (int)DAT_004d43b8;
  DAT_004d43c0 = DAT_004d43c0 - 1;
  DAT_004d43b8 = param_1;
  FUN_002c3820(&DAT_004d43c4,temp_v1,param_3,temp_v2);
  return;
}
