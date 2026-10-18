/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ebdd8` (_code @ 0x2ebdd8, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004e2f68; /* 0x4e2f68 */
extern unsigned int DAT_004e312c; /* 0x4e312c */
extern signed char DAT_004e3134; /* 0x4e3134 */

/* Supplied declaration required: FUN_00266be4. */
/* Supplied declaration required: FUN_002bda30. */


void FUN_002ebdd8(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  if (((DAT_004e3134 != '\0') && (param_1 < 0x10)) && (temp_v0 = param_1, FUN_00266be4(), temp_v0 != 0))
  {
    if (*(int *)(&DAT_004e2f68 + param_1 * 4) != 0) {
      FUN_002bda30(*(int *)(&DAT_004e2f68 + param_1 * 4),param_2);
    }
    DAT_004e312c = DAT_004e312c & ~(1 << (param_1 & 0xff));
  }
  return;
}
