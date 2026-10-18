/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00191848` (_code @ 0x191848, 0x124 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0019f18c(unsigned int);
extern int FUN_0019f1a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001ad9b4. */
extern int FUN_001ada74(unsigned int);


unsigned int FUN_00191848(int param_1)

{
/* irregular: 4 goto(s); 1 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned short temp_v3;
  
  temp_v3 = 0;
  do {
    temp_v1 = temp_v3;
    FUN_001ad9b4();
    if (((temp_v1 != 0) && (*(char *)(temp_v1 + 6) == '\0')) &&
       (temp_v2 = FUN_0019f1a4(temp_v3,1), temp_v2 != 0)) {
      temp_v0 = *(short *)(temp_v1 + 0x124);
      temp_v2 = FUN_0019f18c(temp_v3);
      if ((temp_v2 == 0) && (temp_v0 != 0)) {
        switch(temp_v0) {
        case 1:
          if (*(char *)(param_1 + 0x18) == '\0') goto LAB_00191938;
          break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 0xe:
          if (*(char *)(param_1 + 0x18) == '\x01') goto LAB_00191938;
          break;
        case 9:
          if (*(char *)(param_1 + 0x18) == '\x02') goto LAB_00191938;
          break;
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
          if (*(char *)(param_1 + 0x18) == '\x03') goto LAB_00191938;
        }
      }
      else {
LAB_00191938:
        temp_v2 = FUN_001ada74(temp_v3);
        if (temp_v2 != 0) {
          return 1;
        }
      }
    }
    temp_v3 = temp_v3 + 1;
    if (temp_v3 >= 400) {
      return 0;
    }
  } while( 1 );
}
