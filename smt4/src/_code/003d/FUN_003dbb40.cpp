/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003dbb40` (_code @ 0x3dbb40, 0xd8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00297468(...);
int textFormatBuffer(...);
int libc_strcpy(...);
int asdMemFree(...);
int memClear(...);

extern int FUN_0024a808(int);
extern int FUN_002522e0(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_00297468. */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: memClear. */


unsigned int FUN_003dbb40(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [128];
  unsigned char temp_v2 [132];
  
  *(unsigned char *)(param_1 + 0x2f9c) = 0xff;
  memClear(param_1 + 0x2fa4,0x80);
  if (*(int *)(param_1 + 0x2fa0) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 0x2fa0) = 0;
  }
  *(unsigned char *)(param_1 + 0x3024) = 0;
  memClear(temp_v1,0x80);
  memClear(temp_v2,0x80);
  textFormatBuffer(temp_v2,"battle/effect/%s.eft","ef_d_niyari");
  libc_strcpy(temp_v1,temp_v2);
  temp_v0 = FUN_002522e0(temp_v1,0x2f);
  libc_strcpy(param_1 + 0x2fa4,temp_v0 + 1);
  temp_v0 = FUN_0024a808(param_1 + 0x2fa4);
  if (temp_v0 == 0xff) {
    FUN_00297468(temp_v1,param_1 + 0x2fa0,0);
    *(unsigned char *)(param_1 + 0x3024) = *(unsigned char *)(param_1 + 0x3024) | 1;
  }
  return 1;
}

} /* extern "C" */
