/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00500d38` (_code @ 0x500d38, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gxEmitFramebufferAccessMasks(int, unsigned int *, int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

/* Supplied declaration required: gxEmitFramebufferAccessMasks. */


void FUN_00500d38(char *param_1,unsigned int *param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  
  temp_v0 = *param_1;
  *param_2 = 0xe40100;
  if (temp_v0 != '\0') {
    param_2[1] = 0x30100;
    param_2[2] = (unsigned int)*(unsigned int *)(param_1 + 1) | ((unsigned int)(unsigned char)param_1[5] << 0x14) |
                 ((unsigned int)(unsigned char)param_1[4] << 0x18) | ((unsigned int)(unsigned char)param_1[6] << 0x1c);
    param_2[3] = 0xf0101;
    param_2[4] = 6;
    param_2[5] = 0xf0102;
    param_2[6] = (*(unsigned int *)(param_1 + 7) & 0xffffff) | ((unsigned int)(unsigned char)param_1[10] << 0x18);
    param_2[7] = 0xf0103;
    param_2 = param_2 + 7;
  }
  else {
    param_2[1] = 0x30100;
    param_2[2] = 0x1010000;
    param_2 = param_2 + 3;
    *param_2 = 0xf0101;
  }
  if (param_3 != 0) {
    gxEmitFramebufferAccessMasks(*(int *)(param_1 + 0xc) + 0x7c,param_2 + 1,1);
    return;
  }
  return;
}

} /* extern "C" */
