/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c1d78` (_code @ 0x2c1d78, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned int uRam0000000d; /* 0xd */
extern unsigned int uRam00000011; /* 0x11 */
extern unsigned char DAT_004e21b8; /* 0x4e21b8 */
extern int DAT_004e316c; /* 0x4e316c */

/* Unsupported intrinsic, declaration required: coprocessor_store (CALLOTHER). */
/* Supplied declaration required: FUN_00132da4. */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002c1d78(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_cr1, in_s16; 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char *puVar3;
  unsigned int temp_v2;
  int unaff_r7;
  unsigned int in_cr1;
  unsigned int in_s16;
  
  temp_v1 = 0;
  if (DAT_004e316c != 0) {
    puVar3 = &DAT_004e21b8;
    FUN_00132da4(&DAT_004e21b8,param_1,0xffffffff,param_4,param_4);
    if (puVar3 == (unsigned char *)0x0) {
      uRam00000011 = in_s16;
      uRam0000000d = in_s16;
      coprocessor_store(0,in_cr1,temp_v2);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    temp_v1 = 1;
  }
  *(short *)(unaff_r7 + 6) = (short)temp_v1;
  if (temp_v1 == 0xffffffff) {
    DAT_004e316c = 0;
  }
  else if ((temp_v1 < 4) && (temp_v0 = temp_v1 * 0x50, *(int *)(temp_v0 + 0x4e2434) != 0)) {
    DAT_004e316c = temp_v0 + 0x4e2424;
    *(char *)(temp_v0 + 0x4e2470) = (char)temp_v1;
  }
  return;
}
