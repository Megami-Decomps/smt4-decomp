/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a7fec` (_code @ 0x3a7fec, 0x108 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003a7fec_arg1 fn_003a7fec_arg1;
struct fn_003a7fec_arg1 {
    ushort field_0x0; /* +0x0 */
    ushort field_0x2; /* +0x2 */
    ushort field_0x4; /* +0x4 */
    ushort field_0x6; /* +0x6 */
    ushort field_0x8; /* +0x8 */
    ushort field_0xa; /* +0xa */
    ushort field_0xc; /* +0xc */
    unsigned char pad_0xe[0x12];
    ushort field_0x20; /* +0x20 */
    ushort field_0x22; /* +0x22 */
    ushort field_0x24; /* +0x24 */
    ushort field_0x26; /* +0x26 */
    ushort field_0x28; /* +0x28 */
    unsigned char pad_0x2a[0x6];
    undefined4 field_0x30; /* +0x30 */
    undefined4 field_0x34; /* +0x34 */
    undefined4 field_0x38; /* +0x38 */
    undefined4 field_0x3c; /* +0x3c */
    undefined4 field_0x40; /* +0x40 */
    unsigned char pad_0x44[0x4];
    byte field_0x48; /* +0x48 */
    unsigned char pad_0x49[0x547];
    ushort field_0x590; /* +0x590 */
    ushort field_0x592; /* +0x592 */
    ushort field_0x594; /* +0x594 */
    ushort field_0x596; /* +0x596 */
    ushort field_0x598; /* +0x598 */
    unsigned char pad_0x59a[0x67];
    byte field_0x601; /* +0x601 */
};

/* stack frame of param_2: 16 slot(s), 35 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned short sp26; /* 0x26: local_26 */
    unsigned short sp28; /* 0x28: local_28 */
    unsigned char sp2A; /* 0x2a: local_2a */
    unsigned short sp2C; /* 0x2c: local_2c */
    unsigned short sp2E; /* 0x2e: local_2e */
    unsigned short sp30; /* 0x30: local_30 */
    unsigned short sp32; /* 0x32: local_32 */
    unsigned short sp34; /* 0x34: local_34 */
    unsigned short sp36; /* 0x36: local_36 */
    unsigned short sp38; /* 0x38: local_38 */
    unsigned short sp3A; /* 0x3a: local_3a */
    unsigned short sp3C; /* 0x3c: local_3c */
    unsigned short sp3E; /* 0x3e: local_3e */
    unsigned short sp40; /* 0x40: local_40 */
} param_2_stack;

/* Supplied declaration required: FUN_001ad42c. */
extern int FUN_00288154(fn_003a7fec_arg1 *, unsigned short *);
extern unsigned short *FUN_003ad6e0(fn_003a7fec_arg1 *);


void FUN_003a7fec(unsigned int param_1,fn_003a7fec_arg1 *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned short *puVar1;
  int temp_v0;
  unsigned short temp_v1;
  short temp_v2;
  short temp_v3;
  short temp_v4;
  short temp_v5;
  short temp_v6;
  unsigned short temp_v7;
  unsigned short temp_v8;
  unsigned short temp_v9;
  unsigned short temp_v10;
  unsigned short temp_v11;
  unsigned char temp_v12;
  unsigned short temp_v13;
  unsigned short temp_v14;
  unsigned int temp_v15;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  unsigned int temp_v16;
  
  puVar1 = (unsigned short *)FUN_003ad6e0(param_2);
  temp_v0 = FUN_00288154(param_2,&temp_v1);
  if (temp_v0 != 0) {
    temp_v1 = (unsigned short)*(unsigned char *)(puVar1 + 0x24);
    temp_v16 = *(unsigned int *)(puVar1 + 0x18);
    temp_v13 = *puVar1;
    temp_v14 = puVar1[1];
    temp_v2 = puVar1[0x2c8] + puVar1[2];
    temp_v7 = puVar1[0x10];
    temp_v3 = puVar1[3] + puVar1[0x2c9];
    temp_v8 = puVar1[0x11];
    temp_v4 = puVar1[4] + puVar1[0x2ca];
    temp_v9 = puVar1[0x12];
    temp_v5 = puVar1[5] + puVar1[0x2cb];
    temp_v10 = puVar1[0x13];
    temp_v6 = puVar1[0x2cc] + puVar1[6];
    temp_v11 = puVar1[0x14];
    temp_v15 = *(unsigned int *)(puVar1 + 0x1a);
    uStack_20 = *(unsigned int *)(puVar1 + 0x1c);
    uStack_1c = *(unsigned int *)(puVar1 + 0x1e);
    uStack_18 = *(unsigned int *)(puVar1 + 0x20);
    temp_v12 = (temp_v12 & 0xc3) | ((*(unsigned char *)((int)puVar1 + 0x601) & 0xf) << 2);
    FUN_001ad42c(param_2,&temp_v1);
  }
  return;
}
