/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ba544` (_code @ 0x2ba544, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable2CType0Count(void);

extern int gameFlagBitsTest(int);
extern unsigned int FUN_0033ab6c(int, unsigned int);
extern char *dataTable2CGetEntry(int);
/* Supplied declaration required: dataTable2CType0Count. */


void FUN_002ba544(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  char *pcVar1;
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  temp_v0 = param_1;
  dataTable2CType0Count();
  if (0 < (int)temp_v0) {
    do {
      pcVar1 = (char *)dataTable2CGetEntry(temp_v2);
      temp_v0 = (unsigned int)*pcVar1;
      if (temp_v0 == 0xffffffff) {
        return;
      }
      if ((temp_v0 == param_1) && (temp_v0 = (unsigned int)(unsigned char)pcVar1[2], temp_v0 == 2)) {
        temp_v1 = gameFlagBitsTest((int)pcVar1[3]);
        temp_v0 = 0;
        if (temp_v1 != 0) {
          temp_v0 = FUN_0033ab6c((int)pcVar1[3],0);
        }
      }
      temp_v2 = temp_v2 + 1;
      dataTable2CType0Count();
    } while (temp_v2 < (int)temp_v0);
  }
  return;
}

} /* extern "C" */
