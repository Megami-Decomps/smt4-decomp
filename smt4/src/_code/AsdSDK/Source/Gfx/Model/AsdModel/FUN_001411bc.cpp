/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001411bc` (_code @ 0x1411bc, 0x1f4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int workScalarGet(void);
int nn_math_ARMv6_MTX34CopyAsm(...);

typedef struct fn_001411bc_arg0 fn_001411bc_arg0;
struct fn_001411bc_arg0 {
    unsigned char pad_0x0[0x1];
    byte field_0x1; /* +0x1 */
    unsigned char pad_0x2[0x2];
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
    undefined4 field_0x20; /* +0x20 */
    undefined4 field_0x24; /* +0x24 */
    float field_0x28; /* +0x28 */
    undefined4 field_0x2c; /* +0x2c */
    undefined4 field_0x30; /* +0x30 */
    undefined4 field_0x34; /* +0x34 */
    unsigned char pad_0x38[0x20];
    undefined4 field_0x58; /* +0x58 */
    unsigned char pad_0x5c[0xc];
    undefined4 field_0x68; /* +0x68 */
    unsigned char pad_0x6c[0xc];
    undefined4 field_0x78; /* +0x78 */
    unsigned char pad_0x7c[0xc];
    uint field_0x88; /* +0x88 */
    unsigned char pad_0x8c[0x1cc];
    void *field_0x258; /* +0x258 */
    unsigned char pad_0x25c[0x4];
    void *field_0x260; /* +0x260 */
};

typedef int romwright_code(...);
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned int g_asdModelSlotArray0; /* 0x464b9c */
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

/* Supplied declaration required: workScalarGet. */
extern int FUN_00145e10(void);
extern int __cxa_guard_acquire(unsigned int *);
extern int FUN_002c501c(void);
extern int FUN_002c5210(void);
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */


void FUN_001411bc(fn_001411bc_arg0 *param_1,int param_2)

{
/* irregular: 1 goto(s); irregular input(s): in_s0; 2 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  int *piVar4;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int *piVar7;
  unsigned int in_s0;
  unsigned char temp_v4 [40];
  unsigned int temp_v5;
  
  if (param_2 != 0) {
    temp_v0 = FUN_00145e10();
  }
  else {
    temp_v0 = FUN_002c501c();
  }
  workScalarGet();
  param_1[1].field_0x30 = in_s0;
  puVar2 = (unsigned int *)(**(romwright_code **)(*(int *)param_1->field_0x260 + 0x10))();
  if ((puVar2 != (unsigned int *)0x0) && ((*puVar2 & 0x20000000) == 0)) {
    puVar2 = (unsigned int *)0x0;
  }
  puVar2[3] = *(unsigned int *)(temp_v0 + 0x34);
  puVar2[1] = *(unsigned int *)(temp_v0 + 0x2c);
  puVar2[2] = *(unsigned int *)(temp_v0 + 0x30);
  puVar2[4] = (unsigned int)(*(float *)(temp_v0 + 0x28) * 0.017453292f);
  if ((param_2 == 0) && (temp_v1 = FUN_002c5210(), temp_v1 == 1)) {
    *(unsigned char *)((int)param_1->field_0x260 + 8) = 0;
  }
  else {
    *(unsigned char *)((int)param_1->field_0x260 + 8) = 1;
  }
  temp_v2 = *(unsigned int *)(temp_v0 + 8);
  temp_v3 = *(unsigned int *)(temp_v0 + 0xc);
  param_1->field_0x58 = *(unsigned int *)(temp_v0 + 4);
  param_1->field_0x68 = temp_v2;
  param_1->field_0x78 = temp_v3;
  param_1->field_0x88 = param_1->field_0x88 | 0x800;
  piVar7 = (int *)param_1->field_0x258;
  if (piVar7 != (int *)0x0) {
    piVar4 = (int *)(**(romwright_code **)(*piVar7 + 8))(piVar7);
    do {
      if (piVar4 == (int *)0x472140) goto LAB_001412d4;
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)0x0);
  }
  piVar7 = (int *)0x0;
LAB_001412d4:
  temp_v1 = (**(romwright_code **)(*piVar7 + 0x10))();
  temp_v2 = *(unsigned int *)(temp_v0 + 0x14);
  temp_v3 = *(unsigned int *)(temp_v0 + 0x18);
  *(unsigned int *)(temp_v1 + 8) = *(unsigned int *)(temp_v0 + 0x10);
  *(unsigned int *)(temp_v1 + 0xc) = temp_v2;
  *(unsigned int *)(temp_v1 + 0x10) = temp_v3;
  temp_v2 = *(unsigned int *)(temp_v0 + 0x20);
  temp_v3 = *(unsigned int *)(temp_v0 + 0x24);
  *(unsigned int *)(temp_v1 + 0x14) = *(unsigned int *)(temp_v0 + 0x1c);
  *(unsigned int *)(temp_v1 + 0x18) = temp_v2;
  *(unsigned int *)(temp_v1 + 0x1c) = temp_v3;
  if (((DAT_00476634 & 1) == 0) && (temp_v1 = __cxa_guard_acquire(&DAT_00476634), temp_v1 != 0)) {
    DAT_004efd6c = 0x3f800000;
    DAT_004efd70 = 0;
    DAT_004efd74 = 0;
    DAT_004efd78 = 0;
    DAT_004efd7c = 0;
    DAT_004efd80 = 0x3f800000;
    DAT_004efd84 = 0;
    DAT_004efd88 = 0;
    DAT_004efd8c = 0;
    DAT_004efd90 = 0;
    DAT_004efd94 = 0x3f800000;
    DAT_004efd98 = 0;
  }
  nn_math_ARMv6_MTX34CopyAsm(temp_v4,&DAT_004efd6c);
  if (*(char *)(temp_v0 + 1) != '\0') {
    temp_v5 = 0xbf800000;
  }
  temp_v0 = (&g_asdModelSlotArray0)[param_2];
  nn_math_ARMv6_MTX34CopyAsm(temp_v0 + 0x4c,temp_v4);
  *(unsigned int *)(temp_v0 + 0x88) = *(unsigned int *)(temp_v0 + 0x88) | 0x800;
  return;
}

} /* extern "C" */
