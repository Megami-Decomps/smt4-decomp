/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c1c1c` (_code @ 0x2c1c1c, 0xfc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern unsigned int DAT_004e246c; /* 0x4e246c */
extern int DAT_004e316c; /* 0x4e316c */

/* Supplied declaration required: FUN_002c5300. */
/* Supplied declaration required: nw_snd_SoundHeap_Create. */
extern unsigned int nw_snd_SoundHeap_SaveState(int);


unsigned int FUN_002c1c1c(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  if (param_1 < 4) {
    temp_v0 = param_1 * 0x50;
    if (*(int *)(temp_v0 + 0x4e2434) == 0) {
      temp_v1 = 0x10000;
      FUN_002c5300(0x10000,0x100,0,param_2,1);
      *(unsigned int *)(temp_v0 + 0x4e2464) = temp_v1;
      nw_snd_SoundHeap_Create(temp_v0 + 0x4e2424,temp_v1,param_2);
      (&DAT_004e246c)[param_1 * 0x14] = 0x40;
      temp_v1 = nw_snd_SoundHeap_SaveState(temp_v0 + 0x4e2424);
      *(unsigned int *)(temp_v0 + 0x4e2468) = temp_v1;
      temp_v2 = 0;
      while (*(int *)(temp_v2 * 0x50 + 0x4e2434) == 0) {
        temp_v2 = temp_v2 + 1;
        if ((int)temp_v2 >= 4) {
          return 1;
        }
      }
      if (temp_v2 == 0xffffffff) {
        DAT_004e316c = 0;
        return 1;
      }
      if (temp_v2 >= 4) {
        return 1;
      }
      temp_v0 = temp_v2 * 0x50;
      if (*(int *)(temp_v0 + 0x4e2434) == 0) {
        return 1;
      }
      DAT_004e316c = temp_v0 + 0x4e2424;
      *(char *)(temp_v0 + 0x4e2470) = (char)temp_v2;
      return 1;
    }
  }
  return 0;
}
