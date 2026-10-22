/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ccc7c` (_code @ 0x4ccc7c, 0xd4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTableGet(int, int);

/* Supplied declaration required: dataTableGet. */
extern int dataTableGetEntries(void);
extern int gameGetUnlockedCountLimit(void);


int FUN_004ccc7c(int param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  for (temp_v3 = param_1; temp_v0 = gameGetUnlockedCountLimit(), temp_v3 < temp_v0; temp_v3 = temp_v3 + 1) {
    dataTableGet(9,1);
    temp_v0 = dataTableGetEntries();
    temp_v1 = gameGetUnlockedCountLimit();
    if (temp_v3 >= temp_v1) {
      temp_v2 = 0;
    }
    else if (temp_v3 >= 99) {
      temp_v2 = temp_v3 * temp_v3 * 3 + (unsigned int)(temp_v3 * temp_v3 * temp_v3) / 100 + temp_v3 * 0xdb8 + 0x184c6;
      if (temp_v2 >= 1000000) {
        temp_v2 = 999999;
      }
    }
    else {
      temp_v2 = *(unsigned int *)((temp_v0 + temp_v3 * 4) - 4);
    }
    if (*param_2 < temp_v2) break;
    *param_2 = *param_2 - temp_v2;
  }
  return temp_v3 - param_1;
}

} /* extern "C" */
