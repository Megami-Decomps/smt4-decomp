/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022b2e0` (_code @ 0x22b2e0, 0xe8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
extern int FUN_002338ac(int);
extern int FUN_002a63f8(unsigned int);
/* Supplied declaration required: FUN_002b9220. */
/* Supplied declaration required: FUN_002bf9f0. */


int FUN_0022b2e0(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  
  if (*(int *)(param_1 + 8) == 0) {
    temp_v0 = 1;
  }
  else if ((*(int *)(param_1 + 0xc64) == -1) || (temp_v1 = FUN_002a63f8(0x2a), temp_v0 = 0, temp_v1 != 0))
  {
    temp_v0 = FUN_002338ac(param_1);
    temp_v1 = 0;
    if (temp_v1 < temp_v0) {
      do {
        if (temp_v1 <= *(int *)(param_1 + 0xc58)) {
          FUN_002bf9f0(param_1 + temp_v1 * 0x8c + 0x654);
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < temp_v0);
    }
    *(int *)(param_1 + 0xc58) = *(int *)(param_1 + 0xc58) + 1;
    FUN_002b9220(param_1 + 200,0);
    temp_v3 = *(char *)(param_1 + 0x152) != '\0';
    temp_v1 = 0;
    temp_v2 = 0;
    if (temp_v3) {
      temp_v2 = *(int *)(param_1 + 0xc58);
      temp_v1 = temp_v2 - temp_v0;
    }
    if (((temp_v3 && temp_v2 != temp_v0) && temp_v1 < 0 == (temp_v3 && SBORROW4(temp_v2,temp_v0))) &&
       (*(char *)(param_1 + temp_v0 * 0x8c + 0x652) != '\0')) {
      *(unsigned char *)(param_1 + 0x631) = 1;
    }
    temp_v0 = (int)*(char *)(param_1 + 0x631);
  }
  return temp_v0;
}
