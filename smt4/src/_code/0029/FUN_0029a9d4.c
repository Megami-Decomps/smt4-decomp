/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029a9d4` (_code @ 0x29a9d4, 0x128 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00283ebc. */
extern int FUN_00292f28(unsigned int);
/* Supplied declaration required: FUN_002ae164. */
/* Supplied declaration required: FUN_002ae584. */
extern int FUN_002b63ac(void);


void FUN_0029a9d4(unsigned int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  int temp_v4;
  
  temp_v0 = param_1;
  FUN_002ae164();
  if (temp_v0 != 0) {
    if (param_2 != 0) {
      temp_v1 = FUN_002b63ac();
      temp_v2 = 0;
      do {
        temp_v4 = temp_v1 + temp_v2 * 2;
        if (*(unsigned short *)(temp_v4 + 0x34) == param_1) {
          temp_v3 = *(unsigned char *)(temp_v2 + temp_v1 + 0x44);
          FUN_00283ebc(temp_v0,temp_v3,4);
          return;
        }
        if (*(unsigned short *)(temp_v4 + 0x36) == param_1) {
          temp_v3 = *(unsigned char *)(temp_v2 + temp_v1 + 0x45);
          FUN_00283ebc(temp_v0,temp_v3,4);
          return;
        }
        temp_v2 = temp_v2 + 2;
      } while (temp_v2 < 8);
      temp_v3 = 0;
      FUN_00283ebc(temp_v0,temp_v3,4);
    }
    else {
      temp_v1 = FUN_00292f28(0xc);
      if (temp_v1 != 0) {
        FUN_002ae584();
      }
      temp_v1 = FUN_00292f28(0xd);
      if (temp_v1 != 0) {
        FUN_002ae584();
      }
      temp_v1 = FUN_00292f28(0xe);
      if (temp_v1 != 0) {
        FUN_002ae584();
      }
      temp_v1 = FUN_00292f28(0xf);
      if (temp_v1 != 0) {
        FUN_002ae584();
      }
    }
  }
  return;
}
