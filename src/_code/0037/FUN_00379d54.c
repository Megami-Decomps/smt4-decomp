/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00379d54` (_code @ 0x379d54, 0xb8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_002ad1e4. */
/* Supplied declaration required: FUN_002bad74. */
extern unsigned int FUN_002baed8(void);
/* Supplied declaration required: FUN_002c3424. */
/* Supplied declaration required: FUN_00379450. */
/* Supplied declaration required: FUN_0037c294. */


void FUN_00379d54(int *param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = (**(romwright_code **)(*param_1 + 0x20))(param_1);
  temp_v1 = FUN_002baed8();
  temp_v2 = temp_v0 + 4;
  FUN_002ad1e4();
  if (temp_v2 == 0) {
    FUN_002bad74(temp_v1,1);
    FUN_002c3424(temp_v0 + 4);
  }
  FUN_00379450(param_1);
  FUN_0037c294(param_1 + 0x754);
  param_1[0xa5f] = 0;
  temp_v0 = 0;
  do {
    param_1[temp_v0 * 4 + 0xa64] = 0;
    param_1[temp_v0 * 4 + 0xa61] = 0;
    param_1[temp_v0 * 4 + 0xa62] = 0;
    temp_v2 = temp_v0 + 1;
    param_1[temp_v0 * 4 + 0xa63] = 1;
    param_1[temp_v0 * 4 + 0xa62] = 0x3f800000;
    temp_v0 = temp_v2;
  } while (temp_v2 < 4);
  *(unsigned char *)((int)param_1 + 0x2bca) = 1;
  return;
}
