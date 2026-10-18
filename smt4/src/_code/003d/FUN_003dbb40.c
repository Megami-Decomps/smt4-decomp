/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003dbb40` (_code @ 0x3dbb40, 0xd8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0024a808(int);
extern int FUN_002522e0(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_00297468. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002bf694. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c4938. */


unsigned int FUN_003dbb40(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [128];
  unsigned char temp_v2 [132];
  
  *(unsigned char *)(param_1 + 0x2f9c) = 0xff;
  FUN_002c4938(param_1 + 0x2fa4,0x80);
  if (*(int *)(param_1 + 0x2fa0) != 0) {
    FUN_002c415c();
    *(unsigned int *)(param_1 + 0x2fa0) = 0;
  }
  *(unsigned char *)(param_1 + 0x3024) = 0;
  FUN_002c4938(temp_v1,0x80);
  FUN_002c4938(temp_v2,0x80);
  FUN_002be624(temp_v2,"battle/effect/%s.eft","ef_d_niyari");
  FUN_002bf694(temp_v1,temp_v2);
  temp_v0 = FUN_002522e0(temp_v1,0x2f);
  FUN_002bf694(param_1 + 0x2fa4,temp_v0 + 1);
  temp_v0 = FUN_0024a808(param_1 + 0x2fa4);
  if (temp_v0 == 0xff) {
    FUN_00297468(temp_v1,param_1 + 0x2fa0,0);
    *(unsigned char *)(param_1 + 0x3024) = *(unsigned char *)(param_1 + 0x3024) | 1;
  }
  return 1;
}
