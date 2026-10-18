/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00158894` (_code @ 0x158894, 0x88 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0015bf0c. */
/* Supplied declaration required: FUN_0015bf60. */
/* Supplied declaration required: FUN_0015c408. */
/* Supplied declaration required: FUN_0015c418. */
/* Supplied declaration required: FUN_002a2404. */
extern unsigned int FUN_002a2414(void);


void FUN_00158894(int param_1,unsigned int param_2,int param_3,int param_4,int param_5,
                 unsigned int param_6)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = *(int *)(param_1 + 0x8c);
  if (temp_v1 != 0) {
    FUN_0015c408(temp_v1,param_2,param_6);
    FUN_0015c418(temp_v1);
    temp_v2 = 0;
    do {
      FUN_0015bf0c(param_1 + temp_v2 * 0xc + 0x130,*(unsigned int *)(param_3 + temp_v2 * 4));
      FUN_0015bf60(param_1 + temp_v2 * 0x10 + 0xf0,*(unsigned int *)(param_4 + temp_v2 * 4),
                   (int)*(char *)(param_5 + temp_v2));
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 4);
    temp_v0 = FUN_002a2414();
    FUN_002a2404(temp_v0,param_1 + 0x44);
    *(unsigned char *)(param_1 + 0xc) = 1;
  }
  return;
}
