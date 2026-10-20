/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00344bc8` (_code @ 0x344bc8, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTableGet(int, int);

extern int FUN_0014af84(void);
/* Supplied declaration required: dataTableGet. */
extern int dataTableGetCount(void);
extern int dataTableGetEntries(void);


int FUN_00344bc8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  dataTableGet(0x4a,0);
  temp_v0 = dataTableGetCount();
  temp_v2 = 0;
  temp_v3 = 0;
  if (temp_v2 < temp_v0) {
    do {
      dataTableGet(0x4a,0);
      temp_v1 = dataTableGetEntries();
      if ((temp_v1 + temp_v2 * 0x2c != 0) &&
         (temp_v1 = FUN_0014af84(),
         ((unsigned int)*(unsigned char *)(temp_v1 + ((int)(temp_v2 + ((unsigned int)(temp_v2 >> 0x1f) >> 0x1d)) >> 3) + 0x282ec) &
         (1 << ((temp_v2 % 8) & 0xffU))) != 0)) {
        if (temp_v3 == param_1) {
          return temp_v2;
        }
        temp_v3 = temp_v3 + 1;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < temp_v0);
  }
  return temp_v2;
}

} /* extern "C" */
