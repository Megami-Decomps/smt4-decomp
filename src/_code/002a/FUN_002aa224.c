/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002aa224` (_code @ 0x2aa224, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 3 slot(s), 10 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned short sp24; /* 0x24: local_24 */
    unsigned int sp48; /* 0x48: local_48 */
} param_2_stack;

extern unsigned char LAB_00151a7c; /* 0x151a7c */

/* Supplied declaration required: FUN_002b48dc. */


void FUN_002aa224(int param_1,unsigned short param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0 [32];
  unsigned short temp_v1;
  
  if (*(int *)(param_1 + 0x43c) != 0) {
    temp_v1 = param_2;
    FUN_002b48dc(temp_v0,*(unsigned int *)(param_1 + 0x440),*(unsigned int *)(param_1 + 0x43c),0x3c,
                 &LAB_00151a7c);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  return;
}
