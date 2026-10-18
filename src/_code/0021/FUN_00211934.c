/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00211934` (_code @ 0x211934, 0x1a0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_0028ebd8(int, unsigned int);
/* Supplied declaration required: FUN_00295904. */
extern unsigned int FUN_00296f60(unsigned int);
/* Supplied declaration required: FUN_0029f088. */
/* Supplied declaration required: FUN_002bcff0. */
/* Supplied declaration required: FUN_002bd25c. */
extern unsigned int FUN_002be828(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bf86c. */
/* Supplied declaration required: FUN_002c4b30. */


unsigned int FUN_00211934(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [132];
  
  temp_v0 = FUN_00296f60(0);
  temp_v1 = FUN_00296f60(1);
  FUN_002c4b30(temp_v3,0x80);
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
    temp_v2 = FUN_002be828(temp_v1,1);
    FUN_002bf86c(temp_v3,temp_v2);
    FUN_00295904(temp_v0,temp_v3);
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
    FUN_002bd25c(temp_v1);
    FUN_002bf86c(temp_v3,temp_v1);
    FUN_00295904(temp_v0,temp_v3);
    break;
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
    temp_v2 = FUN_0028ebd8((int)(short)temp_v1,1);
    FUN_002bf86c(temp_v3,temp_v2);
    FUN_00295904(temp_v0,temp_v3);
    break;
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
    FUN_002bcff0(temp_v1);
    FUN_002bf86c(temp_v3,temp_v1);
    FUN_00295904(temp_v0,temp_v3);
    break;
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
    FUN_0029f088(temp_v0,temp_v1,0xffffffff,0);
  }
  return 1;
}
