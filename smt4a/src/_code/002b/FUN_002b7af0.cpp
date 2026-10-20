/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b7af0` (_code @ 0x2b7af0, 0xc8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTableGet(int, int);
int dataTableGetCount(...);

/* Supplied declaration required: dataTableGet. */
/* Supplied declaration required: dataTableGetCount. */
extern int dataTableGetEntries(void);


int FUN_002b7af0(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v4 = 0;
  dataTableGet(0x2e,2);
  temp_v0 = dataTableGetCount();
  if (0 < temp_v0) {
    do {
      temp_v1 = dataTableGet(0x2e,2);
      temp_v2 = dataTableGetEntries();
      temp_v3 = dataTableGetCount(temp_v1);
      temp_v0 = 0;
      if (temp_v4 < temp_v3) {
        temp_v0 = temp_v2 + temp_v4 * 0x2c;
      }
      if (*(short *)(temp_v0 + 0x20) == -1) {
        return 0;
      }
      if (*(short *)(temp_v0 + 0x20) == param_1) {
        if ((*(short *)(temp_v0 + 0x20) == 10) && (param_2 == 9 || param_2 == 10)) {
          temp_v0 = 0x2b7bb8;
        }
        return temp_v0;
      }
      temp_v4 = temp_v4 + 1;
      dataTableGet(0x2e,2);
      temp_v0 = dataTableGetCount();
    } while ((int)temp_v4 < temp_v0);
  }
  return 0;
}

} /* extern "C" */
