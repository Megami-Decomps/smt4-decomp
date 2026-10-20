/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043ca60` (_code @ 0x43ca60, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00170d8c(int, unsigned char [8], int, int, int, int);

/* stack frame of param_1: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned char sp8; /* 0x8: local_8 */
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_00170d8c. */


void FUN_0043ca60(unsigned char param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0 [8];
  
  temp_v0[0] = param_1;
  FUN_00170d8c(0x10,temp_v0,1,0,0,0);
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
