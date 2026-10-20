/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032820c` (_code @ 0x32820c, 0x130 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0020ffa0(unsigned int, int);
int FUN_00265b78(int, int);

extern int DAT_00447060; /* 0x447060 */

/* Supplied declaration required: FUN_0020ffa0. */
/* Supplied declaration required: FUN_00265b78. */


void FUN_0032820c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  char *pcVar4;
  char temp_v3;
  int temp_v4;
  int temp_v5;
  
  temp_v1 = DAT_00447060;
  temp_v2 = 0;
  temp_v5 = 0;
  do {
    pcVar4 = (char *)(param_1 + temp_v5);
    temp_v4 = 4;
    temp_v0 = *pcVar4;
    if (temp_v0 != '\t') {
      *(char *)(temp_v2 + 0x49f08c) = temp_v0;
    }
    temp_v3 = pcVar4[8];
    if (temp_v0 != '\t') {
      temp_v2 = temp_v2 + 1;
    }
    do {
      temp_v0 = pcVar4[0x10];
      if (temp_v3 != '\t') {
        *(char *)(temp_v2 + 0x49f08c) = temp_v3;
        temp_v2 = temp_v2 + 1;
      }
      temp_v3 = pcVar4[0x18];
      if (temp_v0 != '\t') {
        *(char *)(temp_v2 + 0x49f08c) = temp_v0;
        temp_v2 = temp_v2 + 1;
      }
      temp_v4 = temp_v4 - 1;
      pcVar4 = pcVar4 + 0x10;
    } while (temp_v4 != 0);
    temp_v4 = temp_v5 + 0x48;
    temp_v5 = temp_v5 + 1;
    temp_v0 = *(char *)(param_1 + temp_v4);
    if (temp_v0 != '\t') {
      *(char *)(temp_v2 + 0x49f08c) = temp_v0;
      temp_v2 = temp_v2 + 1;
    }
  } while (temp_v5 < 8);
  temp_v2 = 0;
  if (temp_v2 < *(int *)(*(int *)(temp_v1 + 0xa9c) + 4)) {
    do {
      if (*(char *)(temp_v2 + 0x49f08c) != '\x01') {
        if ((DAT_00447060 != 0) &&
           (temp_v5 = DAT_00447060 + temp_v2 * 0x88, *(char *)(temp_v5 + 0xb30) != '\0')) {
          *(unsigned char *)(temp_v5 + 0xb30) = 0;
        }
        FUN_00265b78(temp_v2,0);
      }
      else {
        FUN_0020ffa0(*(unsigned int *)(temp_v1 + 0xa9c),temp_v2);
        if ((DAT_00447060 != 0) &&
           (temp_v5 = DAT_00447060 + temp_v2 * 0x88, *(char *)(temp_v5 + 0xb30) == '\0')) {
          *(unsigned char *)(temp_v5 + 0xb30) = 1;
        }
        FUN_00265b78(temp_v2,1);
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < *(int *)(*(int *)(temp_v1 + 0xa9c) + 4));
  }
  return;
}

} /* extern "C" */
