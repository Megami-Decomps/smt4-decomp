/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ae4d0` (_code @ 0x3ae4d0, 0x110 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTableGet(int, int);
int dataTableGetCount(...);
int FUN_0046c35c(int, int, int);
int FUN_0046ea50(int, unsigned int);

extern int g_aocSystem; /* 0x570280 */

/* Supplied declaration required: dataTableGet. */
/* Supplied declaration required: dataTableGetCount. */
extern int dataTableGetEntries(void);
/* Supplied declaration required: FUN_0046c35c. */
/* Supplied declaration required: FUN_0046ea50. */


unsigned int FUN_003ae4d0(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v4 = 0;
  dataTableGet(0x30,0);
  temp_v0 = dataTableGetCount();
  temp_v2 = g_aocSystem;
  FUN_0046c35c(g_aocSystem,0x27,0);
  if (0 < temp_v2 + temp_v0) {
    do {
      temp_v1 = dataTableGet(0x30,0);
      temp_v2 = dataTableGetEntries();
      temp_v3 = dataTableGetCount(temp_v1);
      if (temp_v4 < temp_v3) {
        temp_v2 = temp_v2 + temp_v4 * 0x28;
      }
      else {
        temp_v0 = g_aocSystem;
        FUN_0046c35c(g_aocSystem,0x27,0);
        temp_v2 = 0;
        if (temp_v4 < temp_v3 + temp_v0) {
          temp_v2 = g_aocSystem;
          FUN_0046ea50(g_aocSystem,temp_v4 - temp_v3);
        }
      }
      if ((*(int *)(temp_v2 + 0x20) != -1) && (*(int *)(temp_v2 + 0x20) == param_1)) {
        return temp_v4;
      }
      temp_v4 = temp_v4 + 1;
      dataTableGet(0x30,0);
      temp_v0 = dataTableGetCount();
      temp_v2 = g_aocSystem;
      FUN_0046c35c(g_aocSystem,0x27,0);
    } while ((int)temp_v4 < temp_v2 + temp_v0);
  }
  return 0xffffffff;
}

} /* extern "C" */
