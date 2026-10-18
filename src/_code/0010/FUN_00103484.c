/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103484` (_code @ 0x103484, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004e20ec; /* 0x4e20ec */
extern signed char DAT_004e3169; /* 0x4e3169 */
extern unsigned char DAT_004e316a; /* 0x4e316a */

/* Supplied declaration required: FUN_0010df94. */
/* Supplied declaration required: FUN_00110910. */
extern int FUN_00111aa0(unsigned char *);


void FUN_00103484(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00111aa0(&DAT_004e20ec);
  if (temp_v0 != 0) {
    FUN_0010df94();
    FUN_00110910(&DAT_004e20ec);
  }
  if (DAT_004e3169 != '\0') {
    DAT_004e316a = 1;
  }
  return;
}
