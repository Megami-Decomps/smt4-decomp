/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a7e04` (_code @ 0x3a7e04, 0x1fc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 17 slot(s), 39 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned short sp3E; /* 0x3e: local_3e */
    unsigned short sp40; /* 0x40: local_40 */
    unsigned char sp42; /* 0x42: local_42 */
    unsigned short sp44; /* 0x44: local_44 */
    unsigned short sp46; /* 0x46: local_46 */
    unsigned short sp48; /* 0x48: local_48 */
    unsigned short sp4A; /* 0x4a: local_4a */
    unsigned short sp4C; /* 0x4c: local_4c */
    unsigned short sp4E; /* 0x4e: local_4e */
    unsigned short sp50; /* 0x50: local_50 */
    unsigned short sp52; /* 0x52: local_52 */
    unsigned short sp54; /* 0x54: local_54 */
    unsigned short sp56; /* 0x56: local_56 */
    unsigned short sp58; /* 0x58: local_58 */
} param_1_stack;

extern int FUN_0019dfbc(unsigned int);
/* Supplied declaration required: FUN_001ad328. */
/* Supplied declaration required: FUN_0022d5c8. */
/* Supplied declaration required: FUN_002329dc. */
/* Supplied declaration required: FUN_002333d4. */
/* Supplied declaration required: FUN_0026c7e8. */
extern int FUN_002883bc(unsigned short, unsigned short *);
extern int FUN_00297674(void);
/* Supplied declaration required: FUN_0029ccf8. */
/* Supplied declaration required: FUN_0029cee4. */
/* Supplied declaration required: FUN_0029f10c. */
/* Supplied declaration required: FUN_002a0f50. */
/* Supplied declaration required: FUN_002a0f68. */
/* Supplied declaration required: FUN_002b8b78. */
extern unsigned short *FUN_003ad900(unsigned short);


void FUN_003a7e04(int param_1)

{
/* irregular: 11 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned short *puVar3;
  int temp_v2;
  unsigned short temp_v3;
  short temp_v4;
  short temp_v5;
  short temp_v6;
  short temp_v7;
  short temp_v8;
  unsigned short temp_v9;
  unsigned short temp_v10;
  unsigned short temp_v11;
  unsigned short temp_v12;
  unsigned short temp_v13;
  unsigned char temp_v14;
  unsigned short temp_v15;
  unsigned short temp_v16;
  unsigned int temp_v17;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int temp_v18;
  
  temp_v1 = FUN_0019dfbc(*(unsigned int *)(param_1 + 0x5a0));
  if (temp_v1 == 2) {
    temp_v1 = FUN_00297674();
    if (temp_v1 == 0) {
      temp_v1 = 0;
      if (temp_v1 < *(short *)(param_1 + 0x5a8)) {
        do {
          temp_v0 = *(unsigned short *)(param_1 + temp_v1 * 0x20 + 0x5ac);
          puVar3 = (unsigned short *)FUN_003ad900(temp_v0);
          temp_v2 = FUN_002883bc(temp_v0,&temp_v3);
          if (temp_v2 != 0) {
            temp_v3 = (unsigned short)*(unsigned char *)(puVar3 + 0x24);
            temp_v18 = *(unsigned int *)(puVar3 + 0x18);
            temp_v15 = *puVar3;
            temp_v16 = puVar3[1];
            temp_v4 = puVar3[0x2c8] + puVar3[2];
            temp_v9 = puVar3[0x10];
            temp_v5 = puVar3[3] + puVar3[0x2c9];
            temp_v10 = puVar3[0x11];
            temp_v6 = puVar3[4] + puVar3[0x2ca];
            temp_v11 = puVar3[0x12];
            temp_v7 = puVar3[5] + puVar3[0x2cb];
            temp_v12 = puVar3[0x13];
            temp_v8 = puVar3[0x2cc] + puVar3[6];
            temp_v13 = puVar3[0x14];
            temp_v17 = *(unsigned int *)(puVar3 + 0x1a);
            uStack_38 = *(unsigned int *)(puVar3 + 0x1c);
            uStack_34 = *(unsigned int *)(puVar3 + 0x1e);
            uStack_30 = *(unsigned int *)(puVar3 + 0x20);
            temp_v14 = (temp_v14 & 0xc3) | ((*(unsigned char *)((int)puVar3 + 0x601) & 0xf) << 2);
            FUN_001ad328(temp_v0,&temp_v3);
          }
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < *(short *)(param_1 + 0x5a8));
      }
      FUN_0022d5c8(param_1);
    }
    FUN_002a0f50();
    FUN_002b8b78();
    FUN_002a0f68(0);
    if (*(short *)(param_1 + 0x5a8) < 1) {
      if (*(char *)(param_1 + 0x5a4) == '\0') {
        FUN_0029cee4(1);
      }
      FUN_0029f10c(0,0x323232ff);
      FUN_0029ccf8();
      FUN_002333d4(param_1 + 0xdc,1);
      FUN_002a0f68(1);
      *(unsigned int *)(param_1 + 0x14) = 0xb;
      *(unsigned int *)(param_1 + 0x18) = 0;
      FUN_002329dc();
      FUN_0026c7e8();
      return;
    }
    *(unsigned int *)(param_1 + 0x14) = 2;
    *(unsigned int *)(param_1 + 0x18) = 0;
  }
  return;
}
