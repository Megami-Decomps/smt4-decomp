/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103e4c` (_code @ 0x103e4c, 0x94 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_0010d620; /* 0x10d620 */
extern unsigned char LAB_0010e900; /* 0x10e900 */
extern unsigned char DAT_00465198; /* 0x465198 */
extern unsigned char DAT_00465199; /* 0x465199 */
extern unsigned int DAT_0046519c; /* 0x46519c */
extern unsigned int DAT_004651a4; /* 0x4651a4 */
extern unsigned int DAT_004e4138; /* 0x4e4138 */

/* Supplied declaration required: FUN_0011001c. */
/* Supplied declaration required: FUN_00110030. */
/* Supplied declaration required: FUN_00110744. */
/* Supplied declaration required: FUN_002c3b00. */
/* Supplied declaration required: FUN_002c4244. */
/* Supplied declaration required: FUN_002c541c. */
/* Supplied declaration required: FUN_002c5624. */
extern int FUN_002c57a4(void);
extern int FUN_002c57b4(void);


unsigned int FUN_00103e4c(void)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 1;
  FUN_002c541c(&DAT_0046519c,0);
  FUN_002c541c(&DAT_004651a4,0);
  FUN_002c3b00(&DAT_004e4138);
  DAT_00465198 = 1;
  FUN_002c5624();
  DAT_00465199 = 1;
  FUN_002c4244(&DAT_0046519c);
  FUN_002c4244(&DAT_004651a4);
  FUN_00110030(&LAB_0010e900,0);
  FUN_0011001c(&LAB_0010d620,0);
  FUN_00110744(1);
  temp_v0 = FUN_002c57b4();
  if ((temp_v0 != 0) || (temp_v0 = FUN_002c57a4(), temp_v0 != 0)) {
    temp_v1 = 0;
  }
  return temp_v1;
}
