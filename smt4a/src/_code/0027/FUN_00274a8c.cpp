/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00274a8c` (_code @ 0x274a8c, 0x25c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016242c(void);
int FUN_001f3f34(void);
int VectorSignedToFloat(int, int);

extern unsigned char DAT_005f15fc; /* 0x5f15fc */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0016242c. */
extern int FUN_00162e8c(void);
/* Supplied declaration required: FUN_001f3f34. */


void FUN_00274a8c(int *param_1)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  unsigned char *puVar4;
  unsigned int in_fpscr;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v1 = *param_1;
  temp_v0 = FUN_00162e8c();
  puVar4 = (unsigned char *)(temp_v1 + 0xcd1c);
  temp_v2 = 0xc2200000;
  temp_v3 = 0x41200000;
  switch(*puVar4) {
  case 0:
    *(unsigned int *)(temp_v1 + 0xcd20) = 0xc2200000;
    *(unsigned int *)(temp_v1 + 0xcd24) = 0x43430000;
    if (((*(signed char *)((unsigned char *)&DAT_005f15fc + 0x18)) == '\0') && (*(int *)(temp_v0 + 0x109c) != 0)) {
      *puVar4 = 1;
      *(unsigned int *)(temp_v1 + 0xcd28) = 0;
      *(unsigned int *)(temp_v1 + 0xcd2c) = 0;
    }
    break;
  case 1:
    piVar2 = (int *)(temp_v1 + 0xcd28);
    *(float *)(temp_v1 + 0xcd18) = 1.0f - *(float *)(temp_v0 + 0x10a0) / *(float *)(temp_v0 + 0x15c0);
    VectorSignedToFloat(*piVar2,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_001f3f34();
    *(unsigned int *)(temp_v1 + 0xcd20) = temp_v2;
    temp_v0 = *piVar2;
    *piVar2 = temp_v0 + 1;
    if (temp_v0 + 1 >= 7) {
      *puVar4 = 2;
      *piVar2 = 0;
      *(unsigned int *)(temp_v1 + 0xcd2c) = 0;
    }
    break;
  case 2:
    *(float *)(temp_v1 + 0xcd18) = 1.0f - *(float *)(temp_v0 + 0x10a0) / *(float *)(temp_v0 + 0x15c0);
    if (*(int *)(temp_v0 + 0x109c) == 0) {
      *puVar4 = 3;
      *(unsigned int *)(temp_v1 + 0xcd28) = 0;
    }
    if ((*(signed char *)((unsigned char *)&DAT_005f15fc + 0x18)) == '\0') break;
    *puVar4 = 4;
    *(unsigned int *)(temp_v1 + 0xcd28) = 0;
    break;
  case 3:
    piVar2 = (int *)(temp_v1 + 0xcd28);
    VectorSignedToFloat(*piVar2,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_0016242c();
    *(unsigned int *)(temp_v1 + 0xcd20) = temp_v3;
    temp_v0 = *piVar2;
    *piVar2 = temp_v0 + 1;
    if (temp_v0 + 1 < 7) break;
    *puVar4 = 0;
    *(unsigned int *)(temp_v1 + 0xcd28) = 0;
    break;
  case 4:
    piVar2 = (int *)(temp_v1 + 0xcd28);
    VectorSignedToFloat(*piVar2,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_0016242c();
    *(unsigned int *)(temp_v1 + 0xcd20) = temp_v3;
    temp_v0 = *piVar2;
    *piVar2 = temp_v0 + 1;
    if (temp_v0 + 1 < 7) break;
    *puVar4 = 5;
    *(unsigned int *)(temp_v1 + 0xcd28) = 0;
    break;
  case 5:
    *(float *)(temp_v1 + 0xcd18) = 1.0f - *(float *)(temp_v0 + 0x10a0) / *(float *)(temp_v0 + 0x15c0);
    if ((*(signed char *)((unsigned char *)&DAT_005f15fc + 0x18)) != '\0') break;
    *puVar4 = 1;
    *(unsigned int *)(temp_v1 + 0xcd28) = 0;
  }
  if (*(int *)(temp_v1 + 0xcd18) < 0x3eaa7efb) {
    piVar2 = (int *)(temp_v1 + 0xcd2c);
    temp_v0 = *piVar2;
    *piVar2 = temp_v0 + 1;
    if (temp_v0 + 1 >= 0x29) {
      *piVar2 = 10;
    }
  }
  return;
}

} /* extern "C" */
