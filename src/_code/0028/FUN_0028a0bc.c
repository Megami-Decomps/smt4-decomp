/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028a0bc` (_code @ 0x28a0bc, 0xc0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00432fc8; /* 0x432fc8 */

extern int FUN_002a704c(unsigned int);
/* Supplied declaration required: FUN_002ac350. */
/* Supplied declaration required: FUN_002ac384. */
extern int FUN_002ac3b8(unsigned int);


unsigned int FUN_0028a0bc(int param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  char *pcVar6;
  unsigned int temp_v5;
  unsigned char temp_v6;
  
  if ((param_3 != 0) && (temp_v1 = FUN_002a704c(DAT_00432fc8), temp_v1 == 0)) {
    return 0;
  }
  temp_v1 = 0;
  if (temp_v1 < *(int *)(param_1 + 0x310)) {
    do {
      temp_v5 = *(int *)(param_1 + 0x318) + temp_v1 * 0x50;
      temp_v2 = FUN_002ac3b8(temp_v5);
      if (temp_v2 != 0) {
        temp_v3 = temp_v5;
        FUN_002ac384();
        FUN_002ac350();
        temp_v4 = 0;
        if (temp_v4 < temp_v5) {
          do {
            pcVar6 = (char *)(temp_v3 + temp_v4 * 0x40);
            temp_v0 = *pcVar6;
            temp_v6 = temp_v0 == '\a' || temp_v0 == '\b';
            if (temp_v0 == '\a' || temp_v0 == '\b') {
              temp_v6 = *(int *)(pcVar6 + 0x3c) == param_2;
            }
            if (temp_v6) {
              return 1;
            }
            temp_v4 = temp_v4 + 1;
          } while (temp_v4 < temp_v5);
        }
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < *(int *)(param_1 + 0x310));
  }
  return 0;
}
