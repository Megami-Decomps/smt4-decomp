/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00206368` (_code @ 0x206368, 0x1bc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int pairSetFirstResetSecond(...);
int FUN_002bee58(int, int);

/* Supplied declaration required: pairSetFirstResetSecond. */
/* Supplied declaration required: FUN_002bee58. */


void FUN_00206368(int param_1,unsigned int param_2,unsigned short param_3,unsigned short param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  *(unsigned short *)(param_1 + 0x218c) = param_3;
  *(unsigned short *)(param_1 + 0x218e) = param_4;
  *(unsigned int *)(param_1 + 0x2184) = param_2;
  temp_v1 = 0;
  temp_v0 = 0;
  do {
    temp_v2 = temp_v1 + 1;
    temp_v0 = temp_v0 + 2;
    *(unsigned short *)(param_1 + temp_v1 * 2 + 0x21e4) = 0xffff;
    temp_v1 = temp_v1 + 2;
    *(unsigned short *)(param_1 + temp_v2 * 2 + 0x21e4) = 0xffff;
  } while (temp_v0 < 10);
  *(unsigned int *)(param_1 + 0x217c) = 0;
  *(unsigned int *)(param_1 + 0x2180) = 2;
  temp_v0 = 0;
  do {
    *(unsigned char *)(param_1 + temp_v0 * 0x8c + 0xa5) = 0;
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x3d);
  temp_v0 = 0;
  if (temp_v0 < *(short *)(param_1 + 0x218c)) {
    do {
      temp_v1 = param_1 + temp_v0 * 0x8c;
      if (*(int *)(param_1 + 0x2184) != 0) {
        pairSetFirstResetSecond(temp_v1 + 0x20,1);
        pairSetFirstResetSecond(temp_v1 + 0xb10,8);
        pairSetFirstResetSecond(temp_v1 + 0x1088,3);
        pairSetFirstResetSecond(temp_v1 + 0x1b78,0xfa7);
        temp_v3 = 0xfa1;
      }
      else {
        pairSetFirstResetSecond(temp_v1 + 0x20,0);
        pairSetFirstResetSecond(temp_v1 + 0xb10,7);
        pairSetFirstResetSecond(temp_v1 + 0x1088,2);
        pairSetFirstResetSecond(temp_v1 + 0x1b78,0xfa6);
        temp_v3 = 4000;
      }
      pairSetFirstResetSecond(temp_v1 + 0x1600,temp_v3);
      temp_v1 = param_1 + temp_v0 * 0x8c;
      FUN_002bee58(temp_v1 + 0x20,2);
      FUN_002bee58(temp_v1 + 0xb10,5);
      FUN_002bee58(temp_v1 + 0x1088,3);
      FUN_002bee58(temp_v1 + 0x1b78,10);
      pairSetFirstResetSecond(temp_v1 + 0x598,6);
      FUN_002bee58(temp_v1 + 0x598,1);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *(short *)(param_1 + 0x218c));
  }
  return;
}

} /* extern "C" */
