/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018f4e4` (_code @ 0x18f4e4, 0x1b8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a081c(unsigned char [60]);
int FUN_001a5678(int, int, unsigned char [60], int, int, int, unsigned int, int);
int FUN_0030ea58(int, unsigned int);

/* stack frame of param_5: 13 slot(s), 52 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp118; /* 0x118: local_118 */
    unsigned int sp124; /* 0x124: local_124 */
    unsigned int sp128; /* 0x128: local_128 */
    unsigned int sp130; /* 0x130: local_130 */
} param_5_stack;

/* Supplied declaration required: FUN_001a081c. */
/* Supplied declaration required: FUN_001a5678. */
/* Supplied declaration required: FUN_0030ea58. */


unsigned int FUN_0018f4e4(int param_1,unsigned int param_2,int param_3,unsigned int param_4,unsigned int param_5)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned int temp_v1;
  int *piVar4;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned char *puVar9;
  unsigned long long temp_v6;
  int temp_v7 [4];
  unsigned char temp_v8 [60];
  unsigned char temp_v9 [36];
  unsigned char temp_v10 [72];
  unsigned char *temp_v11 [4];
  unsigned char *temp_v12;
  int temp_v13;
  unsigned int temp_v14;
  int temp_v15;
  unsigned int temp_v16;
  
  temp_v4 = 0;
  temp_v6 = (unsigned long long)param_5;
  temp_v2 = *(int *)(param_1 + 0x34);
  temp_v5 = temp_v2 + (unsigned int)*(unsigned short *)(param_1 + 0x38) * 0x2c;
  if (temp_v2 != temp_v5) {
    temp_v11[3] = temp_v9;
    temp_v12 = temp_v10;
    temp_v13 = param_1;
    temp_v14 = param_2;
    temp_v15 = param_3;
    temp_v16 = param_4;
    do {
      FUN_001a081c(temp_v8);
      temp_v11[0] = temp_v8;
      temp_v11[1] = temp_v11[3];
      temp_v11[2] = temp_v12;
      temp_v3 = 0;
      temp_v7[0] = temp_v2 + 4;
      temp_v7[1] = temp_v2 + 8;
      temp_v7[2] = temp_v2 + 0xc;
      temp_v1 = 0;
      do {
        piVar4 = (int *)temp_v7[temp_v1];
        if ((*piVar4 == 0) && (temp_v0 = *(int *)(temp_v2 + temp_v1 * 4 + 0x1c), temp_v0 != 0)) {
          FUN_0030ea58(temp_v0,temp_v14);
          if (temp_v0 != 0) {
            temp_v4 = 0x80000008;
          }
          else {
            temp_v3 = temp_v3 + 1;
            *piVar4 = temp_v15;
          }
        }
        temp_v0 = *piVar4;
        puVar9 = (unsigned char *)(*(int *)(temp_v2 + 0x18) + temp_v1 * 0x10);
        puVar2 = temp_v11[temp_v1];
        if (temp_v0 != 0) {
          puVar2[8] = *(unsigned char *)(temp_v0 + 0x18);
          puVar2[10] = puVar9[1];
          puVar2[9] = puVar9[2];
          puVar2[0xb] = puVar9[3];
          puVar2[0xc] = puVar9[4];
          *(unsigned int *)(puVar2 + 0x10) = *(unsigned int *)(puVar9 + 8);
          puVar2[0x14] = puVar9[5];
          puVar2[0x15] = *(char *)(temp_v0 + 0x19) - '\x01';
          puVar2[0x16] = puVar9[0xc];
          puVar2[0x17] = puVar9[0xd];
          puVar2[0x18] = puVar9[0xe];
          puVar2[0x19] = puVar9[0xf];
          if (temp_v1 < 3) {
            puVar2[0x1c] = *puVar9;
          }
        }
        temp_v1 = temp_v1 + 1;
      } while ((int)temp_v1 < 3);
      if (temp_v3 != 0) {
        temp_v3 = *(int *)(temp_v2 + 0x18);
        FUN_001a5678(temp_v13,temp_v2 + 0x10,temp_v8,temp_v3,temp_v3 + 0x10,temp_v3 + 0x20,temp_v16,
                     (int)temp_v6);
      }
      temp_v2 = temp_v2 + 0x2c;
    } while (temp_v2 != temp_v5);
  }
  return temp_v4;
}

} /* extern "C" */
