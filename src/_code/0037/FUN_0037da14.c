/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037da14` (_code @ 0x37da14, 0x310 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0037da14_arg0 fn_0037da14_arg0;
typedef struct fn_0037da14_arg0_pc0 fn_0037da14_arg0_pc0;
struct fn_0037da14_arg0 {
    unsigned char pad_0x0[0x27];
    byte field_0x27; /* +0x27 */
    unsigned char pad_0x28[0xc];
    unsigned char field_0x34; /* +0x34 */
    unsigned char field_0x35; /* +0x35 */
    unsigned char pad_0x36[0xb];
    char field_0x41; /* +0x41 */
    unsigned char pad_0x42[0x7];
    byte field_0x49; /* +0x49 */
    unsigned char pad_0x4a[0x1];
    byte field_0x4b; /* +0x4b */
    unsigned char pad_0x4c[0x1];
    byte field_0x4d; /* +0x4d */
    unsigned char pad_0x4e[0x2];
    undefined4 field_0x50; /* +0x50 */
    unsigned char pad_0x54[0x8];
    unsigned char field_0x5c; /* +0x5c */
    unsigned char pad_0x5d[0xb];
    float field_0x68; /* +0x68 */
    unsigned char pad_0x6c[0x9];
    unsigned char field_0x75; /* +0x75 */
    unsigned char pad_0x76[0xf];
    byte field_0x85; /* +0x85 */
    unsigned char pad_0x86[0x1];
    char field_0x87; /* +0x87 */
    unsigned char pad_0x88[0x1];
    byte field_0x89; /* +0x89 */
    byte field_0x8a; /* +0x8a */
    byte field_0x8b; /* +0x8b */
    byte field_0x8c; /* +0x8c */
    byte field_0x8d; /* +0x8d */
    byte field_0x8e; /* +0x8e */
    byte field_0x8f; /* +0x8f */
    short field_0x90; /* +0x90 */
    unsigned char pad_0x92[0x16];
    unsigned char field_0xa8; /* +0xa8 */
    unsigned char pad_0xa9[0x17];
    fn_0037da14_arg0_pc0 *field_0xc0; /* +0xc0 */
    void *field_0xc4; /* +0xc4 */
};
struct fn_0037da14_arg0_pc0 {
    unsigned char pad_0x0[0x27];
    unsigned char field_0x27; /* +0x27 */
    unsigned char pad_0x28[0xc];
    unsigned char field_0x34; /* +0x34 */
    unsigned char field_0x35; /* +0x35 */
    unsigned char pad_0x36[0xb];
    unsigned char field_0x41; /* +0x41 */
    unsigned char pad_0x42[0x7];
    unsigned char field_0x49; /* +0x49 */
    unsigned char pad_0x4a[0x1];
    unsigned char field_0x4b; /* +0x4b */
    unsigned char pad_0x4c[0x1];
    unsigned char field_0x4d; /* +0x4d */
    unsigned char pad_0x4e[0x2];
    unsigned char field_0x50; /* +0x50 */
    unsigned char pad_0x51[0xb];
    unsigned char field_0x5c; /* +0x5c */
    unsigned char pad_0x5d[0xb];
    unsigned char field_0x68; /* +0x68 */
    unsigned char pad_0x69[0xc];
    unsigned char field_0x75; /* +0x75 */
    unsigned char pad_0x76[0xf];
    unsigned char field_0x85; /* +0x85 */
    unsigned char pad_0x86[0x1];
    unsigned char field_0x87; /* +0x87 */
    unsigned char pad_0x88[0x1];
    unsigned char field_0x89; /* +0x89 */
    unsigned char field_0x8a; /* +0x8a */
    unsigned char field_0x8b; /* +0x8b */
    unsigned char field_0x8c; /* +0x8c */
    unsigned char field_0x8d; /* +0x8d */
    unsigned char field_0x8e; /* +0x8e */
    unsigned char field_0x8f; /* +0x8f */
    unsigned char field_0x90; /* +0x90 */
    unsigned char pad_0x91[0x17];
    undefined1 field_0xa8; /* +0xa8 */
    unsigned char pad_0xa9[0x17];
    unsigned char field_0xc0; /* +0xc0 */
    unsigned char pad_0xc1[0x3];
    unsigned char field_0xc4; /* +0xc4 */
    unsigned char pad_0xc5[0x4];
    undefined1 field_0xc9; /* +0xc9 */
    unsigned char pad_0xca[0x36];
    unsigned char field_0x100; /* +0x100 */
    unsigned char pad_0x101[0xf];
    byte field_0x110; /* +0x110 */
    byte field_0x111; /* +0x111 */
    ushort field_0x112; /* +0x112 */
    ushort field_0x114; /* +0x114 */
    unsigned char pad_0x116[0xa];
    unsigned char field_0x120; /* +0x120 */
    unsigned char pad_0x121[0x3];
    undefined1 field_0x124; /* +0x124 */
    undefined1 field_0x125; /* +0x125 */
    unsigned char field_0x126; /* +0x126 */
    unsigned char pad_0x127[0x1];
    byte field_0x128; /* +0x128 */
    unsigned char pad_0x129[0xb];
    unsigned char field_0x134; /* +0x134 */
    unsigned char pad_0x135[0x3];
    undefined4 field_0x138; /* +0x138 */
};

typedef int romwright_code();
/* stack frame of param_5: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_5_stack;

extern int FUN_0037d91c(); /* 0x37d91c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001312b4. */
/* Supplied declaration required: FUN_00235870. */
/* Supplied declaration required: FUN_002358b4. */
/* Supplied declaration required: FUN_002a1f84. */
extern char FUN_002c5f60(int);
/* Supplied declaration required: FUN_00379bf8. */
/* Supplied declaration required: FUN_00379c18. */
/* Supplied declaration required: FUN_00379c90. */
/* Supplied declaration required: FUN_0037f6d0. */
/* Supplied declaration required: FUN_0037fb60. */


void FUN_0037da14(fn_0037da14_arg0 *param_1,int param_2,int param_3,unsigned int param_4,int param_5)

{
/* irregular: 2 goto(s); irregular input(s): in_fpscr; 12 native warning(s); review required */
  unsigned int temp_v0;
  long long temp_v1;
  char temp_v2;
  unsigned char temp_v3;
  fn_0037da14_arg0_pc0 *pfVar5;
  unsigned int temp_v4;
  int temp_v5;
  void *pvVar8;
  fn_0037da14_arg0_pc0 *pfVar9;
  unsigned char temp_v6;
  unsigned char temp_v7;
  unsigned int in_fpscr;
  float temp_v8;
  float temp_v9;
  int temp_v10;
  int temp_v11;
  void *temp_v12;
  unsigned int temp_v13;
  int temp_v14;
  int temp_v15;
  romwright_code *temp_v16;
  fn_0037da14_arg0 *temp_v17;
  
  temp_v4 = (unsigned int)param_1->field_0x85 * param_3;
  pfVar5 = param_1->field_0xc0;
  pfVar9 = (fn_0037da14_arg0_pc0 *)0x0;
  temp_v1 = (long long)(int)temp_v4 * -0x7efdfbf7 + ((unsigned long long)temp_v4 << 0x20);
  temp_v5 = (int)((unsigned long long)temp_v1 >> 0x20);
  if (param_5 != 0) {
    pfVar9 = param_1->field_0xc4;
  }
  pvVar8 = (void *)((temp_v5 >> 6) - (temp_v5 >> 0x1f));
  temp_v6 = (unsigned char)param_2;
  if (param_5 != 0 && pfVar9 != (fn_0037da14_arg0_pc0 *)0x0) {
    pfVar9->field_0x126 = temp_v6;
    temp_v8 = (float)VectorSignedToFloat(pvVar8,(unsigned char)(in_fpscr >> 0x16) & 3);
    *(float *)&pfVar9->field_0x100 = temp_v8 * 0.007874016f * temp_v8 * 0.007874016f;
  }
  if (param_1->field_0x27 != 0) {
    pfVar9 = param_1->field_0xc4;
    if (pfVar9 != (fn_0037da14_arg0_pc0 *)0x0) {
      if (pfVar9->field_0x90 != '\x04') {
        *(unsigned int *)&pfVar9->field_0x120 = param_4;
        pfVar9->field_0x126 = temp_v6;
        temp_v8 = (float)VectorSignedToFloat(pvVar8,(unsigned char)(in_fpscr >> 0x16) & 3);
        *(float *)&pfVar9->field_0x100 = temp_v8 * 0.007874016f * temp_v8 * 0.007874016f;
        goto LAB_0037dbb0;
      }
      FUN_001312b4(pfVar9,0x81020409,temp_v5,(int)temp_v1);
    }
  }
  else if (pfVar9 != (fn_0037da14_arg0_pc0 *)0x0) goto LAB_0037dbb0;
  temp_v16 = FUN_0037d91c;
  temp_v10 = param_1->field_0x50;
  temp_v13 = param_4;
  if (param_5 != 0) {
    temp_v13 = 0xffffffff;
  }
  temp_v14 = (int)param_1->field_0x87;
  temp_v15 = (unsigned int)(unsigned char)pfVar5->field_0x75 + (unsigned int)param_1->field_0x89;
  pfVar9 = param_1->field_0xc0;
  temp_v11 = param_2;
  temp_v12 = pvVar8;
  temp_v17 = param_1;
  FUN_0037f6d0(pfVar9,param_1->field_0x4d,&temp_v10);
  if (pfVar9 == (fn_0037da14_arg0_pc0 *)0x0) {
    return;
  }
  temp_v7 = pfVar9->field_0x128 != 0;
  if (temp_v7) {
    pvVar8 = param_1->field_0xc4;
  }
  if (temp_v7 && pvVar8 != (void *)0x0) {
    do {
      if (*(unsigned char *)((int)pvVar8 + 0x128) == pfVar9->field_0x128) {
        FUN_002358b4((int)pvVar8 + 0x90,0x7e);
        FUN_00235870(pvVar8);
      }
      pvVar8 = *(void **)((int)pvVar8 + 0x138);
    } while (pvVar8 != (void *)0x0);
  }
  pfVar9->field_0x138 = param_1->field_0xc4;
  param_1->field_0xc4 = pfVar9;
LAB_0037dbb0:
  if (param_1->field_0x8c < 0x80) {
    FUN_00379c90();
  }
  if (param_1->field_0x8d < 0x80) {
    FUN_00379c18();
  }
  if (param_1->field_0x8e < 0x80) {
    pfVar9->field_0xa8 = param_1->field_0x8e;
  }
  if (param_1->field_0x8f < 0x80) {
    FUN_002358b4(&pfVar9->field_0x90);
  }
  if (param_1->field_0x90 < 0x80) {
    FUN_00379bf8(&pfVar9->field_0x90);
  }
  temp_v8 = param_1->field_0x68;
  if (param_1->field_0x4b != 0) {
    temp_v9 = (float)VectorSignedToFloat((unsigned int)param_1->field_0x8a - param_2,
                                        (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v8 = temp_v9 + temp_v8;
  }
  temp_v4 = (unsigned int)param_1->field_0x8b;
  if (temp_v4 != 0) {
    temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v8 == 0.0f) << 0x1e) |
            ((unsigned int)(temp_v8 <= 0.0f) << 0x1d);
    temp_v3 = (unsigned char)(temp_v0 >> 0x18);
    if ((unsigned char)((temp_v3 >> 5) & 1) && !(unsigned char)(temp_v3 >> 6)) {
      temp_v8 = -temp_v8;
    }
    temp_v9 = (float)VectorSignedToFloat(temp_v4 * temp_v4,(unsigned char)(temp_v0 >> 0x16) & 3);
    FUN_0037fb60(pfVar9,((int)(temp_v8 * temp_v9) >> 5) * 5,1);
  }
  else {
    FUN_0037fb60(pfVar9,param_4,0);
  }
  param_1->field_0x8a = temp_v6;
  if (param_1->field_0x49 == 0) {
    temp_v6 = 0xff;
  }
  else {
    temp_v6 = 0;
  }
  if ((unsigned int)pfVar9->field_0x114 >= (unsigned int)pfVar9->field_0x112) {
    temp_v3 = pfVar9->field_0x111;
  }
  else {
    temp_v3 = pfVar9->field_0x110;
    temp_v2 = FUN_002c5f60(((unsigned int)pfVar9->field_0x111 - (unsigned int)temp_v3) * (unsigned int)pfVar9->field_0x114);
    temp_v3 = temp_v2 + temp_v3;
  }
  pfVar9->field_0x110 = temp_v3;
  pfVar9->field_0x111 = temp_v6;
  pfVar9->field_0x112 = 0;
  pfVar9->field_0x114 = 0;
  pfVar9->field_0xc9 = param_1->field_0xc0->field_0x5c;
  pfVar9->field_0x124 = param_1->field_0xc0->field_0x34;
  pfVar9->field_0x125 = param_1->field_0xc0->field_0x35;
  FUN_002a1f84(*(unsigned int *)&pfVar9->field_0x134,(int)param_1->field_0x41);
  return;
}
