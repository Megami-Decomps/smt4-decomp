/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b4dcc` (_code @ 0x2b4dcc, 0xac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00573920; /* 0x573920 */
extern unsigned int DAT_00573978; /* 0x573978 */
extern unsigned int DAT_0057397c; /* 0x57397c */
extern unsigned int DAT_00573988; /* 0x573988 */
extern unsigned int DAT_0057398c; /* 0x57398c */
extern unsigned int DAT_005739a0; /* 0x5739a0 */
extern unsigned int DAT_005739a4; /* 0x5739a4 */

extern unsigned int FUN_0017760c(void);


unsigned int FUN_002b4dcc(unsigned int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int *puVar6;
  
  temp_v0 = DAT_00573920;
  temp_v1 = FUN_0017760c();
  temp_v2 = temp_v1;
  if (temp_v0 != 0) {
    temp_v2 = *(unsigned int *)(temp_v0 + 0x88);
  }
  if (temp_v0 != 0 && temp_v2 != 0x1d) {
    temp_v4 = 0;
    do {
      puVar6 = (unsigned int *)(*(int *)(temp_v0 + 0x1ffc) + temp_v4 * 0x408);
      temp_v2 = *puVar6;
      temp_v3 = puVar6[1];
      if (((((temp_v3 & DAT_0057397c) != 0 || (temp_v2 & DAT_00573978) != 0) &&
           ((DAT_005739a0 & temp_v2) == 0 && (DAT_005739a4 & temp_v3) == 0)) &&
          ((temp_v2 & DAT_00573988) != 0 || (temp_v3 & DAT_0057398c) != 0)) && (puVar6[0xff] == param_1)
         ) {
        return puVar6[0x97];
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 0x6d);
  }
  return temp_v1;
}

} /* extern "C" */
