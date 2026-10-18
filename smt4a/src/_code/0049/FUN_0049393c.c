/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049393c` (_code @ 0x49393c, 0x140 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00192550. */
/* Supplied declaration required: FUN_00192608. */
/* Supplied declaration required: FUN_00192690. */
extern unsigned int FUN_00192718(unsigned int);
extern int FUN_0049c9a0(unsigned short *);


int FUN_0049393c(unsigned short *param_1,unsigned short *param_2)

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
  temp_v0 = FUN_00192718(temp_v4);
  switch(temp_v0) {
  case 0:
    FUN_00192690();
    temp_v3 = (unsigned int)*(unsigned char *)(temp_v4 + 0x25);
    break;
  case 1:
  case 0xc:
    FUN_00192550();
    temp_v3 = *(unsigned int *)(temp_v4 + 0x44) & 0xff;
    break;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    FUN_00192608();
    temp_v3 = (unsigned int)*(unsigned short *)(temp_v4 + 0x7e);
  }
  temp_v4 = (unsigned int)*param_2;
  temp_v5 = 0;
  temp_v0 = FUN_00192718(temp_v4);
  switch(temp_v0) {
  case 0:
    FUN_00192690();
    temp_v5 = (unsigned int)*(unsigned char *)(temp_v4 + 0x25);
    break;
  case 1:
  case 0xc:
    FUN_00192550();
    temp_v5 = *(unsigned int *)(temp_v4 + 0x44) & 0xff;
    break;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    FUN_00192608();
    temp_v5 = (unsigned int)*(unsigned short *)(temp_v4 + 0x7e);
  }
  temp_v1 = temp_v3 - temp_v5;
  if (temp_v1 == 0) {
    temp_v1 = FUN_0049c9a0(param_1);
    temp_v2 = FUN_0049c9a0(param_2);
    temp_v1 = temp_v1 - temp_v2;
  }
  return temp_v1;
}
