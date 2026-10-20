/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001463b4` (_code @ 0x1463b4, 0xf8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int FUN_00156ea8(...);
int FUN_00157d5c(...);
int FUN_00157fa0(...);
int FUN_001642e4(...);
int FUN_00178b04(...);
int rt_aeabi_memclr(...);

typedef struct fn_001463b4_arg0 fn_001463b4_arg0;
struct fn_001463b4_arg0 {
    unsigned char pad_0x0[0x8];
    undefined4 field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x4];
    int field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x24];
    undefined4 field_0x3c; /* +0x3c */
};

/* stack frame of param_1: 6 slot(s), 18 byte(s) */
typedef struct {
    unsigned char sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned char sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_1_stack;

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_00156ea8. */
extern unsigned int FUN_00156f34(void);
/* Supplied declaration required: FUN_00157d5c. */
/* Supplied declaration required: FUN_00157fa0. */
extern unsigned int FUN_001581dc(unsigned char **);
extern unsigned int FUN_001582d0(void);
/* Supplied declaration required: FUN_001642e4. */
/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: rt_aeabi_memclr. */


void FUN_001463b4(fn_001463b4_arg0 *param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned char *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char *temp_v3;
  unsigned char temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8;
  unsigned char temp_v9 [68];
  
  rt_aeabi_memclr(temp_v9,0x40);
  FUN_00100388(temp_v9,"ddefshader.bch");
  puVar1 = temp_v9;
  FUN_001642e4(puVar1,0,1,0x80);
  temp_v8 = 0;
  temp_v6 = 0x10000;
  temp_v5 = 0x30000;
  temp_v7 = 0x10000;
  temp_v4 = 1;
  temp_v3 = puVar1;
  temp_v0 = FUN_001581dc(&temp_v3);
  param_1->field_0x8 = temp_v0;
  temp_v1 = 0xc0;
  FUN_00178b04(0xc0,"c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelManager.cpp",0x5a);
  if (temp_v1 == 0) {
    temp_v1 = 0;
  }
  else {
    FUN_00157fa0();
  }
  FUN_00157d5c(temp_v1,0x100000,0x200);
  temp_v2 = 200;
  param_1->field_0x10 = temp_v1;
  FUN_00178b04(200,"c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelManager.cpp",0x60);
  temp_v0 = 0;
  if (temp_v2 != 0) {
    temp_v0 = FUN_00156f34();
  }
  param_1->field_0x14 = temp_v0;
  FUN_00156ea8();
  temp_v1 = 4;
  FUN_00178b04(4,"c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelManager.cpp",100);
  temp_v0 = 0;
  if (temp_v1 != 0) {
    temp_v0 = FUN_001582d0();
  }
  param_1->field_0x3c = temp_v0;
  return;
}

} /* extern "C" */
