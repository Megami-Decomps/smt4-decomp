/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00292ca0` (_code @ 0x292ca0, 0x128 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0029ee6c(int, int);
int FUN_002b8cc8(void);
int timerStart(int, int, int);
int FUN_002c424c(int, int, unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int DAT_0044e190; /* 0x44e190 */

extern int gameGetFlagByte12e8(void);
/* Supplied declaration required: FUN_0029ee6c. */
/* Supplied declaration required: FUN_002b8cc8. */
/* Supplied declaration required: timerStart. */
/* Supplied declaration required: FUN_002c424c. */


void FUN_00292ca0(unsigned int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v0 = DAT_0044e190;
  if (*(unsigned char *)(DAT_0044e190 + 0x3fc) == param_1) {
    return;
  }
  *(unsigned char *)(DAT_0044e190 + 0x3fd) = *(unsigned char *)(DAT_0044e190 + 0x3fc);
  *(char *)(temp_v0 + 0x3fc) = (char)param_1;
  temp_v1 = gameGetFlagByte12e8();
  if (temp_v1 < 0) {
    timerStart(temp_v0 + 0x28,3,0);
  }
  else {
    temp_v1 = gameGetFlagByte12e8();
    if (0 < temp_v1) {
      timerStart(temp_v0 + 0x28,2,0);
    }
  }
  temp_v1 = DAT_0044e190;
  temp_v3 = 0;
  if (*(char *)(DAT_0044e190 + 0x480) != '\0') {
    do {
      FUN_002b8cc8();
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < (int)(unsigned int)*(unsigned char *)(temp_v1 + 0x480));
  }
  *(unsigned char *)(temp_v1 + 0x480) = 0;
  FUN_002c424c(temp_v1 + 0x42c,0x29,0xffffffff);
  temp_v1 = DAT_0044e190;
  *(unsigned int *)(DAT_0044e190 + 0x40c) = 0;
  puVar3 = (unsigned int *)(temp_v1 + 0x400);
  temp_v2 = *puVar3;
  *puVar3 = 2;
  *(unsigned int *)(temp_v1 + 0x404) = temp_v2;
  if (param_1 == 0) {
    *(unsigned int *)(temp_v0 + 0x408) = 0;
  }
  else {
    if (param_1 == 1) {
      temp_v2 = 3;
    }
    else if (param_1 == 2) {
      temp_v2 = 0x10;
    }
    else if (param_1 == 3) {
      temp_v2 = 0x11;
    }
    else {
      if (param_1 != 4) {
        if (param_1 == 5) {
          *(unsigned int *)(temp_v0 + 0x408) = 0x15;
        }
        FUN_0029ee6c(0,0x323232ff);
        return;
      }
      temp_v2 = 0x13;
    }
    *(unsigned int *)(temp_v0 + 0x408) = temp_v2;
  }
  FUN_0029ee6c(0,0x323232ff);
  return;
}

} /* extern "C" */
