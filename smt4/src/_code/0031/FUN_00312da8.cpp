/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00312da8` (_code @ 0x312da8, 0xd0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(unsigned int);
int FUN_00296cc8(int);
int FUN_002c0c74(unsigned int);

extern unsigned int FUN_002451ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0028dcb0. */
extern unsigned int FUN_002939f4(void);
/* Supplied declaration required: FUN_00296cc8. */
/* Supplied declaration required: FUN_002c0c74. */
extern int FUN_002c0cc4(void);


unsigned int FUN_00312da8(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v1 = FUN_00296cc8(1);
  temp_v2 = FUN_002939f4();
  temp_v2 = FUN_002451ac(temp_v2,0xe);
  temp_v3 = FUN_002c0cc4();
  FUN_002c0c74(temp_v2);
  temp_v4 = 0xffffffff;
  switch(temp_v1) {
  case 0:
    temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + temp_v0 * 0xc);
    break;
  case 1:
    temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + temp_v0 * 0xc + 2);
    break;
  case 2:
    temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + temp_v0 * 0xc + 4);
    break;
  case 3:
    temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + temp_v0 * 0xc + 6);
    break;
  case 4:
    temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + temp_v0 * 0xc + 8);
    break;
  case 5:
    temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + temp_v0 * 0xc + 10);
  }
  FUN_0028dcb0(temp_v4);
  return 1;
}

} /* extern "C" */
