/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bce30` (_code @ 0x2bce30, 0xdc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00433158; /* 0x433158 */

extern int FUN_002b8fdc(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002b9024. */
/* Supplied declaration required: FUN_002c0c74. */
extern int FUN_002c0cc4(void);
extern unsigned int FUN_002c0cec(unsigned int, unsigned int);


int FUN_002bce30(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  FUN_002b9024();
  if (param_1 != 0) {
    temp_v4 = (unsigned int)*(unsigned char *)(param_1 + 2);
    temp_v0 = FUN_002b8fdc(DAT_00433158,temp_v4);
    if (temp_v0 == 0) {
      temp_v1 = FUN_002c0cec(1,0);
      temp_v0 = FUN_002c0cc4();
      temp_v2 = FUN_002c0c74(temp_v1);
      if ((temp_v4 < temp_v2) && (temp_v0 = temp_v0 + temp_v4 * 0x28, param_2 != 0)) {
        temp_v0 = temp_v0 + 0x10;
      }
      return temp_v0;
    }
  }
  else {
    temp_v0 = FUN_002b8fdc(DAT_00433158,0);
    if (temp_v0 == 0) {
      temp_v1 = FUN_002c0cec(1,0);
      temp_v0 = FUN_002c0cc4();
      temp_v3 = FUN_002c0c74(temp_v1);
      if ((temp_v3 != 0) && (param_2 != 0)) {
        return temp_v0 + 0x10;
      }
      return temp_v0;
    }
  }
  return temp_v0 + 2;
}
