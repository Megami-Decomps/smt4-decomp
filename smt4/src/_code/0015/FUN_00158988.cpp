/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00158988` (_code @ 0x158988, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015c000(unsigned int, unsigned int);
int FUN_0015c054(unsigned int, unsigned int, int);
int FUN_0015c4fc(int, unsigned int, unsigned int);
int FUN_002a2164(unsigned int, int);
int nw_snd_internal_driver_SequenceTrack_Open(int);

/* Supplied declaration required: FUN_0015c000. */
/* Supplied declaration required: FUN_0015c054. */
/* Supplied declaration required: FUN_0015c4fc. */
/* Supplied declaration required: FUN_002a2164. */
extern unsigned int FUN_002a2174(void);
/* Supplied declaration required: nw_snd_internal_driver_SequenceTrack_Open. */


void FUN_00158988(int param_1,unsigned int param_2,int param_3,int param_4,int param_5,
                 unsigned int param_6)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = *(int *)(param_1 + 0x8c);
  if (temp_v1 != 0) {
    FUN_0015c4fc(temp_v1,param_2,param_6);
    nw_snd_internal_driver_SequenceTrack_Open(temp_v1);
    temp_v2 = 0;
    do {
      FUN_0015c000(param_1 + temp_v2 * 0xc + 0x130,*(unsigned int *)(param_3 + temp_v2 * 4));
      FUN_0015c054(param_1 + temp_v2 * 0x10 + 0xf0,*(unsigned int *)(param_4 + temp_v2 * 4),
                   (int)*(char *)(param_5 + temp_v2));
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 4);
    temp_v0 = FUN_002a2174();
    FUN_002a2164(temp_v0,param_1 + 0x44);
    *(unsigned char *)(param_1 + 0xc) = 1;
  }
  return;
}

} /* extern "C" */
