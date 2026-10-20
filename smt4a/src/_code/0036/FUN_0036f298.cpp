/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036f298` (_code @ 0x36f298, 0x188 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00165058(...);

extern int DAT_0057f3b0; /* 0x57f3b0 */

extern int FUN_00163e40(unsigned int);
/* Supplied declaration required: FUN_00165058. */


void FUN_0036f298(unsigned int param_1)

{
/* irregular: 1 goto(s); 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  
  temp_v1 = DAT_0057f3b0;
  temp_v5 = 0;
  if (0 < *(int *)(DAT_0057f3b0 + 0x44)) {
    do {
      temp_v6 = temp_v1 + temp_v5 * 4;
      temp_v2 = FUN_00163e40(*(unsigned int *)(temp_v6 + 4));
      if (temp_v2 == 0) {
        *(unsigned int *)(temp_v6 + 4) = 0;
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < *(int *)(temp_v1 + 0x44));
  }
  temp_v5 = 0;
  do {
    if (*(int *)(temp_v1 + temp_v5 * 4 + 4) == 0) {
      *(unsigned int *)(temp_v1 + temp_v5 * 4 + 4) = param_1;
      break;
    }
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 0x10);
  temp_v5 = -1;
  temp_v2 = 0;
  temp_v6 = 0x10;
  do {
    if (*(int *)(temp_v1 + temp_v2 * 4 + 4) == 0) {
      temp_v5 = temp_v2;
    }
    while( 1 ) {
      temp_v6 = temp_v6 - 1;
      temp_v2 = temp_v2 + 1;
      if (temp_v6 == 0) {
        *(unsigned int *)(temp_v1 + 0x44) = 0;
        goto LAB_0036f368;
      }
      if (temp_v5 < 0) break;
      temp_v3 = temp_v1 + temp_v2 * 4;
      temp_v7 = *(int *)(temp_v3 + 4);
      if (temp_v7 != 0) {
        *(int *)(temp_v1 + temp_v5 * 4 + 4) = temp_v7;
        *(unsigned int *)(temp_v3 + 4) = 0;
        temp_v5 = temp_v2;
      }
    }
  } while( 1 );
  while (temp_v5 = *(int *)(temp_v1 + 0x44) + 1, *(int *)(temp_v1 + 0x44) = temp_v5, temp_v5 < 0x10) {
LAB_0036f368:
    if (*(int *)(temp_v1 + *(int *)(temp_v1 + 0x44) * 4 + 4) == 0) break;
  }
  do {
    temp_v0 = 0;
    temp_v5 = 0;
    if (*(int *)(temp_v1 + 0x44) - 1 < 1) {
      return;
    }
    do {
      temp_v2 = temp_v1 + temp_v5 * 4;
      if (*(int *)(temp_v2 + 4) != 0) {
        if (*(int *)(temp_v2 + 8) != 0) {
          temp_v6 = FUN_00165058();
          temp_v3 = FUN_00165058(*(unsigned int *)(temp_v2 + 8));
          if (temp_v3 < temp_v6) {
            temp_v4 = *(unsigned int *)(temp_v2 + 4);
            temp_v0 = 1;
            *(unsigned int *)(temp_v2 + 4) = *(unsigned int *)(temp_v2 + 8);
            *(unsigned int *)(temp_v2 + 8) = temp_v4;
          }
        }
      }
      else if (*(int *)(temp_v2 + 8) != 0) {
        temp_v0 = 1;
        *(int *)(temp_v2 + 4) = *(int *)(temp_v2 + 8);
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < *(int *)(temp_v1 + 0x44) - 1);
  } while (temp_v0);
  return;
}

} /* extern "C" */
