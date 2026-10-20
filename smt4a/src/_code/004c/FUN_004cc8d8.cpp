/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004cc8d8` (_code @ 0x4cc8d8, 0xf8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(void);
int dataTableGet(int, int);

/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: dataTableGet. */
extern int dataTableGetEntries(void);
extern int FUN_00203b1c(void);


unsigned int FUN_004cc8d8(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_00203b1c();
  if (param_2 >= temp_v0) {
    temp_v2 = 0;
  }
  else {
    dataTableGet(9,1);
    temp_v0 = dataTableGetEntries();
    temp_v1 = FUN_00203b1c();
    temp_v2 = 0;
    if (param_2 < temp_v1) {
      if (param_2 >= 99) {
        temp_v2 = param_2 * param_2 * 3 + (unsigned int)(param_2 * param_2 * param_2) / 100 + param_2 * 0xdb8
                + 0x184c6;
        if (temp_v2 >= 1000000) {
          temp_v2 = 999999;
        }
      }
      else {
        temp_v2 = *(unsigned int *)((temp_v0 + param_2 * 4) - 4);
      }
    }
    FUN_00184310();
    temp_v0 = (param_2 - (unsigned int)*(unsigned short *)(param_1 + 6)) + 1;
    if (temp_v0 < 1) {
      temp_v3 = 100;
    }
    else {
      if (temp_v0 >= 11) {
        temp_v0 = 10;
      }
      dataTableGet(9,2);
      temp_v1 = dataTableGetEntries();
      temp_v3 = (unsigned int)*(unsigned short *)((temp_v1 + temp_v0 * 2) - 2);
    }
    temp_v2 = (temp_v2 * temp_v3) / 100;
    if (temp_v2 >= 1000000) {
      temp_v2 = 999999;
    }
  }
  return temp_v2;
}

} /* extern "C" */
