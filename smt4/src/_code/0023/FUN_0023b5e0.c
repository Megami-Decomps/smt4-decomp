/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023b5e0` (_code @ 0x23b5e0, 0xe4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_3_stack;

extern int DAT_0044ea00; /* 0x44ea00 */
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

extern int FUN_002a81a8(unsigned char *, int);
extern int FUN_002bfefc(unsigned int *);
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */
/* Supplied declaration required: nn_math_ARMv6_MTX44MultAsm. */


void FUN_0023b5e0(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [48];
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8 [60];
  
  if (*(int *)(DAT_0044ea00 + 0x6f8) != 0) {
    temp_v0 = FUN_002a81a8(temp_v8,*(int *)(DAT_0044ea00 + 0x6f8) + 0x38);
    temp_v2 = 0x3f800000;
    temp_v1 = 0;
    if (temp_v0 == 0) {
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
      nn_math_ARMv6_MTX34CopyAsm(temp_v8,&DAT_004efd6c);
    }
    nn_math_ARMv6_MTX34CopyAsm(temp_v3,temp_v8);
    temp_v4 = temp_v1;
    temp_v5 = temp_v1;
    temp_v6 = temp_v1;
    temp_v7 = temp_v2;
    nn_math_ARMv6_MTX44MultAsm(param_2,temp_v3,param_3);
  }
  return;
}
