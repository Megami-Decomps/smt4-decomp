/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002646d4` (_code @ 0x2646d4, 0xb8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001e5e78(int);
int FUN_00280ccc(void);

extern int DAT_00447a78; /* 0x447a78 */

/* Supplied declaration required: FUN_001e5e78. */
/* Supplied declaration required: FUN_00280ccc. */


void FUN_002646d4(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  
  temp_v0 = DAT_00447a78;
  temp_v2 = 0;
  do {
    temp_v1 = temp_v2 + 1;
    temp_v2 = temp_v0 + temp_v2 * 0x194;
    if (*(char *)(temp_v2 + 0x1d0) != '\0') {
      *(unsigned int *)(temp_v2 + 0x1d8) = 1;
    }
    temp_v2 = temp_v1;
  } while (temp_v1 < 0x80);
  temp_v2 = 0;
  do {
    FUN_001e5e78(1);
    if (param_1 != 0) {
      FUN_00280ccc();
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 3);
  temp_v2 = 0;
  do {
    temp_v1 = temp_v2 + 1;
    temp_v3 = temp_v0 + temp_v2 * 0x194;
    temp_v4 = *(char *)(temp_v3 + 0x1d0) != '\0';
    temp_v2 = 0;
    if (temp_v4) {
      temp_v2 = *(int *)(temp_v3 + 0x214);
    }
    if (temp_v4 && 0 < temp_v2) {
      *(unsigned int *)(temp_v3 + 0x214) = 0x10;
    }
    temp_v2 = temp_v1;
  } while (temp_v1 < 0x80);
  return;
}

} /* extern "C" */
