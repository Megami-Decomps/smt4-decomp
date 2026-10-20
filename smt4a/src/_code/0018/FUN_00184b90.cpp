/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00184b90` (_code @ 0x184b90, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int uiSpriteSetKeyframe(int, int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: uiSpriteSetKeyframe. */


/* WARNING: Removing unreachable block (ram,0x00184c30) */

void FUN_00184b90(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  
  temp_v1 = 0;
  if (param_2 == 1) {
    temp_v0 = 7;
    temp_v1 = 5;
  }
  else if (param_2 == 2) {
    temp_v0 = 8;
    temp_v1 = 5;
  }
  else if (param_2 == 3) {
    temp_v0 = 9;
    temp_v1 = 6;
  }
  else {
    temp_v0 = (short)param_2;
    if (param_2 == 4) {
      temp_v0 = 10;
      temp_v1 = 6;
    }
  }
  uiSpriteSetKeyframe(param_1 + 0x1c8,(int)temp_v0,0);
  if (*(int *)(param_1 + 0x220) != 0) {
    *(short *)(param_1 + 0x224) = temp_v1;
    *(unsigned short *)(param_1 + 0x226) = 0;
    *(unsigned char *)(param_1 + 0x24f) = 0;
    *(unsigned char *)(param_1 + 0x252) = 0;
    *(unsigned char *)(param_1 + 0x228) = 0;
    *(unsigned int *)(param_1 + 0x1e8) = *(unsigned int *)(*(int *)(param_1 + 0x220) + temp_v1 * 0xc);
  }
  return;
}

} /* extern "C" */
