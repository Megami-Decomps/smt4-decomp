/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f1d74` (_code @ 0x3f1d74, 0x370 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003f1d74_arg0 fn_003f1d74_arg0;
struct fn_003f1d74_arg0 {
    unsigned char pad_0x0[0xe4];
    uint field_0xe4; /* +0xe4 */
    uint field_0xe8; /* +0xe8 */
    unsigned char pad_0xec[0x2188];
    unsigned char field_0x2274; /* +0x2274 */
    unsigned char pad_0x2275[0x232b];
    uint field_0x45a0; /* +0x45a0 */
    unsigned char field_0x45a4; /* +0x45a4 */
    unsigned char pad_0x45a5[0x7cb];
    uint field_0x4d70; /* +0x4d70 */
    unsigned char pad_0x4d74[0xd0];
    undefined1 field_0x4e44; /* +0x4e44 */
};

/* stack frame of param_2: 7 slot(s), 14 byte(s) */
typedef struct {
    unsigned short sp3C; /* 0x3c: local_3c */
    unsigned short sp3E; /* 0x3e: local_3e */
    unsigned short sp40; /* 0x40: local_40 */
    unsigned short sp42; /* 0x42: local_42 */
    unsigned short sp44; /* 0x44: local_44 */
    unsigned short sp46; /* 0x46: local_46 */
    unsigned short sp48; /* 0x48: local_48 */
} param_2_stack;

extern unsigned int DAT_00573a50; /* 0x573a50 */
extern unsigned int DAT_00573a54; /* 0x573a54 */

extern unsigned int FUN_0015687c(void);
/* Supplied declaration required: FUN_0015688c. */
extern int FUN_001801a4(void);
/* Supplied declaration required: FUN_00187168. */
extern int FUN_00192748(unsigned int);
extern int FUN_00192798(void);
extern unsigned int FUN_001a6f60(int, unsigned int);
extern int FUN_001ab854(int);
extern unsigned int *FUN_001ab888(void);
/* Supplied declaration required: FUN_001b4a90. */
extern unsigned int FUN_001bce18(void);
/* Supplied declaration required: FUN_00284fdc. */
/* Supplied declaration required: FUN_002e342c. */
/* Supplied declaration required: FUN_002e6dd4. */
/* Supplied declaration required: FUN_003df7c4. */
/* Supplied declaration required: FUN_003dff6c. */
/* Supplied declaration required: FUN_003e0174. */
/* Supplied declaration required: FUN_003e49e8. */
/* Supplied declaration required: FUN_003e4e4c. */
/* Supplied declaration required: FUN_003e4f04. */
/* Supplied declaration required: FUN_003e5354. */
/* Supplied declaration required: FUN_00480e30. */
extern unsigned char FUN_004bca20(void);
/* Supplied declaration required: FUN_004bd30c. */


void FUN_003f1d74(fn_003f1d74_arg0 *param_1,unsigned int param_2)

{
/* irregular: 19 native warning(s); review required */
  unsigned short temp_v0;
  unsigned char temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int *puVar6;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  int temp_v11;
  unsigned short *puVar10;
  unsigned char *pbVar11;
  unsigned short temp_v12;
  unsigned short temp_v13;
  unsigned short temp_v14;
  unsigned short temp_v15;
  unsigned short temp_v16;
  unsigned short temp_v17;
  unsigned short temp_v18;
  unsigned char temp_v19 [20];
  
  if (((param_1->field_0x45a0 & DAT_00573a50) != 0 ||
      (*(unsigned int *)&param_1->field_0x45a4 & DAT_00573a54) != 0) && param_2 != 0) {
    temp_v2 = 0;
    if (*(int *)&param_1->field_0x2274 != 0) {
      temp_v2 = FUN_001a6f60(*(int *)&param_1->field_0x2274,0);
    }
    temp_v3 = FUN_00192798();
    temp_v4 = FUN_00192748(temp_v2);
    if (param_2 <= temp_v4 - 1U) {
      puVar10 = (unsigned short *)(temp_v3 + param_2 * 0x84);
      puVar6 = (unsigned int *)FUN_001ab888();
      temp_v4 = 0;
      temp_v2 = FUN_0015687c();
      FUN_002e342c(temp_v19,temp_v2);
      temp_v12 = puVar10[4];
      temp_v13 = puVar10[5];
      temp_v14 = puVar10[6];
      temp_v15 = puVar10[7];
      temp_v16 = puVar10[8];
      temp_v17 = puVar10[9];
      temp_v18 = puVar10[10];
      FUN_003dff6c(puVar10[0x1a],temp_v19,&temp_v12);
      temp_v3 = FUN_001801a4();
      *(unsigned short *)(temp_v3 + 0x12) = puVar10[0xd];
      *(unsigned short *)(temp_v3 + 0x14) = puVar10[0xe];
      *(unsigned short *)(temp_v3 + 0x16) = puVar10[0xf];
      *(unsigned short *)(temp_v3 + 0x18) = puVar10[0x10];
      *(unsigned short *)(temp_v3 + 0x1a) = puVar10[0x11];
      FUN_003df7c4(0);
      temp_v0 = puVar10[0xb];
      if (0 < (short)temp_v0) {
        *(unsigned short *)(temp_v3 + 0x1c) = temp_v0;
        *(unsigned short *)(temp_v3 + 0x2a) = temp_v0;
      }
      temp_v0 = puVar10[0xc];
      if (0 < (short)temp_v0) {
        *(unsigned short *)(temp_v3 + 0x1e) = temp_v0;
        *(unsigned short *)(temp_v3 + 0x2c) = temp_v0;
      }
      do {
        if (puVar10[temp_v4 + 0x12] != 0) {
          FUN_003e0174();
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 8);
      FUN_001b4a90(puVar6 + 0x722,0x18,0xffffffff);
      *(unsigned short *)(puVar6 + 0x728) = 0xffff;
      pbVar11 = (unsigned char *)((int)puVar6 + 0x1ca3);
      *(unsigned char *)((int)puVar6 + 0x1ca2) = 0xff;
      temp_v4 = 0;
      temp_v3 = 0;
      *pbVar11 = 8;
      do {
        if (puVar10[temp_v3 + 0x1f] != 0) {
          FUN_004bd30c(temp_v3,puVar10[temp_v3 + 0x1f],0);
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < (int)(unsigned int)*pbVar11);
      temp_v3 = 0;
      do {
        if ((puVar10[temp_v3 + 0x1c] != 0) && (temp_v11 = 0, *pbVar11 != 0)) {
          do {
            temp_v5 = FUN_001ab854(temp_v11);
            if (*(unsigned short *)(temp_v5 + 0x62) == puVar10[temp_v3 + 0x1c]) {
              temp_v1 = FUN_004bca20();
              temp_v11 = temp_v4 + 0x1ca0;
              temp_v4 = temp_v4 + 1;
              *(unsigned char *)((int)puVar6 + temp_v11) = temp_v1;
              break;
            }
            temp_v11 = temp_v11 + 1;
          } while (temp_v11 < (int)(unsigned int)*pbVar11);
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 3);
      temp_v2 = FUN_001bce18();
      FUN_002e6dd4(temp_v2,0x10b8);
      temp_v3 = 0;
      temp_v7 = temp_v6;
      do {
        temp_v0 = puVar10[temp_v3 * 2 + 0x28];
        if (temp_v0 != 0) {
          temp_v7 = (unsigned int)puVar10[temp_v3 * 2 + 0x29];
        }
        if (temp_v0 != 0 && temp_v7 != 0) {
          FUN_00480e30(temp_v0);
          temp_v7 = temp_v8;
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 5);
      FUN_00284fdc();
      temp_v4 = 6;
      *puVar6 = *(unsigned int *)(puVar10 + 2);
      param_1->field_0xe4 = (unsigned int)*puVar10;
      param_1->field_0xe8 = (unsigned int)puVar10[1];
      temp_v3 = 0;
      do {
        temp_v4 = temp_v4 - 1;
        puVar6[temp_v3 * 0x4d + 0x7c3] = puVar6[temp_v3 * 0x4d + 0x7c3] & 0xfffffffe;
        puVar6[temp_v3 * 0x4d + 0x810] = puVar6[temp_v3 * 0x4d + 0x810] & 0xfffffffe;
        temp_v3 = temp_v3 + 2;
      } while (temp_v4 != 0);
      temp_v7 = 0;
      temp_v4 = 0;
      *(unsigned short *)(puVar6 + 0xb13) = 0;
      *(unsigned short *)((int)puVar6 + 0x2c4e) = 0;
      temp_v3 = 0;
      do {
        if (puVar10[temp_v3 * 2 + 0x32] != 0) {
          temp_v7 = (unsigned int)puVar10[temp_v3 * 2 + 0x33];
        }
        if (puVar10[temp_v3 * 2 + 0x32] != 0 && temp_v7 != 0) {
          FUN_003e4f04();
          temp_v7 = temp_v9;
          if (temp_v3 == 0) {
            FUN_003e4e4c();
            temp_v7 = temp_v10;
          }
          temp_v4 = temp_v4 + 1;
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 7);
      if (0 < temp_v4) {
        FUN_0015688c();
        FUN_00187168();
      }
      FUN_003e49e8();
      FUN_003e5354(puVar10[0x40]);
      param_1->field_0x4d70 = (unsigned int)(unsigned char)puVar10[0x41];
      param_1->field_0x4e44 = *(unsigned char *)((int)puVar10 + 0x83);
    }
  }
  return;
}
