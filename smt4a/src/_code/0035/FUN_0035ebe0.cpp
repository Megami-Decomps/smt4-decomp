/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035ebe0` (_code @ 0x35ebe0, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(void);
int scrSetResult(int);

extern unsigned int DAT_00570288; /* 0x570288 */
extern unsigned int DAT_0057028c; /* 0x57028c */
extern unsigned int DAT_005702a0; /* 0x5702a0 */
extern unsigned int DAT_005702a4; /* 0x5702a4 */
extern unsigned int DAT_005702b0; /* 0x5702b0 */
extern unsigned int DAT_005702b4; /* 0x5702b4 */

extern int btlGetMainState(void);
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_0035ebe0(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  int temp_v3;
  
  temp_v3 = 0;
  do {
    temp_v0 = btlGetMainState();
    puVar4 = (unsigned int *)(*(int *)(temp_v0 + 0x1ffc) + temp_v3 * 0x408);
    temp_v1 = *puVar4;
    temp_v2 = puVar4[1];
    if (((DAT_005702a4 & temp_v2) != 0 || (DAT_005702a0 & temp_v1) != 0) &&
       ((temp_v2 & DAT_0057028c) != 0 || (temp_v1 & DAT_00570288) != 0)) {
      if ((temp_v1 & DAT_005702b0) == 0 && (temp_v2 & DAT_005702b4) == 0) {
        temp_v1 = (unsigned int)*(unsigned short *)((int)puVar4 + 0x166);
        FUN_00184310();
        if (*(char *)(temp_v1 + 9) == '\x04') {
          scrSetResult(1);
          return 1;
        }
      }
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x6d);
  scrSetResult(0);
  return 1;
}

} /* extern "C" */
