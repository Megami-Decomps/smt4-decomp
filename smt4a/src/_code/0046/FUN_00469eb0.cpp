/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00469eb0` (_code @ 0x469eb0, 0x198 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(int);
int asdMemFree(void);
int scrScriptProcessDestroy(void);
int FUN_00275bc8(unsigned int, unsigned int);
int FUN_00275f44(unsigned int, unsigned int);
int FUN_002804b0(unsigned char *, int, int);
int FUN_003fe86c(int, int);
int FUN_004ff920(int);

extern unsigned char LAB_0046a048; /* 0x46a048 */
extern unsigned char LAB_0046a074; /* 0x46a074 */
extern unsigned char LAB_0046a0a0; /* 0x46a0a0 */

/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: scrScriptProcessDestroy. */
extern int FUN_00224880(unsigned int);
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: FUN_00275f44. */
/* Supplied declaration required: FUN_002804b0. */
extern unsigned int FUN_00357bc8(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_003fe86c. */
/* Supplied declaration required: FUN_004ff920. */


void FUN_00469eb0(int param_1)

{
/* irregular: irregular input(s): in_s0; 8 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  float in_s0;
  unsigned int temp_v2;
  
  temp_v0 = *(int *)(param_1 + 8);
  if (temp_v0 == 0) {
    sysPlaySe(0xa5);
    if (*(int *)(param_1 + 0x2a8) == 0) {
      FUN_002804b0(&LAB_0046a048,param_1 + 0x2a8,0);
    }
    if (*(int *)(param_1 + 0x2ac) == 0) {
      FUN_002804b0(&LAB_0046a074,param_1 + 0x2ac,0);
    }
    *(unsigned int *)(param_1 + 8) = 1;
    return;
  }
  if (temp_v0 != 1) {
    if (temp_v0 != 2) {
      if (temp_v0 == 3) {
        *(unsigned int *)(param_1 + 4) = 5;
        *(unsigned int *)(param_1 + 8) = 0;
      }
    }
    else {
      temp_v0 = FUN_00224880(*(unsigned int *)(param_1 + 0x2b0));
      if (temp_v0 == 2) {
        *(unsigned int *)(*(int *)(*(int *)(param_1 + 0xa28) + 4) + 0x1fc) = 0x3f800000;
        if (*(int *)(param_1 + 0x2b0) != 0) {
          scrScriptProcessDestroy();
          *(unsigned int *)(param_1 + 0x2b0) = 0;
        }
        if (*(int *)(param_1 + 0x2a8) != 0) {
          asdMemFree();
          *(unsigned int *)(param_1 + 0x2a8) = 0;
        }
        if (*(int *)(param_1 + 0x2ac) != 0) {
          asdMemFree();
          *(unsigned int *)(param_1 + 0x2ac) = 0;
        }
        temp_v1 = 3;
        *(unsigned int *)(param_1 + 8) = temp_v1;
        return;
      }
    }
  }
  else if ((*(int *)(param_1 + 0x2a8) != 0) && (*(int *)(param_1 + 0x2ac) != 0)) {
    temp_v0 = *(int *)(*(int *)(param_1 + 0xa28) + 4);
    FUN_004ff920(temp_v0);
    if (*(float *)(param_1 + 0xa5c) <= in_s0) {
      temp_v1 = *(unsigned int *)(param_1 + 0x2a8);
      FUN_00275bc8(temp_v1,*(unsigned int *)(param_1 + 0x2ac));
      *(unsigned int *)(param_1 + 0x2b0) = temp_v1;
      temp_v1 = FUN_00357bc8(*(unsigned int *)(param_1 + 0x2a8),&LAB_0046a0a0);
      FUN_00275f44(*(unsigned int *)(param_1 + 0x2b0),temp_v1);
      temp_v2 = 0;
      FUN_003fe86c(temp_v0,0);
      temp_v1 = 2;
      *(unsigned int *)(temp_v0 + 0x1fc) = temp_v2;
      *(unsigned int *)(param_1 + 8) = temp_v1;
      return;
    }
  }
  return;
}

} /* extern "C" */
