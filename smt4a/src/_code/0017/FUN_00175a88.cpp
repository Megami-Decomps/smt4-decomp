/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00175a88` (_code @ 0x175a88, 0xe4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sndMasterManagerSetVolume(void);
int FUN_00189e18(int, char *, char *);
int FUN_001a1838(int, int);

extern unsigned int DAT_005c0f6c; /* 0x5c0f6c */
extern unsigned int DAT_005c0f70; /* 0x5c0f70 */
extern unsigned int DAT_005c0f74; /* 0x5c0f74 */
extern unsigned int DAT_005c0f78; /* 0x5c0f78 */
extern unsigned int DAT_005c0f7c; /* 0x5c0f7c */

/* Supplied declaration required: sndMasterManagerSetVolume. */
/* Supplied declaration required: FUN_00189e18. */
extern int FUN_0018a3dc(void);
/* Supplied declaration required: FUN_001a1838. */


void FUN_00175a88(char *param_1)

{
/* irregular: 3 native warning(s); review required */
  char *pcVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  if (*param_1 == '\0') {
    temp_v2 = 0;
    do {
      FUN_00189e18((int)(char)temp_v2,param_1 + temp_v2 * 4 + 0x6c,param_1 + temp_v2 * 4 + 0x274);
      FUN_001a1838((int)(char)temp_v2,0);
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 2);
    temp_v0 = 0;
    temp_v2 = 0;
    do {
      temp_v1 = temp_v0 + 1;
      temp_v2 = temp_v2 + 2;
      pcVar1 = param_1 + temp_v0 * 4 + 0x74;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      temp_v0 = temp_v0 + 2;
      pcVar1 = param_1 + temp_v1 * 4 + 0x74;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
    } while (temp_v2 < 0x80);
    *(unsigned int **)(param_1 + 0x78) = &DAT_005c0f6c;
    *(unsigned int **)(param_1 + 0x7c) = &DAT_005c0f70;
    *(unsigned int **)(param_1 + 0x80) = &DAT_005c0f74;
    *(unsigned int **)(param_1 + 0x84) = &DAT_005c0f78;
    *(unsigned int **)(param_1 + 0x88) = &DAT_005c0f7c;
    sndMasterManagerSetVolume();
    temp_v2 = FUN_0018a3dc();
    if (temp_v2 == 0) {
      param_1[1] = '\0';
    }
    else if (temp_v2 == 1) {
      param_1[1] = '\x01';
    }
    else if (temp_v2 == 2) {
      param_1[1] = '\x02';
    }
    *param_1 = '\x01';
  }
  return;
}

} /* extern "C" */
