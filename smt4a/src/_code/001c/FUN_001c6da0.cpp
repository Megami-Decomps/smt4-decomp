/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c6da0` (_code @ 0x1c6da0, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005c1be4; /* 0x5c1be4 */

extern int FUN_00188c94(void);
extern unsigned int FUN_00188ca4(void);


int FUN_001c6da0(unsigned int param_1,int param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5;
  
  temp_v3 = param_1 + param_2;
  temp_v0 = FUN_00188ca4();
  temp_v1 = FUN_00188c94();
  temp_v5 = param_1 <= temp_v0;
  temp_v4 = temp_v0 == param_1;
  temp_v2 = temp_v1 + temp_v0;
  if (!temp_v5 || temp_v4) {
    temp_v5 = temp_v2 <= param_1;
    temp_v4 = param_1 == temp_v2;
  }
  if (!temp_v5 || temp_v4) {
    temp_v5 = temp_v3 <= temp_v0;
    temp_v4 = temp_v0 == temp_v3;
    if (!temp_v5 || temp_v4) {
      temp_v5 = temp_v2 <= temp_v3;
      temp_v4 = temp_v3 == temp_v2;
    }
    if (!temp_v5 || temp_v4) {
      temp_v5 = temp_v3 <= param_1;
    }
    if (!temp_v5) {
      return (*(int *)((unsigned char *)&DAT_005c1be4 + 0x4)) + param_1;
    }
  }
  return 0;
}

} /* extern "C" */
