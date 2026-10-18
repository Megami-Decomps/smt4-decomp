/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002686b8` (_code @ 0x2686b8, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int DAT_0057f280; /* 0x57f280 */

/* Supplied declaration required: FUN_001641c4. */
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: FUN_00318df4. */
/* Supplied declaration required: FUN_00387ac4. */


void FUN_002686b8(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0057f280;
  temp_v1 = 0;
  *(unsigned int *)(DAT_0057f280 + 0x744) = 4;
  if (0 < *(short *)(temp_v0 + 0x786)) {
    do {
      *(unsigned short *)(temp_v0 + temp_v1 * 2 + 0x76c) = 0xffff;
      FUN_001641c4();
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < *(short *)(temp_v0 + 0x786));
  }
  if (*(char *)(temp_v0 + 0x74e) != '\x02' && *(char *)(temp_v0 + 0x74e) != '\x01') {
    if (*(char *)(temp_v0 + 0x7f4) == '\0') {
      FUN_00387ac4(0);
      return;
    }
    if (*(char *)(temp_v0 + 0x7f5) != '\0') {
      FUN_00318df4(1);
    }
    else {
      FUN_0019de98(temp_v0 + 0x7f6,0xf4f4f4ff);
    }
    *(unsigned char *)(temp_v0 + 0x7f4) = 0;
  }
  return;
}
