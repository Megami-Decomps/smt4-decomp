/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034e3c0` (_code @ 0x34e3c0, 0x11c bytes) from smt4a.cxi.
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
/* Supplied declaration required: FUN_003eaf20. */
extern int aeabi_idivmod(int, unsigned int);


unsigned int FUN_0034e3c0(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  int temp_v4;
  
  temp_v0 = FUN_00236038(0);
  temp_v4 = 0;
  do {
    temp_v1 = FUN_0014aa78();
    puVar5 = (unsigned int *)(*(int *)(temp_v1 + 0x1ffc) + temp_v4 * 0x408);
    temp_v2 = *puVar5;
    temp_v3 = puVar5[1];
    if (((DAT_005702a0 & temp_v2) == 0 && (DAT_005702a4 & temp_v3) == 0) &&
       ((DAT_0057028c & temp_v3) != 0 || (DAT_00570288 & temp_v2) != 0)) {
      if (((temp_v3 & DAT_005702b4) == 0 && (DAT_005702b0 & temp_v2) == 0) &&
         (temp_v1 = aeabi_idivmod(puVar5[0x98] * 100,puVar5[0x99]), temp_v1 <= temp_v0)) {
        FUN_003283ac(1);
        return 1;
      }
    }
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 0x6d);
  temp_v4 = FUN_0014aa78();
  if (*(char *)(temp_v4 + 0x4cd1) != '\0') {
    temp_v4 = FUN_0014aa78();
    FUN_003eaf20();
    if ((temp_v4 != 0) &&
       (temp_v4 = aeabi_idivmod(*(int *)(temp_v4 + 0x260) * 100,*(unsigned int *)(temp_v4 + 0x264)),
       temp_v4 <= temp_v0)) {
      FUN_003283ac(1);
      return 1;
    }
  }
  FUN_003283ac(0);
  return 1;
}
