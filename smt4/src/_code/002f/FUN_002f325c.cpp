/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f325c` (_code @ 0x2f325c, 0x70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0025c870(void);
int FUN_0028c6b8(void);
int asdMemFree(void);

typedef struct fn_002f325c_arg0 fn_002f325c_arg0;
typedef struct fn_002f325c_arg1 fn_002f325c_arg1;
struct fn_002f325c_arg0 {
    unsigned char pad_0x0[0x80];
    int field_0x80; /* +0x80 */
    unsigned char pad_0x84[0x4];
    void *field_0x88; /* +0x88 */
    int field_0x8c; /* +0x8c */
};
struct fn_002f325c_arg1 {
    unsigned char pad_0x0[0x80];
    unsigned char field_0x80; /* +0x80 */
    unsigned char pad_0x81[0x7];
    unsigned char field_0x88; /* +0x88 */
    unsigned char pad_0x89[0x3];
    unsigned char field_0x8c; /* +0x8c */
    unsigned char pad_0x8d[0x3];
    undefined4 field_0x90; /* +0x90 */
    unsigned char pad_0x94[0x18];
    undefined4 field_0xac; /* +0xac */
    undefined4 field_0xb0; /* +0xb0 */
};

/* Supplied declaration required: FUN_0025c870. */
/* Supplied declaration required: FUN_0028c6b8. */
/* Supplied declaration required: asdMemFree. */
extern void *asdLoadFileSync(fn_002f325c_arg1 *, unsigned int *, unsigned int, unsigned int);


void FUN_002f325c(fn_002f325c_arg0 *param_1,fn_002f325c_arg1 *param_2,unsigned int param_3,
                 unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  void *pvVar1;
  void *pvVar2;
  int uStack_18;
  
  uStack_18 = param_4;
  pvVar1 = (void *)asdLoadFileSync(param_2,(unsigned int *)&uStack_18,1,0x80);
  pvVar2 = pvVar1;
  FUN_0028c6b8();
  asdMemFree();
  FUN_0025c870();
  *(unsigned int *)((int)pvVar1 + 0xac) = 0;
  *(void **)((int)pvVar1 + 0x90) = pvVar2;
  if (param_1->field_0x88 != (void *)0x0) {
    *(void **)((int)param_1->field_0x88 + 0xac) = pvVar1;
    *(void **)((int)pvVar1 + 0xb0) = param_1->field_0x88;
  }
  else {
    param_1->field_0x8c = (int)pvVar1;
    *(unsigned int *)((int)pvVar1 + 0xb0) = 0;
  }
  param_1->field_0x80 = param_1->field_0x80 + 1;
  param_1->field_0x88 = pvVar1;
  return;
}

} /* extern "C" */
