/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040ae70` (_code @ 0x40ae70, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00178b04(int, unsigned char *, int);
int FUN_003fed38(undefined4, int);
int FUN_00406834(void *, unsigned int);
int moriSceneSetFogDefaults(void);

typedef struct fn_0040ae70_arg0 fn_0040ae70_arg0;
typedef struct fn_0040ae70_arg1 fn_0040ae70_arg1;
struct fn_0040ae70_arg0 {
    unsigned char pad_0x0[0x4];
    void *field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
    undefined4 field_0x20; /* +0x20 */
    float field_0x24; /* +0x24 */
    float field_0x28; /* +0x28 */
    float field_0x2c; /* +0x2c */
    float field_0x30; /* +0x30 */
    float field_0x34; /* +0x34 */
    unsigned char field_0x38; /* +0x38 */
    unsigned char pad_0x39[0x8b];
    undefined1 field_0xc4; /* +0xc4 */
};
struct fn_0040ae70_arg1 {
    unsigned char pad_0x0[0x4];
    unsigned char field_0x4; /* +0x4 */
    unsigned char pad_0x5[0xf];
    unsigned char field_0x14; /* +0x14 */
    unsigned char pad_0x15[0x23];
    unsigned char field_0x38; /* +0x38 */
    unsigned char pad_0x39[0x10];
    undefined1 field_0x49; /* +0x49 */
    unsigned char pad_0x4a[0x2];
    undefined4 field_0x4c; /* +0x4c */
    undefined4 field_0x50; /* +0x50 */
    undefined4 field_0x54; /* +0x54 */
    undefined4 field_0x58; /* +0x58 */
    undefined4 field_0x5c; /* +0x5c */
    undefined4 field_0x60; /* +0x60 */
    undefined4 field_0x64; /* +0x64 */
    undefined4 field_0x68; /* +0x68 */
    undefined4 field_0x6c; /* +0x6c */
    undefined4 field_0x70; /* +0x70 */
    undefined4 field_0x74; /* +0x74 */
    undefined4 field_0x78; /* +0x78 */
    unsigned char pad_0x7c[0x30];
    undefined4 field_0xac; /* +0xac */
    undefined4 field_0xb0; /* +0xb0 */
    unsigned char pad_0xb4[0x20];
    undefined4 field_0xd4; /* +0xd4 */
};

/* stack frame of param_2: 7 slot(s), 22 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned char sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned char sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern unsigned char LAB_0040af28; /* 0x40af28 */

extern unsigned int FUN_001581dc(unsigned int *);
/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_003fed38. */
/* Supplied declaration required: FUN_00406834. */
/* Supplied declaration required: moriSceneSetFogDefaults. */
extern void *_ZN9Obj557b68C1Ev(void);


void FUN_0040ae70(fn_0040ae70_arg0 *param_1,fn_0040ae70_arg1 *param_2)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  void *pvVar2;
  unsigned int temp_v1;
  void *temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8;
  
  if (param_1->field_0x4 == (void *)0x0) {
    temp_v0 = 0x194;
    FUN_00178b04(0x194,&LAB_0040af28,0x17f);
    pvVar2 = (void *)0x0;
    if (temp_v0 != 0) {
      pvVar2 = (void *)_ZN9Obj557b68C1Ev();
    }
    param_1->field_0x4 = pvVar2;
    moriSceneSetFogDefaults();
    pvVar2 = param_1->field_0x4;
    temp_v6 = 0x10000;
    temp_v5 = 0x30000;
    temp_v7 = 0x10000;
    temp_v8 = 0;
    temp_v3 = *(unsigned int *)&param_1->field_0x38;
    temp_v4 = 1;
    temp_v1 = FUN_001581dc((unsigned int *)&temp_v3);
    FUN_00406834(pvVar2,temp_v1);
    pvVar2 = temp_v2;
    if (param_2 != (fn_0040ae70_arg1 *)0x0) {
      pvVar2 = param_1->field_0x4;
    }
    if (param_2 != (fn_0040ae70_arg1 *)0x0 && pvVar2 != (void *)0x0) {
      FUN_003fed38(param_1->field_0x14,(int)pvVar2 + 0x10);
      return;
    }
  }
  return;
}

} /* extern "C" */
