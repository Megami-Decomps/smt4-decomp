/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00295c60` (_code @ 0x295c60, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b9024(void);
int dataTableGet(int, int);

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002b9024. */
extern int dataTableGetEntries(void);
/* Supplied declaration required: dataTableGet. */


unsigned long long FUN_00295c60(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  if (param_2 >= 99) {
    temp_v0 = 0;
  }
  else {
    dataTableGet(9,1);
    temp_v1 = dataTableGetEntries();
    temp_v3 = *(int *)((temp_v1 + param_2 * 4) - 4);
    FUN_002b9024();
    temp_v1 = (param_2 - (unsigned int)*(unsigned char *)(param_1 + 3)) + 1;
    if (temp_v1 < 1) {
      temp_v0 = 100;
    }
    else {
      if (temp_v1 >= 11) {
        temp_v1 = 10;
      }
      dataTableGet(9,2);
      temp_v2 = dataTableGetEntries();
      temp_v0 = (unsigned int)*(unsigned short *)((temp_v2 + temp_v1 * 2) - 2);
    }
    temp_v0 = temp_v3 * temp_v0;
    param_2 = temp_v0 * 0x51eb851f;
    temp_v0 = temp_v0 / 100;
  }
  return romwright_piece_4_4(param_2,temp_v0);
}

} /* extern "C" */
