/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001962c0` (_code @ 0x1962c0, 0x118 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_6_stack;

extern signed char DAT_0061a481; /* 0x61a481 */
extern signed char DAT_0061a482; /* 0x61a482 */
extern int DAT_0061a510; /* 0x61a510 */

/* Supplied declaration required: FUN_0018b600. */
/* Supplied declaration required: FUN_0018b610. */
/* Supplied declaration required: FUN_001963e0. */


void FUN_001962c0(int param_1,unsigned int param_2,unsigned int param_3,unsigned short param_4,
                 unsigned short param_5,int param_6)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char *puVar2;
  
  if (param_6 == 0x8057) {
    temp_v0 = 3;
  }
  else if (param_6 < 0x8057) {
    if (param_6 == 0x8051) {
      temp_v0 = 1;
    }
    else {
      if (param_6 != 0x8056) {
        return;
      }
      temp_v0 = 4;
    }
  }
  else if (param_6 == 0x8058) {
    temp_v0 = 0;
  }
  else {
    if (param_6 != 0x8d62) {
      return;
    }
    temp_v0 = 2;
  }
  puVar2 = (unsigned char *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x20) * 0x1c);
  *puVar2 = 3;
  *(unsigned int *)(puVar2 + 4) = param_2;
  *(unsigned int *)(puVar2 + 8) = param_3;
  *(unsigned short *)(puVar2 + 0x10) = param_4;
  *(short *)(puVar2 + 0xc) = (short)*(unsigned int *)(puVar2 + 0x10);
  *(unsigned short *)(puVar2 + 0x12) = param_5;
  *(short *)(puVar2 + 0xe) = (short)((unsigned int)*(unsigned int *)(puVar2 + 0x10) >> 0x10);
  *(unsigned int *)(puVar2 + 0x14) = (temp_v0 << 3) | (*(unsigned int *)(puVar2 + 0x14) & 0xfffff800) | temp_v0 | 0x900;
  FUN_0018b600();
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  if (((DAT_0061a510 == param_1) && (DAT_0061a482 != '\0')) && (DAT_0061a481 == '\0')) {
    DAT_0061a481 = '\x01';
    FUN_001963e0();
  }
  FUN_0018b610();
  return;
}
