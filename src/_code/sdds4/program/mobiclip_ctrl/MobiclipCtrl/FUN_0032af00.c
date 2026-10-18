/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032af00` (_code @ 0x32af00, 0x68 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002ade34. */
/* Supplied declaration required: FUN_002b8104. */
/* Supplied declaration required: FUN_002b8524. */
/* Supplied declaration required: FUN_002c1d3c. */
extern int FUN_002c540c(void);


void FUN_0032af00(void)

{
/* irregular: irregular input(s): in_d8, in_d9, in_fpscr; 6 native warning(s); review required */
  int temp_v0;
  unsigned int in_fpscr;
  unsigned long long in_d8;
  unsigned long long in_d9;
  unsigned long long uStack_20;
  unsigned long long uStack_18;
  unsigned long long uStack_10;
  
  temp_v0 = FUN_002c540c();
  if (temp_v0 != 1) {
    return;
  }
  if (*(int *)(DAT_0044ea00 + 0x528) != 0) {
    if (*(int *)(DAT_0044ea00 + 0x528) != 1) {
      return;
    }
    temp_v0 = 1;
  }
  else {
    temp_v0 = 0;
  }
  if (*(int *)(temp_v0 * 4 + 0x4c3a60) == 0) {
    return;
  }
  FUN_002c1d3c(DAT_0044ea00,*(unsigned int *)(temp_v0 * 0x20 + 0x4c3aa0));
  temp_v0 = *(int *)(temp_v0 * 0x20 + 0x4c3aa0);
  VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x18),(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x14),(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002b8524();
  FUN_002b8104(0xffffffff,0xffffffff,0xffffffff,0xffffffff,in_d8,in_d9);
  uStack_20 = 0x1024500000001;
  uStack_18 = 0xf023100000001;
  uStack_10 = 0x1025300000000;
  FUN_002ade34(&uStack_20,0x18,1);
                    /* WARNING: Treating indirect jump as return */
  return;
}
