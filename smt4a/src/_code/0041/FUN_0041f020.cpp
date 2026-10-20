/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041f020` (_code @ 0x41f020, 0xf0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001641c4(void);
int fillThreeWordsWithByte(int, unsigned int);

/* Supplied declaration required: FUN_001641c4. */
extern unsigned short FUN_001643b4(unsigned int, int);
/* Supplied declaration required: fillThreeWordsWithByte. */


void FUN_0041f020(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  if (temp_v2 < *(int *)(param_1 + 0x448)) {
    do {
      FUN_001641c4();
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < *(int *)(param_1 + 0x448));
  }
  temp_v2 = 0;
  *(unsigned int *)(param_1 + 0x448) = 0;
  fillThreeWordsWithByte(param_1 + 0x43c,0xffffffff);
  *(unsigned char *)(param_1 + 0x44c) = 0;
  *(unsigned char *)(param_1 + 0x44d) = 0;
  *(unsigned char *)(param_1 + 0x44e) = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    do {
      temp_v1 = FUN_001643b4(0x2b,temp_v2 + 0x51);
      temp_v0 = temp_v2 * 2;
      temp_v2 = temp_v2 + 1;
      *(unsigned short *)(param_1 + temp_v0 + 0x43c) = temp_v1;
      *(int *)(param_1 + 0x448) = *(int *)(param_1 + 0x448) + 1;
    } while (temp_v2 < *(int *)(param_1 + 0x18));
  }
  temp_v2 = 0;
  do {
    temp_v1 = FUN_001643b4(0x2b,temp_v2 + 0xb);
    temp_v0 = temp_v2 * 2;
    temp_v2 = temp_v2 + 1;
    *(unsigned short *)(param_1 + temp_v0 + 0x440) = temp_v1;
    *(int *)(param_1 + 0x448) = *(int *)(param_1 + 0x448) + 1;
  } while (temp_v2 < 3);
  *(int *)(param_1 + 0x71c) = (int)*(short *)(param_1 + 0x444);
  *(int *)(param_1 + 0x720) = (int)*(short *)(param_1 + 0x440);
  *(int *)(param_1 + 0x724) = (int)*(short *)(param_1 + 0x442);
  return;
}

} /* extern "C" */
