/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001407ec` (_code @ 0x1407ec, 0xfc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern unsigned int DAT_0063e774; /* 0x63e774 */
extern int DAT_0063f500; /* 0x63f500 */

/* Supplied declaration required: FUN_001630d4. */
/* Supplied declaration required: nw_snd_SoundHeap_Create. */
extern unsigned int nw_snd_SoundHeap_SaveState(int);


unsigned int FUN_001407ec(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  if (param_1 < 4) {
    temp_v0 = param_1 * 0x70;
    if (*(int *)(temp_v0 + 0x63e71c) == 0) {
      temp_v1 = 0x10000;
      FUN_001630d4(0x10000,0x100,0,param_2,1);
      *(unsigned int *)(temp_v0 + 0x63e76c) = temp_v1;
      nw_snd_SoundHeap_Create(temp_v0 + 0x63e70c,temp_v1,param_2);
      (&DAT_0063e774)[param_1 * 0x1c] = 0x40;
      temp_v1 = nw_snd_SoundHeap_SaveState(temp_v0 + 0x63e70c);
      *(unsigned int *)(temp_v0 + 0x63e770) = temp_v1;
      temp_v2 = 0;
      while (*(int *)(temp_v2 * 0x70 + 0x63e71c) == 0) {
        temp_v2 = temp_v2 + 1;
        if ((int)temp_v2 >= 4) {
          return 1;
        }
      }
      if (temp_v2 == 0xffffffff) {
        DAT_0063f500 = 0;
        return 1;
      }
      if (temp_v2 >= 4) {
        return 1;
      }
      temp_v0 = temp_v2 * 0x70;
      if (*(int *)(temp_v0 + 0x63e71c) == 0) {
        return 1;
      }
      DAT_0063f500 = temp_v0 + 0x63e70c;
      *(char *)(temp_v0 + 0x63e778) = (char)temp_v2;
      return 1;
    }
  }
  return 0;
}
