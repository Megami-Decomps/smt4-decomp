/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bbabc` (_code @ 0x3bbabc, 0x104 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrGetArg(int);
int scrSetResult(int);

extern unsigned int g_btlCandidateMasks; /* 0x570288 */
extern unsigned int DAT_0057028c; /* 0x57028c */
extern unsigned int DAT_005702a0; /* 0x5702a0 */
extern unsigned int DAT_005702a4; /* 0x5702a4 */
extern unsigned int DAT_005702b0; /* 0x5702b0 */
extern unsigned int DAT_005702b4; /* 0x5702b4 */

extern int btlGetMainState(void);
/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_003bbabc(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int *puVar6;
  int temp_v5;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  temp_v5 = 0;
  if (temp_v1 == 0) {
    temp_v5 = 7;
  }
  else if (temp_v1 == 1) {
    temp_v5 = 8;
  }
  else if (temp_v1 == 2) {
    temp_v5 = 10;
  }
  else if (temp_v1 == 3) {
    temp_v5 = 0xb;
  }
  temp_v1 = 0;
  while( 1 ) {
    temp_v2 = btlGetMainState();
    puVar6 = (unsigned int *)(*(int *)(temp_v2 + 0x1ffc) + temp_v1 * 0x408);
    temp_v3 = *puVar6;
    temp_v4 = puVar6[1];
    if (((((DAT_005702a0 & temp_v3) != 0 || (DAT_005702a4 & temp_v4) != 0) &&
         ((DAT_0057028c & temp_v4) != 0 || (g_btlCandidateMasks & temp_v3) != 0)) &&
        ((temp_v3 & DAT_005702b0) == 0 && (temp_v4 & DAT_005702b4) == 0)) &&
       ((*(unsigned short *)((int)puVar6 + 0x166) == temp_v0 && (0x7fffffff < puVar6[temp_v5 + 0x1d])))) break;
    temp_v1 = temp_v1 + 1;
    if (temp_v1 >= 0x6d) {
      scrSetResult(0);
      return 1;
    }
  }
  scrSetResult(1);
  return 1;
}

} /* extern "C" */
