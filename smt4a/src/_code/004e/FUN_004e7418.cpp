/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004e7418` (_code @ 0x4e7418, 0x10c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004ab734(unsigned int);
int FUN_004e0114(int *, int, int, int, int, int);
int FUN_004fbd98(int, int, unsigned int, int);
int FUN_004fde5c(int, int, int, int, int, int);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern unsigned char DAT_00571138; /* 0x571138 */
extern int DAT_00571508; /* 0x571508 */
extern unsigned int DAT_00573898; /* 0x573898 */
extern unsigned int DAT_0057a9c8; /* 0x57a9c8 */

/* Supplied declaration required: FUN_004ab734. */
extern int FUN_004d84e8(unsigned int);
/* Supplied declaration required: FUN_004e0114. */
/* Supplied declaration required: FUN_004fbd98. */
/* Supplied declaration required: FUN_004fde5c. */


unsigned int FUN_004e7418(int *param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_004d84e8(DAT_00573898);
  if (temp_v0 != 0) {
    temp_v1 = 0;
  }
  else {
    temp_v0 = *param_1;
    if (*(int *)(temp_v0 + 0xa8) != 0xd) {
      if (*(short *)(temp_v0 + 0x2002) - 1 < 1) {
        *(unsigned int *)(temp_v0 + 0xa8) = 1;
      }
      else {
        *(unsigned int *)(temp_v0 + 0xa8) = 0;
        FUN_004ab734(DAT_0057a9c8);
      }
    }
    if ((*(unsigned int *)(*(int *)(param_2 + 0x24) + 0x6c) & 0xff) != 0) {
      FUN_004fde5c(0,param_2,*(int *)(param_2 + 0x24),0,0,0);
    }
    FUN_004fbd98(0x1e,param_2,*(unsigned int *)(param_2 + 0x20),1);
    FUN_004e0114(param_1,param_2,(int)*(short *)(*(int *)(param_2 + 0x24) + 0x6a),0,0x1e,0x1e);
    *(unsigned int *)(DAT_00571508 + 0x64c) = *(unsigned int *)(DAT_00571508 + 0x64c) & 0xfdffffff;
    *(unsigned char *)((*(int *)((unsigned char *)&DAT_00571138 + 0x4)) + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 0x1d;
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
