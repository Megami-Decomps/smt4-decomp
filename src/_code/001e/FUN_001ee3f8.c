/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ee3f8` (_code @ 0x1ee3f8, 0x1a4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp48; /* 0x48: local_48 */
} param_5_stack;

extern unsigned int DAT_00433158; /* 0x433158 */

extern int FUN_002a63f8(unsigned int);
extern int FUN_002aec20(unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002aec80. */
/* Supplied declaration required: FUN_002b087c. */
/* Supplied declaration required: FUN_002b9364. */
/* Supplied declaration required: FUN_002bf558. */
/* Supplied declaration required: FUN_00389fec. */


void FUN_001ee3f8(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,int param_5)

{
/* irregular: 5 native warning(s); review required */
  unsigned short temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  char temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  temp_v6 = 0x17;
  temp_v4 = '\0';
  temp_v3 = param_1;
  if (param_5 != 0) {
    if ((int)param_1 < 0) {
      temp_v3 = 0;
    }
    else {
      temp_v3 = param_1 & 0xffff;
      FUN_002b9364();
      temp_v0 = param_1;
      FUN_002b087c();
      if (temp_v3 == 0) {
        return;
      }
      if ((*(unsigned char *)(temp_v0 + 3) & 1) != 0) {
        temp_v3 = (unsigned int)*(short *)(temp_v0 + 0x88);
        temp_v6 = 0x23;
        if ((int)temp_v3 >= 0x81) {
          return;
        }
      }
      else {
        temp_v3 = *(unsigned short *)(temp_v3 + 0x90) + 1;
        if (temp_v3 >= 0x266) {
          return;
        }
      }
      temp_v4 = *(char *)(temp_v0 + 0xa4);
    }
  }
  temp_v5 = 0x17;
  if ((param_5 != 0) && (-1 < (int)param_1)) {
    temp_v0 = param_1;
    FUN_002b9364(temp_v0,param_1);
    if (temp_v0 == 0) {
      return;
    }
    temp_v1 = param_1;
    FUN_002b087c();
    if ((*(unsigned char *)(temp_v1 + 3) & 1) != 0) {
      temp_v5 = 0x23;
      if (*(short *)(temp_v1 + 0x88) >= 0x81) {
        return;
      }
    }
    else if (*(unsigned short *)(temp_v0 + 0x90) + 1 >= 0x266) {
      return;
    }
  }
  temp_v2 = FUN_002a63f8(temp_v5);
  if (temp_v2 != 0) {
    temp_v2 = FUN_002aec20(DAT_00433158,temp_v6,temp_v3,1);
    if (temp_v2 == 0) {
      if (temp_v4 == '\0') {
        FUN_002aec80(2,temp_v6,temp_v3 * 1000,param_2,param_3,param_4);
        return;
      }
      FUN_002bf558(2,temp_v6,temp_v4,param_2,param_3,param_4);
      return;
    }
    FUN_00389fec(DAT_00433158,param_1,2,temp_v3,0,param_2,param_3,param_4);
  }
  return;
}
