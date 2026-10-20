/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00146ac0` (_code @ 0x146ac0, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014a948(int *, unsigned int);
int software_interrupt(int);

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_0014a948. */


unsigned long long FUN_00146ac0(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = 0;
  temp_v2 = 1;
  FUN_0014a948(&temp_v1,0xffff8001);
  software_interrupt(0x3a);
  software_interrupt(0x23);
                    /* WARNING: Treating indirect jump as return */
  return romwright_piece_4_4(temp_v1,temp_v0);
}

} /* extern "C" */
