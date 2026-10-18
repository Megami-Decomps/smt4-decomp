/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004dc4b4` (_code @ 0x4dc4b4, 0x208 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp68; /* 0x68: local_68 */
} param_1_stack;

extern unsigned char LAB_002fe050; /* 0x2fe050 */

/* Supplied declaration required: FUN_0010063a. */
/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_00184310. */
extern unsigned int FUN_00187180(unsigned int);
extern unsigned int FUN_00192748(unsigned int);
/* Supplied declaration required: FUN_00192798. */
/* Supplied declaration required: FUN_002e6354. */


unsigned char * FUN_004dc4b4(unsigned char *param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned short *puVar4;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned char *puVar8;
  int temp_v6;
  unsigned char temp_v7 [72];
  
  temp_v0 = FUN_00187180(0);
  FUN_00192798();
  temp_v1 = FUN_00192748(temp_v0);
  FUN_002e6354(temp_v7,0x44);
  FUN_002e6354(param_1,0x41);
  temp_v4 = 0;
  if (temp_v4 < temp_v1) {
    do {
      temp_v2 = temp_v4 & 0xffff;
      FUN_00184310();
      temp_v3 = (unsigned int)*(unsigned char *)(temp_v2 + 2);
      if ((temp_v3 < 0x41) && ((*(unsigned short *)(temp_v2 + 10) & 1) != 0)) {
        param_1[temp_v3] = param_1[temp_v3] + '\x01';
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < temp_v1);
  }
  temp_v5 = 0;
  do {
    *(unsigned int *)(param_1 + temp_v5 * 4 + 0x44) = 0;
    if (param_1[temp_v5] != '\0') {
      temp_v0 = 0x100;
      FUN_00163060(0x100,0x100,0,(unsigned int)(unsigned char)param_1[temp_v5] << 2,1);
      *(unsigned int *)(param_1 + temp_v5 * 4 + 0x44) = temp_v0;
    }
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 0x41);
  temp_v4 = 0;
  if (temp_v4 < temp_v1) {
    do {
      puVar4 = (unsigned short *)(temp_v4 & 0xffff);
      FUN_00184310();
      temp_v2 = (unsigned int)*(unsigned char *)(puVar4 + 1);
      if ((temp_v2 < 0x41) && ((puVar4[5] & 1) != 0)) {
        *(unsigned short *)(*(int *)(param_1 + temp_v2 * 4 + 0x44) + (unsigned int)temp_v7[temp_v2] * 4) =
             *puVar4;
        *(unsigned short *)
         (*(int *)(param_1 + (unsigned int)*(unsigned char *)(puVar4 + 1) * 4 + 0x44) +
         (unsigned int)temp_v7[*(unsigned char *)(puVar4 + 1)] * 4 + 2) = puVar4[3];
        temp_v7[*(unsigned char *)(puVar4 + 1)] = temp_v7[*(unsigned char *)(puVar4 + 1)] + 1;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < temp_v1);
  }
  temp_v5 = 0;
  temp_v6 = 0x41;
  puVar8 = param_1;
  do {
    if (*(int *)(param_1 + temp_v5 * 4 + 0x44) != 0) {
      FUN_0010063a(*(int *)(param_1 + temp_v5 * 4 + 0x44),*puVar8,4,&LAB_002fe050);
    }
    temp_v6 = temp_v6 - 1;
    puVar8 = puVar8 + 1;
    temp_v5 = temp_v5 + 1;
  } while (temp_v6 != 0);
  param_1[0x14c] = 0;
  *(unsigned short *)(param_1 + 0x14e) = 0;
  param_1[0x150] = 0;
  *(unsigned int *)(param_1 + 0x154) = 0;
  param_1[0x148] = 0;
  *(unsigned short *)(param_1 + 0x14a) = 0;
  param_1[0x17b] = 0;
  param_1[0x158] = 0;
  param_1[0x159] = 0;
  *(unsigned int *)(param_1 + 0x15a) = 0;
  *(unsigned int *)(param_1 + 0x15e) = 0;
  *(unsigned int *)(param_1 + 0x162) = 0;
  *(unsigned int *)(param_1 + 0x166) = 0;
  param_1[0x16a] = 0;
  *(unsigned short *)(param_1 + 0x16c) = *(unsigned short *)(param_1 + 0x16c) & 0x3ff;
  param_1[0x16e] = 0;
  *(unsigned short *)(param_1 + 0x170) = 0xffff;
  *(unsigned short *)(param_1 + 0x172) = 0xffff;
  param_1[0x1b4] = 0;
  return param_1;
}
