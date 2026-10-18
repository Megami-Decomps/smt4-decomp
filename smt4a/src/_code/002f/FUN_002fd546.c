/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fd546` (_code @ 0x2fd546, 0x7e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002e93c2. */
/* Supplied declaration required: FUN_002ea974. */
/* Supplied declaration required: FUN_002ea9dc. */
extern int FUN_002eb5f4(void);
extern int FUN_002ee5fe(unsigned int, int, unsigned char *);
/* Supplied declaration required: FUN_002fd624. */


unsigned int FUN_002fd546(int param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int *piVar4;
  int temp_v3;
  unsigned char temp_v4 [104];
  
  temp_v1 = FUN_002eb5f4();
  if (*(int *)(temp_v1 + 0xd0) != 0) {
    FUN_002ea974(temp_v4);
    piVar4 = (int *)(param_1 + 0x1ac);
    temp_v3 = *piVar4;
    temp_v1 = FUN_002eb5f4();
    temp_v1 = FUN_002ee5fe(*(unsigned int *)(temp_v1 + 0xd0),temp_v3 + 8,temp_v4);
    if (temp_v1 != 0) {
      temp_v1 = FUN_002fd624(*piVar4 + 8);
      temp_v3 = FUN_002fd624(temp_v4);
      if (temp_v1 != temp_v3) {
        temp_v0 = FUN_002fd624(*piVar4 + 8);
        *(unsigned short *)(param_1 + 0x1aa) = temp_v0;
        temp_v2 = FUN_002fd624(temp_v4);
        FUN_002e93c2(*piVar4 + 8,temp_v2);
        FUN_002ea9dc(temp_v4);
        return 1;
      }
    }
    FUN_002ea9dc(temp_v4);
  }
  return 0;
}
