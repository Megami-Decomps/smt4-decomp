/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f8940` (_code @ 0x3f8940, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

/* Supplied declaration required: FUN_0013c174. */


unsigned int FUN_003f8940(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3 [11];
  
  temp_v3[0] = 0;
  temp_v3[1] = 2;
  temp_v3[2] = 4;
  temp_v3[3] = 0xb;
  temp_v3[4] = 0x18;
  temp_v3[5] = 8;
  temp_v3[6] = 9;
  temp_v3[7] = 10;
  temp_v2 = 0;
  temp_v3[10] = 0x41;
  temp_v3[8] = 0x2b;
  temp_v3[9] = 0x40;
  do {
    temp_v0 = temp_v3[temp_v2] * 0x10;
    if (*(int *)(temp_v0 + 0x5e2218) == 0) {
      temp_v1 = *(unsigned int *)(temp_v0 + 0x5e2214);
      FUN_0013c174(temp_v1,temp_v0 + 0x5e221c,0);
      *(unsigned int *)(temp_v0 + 0x5e2218) = temp_v1;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0xb);
  return 1;
}
