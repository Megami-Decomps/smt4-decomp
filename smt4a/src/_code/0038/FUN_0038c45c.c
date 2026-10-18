/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038c45c` (_code @ 0x38c45c, 0x134 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00570288; /* 0x570288 */
extern unsigned int DAT_0057028c; /* 0x57028c */
extern unsigned int DAT_00570290; /* 0x570290 */
extern unsigned int DAT_00570294; /* 0x570294 */
extern unsigned int DAT_00570298; /* 0x570298 */
extern unsigned int DAT_0057029c; /* 0x57029c */
extern unsigned int DAT_005702a0; /* 0x5702a0 */
extern unsigned int DAT_005702a4; /* 0x5702a4 */
extern unsigned int DAT_005702b0; /* 0x5702b0 */
extern unsigned int DAT_005702b4; /* 0x5702b4 */

extern int FUN_0014aa78(void);
extern int FUN_0017760c(unsigned int);
/* Supplied declaration required: FUN_003283ac. */
/* Supplied declaration required: FUN_003eaf20. */


unsigned int FUN_0038c45c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  
  temp_v3 = 0;
  do {
    temp_v0 = FUN_0014aa78();
    puVar5 = (unsigned int *)(*(int *)(temp_v0 + 0x1ffc) + temp_v3 * 0x408);
    temp_v1 = *puVar5;
    temp_v2 = puVar5[1];
    if ((((DAT_005702a4 & temp_v2) == 0 && (DAT_005702a0 & temp_v1) == 0) &&
        ((temp_v2 & DAT_0057028c) != 0 || (temp_v1 & DAT_00570288) != 0)) &&
       ((DAT_005702b0 & temp_v1) == 0 && (DAT_005702b4 & temp_v2) == 0)) {
      if (!((temp_v2 & DAT_00570294) == 0 && (temp_v1 & DAT_00570290) == 0)) {
        if ((int)puVar5[0x97] <= (int)*(short *)(puVar5[0xfe] + 0x1c)) {
          FUN_003283ac(1);
          return 1;
        }
      }
      else if (((temp_v1 & DAT_00570298) != 0 || (temp_v2 & DAT_0057029c) != 0) &&
              (temp_v0 = FUN_0017760c(puVar5[0xff]), (int)puVar5[0x97] <= temp_v0)) {
        FUN_003283ac(1);
        return 1;
      }
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x6d);
  temp_v3 = FUN_0014aa78();
  if (*(char *)(temp_v3 + 0x4cd1) != '\0') {
    temp_v3 = FUN_0014aa78();
    FUN_003eaf20();
    if ((temp_v3 != 0) &&
       (temp_v0 = FUN_0017760c(*(unsigned int *)(temp_v3 + 0x400)), *(int *)(temp_v3 + 0x25c) <= temp_v0)) {
      FUN_003283ac(1);
      return 1;
    }
  }
  FUN_003283ac(0);
  return 1;
}
