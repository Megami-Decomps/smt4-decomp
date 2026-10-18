/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103df4` (_code @ 0x103df4, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_00465198; /* 0x465198 */
extern unsigned int DAT_004e4138; /* 0x4e4138 */

/* Supplied declaration required: FUN_0010ffd8. */
extern int FUN_00110044(void);
extern int FUN_002c35d4(unsigned int *);


unsigned int FUN_00103df4(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  temp_v0 = FUN_00110044();
  if (temp_v0 != 0) {
    if (DAT_00465198 != '\0') {
      temp_v0 = FUN_002c35d4(&DAT_004e4138);
      if (temp_v0 != 0) {
        temp_v1 = 2;
      }
    }
    else {
      FUN_0010ffd8(0);
      temp_v1 = 1;
    }
  }
  return temp_v1;
}
