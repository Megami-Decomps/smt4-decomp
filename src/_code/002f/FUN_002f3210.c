/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f3210` (_code @ 0x2f3210, 0x70 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002f3210_arg0 fn_002f3210_arg0;
typedef struct fn_002f3210_arg1 fn_002f3210_arg1;
struct fn_002f3210_arg0 {
    unsigned char pad_0x0[0x80];
    int field_0x80; /* +0x80 */
    unsigned char pad_0x84[0x4];
    void *field_0x88; /* +0x88 */
    int field_0x8c; /* +0x8c */
};
struct fn_002f3210_arg1 {
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

/* Supplied declaration required: FUN_0025caa8. */
/* Supplied declaration required: FUN_0028c920. */
extern void *FUN_002c4360(unsigned int);
extern unsigned int FUN_002c5e3c(fn_002f3210_arg1 *, unsigned int *, unsigned int, unsigned int);


void FUN_002f3210(fn_002f3210_arg0 *param_1,fn_002f3210_arg1 *param_2,unsigned int param_3,
                 unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  void *pvVar3;
  int uStack_18;
  
  uStack_18 = param_4;
  temp_v0 = FUN_002c5e3c(param_2,(unsigned int *)&uStack_18,1,0x80);
  temp_v1 = temp_v0;
  FUN_0028c920();
  pvVar3 = (void *)FUN_002c4360(temp_v0);
  FUN_0025caa8();
  *(unsigned int *)((int)pvVar3 + 0xac) = 0;
  *(unsigned int *)((int)pvVar3 + 0x90) = temp_v1;
  if (param_1->field_0x88 != (void *)0x0) {
    *(void **)((int)param_1->field_0x88 + 0xac) = pvVar3;
    *(void **)((int)pvVar3 + 0xb0) = param_1->field_0x88;
  }
  else {
    param_1->field_0x8c = (int)pvVar3;
    *(unsigned int *)((int)pvVar3 + 0xb0) = 0;
  }
  param_1->field_0x80 = param_1->field_0x80 + 1;
  param_1->field_0x88 = pvVar3;
  return;
}
