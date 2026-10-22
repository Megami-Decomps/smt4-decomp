/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ccdb8` (_code @ 0x4ccdb8, 0xf4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(void);
int dataTableGet(int, int);

/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: dataTableGet. */
extern int dataTableGetEntries(void);
extern int gameGetUnlockedCountLimit(void);


unsigned int FUN_004ccdb8(int param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = gameGetUnlockedCountLimit();
  if (param_2 >= temp_v0) {
    temp_v3 = 0;
  }
  else {
    dataTableGet(9,1);
    temp_v0 = dataTableGetEntries();
    temp_v1 = gameGetUnlockedCountLimit();
    if (param_2 >= temp_v1) {
      temp_v3 = 0;
    }
    else if (param_2 >= 99) {
      temp_v3 = param_2 * param_2 * 3 + (unsigned int)(param_2 * param_2 * param_2) / 100 + param_2 * 0xdb8 +
              0x184c6;
      if (temp_v3 >= 1000000) {
        temp_v3 = 999999;
      }
    }
    else {
      temp_v3 = *(unsigned int *)((temp_v0 + param_2 * 4) - 4);
    }
    FUN_00184310();
    temp_v0 = (param_3 - (unsigned int)*(unsigned short *)(param_1 + 6)) + 1;
    if (temp_v0 < 1) {
      temp_v2 = 100;
    }
    else {
      if (temp_v0 >= 11) {
        temp_v0 = 10;
      }
      dataTableGet(9,2);
      temp_v1 = dataTableGetEntries();
      temp_v2 = (unsigned int)*(unsigned short *)((temp_v1 + temp_v0 * 2) - 2);
    }
    temp_v3 = (temp_v3 * temp_v2) / 100;
    if (temp_v3 >= 1000000) {
      temp_v3 = 999999;
    }
  }
  return temp_v3;
}

} /* extern "C" */
