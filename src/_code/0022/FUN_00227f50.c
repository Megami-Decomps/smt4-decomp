/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00227f50` (_code @ 0x227f50, 0x8c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00435d0c; /* 0x435d0c */

extern int FUN_002934d4(void);
/* Supplied declaration required: FUN_00293c98. */
extern int FUN_002b45f8(int, unsigned int, unsigned int);
extern unsigned int FUN_002c3290(unsigned int);


int FUN_00227f50(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  
  if (*(int *)(param_1 + 0x1cfc) != 0) {
    FUN_00293c98();
    temp_v0 = FUN_002934d4();
    if (temp_v0 == 0) {
      temp_v0 = 0;
      do {
        temp_v3 = *(int *)(param_1 + 0x1cfc) + temp_v0 * 0x16 + 0x58;
        if (temp_v3 != 0) {
          temp_v1 = FUN_002c3290(DAT_00435d0c);
          temp_v2 = FUN_002b45f8(temp_v3,DAT_00435d0c,temp_v1);
          if (temp_v2 == 0) {
            return (int)*(short *)(temp_v3 + 0x10);
          }
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < 4);
    }
  }
  return -1;
}
