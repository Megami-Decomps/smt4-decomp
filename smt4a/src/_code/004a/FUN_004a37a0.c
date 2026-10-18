/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a37a0` (_code @ 0x4a37a0, 0x11c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_004a37a0_arg1 fn_004a37a0_arg1;
struct fn_004a37a0_arg1 {
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
    undefined4 field_0x44; /* +0x44 */
    unsigned char pad_0x48[0x1c];
    ushort field_0x64; /* +0x64 */
    unsigned char pad_0x66[0x46];
    ushort field_0xac; /* +0xac */
    ushort field_0xae; /* +0xae */
    ushort field_0xb0; /* +0xb0 */
    ushort field_0xb2; /* +0xb2 */
    ushort field_0xb4; /* +0xb4 */
    unsigned char pad_0xb6[0x75];
    byte field_0x12b; /* +0x12b */
};

/* stack frame of param_2: 17 slot(s), 39 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned short sp46; /* 0x46: local_46 */
    unsigned short sp48; /* 0x48: local_48 */
    unsigned char sp4A; /* 0x4a: local_4a */
    unsigned short sp4C; /* 0x4c: local_4c */
    unsigned short sp4E; /* 0x4e: local_4e */
    unsigned short sp50; /* 0x50: local_50 */
    unsigned short sp52; /* 0x52: local_52 */
    unsigned short sp54; /* 0x54: local_54 */
    unsigned short sp56; /* 0x56: local_56 */
    unsigned short sp58; /* 0x58: local_58 */
    unsigned short sp5A; /* 0x5a: local_5a */
    unsigned short sp5C; /* 0x5c: local_5c */
    unsigned short sp5E; /* 0x5e: local_5e */
    unsigned short sp60; /* 0x60: local_60 */
} param_2_stack;

extern int FUN_00239234(fn_004a37a0_arg1 *, unsigned short *);
/* Supplied declaration required: FUN_0023ac54. */
extern unsigned short *FUN_004a86dc(fn_004a37a0_arg1 *);
/* Supplied declaration required: rt_memcpy_w. */


void FUN_004a37a0(unsigned int param_1,fn_004a37a0_arg1 *param_2)

{
/* irregular: 2 native warning(s); review required */
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
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int temp_v16;
  unsigned int uStack_30;
  unsigned int temp_v17;
  unsigned char temp_v18 [24];
  
  puVar1 = (unsigned short *)FUN_004a86dc(param_2);
  temp_v0 = FUN_00239234(param_2,&temp_v1);
  if (temp_v0 != 0) {
    temp_v1 = puVar1[0x32];
    temp_v17 = *(unsigned int *)(puVar1 + 0x18);
    temp_v13 = *puVar1;
    temp_v14 = puVar1[1];
    temp_v2 = puVar1[2] + puVar1[0x56];
    temp_v7 = puVar1[0x10];
    temp_v3 = puVar1[3] + puVar1[0x57];
    temp_v8 = puVar1[0x11];
    temp_v4 = puVar1[4] + puVar1[0x58];
    temp_v9 = puVar1[0x12];
    temp_v5 = puVar1[5] + puVar1[0x59];
    temp_v10 = puVar1[0x13];
    temp_v6 = puVar1[6] + puVar1[0x5a];
    temp_v11 = puVar1[0x14];
    temp_v15 = *(unsigned int *)(puVar1 + 0x1a);
    uStack_40 = *(unsigned int *)(puVar1 + 0x1c);
    uStack_3c = *(unsigned int *)(puVar1 + 0x1e);
    uStack_38 = *(unsigned int *)(puVar1 + 0x20);
    temp_v16 = *(unsigned int *)(puVar1 + 0x22);
    uStack_30 = *(unsigned int *)(puVar1 + 0x24);
    rt_memcpy_w(temp_v18,puVar1 + 0x26,0x12);
    temp_v12 = (temp_v12 & 0xc3) | ((*(unsigned char *)((int)puVar1 + 299) & 0xf) << 2);
    FUN_0023ac54(param_2,&temp_v1);
  }
  return;
}
