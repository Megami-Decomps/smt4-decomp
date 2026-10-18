/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00224820` (_code @ 0x224820, 0x94 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_0021a468(unsigned int);
/* Supplied declaration required: FUN_00281bb0. */
/* Supplied declaration required: FUN_002a36fc. */
/* Supplied declaration required: FUN_002a3ab0. */
/* Supplied declaration required: FUN_002a4e98. */
extern int FUN_002c08f0(void);
extern int FUN_002f3078(unsigned int);


unsigned int FUN_00224820(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002c08f0();
  if (*(int *)(temp_v0 + 4) != 0) {
    if (*(int *)(temp_v0 + 4) == 1) {
      FUN_00281bb0(*(unsigned int *)(temp_v0 + 0xc));
      temp_v0 = FUN_002f3078(*(unsigned int *)(temp_v0 + 0xc));
      if (temp_v0 != 0) {
        return 0xffffffff;
      }
    }
  }
  else {
    temp_v1 = *(int *)(temp_v0 + 8);
    if (temp_v1 != 0) {
      *(unsigned int *)(temp_v0 + 4) = 1;
      FUN_002a4e98();
      *(int *)(temp_v0 + 0xc) = temp_v1;
      FUN_002a3ab0();
      FUN_002a36fc(*(unsigned int *)(temp_v0 + 0xc));
      temp_v2 = FUN_0021a468(*(unsigned int *)(temp_v0 + 0xc));
      *(unsigned int *)(temp_v0 + 0x18) = temp_v2;
      *(unsigned char *)(temp_v0 + 0x10) = 1;
    }
  }
  return 0;
}
