/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037f080` (_code @ 0x37f080, 0xc8 bytes) from smt4a.cxi.
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
extern int aeabi_idivmod(int, int);


unsigned int FUN_0037f080(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v0 = FUN_00236038(0);
  temp_v5 = 0;
  temp_v6 = 0;
  temp_v4 = 0;
  do {
    temp_v1 = FUN_0014aa78();
    puVar5 = (unsigned int *)(*(int *)(temp_v1 + 0x1ffc) + temp_v4 * 0x408);
    temp_v2 = *puVar5;
    temp_v3 = puVar5[1];
    if ((((DAT_005702a0 & temp_v2) != 0 || (DAT_005702a4 & temp_v3) != 0) &&
        ((DAT_00570288 & temp_v2) != 0 || (DAT_0057028c & temp_v3) != 0)) &&
       ((temp_v2 & DAT_005702b0) == 0 && (temp_v3 & DAT_005702b4) == 0)) {
      temp_v6 = temp_v6 + puVar5[0x96];
      temp_v5 = temp_v5 + puVar5[0x97];
    }
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 0x6d);
  temp_v4 = aeabi_idivmod(temp_v6 * 100,temp_v5);
  FUN_003283ac(temp_v4 <= temp_v0);
  return 1;
}
