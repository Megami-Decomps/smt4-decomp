/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b540c` (_code @ 0x2b540c, 0x8c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002b540c_arg1 fn_002b540c_arg1;
struct fn_002b540c_arg1 {
    unsigned char pad_0x0[0x10];
    float field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x20c];
    float field_0x220; /* +0x220 */
    unsigned char pad_0x224[0x4];
    float field_0x228; /* +0x228 */
};


/* WARNING: Control flow encountered bad instruction data */

void FUN_002b540c(unsigned int *param_1,fn_002b540c_arg1 *param_2)

{
/* irregular: 2 native warning(s); review required */
  if ((~(unsigned int)param_2 & 1) == 0) {
    *param_1 = 0xffffffff;
  }
  if ((~(unsigned int)param_2 & 2) == 0) {
    param_1[1] = 0xffffffff;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
