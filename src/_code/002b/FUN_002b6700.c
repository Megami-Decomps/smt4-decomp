/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b6700` (_code @ 0x2b6700, 0xc0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 10 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned short sp1D4; /* 0x1d4: local_1d4 */
    unsigned int sp1D8; /* 0x1d8: local_1d8 */
} param_1_stack;

extern float fRam00000018; /* 0x18 */
extern unsigned char LAB_00138b28; /* 0x138b28 */
extern int DAT_00433158; /* 0x433158 */

/* Unsupported intrinsic, declaration required: coprocessor_store (CALLOTHER). */
/* Supplied declaration required: FUN_002ae6c8. */
/* Supplied declaration required: FUN_002b48dc. */


void FUN_002b6700(unsigned short param_1)

{
/* irregular: irregular input(s): in_cr15, in_s4, in_s6; 3 native warning(s); review required */
  unsigned short *puVar1;
  unsigned int in_cr15;
  float in_s4;
  float in_s6;
  unsigned short temp_v0 [218];
  unsigned int temp_v1;
  unsigned int uStack_1c;
  
  temp_v1 = 0x1b;
  uStack_1c = 0x1c;
  if (*(int *)(DAT_00433158 + 0x388) != 0) {
    puVar1 = temp_v0;
    temp_v0[0] = param_1;
    FUN_002b48dc(puVar1,*(int *)(DAT_00433158 + 0x388),*(unsigned int *)(DAT_00433158 + 900),0x1b4,
                 &LAB_00138b28);
    if (puVar1 != (unsigned short *)0x0) {
      if (0 < (int)puVar1) {
        return;
      }
      FUN_002ae6c8((int)puVar1 << 1);
      return;
    }
  }
  fRam00000018 = in_s4 * in_s6;
  coprocessor_store(0xf,in_cr15,0x78);
  return;
}
