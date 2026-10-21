/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038ba08` (_code @ 0x38ba08, 0xac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

extern unsigned int g_btlCandidateMasks; /* 0x570288 */
extern unsigned int DAT_0057028c; /* 0x57028c */
extern unsigned int DAT_005702a0; /* 0x5702a0 */
extern unsigned int DAT_005702a4; /* 0x5702a4 */
extern unsigned int DAT_005702b0; /* 0x5702b0 */
extern unsigned int DAT_005702b4; /* 0x5702b4 */

extern int btlGetMainState(void);
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_0038ba08(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  unsigned char temp_v4;
  
  temp_v0 = btlGetMainState();
  temp_v2 = 0;
  do {
    puVar5 = (unsigned int *)(*(int *)(temp_v0 + 0x1ffc) + temp_v2 * 0x408);
    if (puVar5 != (unsigned int *)0x0) {
      temp_v1 = *puVar5;
      temp_v3 = puVar5[1];
      if (((temp_v3 & DAT_0057028c) != 0 || (temp_v1 & g_btlCandidateMasks) != 0) &&
         ((temp_v1 & DAT_005702b0) == 0 && (temp_v3 & DAT_005702b4) == 0)) {
        temp_v4 = (temp_v1 & DAT_005702a0) != 0 || (temp_v3 & DAT_005702a4) != 0;
        temp_v1 = 0;
        if (temp_v4) {
          temp_v1 = puVar5[0x101];
        }
        if ((temp_v4 && temp_v1 != 0) && ((*(unsigned short *)(temp_v1 + 0x16) & 0x100) != 0)) {
          scrSetResult(1);
          return 1;
        }
      }
    }
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 0x6d) {
      scrSetResult(0);
      return 1;
    }
  } while( 1 );
}

} /* extern "C" */
