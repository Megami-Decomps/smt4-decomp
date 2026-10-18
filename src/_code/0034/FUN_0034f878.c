/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034f878` (_code @ 0x34f878, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_0023a784. */
extern long long FUN_0034eb88(unsigned int);


unsigned int FUN_0034f878(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  unsigned long long temp_v2;
  long long temp_v3;
  long long temp_v4;
  
  if (*(char *)(param_1 + 0x24) == '\x01') {
    temp_v2 = FUN_0023a784(*(unsigned int *)(param_1 + 0xc));
    temp_v0 = (int)((unsigned long long)temp_v2 >> 0x20);
    temp_v1 = (int)temp_v2 != 0;
    if ((int)-(temp_v0 + (unsigned int)temp_v1) < 0 != (SBORROW4(0,temp_v0) != SBORROW4(-temp_v0,(unsigned int)temp_v1))) {
      temp_v3 = FUN_0023a784(*(unsigned int *)(param_1 + 0xc));
      temp_v4 = FUN_0034eb88(*(unsigned int *)(param_1 + 0xc));
      if (temp_v3 == temp_v4) {
        return 1;
      }
    }
  }
  return 0;
}
