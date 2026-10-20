/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00402f58` (_code @ 0x402f58, 0x11c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001517b4(...);
int eventQueueAddUniqueIfValid(int);
int uiSpriteSetKeyframe(int, int, int);
int uiSpriteSetImageKeyframe(int, int, int);
int FUN_004029f4(int, int, int);
int FUN_00403510(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_001517b4. */
/* Supplied declaration required: eventQueueAddUniqueIfValid. */
/* Supplied declaration required: uiSpriteSetKeyframe. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
/* Supplied declaration required: FUN_004029f4. */
/* Supplied declaration required: FUN_00403510. */


void FUN_00402f58(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  
  FUN_00403510();
  if (*(char *)(param_1 + 0x104) != '\0') {
    temp_v0 = 8;
    FUN_001517b4(8,1);
    if (temp_v0 != 0) {
      eventQueueAddUniqueIfValid(0x1000210);
      uiSpriteSetKeyframe(param_1 + 0x264,6,0);
      uiSpriteSetImageKeyframe(param_1 + 0x264,1,0);
      *(unsigned char *)(param_1 + 0x668) = 1;
      FUN_004029f4(param_1,6,7);
    }
    temp_v0 = 7;
    FUN_001517b4(7,1);
    if (temp_v0 != 0) {
      eventQueueAddUniqueIfValid(0x1000210);
      uiSpriteSetKeyframe(param_1 + 0x264,7,0);
      uiSpriteSetImageKeyframe(param_1 + 0x264,1,0);
      *(unsigned char *)(param_1 + 0x669) = 1;
      FUN_004029f4(param_1,6,7);
    }
  }
  temp_v0 = 1;
  FUN_001517b4();
  if (temp_v0 != 0) {
    eventQueueAddUniqueIfValid(0x100020f);
    uiSpriteSetKeyframe(param_1 + 0x1d8,2,0);
    uiSpriteSetImageKeyframe(param_1 + 0x1d8,1,0);
    FUN_004029f4(param_1,5,3);
    return;
  }
  return;
}

} /* extern "C" */
