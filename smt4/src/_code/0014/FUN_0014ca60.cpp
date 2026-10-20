/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014ca60` (_code @ 0x14ca60, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b46f8(unsigned char [32], unsigned int, unsigned int, int, unsigned char *);

/* stack frame of param_2: 3 slot(s), 10 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned short sp50; /* 0x50: local_50 */
    unsigned int sp78; /* 0x78: local_78 */
} param_2_stack;

extern unsigned char LAB_00151b88; /* 0x151b88 */

/* Supplied declaration required: FUN_002b46f8. */


void FUN_0014ca60(int param_1,unsigned short param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0 [32];
  unsigned short temp_v1;
  
  if (*(int *)(param_1 + 0x434) != 0) {
    temp_v1 = param_2;
    FUN_002b46f8(temp_v0,*(unsigned int *)(param_1 + 0x438),*(unsigned int *)(param_1 + 0x434),0x68,
                 &LAB_00151b88);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  return;
}

} /* extern "C" */
