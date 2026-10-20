/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020b718` (_code @ 0x20b718, 0x1ec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003343f0(void);
int FUN_003344b4(int);
int FUN_003f3fcc(unsigned int, int);
int FUN_003f525c(unsigned int, int);

extern int DAT_0057f268; /* 0x57f268 */

extern int FUN_002ef9f0(void);
/* Supplied declaration required: FUN_003343f0. */
/* Supplied declaration required: FUN_003344b4. */
extern int FUN_0038b568(void);
/* Supplied declaration required: FUN_003f3fcc. */
/* Supplied declaration required: FUN_003f525c. */


void FUN_0020b718(int param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = DAT_0057f268;
  if (param_2 != 0) {
    *(unsigned int *)(DAT_0057f268 + 0x24) = *(unsigned int *)(DAT_0057f268 + 0x1c);
  }
  *(int *)(temp_v0 + 0x1c) = param_1;
  *(unsigned int *)(temp_v0 + 0x18) = 0;
  if (param_1 == 0x1b) {
    temp_v1 = FUN_0038b568();
    if (temp_v1 == 0) {
      *(unsigned int *)(temp_v0 + 0x1c) = 0x1c;
      return;
    }
    temp_v1 = FUN_002ef9f0();
    if (temp_v1 == 0) {
      FUN_003343f0();
    }
    param_1 = *(int *)(temp_v0 + 0x1c);
  }
  if (param_1 == 0x15) {
    temp_v1 = 0;
    do {
      temp_v2 = temp_v0 + temp_v1 * 4;
      FUN_003f525c(*(unsigned int *)(temp_v2 + 0xa10),0);
      *(unsigned char *)(*(int *)(temp_v2 + 0xa10) + 0x25) = 0;
      *(unsigned char *)(*(int *)(temp_v2 + 0xa10) + 0x27) = 0;
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 4);
    temp_v1 = 0;
    do {
      temp_v2 = temp_v0 + temp_v1 * 4;
      FUN_003f525c(*(unsigned int *)(temp_v2 + 0xa20),0);
      *(unsigned char *)(*(int *)(temp_v2 + 0xa20) + 0x25) = 0;
      *(unsigned char *)(*(int *)(temp_v2 + 0xa20) + 0x27) = 0;
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 0x18);
    FUN_003344b4(0);
  }
  if (*(int *)(temp_v0 + 0x1c) == 0x16) {
    temp_v1 = 0;
    do {
      temp_v2 = temp_v0 + temp_v1 * 4;
      FUN_003f525c(*(unsigned int *)(temp_v2 + 0xa10),0);
      *(unsigned char *)(*(int *)(temp_v2 + 0xa10) + 0x25) = 0;
      *(unsigned char *)(*(int *)(temp_v2 + 0xa10) + 0x27) = 0;
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 4);
    temp_v1 = 0;
    do {
      temp_v2 = temp_v0 + temp_v1 * 4;
      FUN_003f525c(*(unsigned int *)(temp_v2 + 0xa20),0);
      *(unsigned char *)(*(int *)(temp_v2 + 0xa20) + 0x25) = 0;
      *(unsigned char *)(*(int *)(temp_v2 + 0xa20) + 0x27) = 0;
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 0x18);
    FUN_003344b4(0);
    if (*(char *)(temp_v0 + 0x9c0) != '\0') {
      FUN_003f3fcc(*(unsigned int *)(temp_v0 + 0xa10),0xff);
    }
    temp_v1 = 0;
    do {
      if (*(char *)(temp_v0 + temp_v1 + 0x9c1) != '\0') {
        FUN_003f3fcc(*(unsigned int *)(temp_v0 + temp_v1 * 4 + 0xa14),0xff);
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 3);
    temp_v1 = 0;
    do {
      if (*(short *)(temp_v0 + temp_v1 * 8 + 0xa84) != 0) {
        FUN_003f3fcc(*(unsigned int *)(temp_v0 + temp_v1 * 4 + 0xa20),0xff);
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 0x18);
  }
  return;
}

} /* extern "C" */
