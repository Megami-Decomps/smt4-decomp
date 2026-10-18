/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c0998` (_code @ 0x1c0998, 0x98 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00464b7c; /* 0x464b7c */
extern unsigned int DAT_00464b84; /* 0x464b84 */
extern int DAT_00464b8c; /* 0x464b8c */
extern int DAT_00464b90; /* 0x464b90 */
extern int DAT_00464b94; /* 0x464b94 */
extern int DAT_00464b98; /* 0x464b98 */
extern unsigned int DAT_004dad80; /* 0x4dad80 */

/* Supplied declaration required: FUN_002a2dc8. */
/* Supplied declaration required: FUN_002abb24. */
/* Supplied declaration required: FUN_002c00b4. */


void FUN_001c0998(unsigned int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = DAT_00464b8c;
  if (param_2 != 1) {
    if (param_2 == 2) {
      temp_v0 = 0;
      temp_v1 = DAT_00464b94;
      FUN_002a2dc8(temp_v0);
    }
    else {
      temp_v1 = DAT_00464b90;
      if (param_2 != 4) {
        if (param_2 != 5) {
          return;
        }
        temp_v0 = 1;
        temp_v1 = DAT_00464b98;
        FUN_002a2dc8(temp_v0);
      }
    }
  }
  if (temp_v1 != 0) {
    FUN_002c00b4(temp_v1,param_1);
    temp_v2 = (unsigned int)(param_2 >= 3);
    FUN_002abb24((&DAT_00464b7c)[temp_v2],(&DAT_00464b84)[temp_v2]);
    (&DAT_004dad80)[temp_v2 * 6] = (&DAT_004dad80)[temp_v2 * 6] + 1;
  }
  return;
}
