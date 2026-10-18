/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ad98c` (_code @ 0x3ad98c, 0x318 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003ad98c_arg0 fn_003ad98c_arg0;
struct fn_003ad98c_arg0 {
    unsigned char pad_0x0[0x20];
    undefined4 field_0x20; /* +0x20 */
    unsigned char pad_0x24[0x34];
    undefined4 field_0x58; /* +0x58 */
    undefined2 field_0x5c; /* +0x5c */
    undefined2 field_0x5e; /* +0x5e */
    undefined1 field_0x60; /* +0x60 */
    unsigned char pad_0x61[0x26];
    undefined1 field_0x87; /* +0x87 */
    unsigned char pad_0x88[0x2];
    undefined1 field_0x8a; /* +0x8a */
};

/* stack frame of param_2: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_2_stack;

extern unsigned char DAT_00401a1c; /* 0x401a1c */
extern unsigned char DAT_00401b18; /* 0x401b18 */
extern unsigned char DAT_00401bfc; /* 0x401bfc */
extern unsigned char DAT_00401cbc; /* 0x401cbc */
extern int DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_00199a94. */
/* Supplied declaration required: FUN_001f4fc4. */
/* Supplied declaration required: FUN_00206874. */
/* Supplied declaration required: FUN_002af854. */
/* Supplied declaration required: FUN_002bdb2c. */
/* Supplied declaration required: FUN_002bf030. */
/* Supplied declaration required: FUN_002c23f8. */
/* Supplied declaration required: FUN_002c32f8. */
/* Supplied declaration required: FUN_002c3344. */
extern unsigned int FUN_0033d618(void);


void FUN_003ad98c(fn_003ad98c_arg0 *param_1,int param_2)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v0 = DAT_00439ca8;
  *(unsigned int *)(DAT_00439ca8 + 0x7e38) = 0;
  *(unsigned int *)(temp_v0 + 0x7e3c) = 0;
  *(unsigned char *)(temp_v0 + 0x7e9d) = 0;
  *(unsigned char *)(temp_v0 + 0x7e9e) = 0;
  FUN_001f4fc4(temp_v0 + 8);
  FUN_00206874(temp_v0 + 0x2200);
  FUN_00199a94(temp_v0 + 0x2460,param_2);
  temp_v1 = DAT_00439ca8;
  *(unsigned short *)(DAT_00439ca8 + 0x5da6) = 0;
  *(unsigned short *)(temp_v1 + 0x63aa) = 0;
  *(unsigned short *)(temp_v1 + 0x69ae) = 0;
  *(unsigned short *)(temp_v1 + 0x6fb2) = 0;
  *(unsigned short *)(temp_v1 + 0x75b6) = 0;
  temp_v1 = temp_v0 + 0x7ea0;
  FUN_002c3344();
  FUN_002c32f8(temp_v1,&DAT_00401a1c,0xfc,&DAT_00401b18,0xe4,&DAT_00401bfc,0xc0,0,0,&DAT_00401cbc,
               0x5b0);
  temp_v6 = 0;
  do {
    temp_v4 = temp_v0 + temp_v6 * 0x400;
    temp_v3 = 0;
    *(unsigned char *)(temp_v4 + 0x832c) = 0;
    do {
      temp_v5 = temp_v4 + temp_v3 * 0x8c + 0x7f4c;
      FUN_002bdb2c(temp_v5,0xd,2000,temp_v1,0xf1);
      FUN_002bf030(temp_v5,3);
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 5);
    FUN_002bdb2c(temp_v4 + 0x8208,0x15,1000,temp_v1,0xf1);
    FUN_002bf030(temp_v4 + 0x8208,9);
    FUN_002bdb2c(temp_v4 + 0x8294,0x15,0x3ea,temp_v1,0xf1);
    FUN_002bf030(temp_v4 + 0x8294,9);
    temp_v3 = temp_v0 + temp_v6 * 0xa0;
    *(unsigned char *)(temp_v3 + 0xbfe4) = 0;
    temp_v3 = temp_v3 + 0xbf4c;
    FUN_002bdb2c(temp_v3,0x15,0x3ee,temp_v1,0xf1);
    FUN_002bf030(temp_v3,10);
    temp_v6 = temp_v6 + 1;
  } while (temp_v6 < 0x10);
  temp_v6 = 0;
  do {
    temp_v3 = temp_v0 + temp_v6 * 0x14c;
    *(unsigned short *)(temp_v3 + 0xe1c4) = 0;
    FUN_002bdb2c(temp_v3 + 0xe0ac,0x15,0xbba,temp_v0 + 0x7ea0,0xf1);
    FUN_002bf030(temp_v3 + 0xe0ac,0xb);
    FUN_002bdb2c(temp_v3 + 0xe138,0x15,0xbbe,temp_v0 + 0x7ea0,0xf1);
    FUN_002bf030(temp_v3 + 0xe138,0xc);
    temp_v6 = temp_v6 + 1;
  } while (temp_v6 < 0xc);
  temp_v6 = 0x3a4;
  FUN_002c23f8(0x3a4,param_2);
  temp_v2 = 0;
  if (temp_v6 != 0) {
    temp_v2 = FUN_0033d618();
  }
  *(unsigned int *)(temp_v0 + 0x7e20) = temp_v2;
  *(unsigned char *)(temp_v0 + 0x54d0) = 0;
  if ((*(unsigned int *)(param_2 + 0xe0) & 0x40000) != 0) {
    *(unsigned char *)(temp_v0 + 0x54d0) = 1;
  }
  FUN_002bdb2c(temp_v0 + 0x7ec0,0xe,0,temp_v1,1);
  FUN_002af854(temp_v0 + 0x7ec0,0xd,0);
  return;
}
