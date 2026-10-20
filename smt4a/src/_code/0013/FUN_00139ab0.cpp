/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00139ab0` (_code @ 0x139ab0, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001400a0(void);
int FUN_0014a7e4(unsigned int);
int FUN_0014a878(int);
int FUN_0015a244(void);

extern int DAT_0063ff44; /* 0x63ff44 */
extern int DAT_0063ff48; /* 0x63ff48 */
extern int DAT_0063ff50; /* 0x63ff50 */
extern int DAT_0063ff54; /* 0x63ff54 */
extern signed char DAT_0063ff58; /* 0x63ff58 */

/* Supplied declaration required: FUN_001400a0. */
/* Supplied declaration required: FUN_0014a7e4. */
/* Supplied declaration required: FUN_0014a878. */
/* Supplied declaration required: FUN_0015a244. */


void FUN_00139ab0(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  
  temp_v2 = 0;
  temp_v0 = DAT_0063ff48 - DAT_0063ff44;
  if (0 < temp_v0) {
    do {
      FUN_0014a878(0x402);
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < temp_v0);
  }
  FUN_001400a0();
  FUN_0014a878(0x402);
  temp_v0 = DAT_0063ff54;
  DAT_0063ff44 = 0;
  if (-1 < DAT_0063ff54) {
    temp_v3 = DAT_0063ff54 == 0;
    DAT_0063ff50 = DAT_0063ff54;
    DAT_0063ff54 = -1;
    if (temp_v3) {
      temp_v1 = 0x700;
    }
    else {
      if (temp_v0 != 1) {
        if (DAT_0063ff58 == '\0') {
          FUN_0015a244();
          DAT_0063ff58 = '\x01';
        }
        return;
      }
      temp_v1 = 0x702;
    }
    FUN_0014a7e4(temp_v1);
  }
  if (DAT_0063ff58 == '\0') {
    FUN_0015a244();
    DAT_0063ff58 = '\x01';
  }
  return;
}

} /* extern "C" */
