/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a0cbc` (_code @ 0x1a0cbc, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_005c1be4; /* 0x5c1be4 */

extern int FUN_001af3a8(void);
extern unsigned int FUN_001af3b8(void);


int FUN_001a0cbc(unsigned int param_1,int param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  
  temp_v0 = FUN_001af3b8();
  temp_v2 = param_1 <= temp_v0;
  if (temp_v0 <= param_1) {
    temp_v2 = param_1 + param_2 <= param_1;
  }
  if ((!temp_v2) && (temp_v1 = FUN_001af3a8(), param_1 + param_2 <= temp_v1 + temp_v0)) {
    return DAT_005c1be4 + param_1;
  }
  return 0;
}
