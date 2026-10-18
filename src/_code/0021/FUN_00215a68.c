/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00215a68` (_code @ 0x215a68, 0xf4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern int DAT_0044e190; /* 0x44e190 */

/* Supplied declaration required: FUN_0029fae8. */
/* Supplied declaration required: FUN_002c5ff4. */


void FUN_00215a68(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = DAT_0044e190;
  *(unsigned int *)(DAT_0044e190 + 0x4c2) = 0;
  *(unsigned int *)(temp_v0 + 0x4c6) = 0;
  *(unsigned int *)(temp_v0 + 0x4ca) = 0;
  *(unsigned int *)(temp_v0 + 0x4ce) = 0;
  *(unsigned int *)(temp_v0 + 0x482) = 0;
  *(unsigned int *)(temp_v0 + 0x486) = 0;
  *(unsigned int *)(temp_v0 + 0x48a) = 0;
  *(unsigned int *)(temp_v0 + 0x48e) = 0;
  FUN_002c5ff4(temp_v0 + 0x482,param_1,param_2 << 1);
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
        FUN_0029fae8(temp_v0 + 0x4d4,temp_v3,8,1,0,1);
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
      FUN_0029fae8(temp_v0 + 0x4d4,temp_v3,8,1,0,1);
      *(unsigned char *)(temp_v0 + 0x410) = 1;
      *(unsigned char *)(temp_v0 + 0x548) = 0;
      return;
    }
    if (*(short *)(temp_v2 + 0x484) == 0) break;
    temp_v1 = temp_v3 + 2;
  }
  temp_v3 = temp_v3 + 1;
  FUN_0029fae8(temp_v0 + 0x4d4,temp_v3,8,1,0,1);
  *(unsigned char *)(temp_v0 + 0x410) = 1;
  *(unsigned char *)(temp_v0 + 0x548) = 0;
  return;
}
