/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a15a0` (_code @ 0x4a15a0, 0x118 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(...);
int FUN_0032cfe0(int);
int FUN_003343f0(int);
int pointConvertToFloat(...);
int FUN_004d05c4(int, int, int, int);

typedef int romwright_code(...);
extern unsigned int vec2GetXInt(int);
extern unsigned int vec2GetYInt(int);
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_0032cfe0. */
/* Supplied declaration required: FUN_003343f0. */
/* Supplied declaration required: pointConvertToFloat. */
extern int FUN_004cf8dc(int, int);
/* Supplied declaration required: FUN_004d05c4. */


void FUN_004a15a0(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned short *puVar4;
  int temp_v3;
  
  temp_v0 = FUN_004cf8dc(param_1 + 0xdc,(int)*(short *)(param_1 + 0xa874));
  temp_v3 = param_1 + *(short *)(param_1 + 0xa874) * 0x8c + 0xfc;
  temp_v1 = vec2GetYInt(temp_v3);
  temp_v2 = vec2GetXInt(temp_v3);
  pointConvertToFloat(param_1 + 200,temp_v2,temp_v1);
  if (temp_v0 != 0) {
    if (*(char *)(param_1 + 0x860) != '\0') {
      if (*(char *)(param_1 + 0x861) == '\x01') {
        temp_v1 = 0x4e;
      }
      else {
        temp_v1 = 0x4f;
      }
      sysPlaySe(temp_v1);
    }
    else {
      sysPlaySe(0x2f);
    }
    FUN_0032cfe0(param_1);
    FUN_003343f0(0);
    *(unsigned int *)(param_1 + 0x14) = 2;
    *(unsigned int *)(param_1 + 0x18) = 0;
    pointConvertToFloat(param_1 + 200,0,0);
    (**(romwright_code **)(**(int **)(param_1 + 0x84c) + 8))(*(int **)(param_1 + 0x84c),param_1 + 0x20);
    puVar4 = (unsigned short *)(*(int *)(param_1 + 0x84c) + 4);
    *puVar4 = *puVar4 | 0x1000;
    temp_v0 = *(int *)(param_1 + 0x28);
    if (temp_v0 >= 10) {
      temp_v0 = 10;
    }
    FUN_004d05c4(param_1 + 0x818,0x14,0x40e,temp_v0);
    *(unsigned char *)(param_1 + 0x828) = 1;
  }
  return;
}

} /* extern "C" */
