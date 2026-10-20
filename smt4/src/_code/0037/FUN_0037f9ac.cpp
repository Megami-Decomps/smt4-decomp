/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037f9ac` (_code @ 0x37f9ac, 0x90 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a215c(unsigned int, int *);
int FUN_002c4038(int *);
int FUN_0037b140(int *);
int FUN_0037bd18(int *);
int nw_snd_internal_driver_SequenceSoundPlayer_FinishPlayer(int *);

extern unsigned char DAT_00421ddc; /* 0x421ddc */

/* Supplied declaration required: FUN_002a215c. */
extern unsigned int FUN_002a2174(void);
/* Supplied declaration required: FUN_002c4038. */
/* Supplied declaration required: FUN_0037b140. */
/* Supplied declaration required: FUN_0037bd18. */
/* Supplied declaration required: nw_snd_internal_driver_SequenceSoundPlayer_FinishPlayer. */


int * FUN_0037f9ac(int *param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  param_1[0x11] = param_2 + 0x34;
  *param_1 = param_2;
  param_1[0x14] = param_2 + 0x48;
  *(unsigned char *)((int)param_1 + 0xf) = 1;
  nw_snd_internal_driver_SequenceSoundPlayer_FinishPlayer(param_1);
  if ((char)param_1[3] != '\0') {
    temp_v0 = FUN_002a2174();
    FUN_002a215c(temp_v0,param_1 + 0x11);
    *(unsigned char *)(param_1 + 3) = 0;
  }
  temp_v1 = 0;
  do {
    FUN_0037b140(param_1 + temp_v1 * 3 + 0x4c);
    FUN_0037bd18(param_1 + temp_v1 * 4 + 0x3c);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 4);
  FUN_002c4038(param_1);
  *param_1 = (int)&DAT_00421ddc;
  return param_1;
}

} /* extern "C" */
