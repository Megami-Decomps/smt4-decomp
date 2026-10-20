/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00514d48` (_code @ 0x514d48, 0x5c0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00122024(int, unsigned int *);
int FUN_002e6dac(...);
int FUN_002e6e14(unsigned int);
int FUN_002e9318(unsigned char *[2]);
int FUN_002e9518(int, int);
int FUN_002ea0e4(...);
int FUN_002fd2a4(unsigned char **);

/* stack frame of param_2: 16 slot(s), 61 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned char spF4; /* 0xf4: local_f4 */
    unsigned int spF8; /* 0xf8: local_f8 */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp100; /* 0x100: local_100 */
    unsigned int sp104; /* 0x104: local_104 */
    unsigned int sp118; /* 0x118: local_118 */
    unsigned int sp11C; /* 0x11c: local_11c */
    unsigned int sp128; /* 0x128: local_128 */
    unsigned int sp130; /* 0x130: local_130 */
} param_2_stack;

extern unsigned char DAT_00559514; /* 0x559514 */
extern unsigned char DAT_005596b4; /* 0x5596b4 */
extern unsigned char DAT_005596c4; /* 0x5596c4 */
extern unsigned char DAT_00559ee4; /* 0x559ee4 */
extern unsigned char DAT_0055a4c0; /* 0x55a4c0 */
extern unsigned char DAT_0055a4d0; /* 0x55a4d0 */
extern unsigned char DAT_0055a884; /* 0x55a884 */
extern unsigned char DAT_0055ad28; /* 0x55ad28 */

/* Supplied declaration required: FUN_00122024. */
/* Supplied declaration required: FUN_002e6dac. */
/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: FUN_002e9318. */
/* Supplied declaration required: FUN_002e9518. */
extern int FUN_002e9520(unsigned int *, unsigned int *);
/* Supplied declaration required: FUN_002ea0e4. */
/* Supplied declaration required: FUN_002fd2a4. */
extern int FUN_00302f28(int);
extern int FUN_00303146(int, unsigned int *);
extern int FUN_003038fc(int, unsigned int);
extern int FUN_00303928(int, unsigned int, unsigned int *);


int * FUN_00514d48(int *param_1,unsigned int param_2)

{
/* irregular: 7 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int temp_v2;
  unsigned int *puVar7;
  int temp_v3;
  int *piVar9;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned char *temp_v7 [2];
  unsigned char *temp_v8;
  unsigned int temp_v9;
  unsigned char *temp_v10;
  unsigned char *temp_v11;
  unsigned char *temp_v12;
  int *temp_v13;
  unsigned char *temp_v14;
  unsigned char temp_v15;
  unsigned char temp_v16 [160];
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int *temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  unsigned int *temp_v23;
  
  temp_v8 = &DAT_00559ee4;
  temp_v14 = &DAT_00559ee4;
  temp_v15 = 0;
  temp_v13 = param_1;
  temp_v0 = FUN_002ea0e4(temp_v16);
  temp_v0 = FUN_003038fc(temp_v0 + 0xc,0);
  temp_v17 = 0;
  temp_v18 = 0;
  temp_v19 = (unsigned int *)0x0;
  temp_v0 = FUN_00303928(temp_v0 + 0x20,3,&temp_v17);
  FUN_002e6e14(temp_v17);
  temp_v20 = 0;
  temp_v21 = 0;
  temp_v22 = 0;
  temp_v0 = FUN_00303928(temp_v0 + 0x14,3,&temp_v20);
  FUN_002e6e14(temp_v20);
  temp_v0 = FUN_00302f28(temp_v0 + 0x18);
  temp_v0 = FUN_00302f28(temp_v0 + 8);
  temp_v0 = FUN_00302f28(temp_v0 + 0x18);
  temp_v0 = FUN_00302f28(temp_v0 + 8);
  FUN_002ea0e4(temp_v7);
  *(int *)(temp_v0 + 8) = 0;
  *(unsigned int *)(temp_v0 + 0xc) = 0;
  *(unsigned int *)(temp_v0 + 0x10) = 0;
  temp_v1 = FUN_002e6dac(0x100);
  *(int *)(temp_v0 + 8) = temp_v1;
  *(int *)(temp_v0 + 0xc) = temp_v1;
  *(int *)(temp_v0 + 0x10) = temp_v1 + 0x100;
  FUN_002e9318(temp_v7);
  temp_v10 = &DAT_0055a884;
  *(int *)(temp_v0 + 0x14) = 0;
  *(unsigned int *)(temp_v0 + 0x18) = 0;
  *(unsigned int *)(temp_v0 + 0x1c) = 0;
  temp_v1 = FUN_002e6dac(0x500);
  *(int *)(temp_v0 + 0x14) = temp_v1;
  *(int *)(temp_v0 + 0x18) = temp_v1;
  *(int *)(temp_v0 + 0x1c) = temp_v1 + 0x500;
  temp_v12 = &DAT_00559514;
  *(unsigned int *)(temp_v0 - 0x90) = 0;
  temp_v23 = (unsigned int *)(temp_v0 - 0x98);
  *temp_v23 = (unsigned int)&DAT_00559514;
  *(unsigned int *)(temp_v0 - 0x8c) = 0;
  *temp_v13 = 0;
  temp_v13[1] = 0;
  temp_v13[2] = 0;
  temp_v20 = 0x20;
  if (param_2 >= 0x20) {
    temp_v20 = param_2;
  }
  temp_v17 = param_2;
  temp_v19 = (unsigned int *)FUN_002e6dac(temp_v20 * 0xb8);
  *temp_v13 = (int)temp_v19;
  temp_v18 = temp_v17;
  if (temp_v17 != 0) {
    temp_v7[0] = &DAT_0055a4c0;
    temp_v11 = &DAT_005596b4;
    do {
      puVar1 = temp_v23;
      if (temp_v19 != (unsigned int *)0x0) {
        *temp_v19 = (unsigned int)temp_v8;
        *(unsigned char *)(temp_v19 + 1) = *(unsigned char *)(temp_v23 + 1);
        temp_v2 = temp_v23[3];
        temp_v19[2] = temp_v23[2];
        temp_v19[3] = temp_v2;
        temp_v19[4] = temp_v23[4];
        temp_v19[5] = temp_v23[5];
        temp_v0 = FUN_002e9520(temp_v19 + 6,temp_v23 + 6);
        *(unsigned short *)(temp_v0 + 8) = *(unsigned short *)(puVar1 + 8);
        temp_v0 = temp_v0 + 0xc;
        FUN_00122024(temp_v0,puVar1 + 9);
        *(unsigned char **)(temp_v0 + 0x20) = temp_v7[0];
        *(unsigned char *)(temp_v0 + 0x24) = *(unsigned char *)(puVar1 + 0x12);
        *(unsigned char *)(temp_v0 + 0x25) = *(unsigned char *)((int)puVar1 + 0x49);
        piVar9 = (int *)(temp_v0 + 0x28);
        *piVar9 = 0;
        *(unsigned int *)(temp_v0 + 0x2c) = 0;
        *(unsigned int *)(temp_v0 + 0x30) = 0;
        temp_v5 = (int)(puVar1[0x14] - puVar1[0x13]) >> 2;
        temp_v4 = 0x20;
        if (temp_v5 >= 0x20) {
          temp_v4 = temp_v5;
        }
        puVar4 = (unsigned int *)FUN_002e6dac(temp_v4 << 2);
        *piVar9 = (int)puVar4;
        puVar7 = (unsigned int *)puVar1[0x14];
        for (puVar5 = (unsigned int *)puVar1[0x13]; puVar5 != puVar7; puVar5 = puVar5 + 1) {
          if (puVar4 != (unsigned int *)0x0) {
            *puVar4 = *puVar5;
          }
          puVar4 = puVar4 + 1;
        }
        temp_v1 = puVar1[0x14];
        temp_v3 = puVar1[0x13];
        *(unsigned int *)(temp_v0 + 0x30) = *piVar9 + temp_v4 * 4;
        *(unsigned int *)(temp_v0 + 0x2c) = ((temp_v1 - temp_v3) & 0xfffffffcU) + *piVar9;
        *(unsigned char **)(temp_v0 + 0x20) = temp_v11;
        *(unsigned char **)(temp_v0 + 0x34) = temp_v7[0];
        *(unsigned char *)(temp_v0 + 0x38) = *(unsigned char *)(puVar1 + 0x17);
        *(unsigned char *)(temp_v0 + 0x39) = *(unsigned char *)((int)puVar1 + 0x5d);
        piVar9 = (int *)(temp_v0 + 0x3c);
        *piVar9 = 0;
        *(unsigned int *)(temp_v0 + 0x40) = 0;
        *(unsigned int *)(temp_v0 + 0x44) = 0;
        temp_v5 = (int)(puVar1[0x19] - puVar1[0x18]) >> 2;
        temp_v4 = 0x20;
        if (temp_v5 >= 0x20) {
          temp_v4 = temp_v5;
        }
        puVar4 = (unsigned int *)FUN_002e6dac(temp_v4 << 2);
        *piVar9 = (int)puVar4;
        puVar7 = (unsigned int *)puVar1[0x19];
        for (puVar5 = (unsigned int *)puVar1[0x18]; puVar5 != puVar7; puVar5 = puVar5 + 1) {
          if (puVar4 != (unsigned int *)0x0) {
            *puVar4 = *puVar5;
          }
          puVar4 = puVar4 + 1;
        }
        temp_v1 = puVar1[0x19];
        temp_v3 = puVar1[0x18];
        *(unsigned int *)(temp_v0 + 0x44) = *piVar9 + temp_v4 * 4;
        *(unsigned int *)(temp_v0 + 0x40) = ((temp_v1 - temp_v3) & 0xfffffffcU) + *piVar9;
        *(unsigned char **)(temp_v0 + 0x34) = temp_v11;
        temp_v0 = FUN_00303146(temp_v0 + 0x4c,puVar1 + 0x1c);
        temp_v0 = FUN_00303146(temp_v0 + 8,puVar1 + 0x1e);
        *(unsigned short *)(temp_v0 + 8) = *(unsigned short *)(puVar1 + 0x20);
        *(unsigned char *)(temp_v0 + 10) = *(unsigned char *)((int)puVar1 + 0x82);
        *(unsigned int *)(temp_v0 + 0xc) = puVar1[0x21];
        *(unsigned int *)(temp_v0 + 0x10) = puVar1[0x22];
        *(unsigned int *)(temp_v0 + 0x14) = puVar1[0x23];
        temp_v0 = FUN_00303146(temp_v0 + 0x18,puVar1 + 0x24);
        temp_v0 = FUN_00303146(temp_v0 + 8,puVar1 + 0x26);
        piVar9 = (int *)(temp_v0 + 8);
        *piVar9 = 0;
        *(unsigned int *)(temp_v0 + 0xc) = 0;
        *(unsigned int *)(temp_v0 + 0x10) = 0;
        temp_v5 = (int)(puVar1[0x29] - puVar1[0x28]) >> 3;
        temp_v9 = 0x20;
        if (temp_v5 >= 0x20) {
          temp_v9 = temp_v5;
        }
        temp_v3 = FUN_002e6dac(temp_v9 << 3);
        *piVar9 = temp_v3;
        temp_v6 = puVar1[0x29];
        for (temp_v1 = puVar1[0x28]; temp_v1 != temp_v6; temp_v1 = temp_v1 + 8) {
          if (temp_v3 != 0) {
            FUN_002e9518(temp_v3,temp_v1);
          }
          temp_v3 = temp_v3 + 8;
        }
        *(unsigned int *)(temp_v0 + 0xc) = *piVar9 + ((puVar1[0x29] - puVar1[0x28]) & 0xfffffff8);
        *(unsigned int *)(temp_v0 + 0x10) = *piVar9 + temp_v9 * 8;
        piVar9 = (int *)(temp_v0 + 0x14);
        *piVar9 = 0;
        *(unsigned int *)(temp_v0 + 0x18) = 0;
        *(unsigned int *)(temp_v0 + 0x1c) = 0;
        temp_v5 = (int)(puVar1[0x2c] - puVar1[0x2b]) / 0x28;
        if (temp_v5 < 0x20) {
          temp_v5 = 0x20;
        }
        puVar5 = (unsigned int *)FUN_002e6dac(temp_v5 * 0x28);
        *piVar9 = (int)puVar5;
        temp_v3 = puVar1[0x2c];
        for (temp_v1 = puVar1[0x2b]; temp_v1 != temp_v3; temp_v1 = temp_v1 + 0x28) {
          if (puVar5 != (unsigned int *)0x0) {
            *puVar5 = (unsigned int)&DAT_0055ad28;
            *(unsigned char *)(puVar5 + 1) = *(unsigned char *)(temp_v1 + 4);
            *(unsigned char *)((int)puVar5 + 5) = *(unsigned char *)(temp_v1 + 5);
            puVar5[2] = (unsigned int)&DAT_0055a4d0;
            *(unsigned char *)(puVar5 + 3) = *(unsigned char *)(temp_v1 + 0xc);
            temp_v2 = *(unsigned int *)(temp_v1 + 0x14);
            puVar5[4] = *(unsigned int *)(temp_v1 + 0x10);
            puVar5[5] = temp_v2;
            puVar5[6] = *(unsigned int *)(temp_v1 + 0x18);
            temp_v2 = *(unsigned int *)(temp_v1 + 0x24);
            puVar5[8] = *(unsigned int *)(temp_v1 + 0x20);
            puVar5[9] = temp_v2;
            puVar5[2] = (unsigned int)&DAT_005596c4;
            *puVar5 = (unsigned int)temp_v10;
          }
          puVar5 = puVar5 + 10;
        }
        temp_v3 = puVar1[0x2b];
        temp_v1 = puVar1[0x2c];
        *(unsigned int *)(temp_v0 + 0x1c) = *piVar9 + temp_v5 * 0x28;
        *(int *)(temp_v0 + 0x18) = *piVar9 + ((temp_v1 - temp_v3) / 0x28) * 0x28;
        *(unsigned char **)(temp_v0 - 0x98) = temp_v12;
      }
      temp_v18 = temp_v18 - 1;
      temp_v19 = temp_v19 + 0x2e;
    } while (temp_v18 != 0);
  }
  piVar9 = temp_v13;
  temp_v13[1] = *temp_v13 + temp_v17 * 0xb8;
  temp_v13[2] = *temp_v13 + temp_v20 * 0xb8;
  FUN_002fd2a4(&temp_v14);
  return piVar9;
}

} /* extern "C" */
