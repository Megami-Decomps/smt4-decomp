/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00105194` (_code @ 0x105194, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_00465199; /* 0x465199 */
extern unsigned int DAT_004651a4; /* 0x4651a4 */
extern unsigned int DAT_004e4138; /* 0x4e4138 */

extern int FUN_00110058(void);
/* Supplied declaration required: FUN_00138f5c. */
/* Supplied declaration required: FUN_002c0ee0. */
extern int FUN_002c35d4(unsigned int *);


unsigned int FUN_00105194(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  temp_v0 = FUN_00110058();
  if (temp_v0 != 0) {
    if (DAT_00465199 != '\0') {
      FUN_00138f5c(&DAT_004651a4);
      temp_v0 = FUN_002c35d4(&DAT_004e4138);
      if (temp_v0 == 0) {
        temp_v1 = 2;
      }
      else {
        temp_v1 = 3;
      }
    }
    else {
      FUN_002c0ee0();
      temp_v1 = 1;
    }
  }
  return temp_v1;
}
