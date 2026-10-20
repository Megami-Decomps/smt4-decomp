/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00215b5c` (_code @ 0x215b5c, 0x8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0029f848(int, unsigned int, int, int, int, int);
int rt_memcpy(int, unsigned int, unsigned int);

extern int g_statusDown; /* 0x44e190 */

/* Supplied declaration required: FUN_0029f848. */
/* Supplied declaration required: rt_memcpy. */


void FUN_00215b5c(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = g_statusDown;
  if (param_2 >= 0x11) {
    return;
  }
  *(unsigned int *)(g_statusDown + 0x4c2) = 0;
  *(unsigned int *)(temp_v0 + 0x4c6) = 0;
  *(unsigned int *)(temp_v0 + 0x4ca) = 0;
  *(unsigned int *)(temp_v0 + 0x4ce) = 0;
  *(unsigned int *)(temp_v0 + 0x482) = 0;
  *(unsigned int *)(temp_v0 + 0x486) = 0;
  *(unsigned int *)(temp_v0 + 0x48a) = 0;
  *(unsigned int *)(temp_v0 + 0x48e) = 0;
  rt_memcpy(temp_v0 + 0x482,param_1,param_2 << 1);
  if (param_2 != 0) {
    temp_v1 = param_2 & 1;
  }
  else {
    temp_v1 = 0;
  }
  temp_v3 = 0;
  if ((param_2 != 0 && temp_v1 != 0) && -1 < (int)temp_v1) {
    do {
      if (*(short *)(temp_v0 + temp_v3 * 2 + 0x482) == 0) {
        FUN_0029f848(temp_v0 + 0x4d4,temp_v3,8,1,0,1);
        *(unsigned char *)(temp_v0 + 0x410) = 1;
        *(unsigned char *)(temp_v0 + 0x548) = 0;
        return;
      }
      temp_v3 = temp_v3 + 1;
    } while ((int)temp_v3 < (int)temp_v1);
  }
  while( 1 ) {
    temp_v3 = temp_v1;
    if (((int)param_2 <= (int)temp_v3) || (temp_v2 = temp_v0 + temp_v3 * 2, *(short *)(temp_v2 + 0x482) == 0))
    {
      FUN_0029f848(temp_v0 + 0x4d4,temp_v3,8,1,0,1);
      *(unsigned char *)(temp_v0 + 0x410) = 1;
      *(unsigned char *)(temp_v0 + 0x548) = 0;
      return;
    }
    if (*(short *)(temp_v2 + 0x484) == 0) break;
    temp_v1 = temp_v3 + 2;
  }
  temp_v3 = temp_v3 + 1;
  FUN_0029f848(temp_v0 + 0x4d4,temp_v3,8,1,0,1);
  *(unsigned char *)(temp_v0 + 0x410) = 1;
  *(unsigned char *)(temp_v0 + 0x548) = 0;
  return;
}

} /* extern "C" */
