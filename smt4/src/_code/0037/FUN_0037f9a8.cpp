/* NON_MATCHING: vptr global is restored; embedded member setup, byte test and pool layout differ. */
#include "romwright_types.h"

extern "C" {

int linkListEraseObject(unsigned int, int *);
int FUN_002c4038(int *);
int wordsFlag8Reset(int *);
int wordsFlagReset(int *);
int nw_snd_internal_driver_SequenceSoundPlayer_FinishPlayer(int *);

extern unsigned char DAT_00421ddc; /* 0x421ddc */

/* Supplied declaration required: linkListEraseObject. */
extern unsigned int FUN_002a2174(void);
/* Supplied declaration required: FUN_002c4038. */
/* Supplied declaration required: wordsFlag8Reset. */
/* Supplied declaration required: wordsFlagReset. */
/* Supplied declaration required: nw_snd_internal_driver_SequenceSoundPlayer_FinishPlayer. */


extern unsigned int DAT_00421e60[];
int * FUN_0037f9a8(int *param_1)

{
  int param_2;
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  param_1[0x11] = ((int)DAT_00421e60) + 0x34;
  *param_1 = (int)DAT_00421e60;
  param_1[0x14] = (int)DAT_00421e60 + 0x48;
  *(unsigned char *)((int)param_1 + 0xf) = 1;
  nw_snd_internal_driver_SequenceSoundPlayer_FinishPlayer(param_1);
  if ((char)param_1[3] != '\0') {
    temp_v0 = FUN_002a2174();
    linkListEraseObject(temp_v0,param_1 + 0x11);
    *(unsigned char *)(param_1 + 3) = 0;
  }
  temp_v1 = 0;
  do {
    wordsFlag8Reset(param_1 + temp_v1 * 3 + 0x4c);
    wordsFlagReset(param_1 + temp_v1 * 4 + 0x3c);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 4);
  FUN_002c4038(param_1);
  *param_1 = (int)&DAT_00421ddc;
  return param_1;
}

} /* extern "C" */
