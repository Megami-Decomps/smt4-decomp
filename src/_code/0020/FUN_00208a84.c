/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00208a84` (_code @ 0x208a84, 0x7c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_0027dbfc(void);
extern int FUN_00287a68(void);
/* Supplied declaration required: FUN_002c2b1c. */


void FUN_00208a84(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002c2b1c();
  if (*(char *)(temp_v0 + 0x790) != '\0') {
    *(unsigned char *)(temp_v0 + 0x790) = 0;
    temp_v1 = FUN_0027dbfc();
    switch(temp_v1) {
    case 0:
    case 1:
    case 3:
    case 5:
      temp_v0 = FUN_00287a68();
      if (temp_v0 == 0) {
        temp_v0 = FUN_002c2b1c(0);
        *(unsigned char *)(temp_v0 + 3) = 0;
        temp_v0 = FUN_002c2b1c();
        *(unsigned char *)(temp_v0 + 0x1c) = 0;
        return;
      }
    }
  }
  return;
}
