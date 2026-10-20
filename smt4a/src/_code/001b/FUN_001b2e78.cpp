/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b2e78` (_code @ 0x1b2e78, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100854(unsigned char [32], unsigned int, unsigned int, int, unsigned char *);

/* stack frame of param_2: 3 slot(s), 10 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned short sp30; /* 0x30: local_30 */
    unsigned int sp58; /* 0x58: local_58 */
} param_2_stack;

extern unsigned char LAB_001b9fc4; /* 0x1b9fc4 */

/* Supplied declaration required: FUN_00100854. */


void FUN_001b2e78(int param_1,unsigned short param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0 [32];
  unsigned short temp_v1;
  
  if (*(int *)(param_1 + 0x43c) != 0) {
    temp_v1 = param_2;
    FUN_00100854(temp_v0,*(unsigned int *)(param_1 + 0x440),*(unsigned int *)(param_1 + 0x43c),0x48,
                 &LAB_001b9fc4);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  return;
}

} /* extern "C" */
