/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e49fc` (_code @ 0x2e49fc, 0x1a0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_0014bd84(unsigned int);
/* Supplied declaration required: FUN_0015f858. */
/* Supplied declaration required: FUN_00180118. */
extern unsigned int FUN_00236038(unsigned int);
extern unsigned int FUN_002c1ce4(int, unsigned int);
/* Supplied declaration required: FUN_002e342c. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_003180c4. */
/* Supplied declaration required: FUN_00359974. */


unsigned int FUN_002e49fc(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [132];
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_00236038(1);
  FUN_002e6354(temp_v3,0x80);
  switch(temp_v0) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
    FUN_0015f858(temp_v1,1);
    FUN_002e342c(temp_v3,temp_v1);
    FUN_003180c4(temp_v0,temp_v3);
    break;
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    temp_v1 = temp_v1 & 0xffff;
    FUN_00180118(temp_v1);
    FUN_002e342c(temp_v3,temp_v1);
    FUN_003180c4(temp_v0,temp_v3);
    break;
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
    temp_v2 = FUN_002c1ce4((int)(short)temp_v1,0);
    FUN_002e342c(temp_v3,temp_v2);
    FUN_003180c4(temp_v0,temp_v3);
    break;
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
    temp_v2 = FUN_0014bd84(temp_v1);
    FUN_002e342c(temp_v3,temp_v2);
    FUN_003180c4(temp_v0,temp_v3);
    break;
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
    FUN_00359974(temp_v0,temp_v1,0xffffffff,0);
  }
  return 1;
}
