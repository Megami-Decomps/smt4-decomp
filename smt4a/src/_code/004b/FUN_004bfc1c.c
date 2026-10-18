/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bfc1c` (_code @ 0x4bfc1c, 0xd8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 2 byte(s) */
typedef struct {
    unsigned short sp20; /* 0x20: local_20 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_003e8bb0. */
/* Supplied declaration required: FUN_003f0e20. */


void FUN_004bfc1c(unsigned int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int in_fpscr;
  unsigned char temp_v4 [48];
  unsigned short temp_v5;
  
  temp_v1 = FUN_0014aa78();
  temp_v2 = temp_v1;
  FUN_003f0e20(temp_v1,param_1);
  if ((temp_v2 != 0) && (temp_v3 = temp_v1, FUN_003f0e20(temp_v1,param_2), temp_v3 != 0)) {
    FUN_003e8bb0(temp_v4,temp_v1,temp_v2);
    if ((temp_v5 != 0) &&
       ((((temp_v0 = *(unsigned short *)(temp_v3 + 0x274), (temp_v0 & 2) != 0 ||
          ((temp_v0 & 0x20) != 0 || (temp_v0 & 0x40) != 0)) ||
         ((temp_v0 & 0x80) != 0 || (temp_v0 & 0x100) != 0)) ||
        ((((temp_v0 & 0x200) != 0 || (temp_v0 & 0x400) != 0 ||
          ((temp_v0 & 8) != 0 || (temp_v0 & 0x800) != 0)) ||
         ((temp_v0 & 0x1000) != 0 || (temp_v0 & 0x2000) != 0)))))) {
      VectorUnsignedToFloat((unsigned int)temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
      return;
    }
  }
  return;
}
