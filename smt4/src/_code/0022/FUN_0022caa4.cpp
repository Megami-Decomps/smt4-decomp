/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022caa4` (_code @ 0x22caa4, 0xa8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable2eSub2GetCount(void);

extern char *DAT_0044cdf4; /* 0x44cdf4 */
extern char s_d_____0044ce08[14]; /* 0x44ce08 */

extern char *dataTable2eSub2GetRecord(int);
/* Supplied declaration required: dataTable2eSub2GetCount. */


char * FUN_0022caa4(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  
  if (param_2 >= 100) {
    temp_v0 = 0;
    do {
      if (*(short *)(s_d_____0044ce08 + temp_v0 * 0x22) == -1) {
        return DAT_0044cdf4;
      }
      if (*(short *)(s_d_____0044ce08 + temp_v0 * 0x22) == param_2) {
        return s_d_____0044ce08 + temp_v0 * 0x22 + 2;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 999);
  }
  else {
    temp_v0 = 0;
    dataTable2eSub2GetCount();
    if (0 < param_1) {
      do {
        pcVar2 = (char *)dataTable2eSub2GetRecord(temp_v0);
        if (*(short *)(pcVar2 + 0x20) == -1) {
          return DAT_0044cdf4;
        }
        if (*(short *)(pcVar2 + 0x20) == param_2) {
          return pcVar2;
        }
        temp_v0 = temp_v0 + 1;
        dataTable2eSub2GetCount();
      } while (temp_v0 < (int)pcVar2);
    }
  }
  return DAT_0044cdf4;
}

} /* extern "C" */
