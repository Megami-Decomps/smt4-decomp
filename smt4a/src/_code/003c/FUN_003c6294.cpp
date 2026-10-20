/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c6294` (_code @ 0x3c6294, 0x110 bytes) from smt4a.cxi.
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


unsigned int FUN_003c6294(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int *puVar7;
  int temp_v6;
  
  temp_v1 = scrGetArg(0);
  temp_v2 = scrGetArg(1);
  temp_v6 = 0;
  if (temp_v2 == 0) {
    temp_v6 = 7;
  }
  else if (temp_v2 == 1) {
    temp_v6 = 8;
  }
  else if (temp_v2 == 2) {
    temp_v6 = 10;
  }
  else if (temp_v2 == 3) {
    temp_v6 = 0xb;
  }
  temp_v0 = 0;
  temp_v2 = 0;
  while( 1 ) {
    temp_v3 = btlGetMainState();
    puVar7 = (unsigned int *)(*(int *)(temp_v3 + 0x1ffc) + temp_v2 * 0x408);
    temp_v4 = *puVar7;
    temp_v5 = puVar7[1];
    if (((((DAT_005702a0 & temp_v4) != 0 || (DAT_005702a4 & temp_v5) != 0) &&
         ((DAT_00570288 & temp_v4) != 0 || (DAT_0057028c & temp_v5) != 0)) &&
        ((temp_v4 & DAT_005702b0) == 0 && (temp_v5 & DAT_005702b4) == 0)) &&
       ((*(unsigned short *)((int)puVar7 + 0x166) == temp_v1 && (temp_v0 = 1, (int)puVar7[temp_v6 + 0x1d] < 1))))
    break;
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 0x6d) {
      scrSetResult(temp_v0);
      return 1;
    }
  }
  scrSetResult(0);
  return 1;
}

} /* extern "C" */
