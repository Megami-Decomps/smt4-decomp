/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00421968` (_code @ 0x421968, 0x198 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern unsigned char DAT_0057aa00; /* 0x57aa00 */
extern unsigned char DAT_0057aa01; /* 0x57aa01 */
extern unsigned char DAT_0057aa02; /* 0x57aa02 */
extern unsigned char DAT_0057aa03; /* 0x57aa03 */
extern unsigned int DAT_0057aa14; /* 0x57aa14 */
extern float DAT_0057aa18; /* 0x57aa18 */
extern unsigned int DAT_0057aa80; /* 0x57aa80 */
extern unsigned int DAT_0057aa84; /* 0x57aa84 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_001f3e80. */
/* Supplied declaration required: FUN_003f0e20. */
extern int aeabi_idivmod(int, unsigned int);


unsigned int FUN_00421968(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int in_fpscr;
  unsigned int temp_v3;
  float temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  float temp_v7;
  float temp_v8;
  
  puVar1 = *(unsigned int **)(param_1 + 4);
  temp_v2 = puVar1[0x7b5] + param_2 * 0x1d0;
  FUN_003f0e20(puVar1,(int)*(short *)(temp_v2 + 0x6a),param_2 * 0x1d,param_4,param_4);
  if ((*(unsigned int *)(temp_v2 + 0x50) & 8) != 0) {
    temp_v2 = aeabi_idivmod(puVar1[0x96] * 100,puVar1[0x97]);
    temp_v1 = *(unsigned int *)(*(int *)(param_1 + 4) + 0x1edc);
    if (temp_v2 < 0x14) {
      temp_v2 = FUN_001f3e80(0,0xff,0x1e,temp_v1,0);
      return temp_v2 << 0x18;
    }
    temp_v2 = FUN_001f3e80(0,0x80,0x1e,temp_v1,0);
    return (temp_v2 << 0x18) | (temp_v2 << 0x10) | (temp_v2 << 8);
  }
  if (((puVar1 != (unsigned int *)0x0) && ((DAT_0057aa84 & puVar1[1]) != 0 || (*puVar1 & DAT_0057aa80) != 0)
      ) && ((puVar1[0x9d] & 0x10) != 0)) {
    temp_v7 = (float)VectorUnsignedToFloat((unsigned int)DAT_0057aa01,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v8 = (float)VectorUnsignedToFloat((unsigned int)DAT_0057aa00,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v4 = (float)VectorUnsignedToFloat((unsigned int)DAT_0057aa02,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v5 = VectorFloatToUnsigned(temp_v7 * DAT_0057aa18,3);
    temp_v3 = VectorFloatToUnsigned(temp_v8 * DAT_0057aa18,3);
    temp_v6 = VectorFloatToUnsigned(temp_v4 * DAT_0057aa18,3);
    temp_v0 = FUN_001f3e80(temp_v3 & 0xff,(unsigned int)DAT_0057aa00,DAT_0057aa14,*(unsigned int *)(temp_v2 + 0xa4),
                         0);
    temp_v3 = FUN_001f3e80(temp_v5 & 0xff,DAT_0057aa01,DAT_0057aa14,*(unsigned int *)(temp_v2 + 0xa4),0);
    temp_v5 = FUN_001f3e80(temp_v6 & 0xff,DAT_0057aa02,DAT_0057aa14,*(unsigned int *)(temp_v2 + 0xa4),0);
    return (temp_v0 << 0x18) | ((temp_v3 & 0xff) << 0x10) | ((temp_v5 & 0xff) << 8) | (unsigned int)DAT_0057aa03;
  }
  return 0;
}
