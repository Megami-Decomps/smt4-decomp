/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037dbc8` (_code @ 0x37dbc8, 0x260 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_0016a0f0. */
/* Supplied declaration required: FUN_001ad9b4. */
extern int FUN_001ada74(unsigned int);
extern unsigned int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_00275bb0. */
/* Supplied declaration required: FUN_00275fe4. */
/* Supplied declaration required: FUN_002852f0. */
/* Supplied declaration required: FUN_002c76c0. */
/* Supplied declaration required: FUN_002cd8fc. */
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_0031bbe0. */
extern int FUN_003216b8(void);
/* Supplied declaration required: FUN_003283ac. */
/* Supplied declaration required: FUN_00336de4. */
/* Supplied declaration required: FUN_00341ecc. */
extern int FUN_0035fcbc(void);
/* Supplied declaration required: FUN_0035fd38. */
extern unsigned int FUN_00375848(void);
/* Supplied declaration required: FUN_003deea4. */
/* Supplied declaration required: FUN_003fd63c. */
/* Supplied declaration required: FUN_00417a60. */
extern int FUN_004186a4(void);
extern unsigned int FUN_004186e0(void);
/* Supplied declaration required: FUN_004da2f8. */


unsigned int FUN_0037dbc8(void)

{
/* irregular: 17 native warning(s); review required */
  short temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  
  temp_v1 = FUN_00236038(0);
  temp_v2 = FUN_002deb84();
  if (temp_v2 != 0) {
    FUN_0016a0f0(0x1e);
    FUN_001ad9b4(temp_v1);
    temp_v2 = FUN_00275bb0(0);
    if (temp_v2 != 0) {
      if (temp_v2 == 1) {
        FUN_002c76c0(0xffffffff);
        FUN_002852f0(0);
        FUN_001681cc(0x92);
        FUN_00275bb0(3);
        FUN_0031bbe0(1);
        FUN_00341ecc(1);
        temp_v4 = FUN_00275bb0(2);
        if (-1 < (int)temp_v4) {
          temp_v2 = FUN_003216b8();
          if (temp_v2 == 0) {
            FUN_002cd8fc();
          }
          if ((temp_v4 != 0) && (temp_v5 = FUN_00375848(), temp_v5 != temp_v4)) {
            FUN_00336de4(temp_v4 & 0xffff,0);
          }
          FUN_0035fd38(1);
        }
        temp_v2 = FUN_004186a4();
        if ((temp_v2 != 0) && (temp_v4 = FUN_004186e0(), temp_v4 == temp_v1)) {
          FUN_004da2f8();
        }
      }
      FUN_00417a60(temp_v1);
      FUN_003deea4(0);
      FUN_003283ac(1);
      return 1;
    }
    temp_v2 = FUN_0035fcbc();
    if (temp_v2 == 0) {
      FUN_0031bbe0(0);
      FUN_00341ecc(0);
      temp_v2 = FUN_003216b8();
      if (temp_v2 != 0) {
        temp_v3 = FUN_00375848();
        FUN_00275fe4(2,temp_v3);
      }
      else {
        FUN_00275fe4(2,0xffffffff);
      }
      FUN_0035fd38(0);
      FUN_00275fe4(3,0);
      FUN_002c76c0(1);
      FUN_00275fe4(0,1);
    }
  }
  else {
    FUN_00275fe4(0);
    temp_v4 = temp_v1;
    FUN_001ad9b4();
    temp_v2 = FUN_001ada74(temp_v1);
    if (temp_v2 == 0) {
      FUN_003283ac(0);
      return 1;
    }
    FUN_00275fe4(0);
    temp_v2 = 0;
    do {
      temp_v6 = temp_v4 + temp_v2 * 2;
      temp_v0 = *(short *)(temp_v6 + 0xe0);
      if (temp_v0 != 0) {
        FUN_003fd63c(temp_v0,1);
      }
      temp_v0 = *(short *)(temp_v6 + 0xe6);
      if (temp_v0 != 0) {
        FUN_003fd63c(temp_v0,0,1);
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 3);
  }
  return 0;
}
