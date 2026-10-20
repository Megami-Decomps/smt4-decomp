/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001052d8` (_code @ 0x1052d8, 0xb0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010af3c(void);
int FUN_001131b0(unsigned int);
int FUN_00113244(int);
int FUN_0011d100(void);

extern int DAT_004e3b9c; /* 0x4e3b9c */
extern int DAT_004e3ba0; /* 0x4e3ba0 */
extern int DAT_004e3ba8; /* 0x4e3ba8 */
extern int DAT_004e3bac; /* 0x4e3bac */
extern signed char DAT_004e3bb0; /* 0x4e3bb0 */

/* Supplied declaration required: FUN_0010af3c. */
/* Supplied declaration required: FUN_001131b0. */
/* Supplied declaration required: FUN_00113244. */
/* Supplied declaration required: FUN_0011d100. */


void FUN_001052d8(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  
  temp_v2 = 0;
  temp_v0 = DAT_004e3ba0 - DAT_004e3b9c;
  if (0 < temp_v0) {
    do {
      FUN_00113244(0x402);
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < temp_v0);
  }
  FUN_0010af3c();
  FUN_00113244(0x402);
  temp_v0 = DAT_004e3bac;
  DAT_004e3b9c = 0;
  if (-1 < DAT_004e3bac) {
    temp_v3 = DAT_004e3bac == 0;
    DAT_004e3ba8 = DAT_004e3bac;
    DAT_004e3bac = -1;
    if (temp_v3) {
      temp_v1 = 0x700;
    }
    else {
      if (temp_v0 != 1) {
        if (DAT_004e3bb0 == '\0') {
          FUN_0011d100();
          DAT_004e3bb0 = '\x01';
        }
        return;
      }
      temp_v1 = 0x702;
    }
    FUN_001131b0(temp_v1);
  }
  if (DAT_004e3bb0 == '\0') {
    FUN_0011d100();
    DAT_004e3bb0 = '\x01';
  }
  return;
}

} /* extern "C" */
