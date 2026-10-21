/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00500f3c` (_code @ 0x500f3c, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gxEmitFramebufferAccessMasks(int, unsigned int *, int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

/* Supplied declaration required: gxEmitFramebufferAccessMasks. */


void FUN_00500f3c(char *param_1,unsigned int *param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  
  temp_v0 = *(unsigned char *)(*(int *)(param_1 + 4) + 0x50);
  temp_v1 = temp_v0 & 1;
  if ((temp_v0 & 1) != 0) {
    temp_v1 = 0x100;
  }
  if ((temp_v0 & 2) == 0) {
    temp_v2 = 0;
  }
  else {
    temp_v2 = 0x200;
  }
  if ((temp_v0 & 4) == 0) {
    temp_v3 = 0;
  }
  else {
    temp_v3 = 0x400;
  }
  if ((temp_v0 & 8) == 0) {
    temp_v4 = 0;
  }
  else {
    temp_v4 = 0x800;
  }
  if (param_1[1] == '\0') {
    temp_v5 = 0;
  }
  else {
    temp_v5 = 0x1000;
  }
  *param_2 = temp_v5 | (unsigned int)(*param_1 != '\0') | ((unsigned int)(unsigned char)param_1[2] << 4) | temp_v1 | temp_v2 |
                     temp_v3 | temp_v4;
  param_2[1] = 0xf0107;
  if (param_3 != 0) {
    gxEmitFramebufferAccessMasks(*(int *)(param_1 + 4) + 0x7c,param_2 + 2,1);
    return;
  }
  return;
}

} /* extern "C" */
