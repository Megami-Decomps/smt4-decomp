/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cb278` (_code @ 0x2cb278, 0x1a0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001643b4(int, int);

extern int DAT_0057f108; /* 0x57f108 */

/* Supplied declaration required: FUN_001643b4. */
extern int FUN_002c2c68(unsigned int);
extern int FUN_00348ed0(unsigned int);


void FUN_002cb278(unsigned int param_1,int param_2)

{
/* irregular: 1 goto(s); 1 native warning(s); review required */
  int temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = DAT_0057f108;
  temp_v2 = FUN_002c2c68(param_1);
  temp_v3 = FUN_00348ed0(param_1);
  if (temp_v3 < temp_v2) {
    if (param_2 == 0) {
      temp_v1 = FUN_001643b4(0x14,0x572);
      *(unsigned short *)(temp_v0 + 0x1b34) = temp_v1;
      temp_v1 = FUN_001643b4(0x14,0x570);
      *(unsigned short *)(temp_v0 + 0x1b36) = temp_v1;
      temp_v1 = FUN_001643b4(0x14,0x571);
      *(unsigned short *)(temp_v0 + 0x1b38) = temp_v1;
LAB_002cb390:
      temp_v3 = 0;
      temp_v2 = FUN_00348ed0(param_1);
      if (0 < temp_v2) {
        do {
          temp_v2 = FUN_002c2c68(param_1);
          if (temp_v2 <= temp_v3) break;
          temp_v1 = FUN_001643b4(0x14,temp_v3 + 0x40f);
          temp_v2 = temp_v3 * 2;
          temp_v3 = temp_v3 + 1;
          *(unsigned short *)(temp_v0 + temp_v2 + 0x1b3e) = temp_v1;
          temp_v2 = FUN_00348ed0(param_1);
        } while (temp_v3 < temp_v2);
      }
      temp_v1 = FUN_001643b4(0x14,0x576);
      *(unsigned short *)(temp_v0 + 0x1b3a) = temp_v1;
      temp_v1 = FUN_001643b4(0x14,0x577);
      *(unsigned short *)(temp_v0 + 0x1b3c) = temp_v1;
      return;
    }
    temp_v1 = FUN_001643b4(0x14,0x56d);
    *(unsigned short *)(temp_v0 + 0x1b34) = temp_v1;
    temp_v1 = FUN_001643b4(0x14,0x56e);
    *(unsigned short *)(temp_v0 + 0x1b36) = temp_v1;
    temp_v1 = FUN_001643b4(0x14,0x56f);
    *(unsigned short *)(temp_v0 + 0x1b38) = temp_v1;
  }
  else if (param_2 == 0) goto LAB_002cb390;
  temp_v3 = 0;
  temp_v2 = FUN_00348ed0(param_1);
  if (0 < temp_v2) {
    do {
      temp_v2 = FUN_002c2c68(param_1);
      if (temp_v2 <= temp_v3) {
        return;
      }
      temp_v1 = FUN_001643b4(0x14,temp_v3 + 0x40d);
      temp_v2 = temp_v3 * 2;
      temp_v3 = temp_v3 + 1;
      *(unsigned short *)(temp_v0 + temp_v2 + 0x1b3e) = temp_v1;
      temp_v2 = FUN_00348ed0(param_1);
    } while (temp_v3 < temp_v2);
  }
  return;
}

} /* extern "C" */
