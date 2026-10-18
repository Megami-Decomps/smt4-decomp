/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b0bb8` (_code @ 0x3b0bb8, 0xe4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00570288; /* 0x570288 */
extern unsigned int DAT_0057028c; /* 0x57028c */
extern unsigned int DAT_005702a0; /* 0x5702a0 */
extern unsigned int DAT_005702a4; /* 0x5702a4 */
extern unsigned int DAT_005702b0; /* 0x5702b0 */
extern unsigned int DAT_005702b4; /* 0x5702b4 */

extern int FUN_0014aa78(void);
extern int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_003b0bb8(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  int temp_v4;
  
  temp_v0 = FUN_00236038(0);
  temp_v4 = 0;
  if (temp_v0 == 0) {
    temp_v4 = 7;
  }
  else if (temp_v0 == 1) {
    temp_v4 = 8;
  }
  else if (temp_v0 == 2) {
    temp_v4 = 10;
  }
  else if (temp_v0 == 3) {
    temp_v4 = 0xb;
  }
  temp_v0 = 0;
  while( 1 ) {
    temp_v1 = FUN_0014aa78();
    puVar5 = (unsigned int *)(*(int *)(temp_v1 + 0x1ffc) + temp_v0 * 0x408);
    temp_v2 = *puVar5;
    temp_v3 = puVar5[1];
    if (((((DAT_005702a0 & temp_v2) != 0 || (DAT_005702a4 & temp_v3) != 0) &&
         ((temp_v3 & DAT_0057028c) != 0 || (temp_v2 & DAT_00570288) != 0)) &&
        ((temp_v3 & DAT_005702b4) == 0 && (DAT_005702b0 & temp_v2) == 0)) &&
       (0x7fffffff < puVar5[temp_v4 + 0x1d])) break;
    temp_v0 = temp_v0 + 1;
    if (temp_v0 >= 0x6d) {
      FUN_003283ac(0);
      return 1;
    }
  }
  FUN_003283ac(1);
  return 1;
}
