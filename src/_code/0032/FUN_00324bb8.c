/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00324bb8` (_code @ 0x324bb8, 0x148 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0024ba44. */
extern unsigned int FUN_0024baec(void);
extern unsigned int FUN_00254484(void);
/* Supplied declaration required: FUN_002ac068. */
extern unsigned int FUN_002b47f4(unsigned int);
extern int FUN_002c0cc4(void);


int FUN_00324bb8(int param_1,unsigned int param_2,int param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v4 = 0x26;
  temp_v3 = 0;
  switch(param_2) {
  case 0:
    break;
  case 1:
    temp_v3 = 3;
    break;
  case 2:
    temp_v3 = 6;
    break;
  case 3:
    temp_v3 = 9;
    break;
  case 4:
    temp_v3 = 0xc;
    break;
  case 5:
    temp_v3 = 0xf;
    break;
  case 6:
    temp_v3 = 0x12;
    break;
  case 7:
    temp_v3 = 0x15;
    break;
  case 8:
    temp_v3 = 0x18;
    break;
  case 9:
    temp_v3 = 0x1b;
    break;
  case 10:
    temp_v3 = 0x1e;
    break;
  case 0xb:
    temp_v3 = 0x21;
    break;
  case 0xc:
    temp_v3 = 0x24;
    break;
  default:
    return 0;
  }
  if (param_4 == 1) {
    temp_v3 = temp_v3 + 1;
  }
  else if (param_4 == 6) {
    temp_v3 = temp_v3 + 2;
  }
  temp_v0 = FUN_002b47f4(7);
  temp_v1 = FUN_0024baec();
  if (temp_v1 < 0x27) {
    temp_v4 = 0;
  }
  FUN_0024ba44(temp_v0,temp_v4);
  temp_v1 = FUN_00254484();
  if (temp_v1 <= temp_v3) {
    temp_v3 = 0;
  }
  FUN_002ac068(temp_v0,temp_v3);
  temp_v2 = FUN_002c0cc4();
  temp_v3 = (unsigned int)(param_1 != 0);
  if (param_3 != 0) {
    temp_v3 = 1 - temp_v3;
  }
  return temp_v2 + temp_v3 * 0x19c;
}
