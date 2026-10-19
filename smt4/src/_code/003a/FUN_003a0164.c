/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a0164` (_code @ 0x3a0164, 0x120 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00230f44(unsigned short *);
/* Supplied declaration required: FUN_002ae238. */
extern unsigned int FUN_002ae3c0(unsigned int);
/* Supplied declaration required: FUN_002b45e8. */
/* Supplied declaration required: FUN_002b4670. */


int FUN_003a0164(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  
  temp_v4 = (unsigned int)*param_1;
  temp_v3 = 0;
  temp_v0 = FUN_002ae3c0(temp_v4);
  switch(temp_v0) {
  case 0:
    FUN_002ae238();
    temp_v3 = (unsigned int)*(unsigned char *)(temp_v4 + 0x55);
    break;
  case 1:
    FUN_002b4670();
    temp_v3 = *(unsigned int *)(temp_v4 + 0x70) & 0xff;
    break;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    FUN_002b45e8();
    temp_v3 = (unsigned int)*(unsigned short *)(temp_v4 + 0xa6);
  }
  temp_v4 = (unsigned int)*param_2;
  temp_v5 = 0;
  temp_v0 = FUN_002ae3c0(temp_v4);
  switch(temp_v0) {
  case 0:
    FUN_002ae238();
    temp_v5 = (unsigned int)*(unsigned char *)(temp_v4 + 0x55);
    break;
  case 1:
    FUN_002b4670();
    temp_v5 = *(unsigned int *)(temp_v4 + 0x70) & 0xff;
    break;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    FUN_002b45e8();
    temp_v5 = (unsigned int)*(unsigned short *)(temp_v4 + 0xa6);
  }
  temp_v1 = temp_v5 - temp_v3;
  if (temp_v1 == 0) {
    temp_v1 = FUN_00230f44(param_1);
    temp_v2 = FUN_00230f44(param_2);
    temp_v1 = temp_v1 - temp_v2;
  }
  return temp_v1;
}
