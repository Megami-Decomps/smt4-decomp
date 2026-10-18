/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010f144` (_code @ 0x10f144, 0x2f4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
extern unsigned int FUN_0011a1a8(unsigned int);
/* Supplied declaration required: FUN_0011b468. */
/* Supplied declaration required: FUN_0011b498. */
extern unsigned int FUN_0011b588(void);
/* Supplied declaration required: FUN_002bbe30. */
/* Supplied declaration required: FUN_002bbed0. */
/* Supplied declaration required: FUN_002bbf8c. */
extern unsigned int FUN_002c15ac(unsigned int);
extern unsigned int FUN_002c15d4(unsigned int);
/* Supplied declaration required: FUN_002c1e30. */
/* Supplied declaration required: FUN_002c1edc. */
/* Supplied declaration required: FUN_002c2044. */
/* Supplied declaration required: FUN_002c222c. */
extern unsigned int FUN_002c5c14(char *, unsigned int *, unsigned int, unsigned int);


void FUN_0010f144(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 10 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int in_fpscr;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int uStack_40;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  
  *(unsigned char *)(param_1 + 0x11e8) = 1;
  *(unsigned char *)(param_1 + 0x11e9) = 3;
  *(unsigned char *)(param_1 + 0x5b0) = 1;
  *(unsigned char *)(param_1 + 0x11dc) = 1;
  *(unsigned char *)(param_1 + 0x11e1) = 1;
  temp_v1 = 0;
  temp_v2 = 0;
  *(unsigned char *)(param_1 + 0x5f4) = 0;
  do {
    temp_v3 = temp_v2 + 1;
    temp_v1 = temp_v1 + 2;
    *(unsigned char *)(param_1 + temp_v2 * 0x20 + 0x1204) = 1;
    temp_v2 = temp_v2 + 2;
    *(unsigned char *)(param_1 + temp_v3 * 0x20 + 0x1204) = 1;
  } while (temp_v1 < 0xc);
  temp_v1 = 0x12a48;
  FUN_002c222c();
  temp_v0 = 0;
  if (temp_v1 != 0) {
    temp_v0 = FUN_0011b588();
  }
  *(unsigned int *)(param_1 + 0x52c) = temp_v0;
  temp_v0 = FUN_002c5c14("DefaultTextureVS.shbin",(unsigned int *)&temp_v6,1,0x80);
  FUN_0011b498(*(unsigned int *)(param_1 + 0x52c),temp_v0,temp_v6,0);
  temp_v0 = FUN_002c15ac(0);
  VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v0 = FUN_002c15d4(0);
  temp_v5 = 0;
  VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002bbf8c();
  FUN_002bbed0(param_1 + 0x5f8,1);
  temp_v0 = FUN_002c15ac(2);
  VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v0 = FUN_002c15d4(2);
  VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002bbf8c();
  FUN_002bbed0(param_1 + 0x638,1);
  FUN_002bbf8c();
  FUN_002bbed0(param_1 + 0x678,1);
  FUN_002bbf8c();
  FUN_002bbed0(param_1 + 0x6b8,1);
  temp_v7 = 0x42c80000;
  uStack_40 = 0x44160000;
  temp_v1 = param_1 + 0x6fc;
  temp_v9 = 0x3f800000;
  temp_v6 = temp_v5;
  temp_v8 = temp_v5;
  temp_v10 = temp_v5;
  temp_v11 = temp_v5;
  temp_v12 = temp_v5;
  temp_v13 = temp_v5;
  FUN_002c2044(temp_v1,1);
  FUN_002c1edc(temp_v1,&temp_v6,&temp_v11,&temp_v8);
  FUN_002c1e30(temp_v1,1);
  temp_v1 = param_1 + 0xc04;
  FUN_002c2044(temp_v1,1);
  FUN_002c1edc(temp_v1,&temp_v6,&temp_v11,&temp_v8);
  FUN_002c1e30(temp_v1,1);
  FUN_002bbe30(param_1 + 0x5b4);
  temp_v4 = 0;
  do {
    FUN_0011b468(param_1 + temp_v4 * 0x20 + 0x11ec,temp_v4 & 0xff);
    temp_v0 = FUN_0011a1a8(temp_v4 & 0xff);
    temp_v1 = temp_v4 * 4;
    temp_v4 = temp_v4 + 1;
    *(unsigned int *)(param_1 + temp_v1 + 0x136c) = temp_v0;
  } while ((int)temp_v4 < 0xc);
  return;
}
