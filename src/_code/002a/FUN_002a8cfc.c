/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a8cfc` (_code @ 0x2a8cfc, 0x68 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp90; /* 0x90: local_90 */
} param_1_stack;

extern unsigned int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_0014e804. */
/* Supplied declaration required: FUN_002b71f8. */
/* Supplied declaration required: FUN_002b9438. */
/* Supplied declaration required: FUN_002bfff8. */


void FUN_002a8cfc(unsigned int *param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned char temp_v0 [64];
  int temp_v1;
  unsigned int uStack_8c;
  unsigned int uStack_88;
  unsigned int uStack_84;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int temp_v2;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int temp_v3 [17];
  
  if (param_1 == (unsigned int *)0x0) {
    param_1 = temp_v3;
  }
  FUN_0014e804(temp_v0);
  FUN_002bfff8(&temp_v1,DAT_0044ea00);
  *param_1 = temp_v1;
  param_1[1] = uStack_8c;
  param_1[2] = uStack_88;
  param_1[3] = uStack_84;
  param_1[4] = uStack_80;
  param_1[5] = uStack_7c;
  param_1[6] = uStack_78;
  param_1[7] = uStack_74;
  param_1[8] = temp_v2;
  param_1[9] = uStack_6c;
  param_1[10] = uStack_68;
  param_1[0xb] = uStack_64;
  param_1[0xc] = uStack_60;
  param_1[0xd] = uStack_5c;
  param_1[0xe] = uStack_58;
  param_1[0xf] = uStack_54;
  FUN_002b71f8(temp_v0,param_1);
  FUN_002b9438(DAT_0044ea00,temp_v0);
  return;
}
