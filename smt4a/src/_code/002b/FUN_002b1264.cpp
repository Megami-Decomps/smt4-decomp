/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b1264` (_code @ 0x2b1264, 0xc0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int uiSpriteSelectAnim(int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: uiSpriteSelectAnim. */
extern int FUN_003e8430(unsigned int);


void FUN_002b1264(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char *puVar3;
  
  temp_v1 = param_1 + param_2 * 2;
  *(unsigned short *)(temp_v1 + 0x4b2c) = 1;
  puVar3 = (unsigned char *)(param_1 + param_2 + 0x4b54);
  *(unsigned short *)(temp_v1 + 0x4b36) = 0;
  *(unsigned int *)(param_1 + param_2 * 4 + 0x4b40) = 0;
  *puVar3 = 0;
  *(unsigned short *)(temp_v1 + 0x4b5a) = 0;
  *(unsigned short *)(temp_v1 + 0x4b64) = 0;
  *(unsigned short *)(temp_v1 + 0x4b6e) = 0;
  *(unsigned short *)(temp_v1 + 0x4b78) = 0;
  *(unsigned short *)(temp_v1 + 0x4b82) = 0;
  *(unsigned short *)(temp_v1 + 0x4b8c) = 0;
  temp_v0 = FUN_003e8430(*(unsigned int *)(param_1 + 0x3874));
  if (temp_v0 != 0) {
    *puVar3 = 1;
    *(unsigned short *)(temp_v1 + 0x4b2c) = 5;
    return;
  }
  param_1 = param_1 + param_2 * 0x8c;
  uiSpriteSelectAnim(param_1 + 0x145c,0xb);
  uiSpriteSelectAnim(param_1 + 0x168c,0xd);
  uiSpriteSelectAnim(param_1 + 0x18bc,0xe);
  return;
}

} /* extern "C" */
