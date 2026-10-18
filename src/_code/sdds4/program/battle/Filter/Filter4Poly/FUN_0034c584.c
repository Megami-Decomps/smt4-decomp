/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034c584` (_code @ 0x34c584, 0x15c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

/* Supplied declaration required: FUN_0023e548. */
/* Supplied declaration required: FUN_002a6214. */
/* Supplied declaration required: FUN_002a6444. */
extern unsigned int FUN_002a7f04(void);
/* Supplied declaration required: FUN_002c0000. */
/* Supplied declaration required: FUN_002c54f0. */
/* Supplied declaration required: FUN_0034c6ec. */


void FUN_0034c584(int *param_1,int param_2,unsigned int param_3)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  param_1[7] = param_2;
  temp_v0 = 0x100;
  FUN_002c54f0(0x100,0x100,0,0xa0,1);
  param_1[1] = temp_v0;
  temp_v0 = 0x100;
  FUN_002c54f0(0x100,0x100,0,0x88,1);
  temp_v2 = 0;
  param_1[6] = temp_v0;
  do {
    if ((param_3 & 8) != 0) {
      temp_v1 = 0x16;
      FUN_0023e548(0x16,*(unsigned int *)(param_1[7] + temp_v2 * 0x28 + 0x1c));
      *(unsigned int *)(param_1[6] + temp_v2 * 0x44 + 0x40) = temp_v1;
    }
    else if ((param_3 & 0x40) != 0) {
      temp_v1 = 0x16;
      FUN_002a6444(0x16,*(unsigned int *)(param_1[7] + temp_v2 * 0x28 + 0x1c));
      *(unsigned int *)(param_1[6] + temp_v2 * 0x44 + 0x40) = temp_v1;
    }
    else if ((param_3 & 1) != 0) {
      temp_v1 = 0x16;
      FUN_002a6214(0x16,*(unsigned int *)(param_1[7] + temp_v2 * 0x28 + 0x1c));
      *(unsigned int *)(param_1[6] + temp_v2 * 0x44 + 0x40) = temp_v1;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 2);
  FUN_0034c6ec(param_1);
  (**(romwright_code **)(*param_1 + 0x10))(param_1);
  temp_v0 = 0;
  do {
    temp_v2 = param_1[6];
    temp_v1 = FUN_002a7f04();
    FUN_002c0000(temp_v2 + temp_v0 * 0x44,temp_v1);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 2);
  return;
}
