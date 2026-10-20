/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00312c6c` (_code @ 0x312c6c, 0xf8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(int);

extern unsigned int FUN_002451ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0028dcb0. */
extern unsigned int FUN_002939f4(void);
extern int FUN_00296cc8(unsigned int);
extern int FUN_002c09f4(unsigned int);
extern int FUN_002c0c74(unsigned int);
extern int FUN_002c0cc4(unsigned int);


unsigned int FUN_00312c6c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v6 = 0;
  if (temp_v0 != 1) {
    if (temp_v0 != 2) {
      if (temp_v0 == 3) {
        temp_v6 = FUN_002939f4();
        temp_v6 = FUN_002451ac(temp_v6,0xc);
      }
    }
    else {
      temp_v6 = FUN_002939f4();
      temp_v6 = FUN_002451ac(temp_v6,0xb);
    }
  }
  else {
    temp_v6 = FUN_002939f4();
    temp_v6 = FUN_002451ac(temp_v6,10);
  }
  temp_v1 = FUN_002c0cc4(temp_v6);
  temp_v2 = FUN_002c0c74(temp_v6);
  temp_v3 = FUN_002c09f4(99);
  temp_v0 = 0;
  temp_v7 = 0;
  temp_v4 = 0;
  if (temp_v4 < temp_v2) {
    do {
      temp_v5 = (unsigned int)*(unsigned short *)(temp_v1 + temp_v4 * 2);
      if (temp_v5 != 0) {
        temp_v0 = temp_v0 + temp_v5;
      }
      if (temp_v5 != 0 && temp_v3 < temp_v0) {
        temp_v7 = temp_v4 + 1;
        break;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < temp_v2);
  }
  FUN_0028dcb0(temp_v7);
  return 1;
}

} /* extern "C" */
