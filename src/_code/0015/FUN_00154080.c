/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00154080` (_code @ 0x154080, 0x604 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

extern int FUN_00151500(); /* 0x151500 */
extern unsigned char LAB_00155650; /* 0x155650 */
extern unsigned char DAT_00421468; /* 0x421468 */
extern unsigned char DAT_00421570; /* 0x421570 */
extern unsigned char DAT_00422058; /* 0x422058 */
extern unsigned char DAT_0042208c; /* 0x42208c */
extern unsigned int DAT_00476634; /* 0x476634 */
extern unsigned int DAT_004efd6c; /* 0x4efd6c */
extern unsigned int DAT_004efd70; /* 0x4efd70 */
extern unsigned int DAT_004efd74; /* 0x4efd74 */
extern unsigned int DAT_004efd78; /* 0x4efd78 */
extern unsigned int DAT_004efd7c; /* 0x4efd7c */
extern unsigned int DAT_004efd80; /* 0x4efd80 */
extern unsigned int DAT_004efd84; /* 0x4efd84 */
extern unsigned int DAT_004efd88; /* 0x4efd88 */
extern unsigned int DAT_004efd8c; /* 0x4efd8c */
extern unsigned int DAT_004efd90; /* 0x4efd90 */
extern unsigned int DAT_004efd94; /* 0x4efd94 */
extern unsigned int DAT_004efd98; /* 0x4efd98 */

/* Supplied declaration required: FUN_002bfedc. */
extern int FUN_002bfefc(unsigned int *);


unsigned int * FUN_00154080(int *param_1,int *param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int *puVar3;
  unsigned char *puVar4;
  int temp_v1;
  romwright_code *pcVar6;
  int **ppiVar7;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned long long temp_v9;
  int *temp_v10;
  unsigned char *temp_v11;
  unsigned char *temp_v12;
  unsigned int temp_v13;
  
  puVar1 = (unsigned int *)(**(romwright_code **)(*param_2 + 8))(param_2,0x70,4);
  if (puVar1 == (unsigned int *)0x0) {
    return (unsigned int *)0x0;
  }
  puVar1[3] = 1;
  puVar1[2] = 0;
  *puVar1 = (unsigned int)&DAT_00421468;
  puVar1[1] = (unsigned int)param_2;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = (unsigned int)&DAT_00422058;
  puVar1[0xd] = (unsigned int)&DAT_0042208c;
  temp_v9 = 0x3f80000000000000;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x10] = 0x3f800000;
  pcVar6 = (romwright_code *)&LAB_00155650;
  temp_v4 = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0x3f800000;
  puVar1[0x14] = 0;
  puVar1[0x13] = (unsigned int)&LAB_00155650;
  puVar1[0x15] = 0;
  *(unsigned char *)(puVar1 + 0x16) = 1;
  *(unsigned char *)((int)puVar1 + 0x59) = 0;
  *(unsigned char *)((int)puVar1 + 0x5a) = 0;
  *puVar1 = (unsigned int)&DAT_00421570;
  *(unsigned char *)((int)puVar1 + 0x5b) = 0;
  *(unsigned char *)(puVar1 + 0x17) = 0;
  *(unsigned char *)((int)puVar1 + 0x5d) = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  temp_v0 = *param_1;
  temp_v6 = param_1[2];
  temp_v7 = param_1[1];
  temp_v1 = param_1[3];
  puVar1[0x15] = temp_v0;
  puVar1[0x10] = 0x3f800000;
  puVar1[0x11] = 0;
  puVar1[0x12] = *(unsigned int *)(temp_v0 + 0x14);
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  if (*(char *)(temp_v0 + 0x10) != '\0') {
    if (*(char *)(temp_v0 + 0x10) == '\x01') {
      pcVar6 = FUN_00151500;
      puVar1[0x13] = (unsigned int)pcVar6;
    }
  }
  else {
    puVar1[0x13] = (unsigned int)pcVar6;
  }
  *(unsigned char *)(puVar1 + 0x16) = 1;
  temp_v0 = (**(romwright_code **)(*(int *)puVar1[1] + 8))((int *)puVar1[1],temp_v7 << 2,4);
  if (temp_v0 == 0) {
    temp_v4 = -0x80000000;
  }
  if (-1 < temp_v4) {
    puVar3 = puVar1 + 4;
    temp_v7 = temp_v7 & 0x3fffffff;
    temp_v10 = (int *)puVar1[1];
    temp_v11 = (unsigned char *)temp_v0;
    temp_v13 = temp_v7;
    if ((int **)puVar3 != &temp_v10) {
      temp_v11 = (unsigned char *)puVar1[5];
      temp_v13 = puVar1[7];
      temp_v10 = (int *)*puVar3;
      *puVar3 = (unsigned int)puVar1[1];
      puVar1[5] = temp_v0;
      puVar1[6] = temp_v0;
      puVar1[7] = temp_v7;
    }
    temp_v12 = temp_v11;
    puVar4 = (unsigned char *)0;
    if (temp_v10 != (int *)0x0) {
      puVar4 = temp_v11;
    }
    if (temp_v10 != (int *)0x0 && puVar4 != (unsigned char *)0x0) {
      (**(romwright_code **)(*temp_v10 + 0xc))(temp_v10,temp_v11);
    }
    temp_v0 = (**(romwright_code **)(*(int *)puVar1[1] + 8))((int *)puVar1[1],temp_v6 << 2,4);
    if (temp_v0 == 0) {
      temp_v4 = -0x80000000;
    }
    if (-1 < temp_v4) {
      puVar3 = puVar1 + 8;
      temp_v10 = (int *)puVar1[1];
      temp_v11 = (unsigned char *)temp_v0;
      temp_v13 = temp_v6 & 0x3fffffff;
      if ((int **)puVar3 != &temp_v10) {
        temp_v11 = (unsigned char *)puVar1[9];
        temp_v13 = puVar1[0xb];
        temp_v10 = (int *)*puVar3;
        puVar1[9] = temp_v0;
        puVar1[10] = temp_v0;
        puVar1[0xb] = temp_v6 & 0x3fffffff;
        *puVar3 = (unsigned int)puVar1[1];
      }
      temp_v12 = temp_v11;
      puVar4 = (unsigned char *)0;
      if (temp_v10 != (int *)0x0) {
        puVar4 = temp_v11;
      }
      if (temp_v10 != (int *)0x0 && puVar4 != (unsigned char *)0x0) {
        (**(romwright_code **)(*temp_v10 + 0xc))(temp_v10,temp_v11);
      }
    }
  }
  if (((-1 < temp_v4) && ((char)temp_v1 != '\0')) &&
     (puVar4 = (unsigned char *)(**(romwright_code **)(*(int *)puVar1[1] + 8))((int *)puVar1[1],temp_v6 << 6,4),
     puVar4 != (unsigned char *)0x0)) {
    puVar3 = puVar1 + 0x18;
    ppiVar7 = &temp_v10;
    temp_v10 = (int *)puVar1[1];
    temp_v11 = puVar4;
    temp_v12 = puVar4;
    temp_v13 = temp_v6 & 0x3fffffff;
    if ((int **)puVar3 != &temp_v10) {
      temp_v11 = (unsigned char *)puVar1[0x19];
      temp_v12 = (unsigned char *)puVar1[0x1a];
      temp_v13 = puVar1[0x1b];
      temp_v10 = (int *)*puVar3;
      *puVar3 = (unsigned int)puVar1[1];
      puVar1[0x19] = (unsigned int)puVar4;
      puVar1[0x1a] = (unsigned int)puVar4;
      puVar1[0x1b] = temp_v6 & 0x3fffffff;
      ppiVar7 = (int **)puVar4;
    }
    if (temp_v11 < temp_v12) {
      ppiVar7 = (int **)((int)temp_v12 - (int)temp_v11);
    }
    if (temp_v11 < temp_v12) {
      temp_v7 = ((unsigned int)ppiVar7 & 0x7f) >> 6;
    }
    else {
      temp_v7 = 0;
    }
    for (puVar4 = (unsigned char *)(temp_v7 + 1);
        (int)puVar4 < (((int)temp_v12 - (int)temp_v11) >> 6) + 1; puVar4 = puVar4 + 2) {
    }
    temp_v12 = temp_v11;
    if (temp_v10 != (int *)0x0) {
      puVar4 = temp_v11;
    }
    if (temp_v10 != (int *)0x0 && puVar4 != (unsigned char *)0x0) {
      (**(romwright_code **)(*temp_v10 + 0xc))();
    }
    temp_v7 = *(unsigned int *)(*param_1 + 0x18);
    temp_v1 = (int)(puVar1[0x1a] - puVar1[0x19]) >> 6;
    if ((int)temp_v7 < temp_v1) {
      if ((int)temp_v7 < 0) {
        temp_v7 = 0;
      }
      if ((int)temp_v7 < temp_v1) {
        temp_v6 = (temp_v1 - temp_v7) & 1;
      }
      else {
        temp_v6 = 0;
      }
      for (temp_v0 = temp_v6 + temp_v7; temp_v0 < temp_v1; temp_v0 = temp_v0 + 2) {
      }
      temp_v1 = puVar1[0x19] + temp_v7 * 0x40;
    }
    else {
      if ((int)(puVar1[0x1b] & 0x3fffffff) < (int)temp_v7) {
        if ((puVar1[0x18] == 0) || ((puVar1[0x1b] & 0xc0000000) != 0x40000000)) {
          temp_v7 = puVar1[0x1b] & 0x3fffffff;
        }
        else {
          temp_v4 = (**(romwright_code **)(*(int *)puVar1[0x18] + 8))((int *)puVar1[0x18],temp_v7 << 6,0x20);
          temp_v5 = puVar1[0x19];
          temp_v8 = puVar1[0x1a];
          temp_v1 = 0;
          temp_v0 = temp_v4;
          if (temp_v5 != temp_v8) {
            do {
              if (temp_v0 != 0) {
                FUN_002bfedc(temp_v0,temp_v5);
                temp_v2 = *(unsigned int *)(temp_v5 + 0x34);
                temp_v3 = *(unsigned int *)(temp_v5 + 0x38);
                *(unsigned int *)(temp_v0 + 0x30) = *(unsigned int *)(temp_v5 + 0x30);
                *(unsigned int *)(temp_v0 + 0x34) = temp_v2;
                *(unsigned int *)(temp_v0 + 0x38) = temp_v3;
                *(unsigned int *)(temp_v0 + 0x3c) = *(unsigned int *)(temp_v5 + 0x3c);
              }
              temp_v5 = temp_v5 + 0x40;
              temp_v0 = temp_v0 + 0x40;
            } while (temp_v5 != temp_v8);
            temp_v1 = (int)(puVar1[0x1a] - puVar1[0x19]) >> 6;
          }
          if (puVar1[0x19] != 0) {
            (**(romwright_code **)(*(int *)puVar1[0x18] + 0xc))();
          }
          puVar1[0x1a] = temp_v4 + temp_v1 * 0x40;
          puVar1[0x19] = temp_v4;
          puVar1[0x1b] = (puVar1[0x1b] & 0xc0000000) | temp_v7;
        }
      }
      for (temp_v1 = (int)(puVar1[0x1a] - puVar1[0x19]) >> 6; temp_v1 < (int)temp_v7; temp_v1 = temp_v1 + 1)
      {
        temp_v0 = puVar1[0x19] + temp_v1 * 0x40;
        if (temp_v0 != 0) {
          if (((DAT_00476634 & 1) == 0) && (temp_v4 = FUN_002bfefc(&DAT_00476634), temp_v4 != 0)) {
            DAT_004efd6c = (unsigned int)((unsigned long long)temp_v9 >> 0x20);
            DAT_004efd70 = (unsigned int)temp_v9;
            DAT_004efd74 = DAT_004efd70;
            DAT_004efd78 = DAT_004efd70;
            DAT_004efd7c = DAT_004efd70;
            DAT_004efd80 = DAT_004efd6c;
            DAT_004efd84 = DAT_004efd70;
            DAT_004efd88 = DAT_004efd70;
            DAT_004efd8c = DAT_004efd70;
            DAT_004efd90 = DAT_004efd70;
            DAT_004efd94 = DAT_004efd6c;
            DAT_004efd98 = DAT_004efd70;
          }
          FUN_002bfedc(temp_v0,&DAT_004efd6c);
          temp_v2 = (unsigned int)((unsigned long long)temp_v9 >> 0x20);
          *(unsigned int *)(temp_v0 + 0x30) = temp_v2;
          *(unsigned int *)(temp_v0 + 0x34) = temp_v2;
          *(unsigned int *)(temp_v0 + 0x38) = temp_v2;
          *(unsigned int *)(temp_v0 + 0x3c) = 0x801;
        }
      }
      temp_v1 = puVar1[0x19] + temp_v7 * 0x40;
    }
    puVar1[0x1a] = temp_v1;
  }
  return puVar1;
}
