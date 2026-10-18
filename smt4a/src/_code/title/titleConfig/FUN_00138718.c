/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00138718` (_code @ 0x138718, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_4_stack;

extern unsigned char DAT_00588fb5; /* 0x588fb5 */
extern unsigned char DAT_00588fc0; /* 0x588fc0 */
extern unsigned char DAT_00588fc1; /* 0x588fc1 */
extern unsigned char DAT_00588fc2; /* 0x588fc2 */
extern unsigned char DAT_00588fc3; /* 0x588fc3 */
extern unsigned char DAT_0063f4c5; /* 0x63f4c5 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0013c1ec. */
/* Supplied declaration required: FUN_0013c874. */
/* Supplied declaration required: FUN_0013dee0. */
/* Supplied declaration required: FUN_0015e874. */


void FUN_00138718(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_d8, in_fpscr; 5 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  unsigned int unaff_r4;
  unsigned char temp_v2;
  unsigned int in_fpscr;
  unsigned long long in_d8;
  
  FUN_0013c874(DAT_00588fc0);
  FUN_0013c1ec(DAT_00588fc1);
  FUN_0013dee0(DAT_00588fc2);
  temp_v1 = 0xb4;
  DAT_00588fb5 = DAT_00588fc3;
  if (DAT_00588fc3 >= 0x41) {
    temp_v1 = 0x40;
  }
  DAT_0063f4c5 = DAT_00588fc3;
  if (DAT_00588fc3 >= 0x41) {
    DAT_0063f4c5 = temp_v1;
  }
  if (DAT_00588fc3 != 0) {
    VectorUnsignedToFloat((unsigned int)DAT_0063f4c5,(unsigned char)(in_fpscr >> 0x16) & 3);
  }
  temp_v2 = 0;
  do {
    temp_v0 = *(int *)(temp_v2 * 4 + 0x63f2f8);
    if (temp_v0 != 0) {
      FUN_0015e874(temp_v0,0,param_3,param_4,in_d8,unaff_r4);
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 4);
  return;
}
