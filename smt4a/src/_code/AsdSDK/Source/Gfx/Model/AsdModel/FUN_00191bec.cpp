/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00191bec` (_code @ 0x191bec, 0x1f4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019c914(void);
int nn_math_ARMv6_MTX34CopyAsm(...);

typedef struct fn_00191bec_arg0 fn_00191bec_arg0;
struct fn_00191bec_arg0 {
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

extern unsigned int DAT_005b3ca0; /* 0x5b3ca0 */
extern unsigned int DAT_005c4c2c; /* 0x5c4c2c */
extern unsigned int DAT_0064c054; /* 0x64c054 */
extern unsigned int DAT_0064c058; /* 0x64c058 */
extern unsigned int DAT_0064c05c; /* 0x64c05c */
extern unsigned int DAT_0064c060; /* 0x64c060 */
extern unsigned int DAT_0064c064; /* 0x64c064 */
extern unsigned int DAT_0064c068; /* 0x64c068 */
extern unsigned int DAT_0064c06c; /* 0x64c06c */
extern unsigned int DAT_0064c070; /* 0x64c070 */
extern unsigned int DAT_0064c074; /* 0x64c074 */
extern unsigned int DAT_0064c078; /* 0x64c078 */
extern unsigned int DAT_0064c07c; /* 0x64c07c */
extern unsigned int DAT_0064c080; /* 0x64c080 */

extern int FUN_00152f54(void);
extern int FUN_001696f4(void);
/* Supplied declaration required: FUN_0019c914. */
extern int FUN_0019e31c(void);
extern int __cxa_guard_acquire(unsigned int *);
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */


void FUN_00191bec(fn_00191bec_arg0 *param_1,int param_2)

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
    temp_v0 = FUN_0019e31c();
  }
  else {
    temp_v0 = FUN_00152f54();
  }
  FUN_0019c914();
  param_1[1].field_0x30 = in_s0;
  puVar2 = (unsigned int *)(**(romwright_code **)(*(int *)param_1->field_0x260 + 0x10))();
  if ((puVar2 != (unsigned int *)0x0) && ((*puVar2 & 0x20000000) == 0)) {
    puVar2 = (unsigned int *)0x0;
  }
  puVar2[3] = *(unsigned int *)(temp_v0 + 0x34);
  puVar2[1] = *(unsigned int *)(temp_v0 + 0x2c);
  puVar2[2] = *(unsigned int *)(temp_v0 + 0x30);
  puVar2[4] = (unsigned int)(*(float *)(temp_v0 + 0x28) * 0.017453292f);
  if ((param_2 == 0) && (temp_v1 = FUN_001696f4(), temp_v1 == 1)) {
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
      if (piVar4 == (int *)0x5c0f14) goto LAB_00191d04;
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)0x0);
  }
  piVar7 = (int *)0x0;
LAB_00191d04:
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
  if (((DAT_005c4c2c & 1) == 0) && (temp_v1 = __cxa_guard_acquire(&DAT_005c4c2c), temp_v1 != 0)) {
    DAT_0064c054 = 0x3f800000;
    DAT_0064c058 = 0;
    DAT_0064c05c = 0;
    DAT_0064c060 = 0;
    DAT_0064c064 = 0;
    DAT_0064c068 = 0x3f800000;
    DAT_0064c06c = 0;
    DAT_0064c070 = 0;
    DAT_0064c074 = 0;
    DAT_0064c078 = 0;
    DAT_0064c07c = 0x3f800000;
    DAT_0064c080 = 0;
  }
  nn_math_ARMv6_MTX34CopyAsm(temp_v4,&DAT_0064c054);
  if (*(char *)(temp_v0 + 1) != '\0') {
    temp_v5 = 0xbf800000;
  }
  temp_v0 = (&DAT_005b3ca0)[param_2];
  nn_math_ARMv6_MTX34CopyAsm(temp_v0 + 0x4c,temp_v4);
  *(unsigned int *)(temp_v0 + 0x88) = *(unsigned int *)(temp_v0 + 0x88) | 0x800;
  return;
}

} /* extern "C" */
