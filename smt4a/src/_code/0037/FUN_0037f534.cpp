/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037f534` (_code @ 0x37f534, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

extern unsigned int DAT_00570288; /* 0x570288 */
extern unsigned int DAT_0057028c; /* 0x57028c */
extern unsigned int DAT_005702a0; /* 0x5702a0 */
extern unsigned int DAT_005702a4; /* 0x5702a4 */
extern unsigned int DAT_005702b0; /* 0x5702b0 */
extern unsigned int DAT_005702b4; /* 0x5702b4 */

extern int btlGetMainState(void);
extern int scrGetArg(unsigned int);
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_0037f534(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  int temp_v4;
  
  temp_v0 = scrGetArg(0);
  temp_v4 = 0;
  do {
    temp_v1 = btlGetMainState();
    puVar5 = (unsigned int *)(*(int *)(temp_v1 + 0x1ffc) + temp_v4 * 0x408);
    temp_v2 = *puVar5;
    temp_v3 = puVar5[1];
    if (((DAT_005702a0 & temp_v2) != 0 || (DAT_005702a4 & temp_v3) != 0) &&
       ((DAT_0057028c & temp_v3) != 0 || (DAT_00570288 & temp_v2) != 0)) {
      if (((temp_v2 & DAT_005702b0) == 0 && (temp_v3 & DAT_005702b4) == 0) &&
         (*(unsigned short *)((int)puVar5 + temp_v0 * 2 + 0x2b6) >> 10 == 1)) {
        scrSetResult(1);
        return 1;
      }
    }
    temp_v4 = temp_v4 + 1;
    if (temp_v4 >= 0x6d) {
      scrSetResult(0);
      return 1;
    }
  } while( 1 );
}

} /* extern "C" */
