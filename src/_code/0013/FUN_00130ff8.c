/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00130ff8` (_code @ 0x130ff8, 0xe4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00472348; /* 0x472348 */
extern unsigned int DAT_0047234c; /* 0x47234c */
extern unsigned int DAT_00472350; /* 0x472350 */
extern unsigned int DAT_00472354; /* 0x472354 */
extern unsigned int DAT_00472358; /* 0x472358 */

/* Supplied declaration required: FUN_0013a00c. */
extern int FUN_0013a5d0(void);
/* Supplied declaration required: FUN_002b4ea0. */
/* Supplied declaration required: FUN_002bce38. */


void FUN_00130ff8(char *param_1)

{
/* irregular: 3 native warning(s); review required */
  char *pcVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  if (*param_1 == '\0') {
    temp_v2 = 0;
    do {
      FUN_0013a00c((int)(char)temp_v2,param_1 + temp_v2 * 4 + 0x7c,param_1 + temp_v2 * 4 + 0x284);
      FUN_002b4ea0((int)(char)temp_v2,0);
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 2);
    temp_v0 = 0;
    temp_v2 = 0;
    do {
      temp_v1 = temp_v0 + 1;
      temp_v2 = temp_v2 + 2;
      pcVar1 = param_1 + temp_v0 * 4 + 0x84;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      temp_v0 = temp_v0 + 2;
      pcVar1 = param_1 + temp_v1 * 4 + 0x84;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
    } while (temp_v2 < 0x80);
    *(unsigned int **)(param_1 + 0x88) = &DAT_00472348;
    *(unsigned int **)(param_1 + 0x8c) = &DAT_0047234c;
    *(unsigned int **)(param_1 + 0x90) = &DAT_00472350;
    *(unsigned int **)(param_1 + 0x94) = &DAT_00472354;
    *(unsigned int **)(param_1 + 0x98) = &DAT_00472358;
    FUN_002bce38();
    temp_v2 = FUN_0013a5d0();
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
