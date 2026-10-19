/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ba698` (_code @ 0x2ba698, 0xc8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_00131624. */
extern int FUN_002c09d0(void);
extern int FUN_002c0c74(unsigned int);
extern int FUN_002c0cc4(void);
extern unsigned int FUN_002c0cec(unsigned int, unsigned int);


int FUN_002ba698(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char *pbVar7;
  unsigned char temp_v6;
  
  temp_v1 = DAT_00433158;
  FUN_00131624(DAT_00433158,param_1,param_2);
  if (temp_v1 == 0) {
    temp_v0 = FUN_002c0cec(2,0);
    temp_v1 = FUN_002c0cc4();
    temp_v2 = FUN_002c0c74(temp_v0);
    temp_v5 = 0;
    if (temp_v5 < temp_v2) {
      do {
        pbVar7 = (unsigned char *)(temp_v1 + temp_v5 * 0xa0);
        temp_v3 = (unsigned int)*pbVar7;
        temp_v6 = temp_v3 == param_1;
        if (temp_v6) {
          temp_v3 = (unsigned int)pbVar7[1];
        }
        if (((temp_v6 && temp_v3 == param_2) &&
            ((*(short *)(pbVar7 + 10) == 0 || (temp_v4 = FUN_002c09d0(), temp_v4 != 0)))) &&
           ((*(short *)(pbVar7 + 0xc) == 0 || (temp_v4 = FUN_002c09d0(), temp_v4 == 0)))) {
          return temp_v1 + temp_v5 * 0xa0;
        }
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < temp_v2);
    }
  }
  return temp_v1;
}
