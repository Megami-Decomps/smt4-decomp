/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a4488` (_code @ 0x2a4488, 0x1b8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorSignedToFloat(int, int);

extern int DAT_0057f3bc; /* 0x57f3bc */
extern unsigned int DAT_0057f430; /* 0x57f430 */
extern unsigned int DAT_0057f434; /* 0x57f434 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int asdTMTexTableNodeIsLoaded(unsigned int, unsigned int);


unsigned int FUN_002a4488(void)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  unsigned int *puVar3;
  int temp_v1;
  unsigned int in_fpscr;
  float temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = DAT_0057f3bc;
  temp_v3 = 0;
  switch(*(unsigned int *)(DAT_0057f3bc + 8)) {
  case 0:
    temp_v1 = asdTMTexTableNodeIsLoaded(DAT_0057f430,DAT_0057f434);
    if (temp_v1 != 0) {
      *(unsigned int *)(temp_v0 + 0xc) = 0;
      *(unsigned int *)(temp_v0 + 0x10) = temp_v3;
      if (*(char *)(temp_v0 + 0x15) != '\0') {
        *(unsigned int *)(temp_v0 + 8) = 2;
      }
      else {
        *(unsigned int *)(temp_v0 + 8) = 1;
      }
    }
    break;
  case 1:
    temp_v1 = *(int *)(DAT_0057f3bc + 0xc);
    if (temp_v1 >= 5) {
      if (temp_v1 >= 9) {
        puVar3 = (unsigned int *)(DAT_0057f3bc + 8);
        *(unsigned int *)(DAT_0057f3bc + 0x10) = 0;
        *puVar3 = 5;
        *(unsigned int *)(temp_v0 + 0xc) = 0;
        break;
      }
      temp_v1 = 8 - temp_v1;
    }
    *(unsigned char *)(DAT_0057f3bc + 0x14) = 0;
    temp_v2 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    *(float *)(temp_v0 + 0x10) = temp_v2 * 0.25f * 0.5f;
    break;
  case 2:
    piVar1 = (int *)(DAT_0057f3bc + 0xc);
    if (*piVar1 < 5) {
      *(unsigned char *)(DAT_0057f3bc + 0x14) = 0;
      temp_v2 = (float)VectorSignedToFloat(*piVar1,(unsigned char)(in_fpscr >> 0x16) & 3);
      *(float *)(temp_v0 + 0x10) = temp_v2 * 0.25f * 0.5f;
    }
    else {
      *(unsigned int *)(DAT_0057f3bc + 0xc) = 0;
      *(unsigned int *)(temp_v0 + 0x10) = 0x3f000000;
      *(unsigned int *)(temp_v0 + 8) = 3;
      *(unsigned char *)(temp_v0 + 0x14) = 0;
    }
    temp_v1 = *(int *)(temp_v0 + 0xc);
    if (temp_v1 % 4 < 2) {
      *(unsigned char *)(temp_v0 + 0x14) = 1;
    }
    break;
  case 3:
    piVar1 = (int *)(DAT_0057f3bc + 0xc);
    *(unsigned int *)(DAT_0057f3bc + 0x10) = 0x3f000000;
    if (*piVar1 % 4 < 2) {
      *(unsigned char *)(temp_v0 + 0x14) = 1;
    }
    else {
      *(unsigned char *)(temp_v0 + 0x14) = 0;
    }
    break;
  case 4:
    piVar1 = (int *)(DAT_0057f3bc + 0xc);
    if (*piVar1 < 4) {
      *(unsigned char *)(DAT_0057f3bc + 0x14) = 0;
      temp_v2 = (float)VectorSignedToFloat(4 - *piVar1,(unsigned char)(in_fpscr >> 0x16) & 3);
      *(float *)(temp_v0 + 0x10) = temp_v2 * 0.25f * 0.5f;
    }
    else {
      *(unsigned int *)(DAT_0057f3bc + 0x10) = 0;
      *(unsigned char *)(temp_v0 + 0x14) = 0;
      *(unsigned int *)(temp_v0 + 8) = 5;
    }
    temp_v1 = *(int *)(temp_v0 + 0xc);
    if (temp_v1 % 4 < 2) {
      *(unsigned char *)(temp_v0 + 0x14) = 1;
    }
  }
  *(int *)(temp_v0 + 0xc) = *(int *)(temp_v0 + 0xc) + 1;
  return 0;
}

} /* extern "C" */
