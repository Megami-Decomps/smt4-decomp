/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bc198` (_code @ 0x3bc198, 0xac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_0022ac3c. */
/* Supplied declaration required: FUN_002b06c4. */
extern unsigned int FUN_002c0c74(unsigned int);
extern int FUN_002c0cc4(void);
extern unsigned int FUN_002c0cec(unsigned int);


unsigned int FUN_003bc198(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v0 = FUN_002c0cec(2);
  temp_v1 = FUN_002c0cc4();
  temp_v3 = temp_v1;
  if (((-1 < (int)param_1) && (temp_v2 = FUN_002c0c74(temp_v0), param_1 < temp_v2)) &&
     (temp_v3 = DAT_00433158, FUN_0022ac3c(DAT_00433158,param_1), temp_v3 == 0)) {
    temp_v3 = temp_v1 + param_1 * 0x1c;
  }
  if (temp_v3 != 0) {
    temp_v1 = 0;
    do {
      temp_v2 = (unsigned int)*(unsigned short *)(temp_v3 + temp_v1 * 2 + 0xc);
      if (((temp_v2 != 0) && (FUN_002b06c4(), temp_v2 != 0)) && ((*(unsigned char *)(temp_v2 + 3) & 1) != 0)) {
        return 1;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 6);
  }
  return 0;
}
