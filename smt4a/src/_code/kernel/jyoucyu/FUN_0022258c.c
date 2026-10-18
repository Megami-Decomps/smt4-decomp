/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022258c` (_code @ 0x22258c, 0x254 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_0057ffb8; /* 0x57ffb8 */
extern signed char DAT_0057ffb9; /* 0x57ffb9 */
extern unsigned char DAT_0057ffba; /* 0x57ffba */
extern signed char DAT_0057ffd4; /* 0x57ffd4 */

/* Supplied declaration required: FUN_00137848. */
/* Supplied declaration required: FUN_00137ee0. */
/* Supplied declaration required: FUN_0013f1b8. */
/* Supplied declaration required: FUN_0014384c. */
/* Supplied declaration required: FUN_0014afd0. */
/* Supplied declaration required: FUN_00212774. */
/* Supplied declaration required: FUN_00213b10. */
/* Supplied declaration required: FUN_002326b4. */
/* Supplied declaration required: FUN_0023b410. */
/* Supplied declaration required: FUN_00281a0c. */
/* Supplied declaration required: FUN_00282b60. */
/* Supplied declaration required: FUN_00283d74. */
/* Supplied declaration required: FUN_002856f8. */
/* Supplied declaration required: FUN_002a4cac. */
/* Supplied declaration required: FUN_002bf464. */
/* Supplied declaration required: FUN_002c1e9c. */
/* Supplied declaration required: FUN_002c3364. */
/* Supplied declaration required: FUN_002e51c4. */
/* Supplied declaration required: FUN_0031f4fc. */
/* Supplied declaration required: FUN_00387454. */
/* Supplied declaration required: FUN_0038b36c. */
/* Supplied declaration required: FUN_0039c304. */
/* Supplied declaration required: FUN_003c5c88. */
/* Supplied declaration required: FUN_003f8898. */
/* Supplied declaration required: FUN_003f8940. */
/* Supplied declaration required: FUN_004ac06c. */


void FUN_0022258c(unsigned int param_1)

{
/* irregular: 26 native warning(s); review required */
  unsigned char temp_v0;
  
  if (DAT_0057ffd4 == '\0') {
    if (param_1 != 0) {
      if (param_1 != 1) {
        temp_v0 = param_1 == 2;
        if (temp_v0) {
          param_1 = (unsigned int)DAT_0057ffba;
        }
        if (temp_v0 && param_1 == 0) {
          FUN_00281a0c();
          FUN_002a4cac();
          FUN_00212774();
          FUN_002c3364();
          FUN_0023b410();
          FUN_0031f4fc();
          FUN_002856f8();
          FUN_004ac06c();
          FUN_003c5c88();
          DAT_0057ffba = 1;
        }
      }
      else if (DAT_0057ffb9 == '\0') {
        FUN_00387454();
        FUN_003f8898();
        FUN_002c1e9c();
        FUN_0013f1b8(6,0);
        FUN_0013f1b8(0x10,0);
        FUN_0013f1b8(0);
        FUN_0013f1b8(1,0);
        FUN_0013f1b8(2,0);
        FUN_0013f1b8(0x16,0);
        FUN_0013f1b8(0x17,0);
        FUN_0013f1b8(0x1c,0);
        FUN_0014384c(0x27);
        FUN_0014384c(0x1d);
        FUN_0013f1b8(0xe,0);
        FUN_0014afd0(3,2);
        FUN_0014afd0(3);
        FUN_002e51c4();
        DAT_0057ffb9 = '\x01';
      }
    }
    else if (DAT_0057ffb8 == '\0') {
      FUN_003f8940();
      FUN_0038b36c();
      FUN_0039c304();
      FUN_00282b60();
      FUN_002bf464();
      FUN_00213b10();
      FUN_00283d74(0);
      FUN_00137848();
      FUN_002326b4();
      FUN_00137ee0(0x16,0);
      DAT_0057ffb8 = '\x01';
    }
    if ((DAT_0057ffba == 1) && (DAT_0057ffb9 == '\x01' && DAT_0057ffb8 == '\x01')) {
      DAT_0057ffd4 = '\x01';
    }
  }
  return;
}
