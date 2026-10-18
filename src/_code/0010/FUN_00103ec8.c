/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103ec8` (_code @ 0x103ec8, 0x94 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_0010d6b4; /* 0x10d6b4 */
extern unsigned char LAB_0010e924; /* 0x10e924 */
extern unsigned char DAT_00465198; /* 0x465198 */
extern unsigned char DAT_00465199; /* 0x465199 */
extern unsigned int DAT_0046519c; /* 0x46519c */
extern unsigned int DAT_004651a4; /* 0x4651a4 */
extern unsigned int DAT_004e4138; /* 0x4e4138 */

/* Supplied declaration required: FUN_00110110. */
/* Supplied declaration required: FUN_00110124. */
/* Supplied declaration required: FUN_00110838. */
/* Supplied declaration required: FUN_002c38fc. */
/* Supplied declaration required: FUN_002c4040. */
/* Supplied declaration required: FUN_002c5220. */
/* Supplied declaration required: FUN_002c5434. */
extern int FUN_002c55b4(void);
extern int FUN_002c55c4(void);


unsigned int FUN_00103ec8(void)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 1;
  FUN_002c5220(&DAT_0046519c,0);
  FUN_002c5220(&DAT_004651a4,0);
  FUN_002c38fc(&DAT_004e4138);
  DAT_00465198 = 1;
  FUN_002c5434();
  DAT_00465199 = 1;
  FUN_002c4040(&DAT_0046519c);
  FUN_002c4040(&DAT_004651a4);
  FUN_00110124(&LAB_0010e924,0);
  FUN_00110110(&LAB_0010d6b4,0);
  FUN_00110838(1);
  temp_v0 = FUN_002c55c4();
  if ((temp_v0 != 0) || (temp_v0 = FUN_002c55b4(), temp_v0 != 0)) {
    temp_v1 = 0;
  }
  return temp_v1;
}
