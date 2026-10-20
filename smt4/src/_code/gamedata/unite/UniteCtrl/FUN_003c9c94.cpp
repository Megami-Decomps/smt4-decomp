/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c9c94` (_code @ 0x3c9c94, 0x258 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b7bca(unsigned int, int, int, unsigned char *);
int FUN_002b9024(void);
int dataTableGetEntries(void);
int asdMemAlloc(int, int, int, unsigned int, int);

/* stack frame of param_1: 15 slot(s), 60 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
} param_1_stack;

extern unsigned char LAB_002196fc; /* 0x2196fc */

/* Supplied declaration required: FUN_002b7bca. */
/* Supplied declaration required: FUN_002b9024. */
extern unsigned int dataTableGetCount(unsigned int);
/* Supplied declaration required: dataTableGetEntries. */
extern unsigned int dataTableGet(unsigned int);
/* Supplied declaration required: asdMemAlloc. */


unsigned int * FUN_003c9c94(unsigned int *param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned short *puVar4;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int *puVar8;
  int temp_v6;
  unsigned char temp_v7 [60];
  
  temp_v0 = dataTableGet(0);
  dataTableGetEntries();
  temp_v1 = dataTableGetCount(temp_v0);
  temp_v7[0] = 0;
  temp_v7[1] = 0;
  temp_v7[2] = 0;
  temp_v7[3] = 0;
  temp_v7[4] = 0;
  temp_v7[5] = 0;
  temp_v7[6] = 0;
  temp_v7[7] = 0;
  temp_v7[8] = 0;
  temp_v7[9] = 0;
  temp_v7[10] = 0;
  temp_v7[0xb] = 0;
  temp_v7[0xc] = 0;
  temp_v7[0xd] = 0;
  temp_v7[0xe] = 0;
  temp_v7[0xf] = 0;
  temp_v7[0x10] = 0;
  temp_v7[0x11] = 0;
  temp_v7[0x12] = 0;
  temp_v7[0x13] = 0;
  temp_v7[0x14] = 0;
  temp_v7[0x15] = 0;
  temp_v7[0x16] = 0;
  temp_v7[0x17] = 0;
  temp_v7[0x18] = 0;
  temp_v7[0x19] = 0;
  temp_v7[0x1a] = 0;
  temp_v7[0x1b] = 0;
  temp_v7[0x1c] = 0;
  temp_v7[0x1d] = 0;
  temp_v7[0x1e] = 0;
  temp_v7[0x1f] = 0;
  temp_v7[0x20] = 0;
  temp_v7[0x21] = 0;
  temp_v7[0x22] = 0;
  temp_v7[0x23] = 0;
  temp_v7[0x24] = 0;
  temp_v7[0x25] = 0;
  temp_v7[0x26] = 0;
  temp_v7[0x27] = 0;
  temp_v7[0x28] = 0;
  temp_v7[0x29] = 0;
  temp_v7[0x2a] = 0;
  temp_v7[0x2b] = 0;
  temp_v7[0x2c] = 0;
  temp_v7[0x2d] = 0;
  temp_v7[0x2e] = 0;
  temp_v7[0x2f] = 0;
  temp_v7[0x30] = 0;
  temp_v7[0x31] = 0;
  temp_v7[0x32] = 0;
  temp_v7[0x33] = 0;
  temp_v7[0x34] = 0;
  temp_v7[0x35] = 0;
  temp_v7[0x36] = 0;
  temp_v7[0x37] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  temp_v4 = 0;
  param_1[0xd] = 0;
  if (temp_v1 != 0) {
    do {
      temp_v2 = temp_v4 & 0xffff;
      FUN_002b9024();
      temp_v3 = (unsigned int)*(unsigned char *)(temp_v2 + 2);
      if ((temp_v3 < 0x38) && ((*(unsigned short *)(temp_v2 + 6) & 1) != 0)) {
        *(char *)((int)param_1 + temp_v3) = *(char *)((int)param_1 + temp_v3) + '\x01';
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < temp_v1);
  }
  temp_v5 = 0;
  do {
    param_1[temp_v5 + 0xe] = 0;
    if (*(char *)((int)param_1 + temp_v5) != '\0') {
      temp_v0 = 0x100;
      asdMemAlloc(0x100,0x100,0,(unsigned int)*(unsigned char *)((int)param_1 + temp_v5) << 2,1);
      param_1[temp_v5 + 0xe] = temp_v0;
    }
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 0x38);
  temp_v4 = 0;
  if (temp_v4 < temp_v1) {
    do {
      puVar4 = (unsigned short *)(temp_v4 & 0xffff);
      FUN_002b9024();
      temp_v2 = (unsigned int)*(unsigned char *)(puVar4 + 1);
      if ((temp_v2 < 0x38) && ((puVar4[3] & 1) != 0)) {
        *(unsigned short *)(param_1[temp_v2 + 0xe] + (unsigned int)temp_v7[temp_v2] * 4) = *puVar4;
        *(unsigned short *)
         (param_1[*(unsigned char *)(puVar4 + 1) + 0xe] + (unsigned int)temp_v7[*(unsigned char *)(puVar4 + 1)] * 4 + 2) =
             (unsigned short)*(unsigned char *)((int)puVar4 + 3);
        temp_v7[*(unsigned char *)(puVar4 + 1)] = temp_v7[*(unsigned char *)(puVar4 + 1)] + 1;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < temp_v1);
  }
  temp_v5 = 0;
  temp_v6 = 0x38;
  puVar8 = param_1;
  do {
    if (param_1[temp_v5 + 0xe] != 0) {
      FUN_002b7bca(param_1[temp_v5 + 0xe],*(unsigned char *)puVar8,4,&LAB_002196fc);
    }
    temp_v6 = temp_v6 - 1;
    puVar8 = (unsigned int *)((int)puVar8 + 1);
    temp_v5 = temp_v5 + 1;
  } while (temp_v6 != 0);
  *(unsigned char *)(param_1 + 0x47) = 0;
  *(unsigned short *)((int)param_1 + 0x11e) = 0;
  *(unsigned char *)(param_1 + 0x46) = 0;
  *(unsigned short *)((int)param_1 + 0x11a) = 0;
  *(unsigned char *)((int)param_1 + 0x143) = 0;
  *(unsigned char *)(param_1 + 0x48) = 0;
  *(unsigned char *)((int)param_1 + 0x121) = 0;
  *(unsigned int *)((int)param_1 + 0x122) = 0;
  *(unsigned int *)((int)param_1 + 0x126) = 0;
  *(unsigned int *)((int)param_1 + 0x12a) = 0;
  *(unsigned int *)((int)param_1 + 0x12e) = 0;
  *(unsigned char *)((int)param_1 + 0x132) = 0;
  *(unsigned short *)(param_1 + 0x4d) = *(unsigned short *)(param_1 + 0x4d) & 0x3ff;
  *(unsigned char *)((int)param_1 + 0x136) = 0;
  *(unsigned short *)(param_1 + 0x4e) = 0xffff;
  *(unsigned short *)((int)param_1 + 0x13a) = 0xffff;
  *(unsigned char *)(param_1 + 0x5f) = 0;
  return param_1;
}

} /* extern "C" */
