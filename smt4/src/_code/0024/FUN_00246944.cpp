/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00246944` (_code @ 0x246944, 0xa8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTableGetCount(...);
int dataTableGet(int, int);

/* Supplied declaration required: dataTableGetCount. */
extern int dataTableGetEntries(void);
/* Supplied declaration required: dataTableGet. */


int FUN_00246944(int param_1)

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
