/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037f14c` (_code @ 0x37f14c, 0xc8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrGetArg(int);
int scrSetResult(int);

extern unsigned int DAT_00570288; /* 0x570288 */
extern unsigned int DAT_0057028c; /* 0x57028c */
extern unsigned int DAT_005702a0; /* 0x5702a0 */
extern unsigned int DAT_005702a4; /* 0x5702a4 */
extern unsigned int DAT_005702b0; /* 0x5702b0 */
extern unsigned int DAT_005702b4; /* 0x5702b4 */

extern int btlGetMainState(void);
/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_0037f14c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int *puVar6;
  int temp_v5;
  int temp_v6;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  temp_v6 = 0;
  temp_v5 = 0;
  do {
    temp_v2 = btlGetMainState();
    puVar6 = (unsigned int *)(*(int *)(temp_v2 + 0x1ffc) + temp_v5 * 0x408);
    temp_v3 = *puVar6;
    temp_v4 = puVar6[1];
    if (((((DAT_005702a0 & temp_v3) != 0 || (DAT_005702a4 & temp_v4) != 0) &&
         ((DAT_00570288 & temp_v3) != 0 || (DAT_0057028c & temp_v4) != 0)) &&
        ((temp_v3 & DAT_005702b0) == 0 && (temp_v4 & DAT_005702b4) == 0)) &&
       (((unsigned int)(unsigned short)puVar6[0x9d] & (1 << (temp_v0 & 0xff))) != 0)) {
      temp_v6 = temp_v6 + 1;
    }
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 0x6d);
  scrSetResult(temp_v1 <= temp_v6);
  return 1;
}

} /* extern "C" */
