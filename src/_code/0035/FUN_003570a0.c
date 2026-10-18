/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003570a0` (_code @ 0x3570a0, 0x4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003570a0_arg0 fn_003570a0_arg0;
struct fn_003570a0_arg0 {
    undefined4 field_0x0; /* +0x0 */
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    unsigned char pad_0x10[0x4];
    undefined4 field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x90];
    undefined4 field_0xa8; /* +0xa8 */
    undefined4 field_0xac; /* +0xac */
    undefined4 field_0xb0; /* +0xb0 */
    undefined4 field_0xb4; /* +0xb4 */
    undefined4 field_0xb8; /* +0xb8 */
    undefined4 field_0xbc; /* +0xbc */
    unsigned char pad_0xc0[0x108];
    undefined4 field_0x1c8; /* +0x1c8 */
    undefined4 field_0x1cc; /* +0x1cc */
};

extern unsigned int *FUN_00138e38(fn_003570a0_arg0 *);
/* Supplied declaration required: FUN_002c4b30. */
extern unsigned int *FUN_00356fa8(unsigned int *, unsigned int);
extern unsigned int FUN_00357048(unsigned int *, unsigned int);
extern unsigned int *FUN_003574f8(unsigned int, unsigned int);


unsigned int * FUN_003570a0(fn_003570a0_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int *piVar3;
  int temp_v1;
  int temp_v2;
  
  puVar1 = (unsigned int *)FUN_00138e38(param_1);
  puVar1[1] = 0xf0201;
  *puVar1 = 0;
  puVar1[3] = 0xf0202;
  puVar1[2] = 0;
  FUN_002c4b30(puVar1 + 4,0x98);
  temp_v1 = 0;
  puVar1[5] = 0x823f0203;
  piVar3 = (int *)(puVar1 + 0x2a);
  temp_v2 = 0xc;
  do {
    piVar3[2] = 0;
    piVar3[3] = 0;
    piVar3[4] = 0;
    piVar3[5] = 0;
    *piVar3 = temp_v1;
    piVar3[1] = -0x7fc0fdce;
    temp_v2 = temp_v2 - 1;
    piVar3 = piVar3 + 6;
    temp_v1 = temp_v1 + 1;
  } while (temp_v2 != 0);
  puVar1[0x72] = 0;
  puVar1[0x73] = 0x100e0;
  temp_v0 = FUN_00357048(puVar1 + 0x74,1);
  puVar1 = (unsigned int *)FUN_003574f8(temp_v0,1);
  *puVar1 = 0;
  puVar1[1] = 0x10062;
  puVar1[2] = 0;
  puVar1[3] = 0x10118;
  puVar1[4] = 0;
  puVar1[5] = 0x10047;
  puVar1 = (unsigned int *)FUN_00356fa8(puVar1 + 6,1);
  *puVar1 = 0;
  puVar1[1] = 0xf011b;
  return puVar1 + 2;
}
