/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00289234` (_code @ 0x289234, 0x188 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043ded0; /* 0x43ded0 */

/* Supplied declaration required: FUN_002b722c. */
extern int FUN_002bf244(unsigned int);


void FUN_00289234(unsigned int param_1)

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
  
  temp_v1 = DAT_0043ded0;
  temp_v5 = 0;
  if (0 < *(int *)(DAT_0043ded0 + 0x2c)) {
    do {
      temp_v6 = temp_v1 + temp_v5 * 4;
      temp_v2 = FUN_002bf244(*(unsigned int *)(temp_v6 + 4));
      if (temp_v2 == 0) {
        *(unsigned int *)(temp_v6 + 4) = 0;
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < *(int *)(temp_v1 + 0x2c));
  }
  temp_v5 = 0;
  do {
    if (*(int *)(temp_v1 + temp_v5 * 4 + 4) == 0) {
      *(unsigned int *)(temp_v1 + temp_v5 * 4 + 4) = param_1;
      break;
    }
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 10);
  temp_v5 = -1;
  temp_v2 = 0;
  temp_v6 = 10;
  do {
    if (*(int *)(temp_v1 + temp_v2 * 4 + 4) == 0) {
      temp_v5 = temp_v2;
    }
    while( 1 ) {
      temp_v6 = temp_v6 - 1;
      temp_v2 = temp_v2 + 1;
      if (temp_v6 == 0) {
        *(unsigned int *)(temp_v1 + 0x2c) = 0;
        goto LAB_00289304;
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
  while (temp_v5 = *(int *)(temp_v1 + 0x2c) + 1, *(int *)(temp_v1 + 0x2c) = temp_v5, temp_v5 < 10) {
LAB_00289304:
    if (*(int *)(temp_v1 + *(int *)(temp_v1 + 0x2c) * 4 + 4) == 0) break;
  }
  do {
    temp_v0 = 0;
    temp_v5 = 0;
    if (*(int *)(temp_v1 + 0x2c) - 1 < 1) {
      return;
    }
    do {
      temp_v2 = temp_v1 + temp_v5 * 4;
      if (*(int *)(temp_v2 + 4) != 0) {
        if (*(int *)(temp_v2 + 8) != 0) {
          temp_v6 = FUN_002b722c();
          temp_v3 = FUN_002b722c(*(unsigned int *)(temp_v2 + 8));
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
    } while (temp_v5 < *(int *)(temp_v1 + 0x2c) - 1);
  } while (temp_v0);
  return;
}
