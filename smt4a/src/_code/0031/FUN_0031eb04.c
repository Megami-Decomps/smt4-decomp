/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031eb04` (_code @ 0x31eb04, 0xec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */
extern unsigned char DAT_0060ff9c; /* 0x60ff9c */
extern int DAT_006105d4; /* 0x6105d4 */
extern int DAT_006105d8; /* 0x6105d8 */
extern int DAT_006105dc; /* 0x6105dc */
extern int DAT_006105e0; /* 0x6105e0 */

/* Supplied declaration required: FUN_001aea28. */


void FUN_0031eb04(unsigned int param_1,int param_2)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  
  temp_v7 = 0;
  DAT_0060ff9c = 0;
  do {
    temp_v6 = 1;
    do {
      temp_v0 = *(int *)(temp_v7 * 0x100 + temp_v6 * 4 + 0x60ffd4);
      if (temp_v0 != 0) {
        param_2 = *(int *)(temp_v0 + 4);
      }
      if (temp_v0 != 0 && param_2 != 0) {
        FUN_001aea28(DAT_0056fcc0);
        param_2 = temp_v1;
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 0x40);
    temp_v6 = *(int *)(temp_v7 * 4 + 0x60ffbc);
    if (temp_v6 != 0) {
      param_2 = *(int *)(temp_v6 + 4);
    }
    if (temp_v6 != 0 && param_2 != 0) {
      FUN_001aea28(DAT_0056fcc0);
      param_2 = temp_v2;
    }
    temp_v7 = temp_v7 + 1;
  } while (temp_v7 < 6);
  if (DAT_006105dc != 0) {
    param_2 = *(int *)(DAT_006105dc + 4);
  }
  if (DAT_006105dc != 0 && param_2 != 0) {
    FUN_001aea28(DAT_0056fcc0);
    param_2 = temp_v3;
  }
  if (DAT_006105d8 != 0) {
    param_2 = *(int *)(DAT_006105d8 + 4);
  }
  if (DAT_006105d8 != 0 && param_2 != 0) {
    FUN_001aea28(DAT_0056fcc0);
    param_2 = temp_v4;
  }
  if (DAT_006105d4 != 0) {
    param_2 = *(int *)(DAT_006105d4 + 4);
  }
  if (DAT_006105d4 != 0 && param_2 != 0) {
    FUN_001aea28(DAT_0056fcc0);
    param_2 = temp_v5;
  }
  if (DAT_006105e0 != 0) {
    param_2 = *(int *)(DAT_006105e0 + 4);
  }
  if (DAT_006105e0 == 0 || param_2 == 0) {
    return;
  }
  FUN_001aea28(DAT_0056fcc0);
  return;
}
