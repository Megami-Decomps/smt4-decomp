/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029ef78` (_code @ 0x29ef78, 0x1f8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int padButtonIsPressed(int);
int bgmPlay(unsigned int, int, int);
int FUN_0021c118(...);
int soundChannelRequestIfEnabled(unsigned int, int, int);
int soundChannelStopAll(int);
int FUN_003d4c68(int);
int FUN_003de02c(int);

extern unsigned int *DAT_00588fc8; /* 0x588fc8 */

/* Supplied declaration required: jobStop. */
extern int padButtonRepeat(unsigned int);
/* Supplied declaration required: padButtonIsPressed. */
/* Supplied declaration required: bgmPlay. */
/* Supplied declaration required: FUN_0021c118. */
/* Supplied declaration required: soundChannelRequestIfEnabled. */
/* Supplied declaration required: soundChannelStopAll. */
/* Supplied declaration required: FUN_003d4c68. */
/* Supplied declaration required: FUN_003de02c. */


unsigned int FUN_0029ef78(void)

{
/* irregular: 8 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  
  puVar1 = DAT_00588fc8;
  if ((DAT_00588fc8[2] != 99) && (temp_v0 = padButtonIsPressed(2), temp_v0 != 0)) {
    puVar1[2] = 99;
  }
  temp_v0 = puVar1[2];
  if (temp_v0 == 0) {
    puVar1[2] = 1;
    puVar1[3] = 0;
    return 0;
  }
  if (temp_v0 != 1) {
    if (temp_v0 != 99) {
      return 0;
    }
    jobStop(*DAT_00588fc8,0);
    return 0xffffffff;
  }
  temp_v0 = padButtonRepeat(4);
  if (temp_v0 != 0) {
    temp_v0 = puVar1[4] - 1;
    if (temp_v0 >= 10) {
      temp_v0 = 0;
    }
    else if (temp_v0 < 0) {
      temp_v0 = 9;
    }
    else {
      temp_v0 = puVar1[4] - 1;
    }
    puVar1[4] = temp_v0;
  }
  temp_v0 = padButtonRepeat(3);
  if (temp_v0 != 0) {
    temp_v0 = puVar1[4] + 1;
    if (temp_v0 >= 10) {
      temp_v0 = 0;
    }
    else if (temp_v0 < 0) {
      temp_v0 = 9;
    }
    else {
      temp_v0 = puVar1[4] + 1;
    }
    puVar1[4] = temp_v0;
  }
  temp_v0 = padButtonIsPressed(0);
  if (temp_v0 == 0) {
    padButtonIsPressed(1);
    return 0;
  }
  switch(puVar1[4]) {
  case 0:
    FUN_003d4c68(0x100000f);
    break;
  case 1:
    FUN_003de02c(0x1e);
    break;
  case 2:
    temp_v1 = 0x1000003;
    soundChannelRequestIfEnabled(temp_v1,0,0x3c);
    break;
  case 3:
    temp_v1 = 0x1000006;
    soundChannelRequestIfEnabled(temp_v1,0,0x3c);
    break;
  case 4:
    soundChannelStopAll(0xf);
    break;
  case 5:
    temp_v1 = 0x1000008;
    bgmPlay(temp_v1,0,0x3c);
    break;
  case 6:
    temp_v1 = 0x1000005;
    bgmPlay(temp_v1,0,0x3c);
    break;
  case 7:
    temp_v1 = 0x100000f;
    FUN_0021c118(temp_v1,0xf);
    break;
  case 8:
    temp_v1 = 0x1000003;
    FUN_0021c118(temp_v1,0xf);
    break;
  case 9:
    FUN_0021c118(0x1000008,0xf);
  }
  return 0;
}

} /* extern "C" */
