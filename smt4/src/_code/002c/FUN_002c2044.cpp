/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c2044` (_code @ 0x2c2044, 0x1b4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011cfb4(unsigned char *);
int FUN_002bfe28(unsigned char *, unsigned int *);
int FUN_002c4938(unsigned char *, int);
int nn_math_ARMv6_MTX34CopyAsm(unsigned char *, unsigned int *);

extern unsigned int DAT_00476634; /* 0x476634 */
extern unsigned int DAT_00476638; /* 0x476638 */
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
extern unsigned int DAT_004efd9c; /* 0x4efd9c */
extern unsigned int DAT_004efda0; /* 0x4efda0 */
extern unsigned int DAT_004efda4; /* 0x4efda4 */
extern unsigned int DAT_004efda8; /* 0x4efda8 */
extern unsigned int DAT_004efdac; /* 0x4efdac */
extern unsigned int DAT_004efdb0; /* 0x4efdb0 */
extern unsigned int DAT_004efdb4; /* 0x4efdb4 */
extern unsigned int DAT_004efdb8; /* 0x4efdb8 */
extern unsigned int DAT_004efdbc; /* 0x4efdbc */
extern unsigned int DAT_004efdc0; /* 0x4efdc0 */
extern unsigned int DAT_004efdc4; /* 0x4efdc4 */
extern unsigned int DAT_004efdc8; /* 0x4efdc8 */
extern unsigned int DAT_004efdcc; /* 0x4efdcc */
extern unsigned int DAT_004efdd0; /* 0x4efdd0 */
extern unsigned int DAT_004efdd4; /* 0x4efdd4 */
extern unsigned int DAT_004efdd8; /* 0x4efdd8 */

/* Supplied declaration required: FUN_0011cfb4. */
/* Supplied declaration required: FUN_002bfe28. */
extern int FUN_002bfefc(unsigned int *);
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */


void FUN_002c2044(unsigned char *param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  FUN_002c4938(param_1,0x508);
  param_1[1] = 0;
  temp_v1 = 0;
  temp_v2 = 0x3f800000;
  if (((DAT_00476634 & 1) == 0) && (temp_v0 = FUN_002bfefc(&DAT_00476634), temp_v0 != 0)) {
    DAT_004efd6c = temp_v2;
    DAT_004efd70 = temp_v1;
    DAT_004efd74 = temp_v1;
    DAT_004efd78 = temp_v1;
    DAT_004efd7c = temp_v1;
    DAT_004efd80 = temp_v2;
    DAT_004efd84 = temp_v1;
    DAT_004efd88 = temp_v1;
    DAT_004efd8c = temp_v1;
    DAT_004efd90 = temp_v1;
    DAT_004efd94 = temp_v2;
    DAT_004efd98 = temp_v1;
  }
  nn_math_ARMv6_MTX34CopyAsm(param_1 + 0x38,&DAT_004efd6c);
  if (((DAT_00476638 & 1) == 0) && (temp_v0 = FUN_002bfefc(&DAT_00476638), temp_v0 != 0)) {
    DAT_004efd9c = temp_v2;
    DAT_004efda0 = temp_v1;
    DAT_004efda4 = temp_v1;
    DAT_004efda8 = temp_v1;
    DAT_004efdac = temp_v1;
    DAT_004efdb0 = temp_v2;
    DAT_004efdb4 = temp_v1;
    DAT_004efdb8 = temp_v1;
    DAT_004efdbc = temp_v1;
    DAT_004efdc0 = temp_v1;
    DAT_004efdc4 = temp_v2;
    DAT_004efdc8 = temp_v1;
    DAT_004efdcc = temp_v1;
    DAT_004efdd0 = temp_v1;
    DAT_004efdd4 = temp_v1;
    DAT_004efdd8 = temp_v2;
  }
  FUN_002bfe28(param_1 + 0xa8,&DAT_004efd9c);
  if (((DAT_00476638 & 1) == 0) && (temp_v0 = FUN_002bfefc(&DAT_00476638), temp_v0 != 0)) {
    DAT_004efd9c = temp_v2;
    DAT_004efda0 = temp_v1;
    DAT_004efda4 = temp_v1;
    DAT_004efda8 = temp_v1;
    DAT_004efdac = temp_v1;
    DAT_004efdb0 = temp_v2;
    DAT_004efdb4 = temp_v1;
    DAT_004efdb8 = temp_v1;
    DAT_004efdbc = temp_v1;
    DAT_004efdc0 = temp_v1;
    DAT_004efdc4 = temp_v2;
    DAT_004efdc8 = temp_v1;
    DAT_004efdcc = temp_v1;
    DAT_004efdd0 = temp_v1;
    DAT_004efdd4 = temp_v1;
    DAT_004efdd8 = temp_v2;
  }
  FUN_002bfe28(param_1 + 0xe8,&DAT_004efd9c);
  temp_v1 = 0x40a00000;
  *(unsigned int *)(param_1 + 0x498) = 0x40a00000;
  *param_1 = (char)param_2;
  if (param_2 != 0) {
    FUN_0011cfb4(param_1 + 0x4a0);
    *(unsigned int *)(param_1 + 0x504) = temp_v1;
    *(unsigned int *)(param_1 + 0x500) = temp_v2;
  }
  return;
}

} /* extern "C" */
