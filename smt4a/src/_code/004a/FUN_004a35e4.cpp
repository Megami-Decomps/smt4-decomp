/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a35e4` (_code @ 0x4a35e4, 0x160 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184528(int);
int FUN_0032cfe0(int);
int FUN_004935b0(int, unsigned int, unsigned int);
int FUN_004a1958(int);
int FUN_004a3e04(int);
int FUN_004cf8dc(int, int);

extern unsigned char DAT_0057f0b4; /* 0x57f0b4 */

extern unsigned int vec2GetXInt(int);
extern unsigned int vec2GetYInt(int);
/* Supplied declaration required: FUN_00184528. */
extern int FUN_002a482c(int);
/* Supplied declaration required: FUN_0032cfe0. */
/* Supplied declaration required: FUN_004935b0. */
/* Supplied declaration required: FUN_004a1958. */
/* Supplied declaration required: FUN_004a3e04. */
/* Supplied declaration required: FUN_004cf8dc. */
extern int FUN_004cf964(int, int);


void FUN_004a35e4(int param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  FUN_004cf8dc(param_1 + 0xdc,(int)*(short *)(param_1 + 0xa874));
  temp_v2 = param_1 + *(short *)(param_1 + 0xa874) * 0x8c + 0xfc;
  temp_v0 = vec2GetYInt(temp_v2);
  temp_v1 = vec2GetXInt(temp_v2);
  FUN_004935b0(param_1 + 200,temp_v1,temp_v0);
  if (*(int *)(param_1 + 0x18) == 0) {
    *(unsigned short *)(param_1 + 0xa874) = 9;
    FUN_00184528(param_1 + 0xdc);
    temp_v0 = 1;
    *(unsigned int *)(param_1 + 0x18) = temp_v0;
    return;
  }
  temp_v2 = FUN_004cf964(param_1 + 0xdc,(int)*(short *)(param_1 + 0xa874));
  if ((temp_v2 != 0) && (*(int *)(param_1 + 0x18) == 1)) {
    *(unsigned int *)(param_1 + 0x18) = 2;
  }
  else {
    temp_v2 = FUN_004cf964(param_1 + 0xdc,(int)*(short *)(param_1 + 0xa874));
    if ((temp_v2 != 0) && (*(int *)(param_1 + 0x18) == 2)) {
      *(unsigned char *)(param_1 + 0xa876) = *(char *)(param_1 + 0xa876) == '\0';
      FUN_004a1958(param_1);
      (*(int *)((unsigned char *)&DAT_0057f0b4 + 0x4)) = FUN_002a482c(param_1 + 0x20);
      (*(int *)((unsigned char *)&DAT_0057f0b4 + 0x4)) = (*(int *)((unsigned char *)&DAT_0057f0b4 + 0x4)) + 1;
      FUN_004a3e04(param_1);
      FUN_0032cfe0(param_1);
      *(unsigned short *)(param_1 + 0xa874) = 8;
      FUN_00184528(param_1 + 0xdc);
      temp_v0 = 3;
      *(unsigned int *)(param_1 + 0x18) = temp_v0;
      return;
    }
    temp_v2 = FUN_004cf964(param_1 + 0xdc,(int)*(short *)(param_1 + 0xa874));
    if ((temp_v2 != 0) && (*(int *)(param_1 + 0x18) == 3)) {
      *(unsigned int *)(param_1 + 0x14) = 2;
      *(unsigned int *)(param_1 + 0x18) = 0;
    }
  }
  return;
}

} /* extern "C" */
