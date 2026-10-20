/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003283c8` (_code @ 0x3283c8, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_00570288; /* 0x570288 */
extern unsigned int DAT_0057028c; /* 0x57028c */
extern unsigned int DAT_005702b0; /* 0x5702b0 */
extern unsigned int DAT_005702b4; /* 0x5702b4 */
extern unsigned int DAT_0057113c; /* 0x57113c */

extern int FUN_0014aa78(void);
extern int FUN_004ee568(unsigned int);


void FUN_003283c8(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v4 = 0;
  temp_v3 = 4;
  do {
    temp_v0 = FUN_0014aa78();
    puVar3 = (unsigned int *)(*(int *)(temp_v0 + 0x1ffc) + temp_v3 * 0x408);
    temp_v1 = *puVar3;
    temp_v2 = puVar3[1];
    if (((DAT_00570288 & temp_v1) == 0 && (DAT_0057028c & temp_v2) == 0) &&
       ((temp_v1 & DAT_005702b0) == 0 && (temp_v2 & DAT_005702b4) == 0)) {
      temp_v0 = FUN_004ee568(DAT_0057113c);
      temp_v4 = (int)(char)((char)temp_v4 + '\x01');
      *(char *)(temp_v0 + temp_v3 + 0x38) = (char)temp_v3;
      if (param_1 <= temp_v4) {
        return;
      }
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x36);
  return;
}

} /* extern "C" */
