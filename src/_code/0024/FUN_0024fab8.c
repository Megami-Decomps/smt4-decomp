/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024fab8` (_code @ 0x24fab8, 0x208 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern unsigned char DAT_00472560; /* 0x472560 */
extern unsigned char DAT_00472561; /* 0x472561 */
extern unsigned char DAT_00472562; /* 0x472562 */
extern unsigned char DAT_00472563; /* 0x472563 */
extern unsigned char DAT_004736f0; /* 0x4736f0 */
extern unsigned char DAT_004737ce; /* 0x4737ce */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00246b58. */
/* Supplied declaration required: FUN_0024af9c. */
extern unsigned int FUN_002c34a4(unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c4b30. */
/* Supplied declaration required: FUN_002d13d4. */
/* Supplied declaration required: FUN_003053c4. */


void FUN_0024fab8(unsigned int *param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 7 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  float *pfVar4;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v7;
  
  temp_v0 = param_3[1];
  temp_v1 = param_3[2];
  temp_v2 = param_3[3];
  temp_v3 = param_3[4];
  temp_v4 = param_3[5];
  temp_v6 = param_3[6];
  param_1[3] = *param_3;
  param_1[4] = temp_v0;
  param_1[5] = temp_v1;
  param_1[6] = temp_v2;
  param_1[7] = temp_v3;
  param_1[8] = temp_v4;
  param_1[9] = temp_v6;
  if (*param_1 != 0) {
    temp_v0 = param_1[10];
    if (temp_v0 != 0) {
      FUN_0024af9c(*(unsigned int *)(temp_v0 + 0x10));
      FUN_0024af9c(*(unsigned int *)(temp_v0 + 0x14));
      FUN_002c4360(temp_v0);
    }
    temp_v1 = *param_3;
    temp_v3 = *param_1 & 0xffff;
    temp_v5 = temp_v3 * 2 + 0x1c;
    temp_v2 = FUN_002c34a4(0x10000,0x100,0,temp_v5,0x10,1);
    FUN_002c4b30(temp_v2,temp_v5);
    *(unsigned int *)(temp_v2 + 0x18) = temp_v2 + 0x1c;
    temp_v0 = temp_v3;
    FUN_00246b58(temp_v3,temp_v1 & 0xffff,&DAT_004736f0,3,0x48);
    *(unsigned int *)(temp_v2 + 0x10) = temp_v0;
    temp_v0 = temp_v3;
    FUN_002d13d4(temp_v3,1,6,8,&DAT_004737ce,0x48);
    if (temp_v3 != 0) {
      in_s0 = 0.003921569f;
    }
    *(unsigned int *)(temp_v2 + 0x14) = temp_v0;
    temp_v0 = 0;
    if (temp_v0 < temp_v3) {
      do {
        temp_v1 = temp_v0 & 0xffff;
        pfVar4 = (float *)(*(int *)(*(int *)(temp_v2 + 0x10) + 4) + (temp_v0 & 0xffff) * 0x10);
        temp_v0 = temp_v0 + 1;
        temp_v7 = (float)VectorUnsignedToFloat((unsigned int)DAT_00472560,(unsigned char)(in_fpscr >> 0x16) & 3);
        *pfVar4 = temp_v7 * in_s0 * in_s0;
        temp_v7 = (float)VectorUnsignedToFloat((unsigned int)DAT_00472561,(unsigned char)(in_fpscr >> 0x16) & 3);
        pfVar4[1] = temp_v7 * in_s0 * in_s0;
        temp_v7 = (float)VectorUnsignedToFloat((unsigned int)DAT_00472562,(unsigned char)(in_fpscr >> 0x16) & 3);
        pfVar4[2] = temp_v7 * in_s0 * in_s0;
        temp_v7 = (float)VectorUnsignedToFloat((unsigned int)DAT_00472563,(unsigned char)(in_fpscr >> 0x16) & 3);
        pfVar4[3] = temp_v7 * in_s0 * in_s0;
        pfVar4 = (float *)(*(int *)(*(int *)(temp_v2 + 0x14) + 4) + temp_v1 * 0x10);
        temp_v7 = (float)VectorUnsignedToFloat((unsigned int)DAT_00472560,(unsigned char)(in_fpscr >> 0x16) & 3);
        *pfVar4 = temp_v7 * in_s0 * in_s0;
        temp_v7 = (float)VectorUnsignedToFloat((unsigned int)DAT_00472561,(unsigned char)(in_fpscr >> 0x16) & 3);
        pfVar4[1] = temp_v7 * in_s0 * in_s0;
        temp_v7 = (float)VectorUnsignedToFloat((unsigned int)DAT_00472562,(unsigned char)(in_fpscr >> 0x16) & 3);
        pfVar4[2] = temp_v7 * in_s0 * in_s0;
        temp_v7 = (float)VectorUnsignedToFloat((unsigned int)DAT_00472563,(unsigned char)(in_fpscr >> 0x16) & 3);
        pfVar4[3] = temp_v7 * in_s0 * in_s0;
      } while (temp_v0 < temp_v3);
    }
    param_1[10] = temp_v2;
    FUN_003053c4(temp_v2,param_3 + 2);
    return;
  }
  return;
}
