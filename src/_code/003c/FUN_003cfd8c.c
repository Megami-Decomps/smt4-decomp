/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cfd8c` (_code @ 0x3cfd8c, 0x10c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern int DAT_0043427c; /* 0x43427c */
extern int DAT_004342c8; /* 0x4342c8 */
extern unsigned int DAT_00435d48; /* 0x435d48 */
extern unsigned int DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_00229888. */
/* Supplied declaration required: FUN_0026ca8c. */
extern int FUN_0027e628(unsigned int);
/* Supplied declaration required: FUN_003ddd40. */
/* Supplied declaration required: FUN_003de10c. */


unsigned int FUN_003cfd8c(int *param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_0027e628(DAT_00435d48);
  if (temp_v0 != 0) {
    temp_v1 = 0;
  }
  else {
    temp_v0 = *param_1;
    if (*(int *)(temp_v0 + 0x88) != 0xd) {
      if (*(short *)(temp_v0 + 0x1fc6) - 1 < 1) {
        *(unsigned int *)(temp_v0 + 0x88) = 1;
      }
      else {
        *(unsigned int *)(temp_v0 + 0x88) = 0;
        FUN_0026ca8c(DAT_00439ca8);
      }
    }
    if ((*(unsigned int *)(*(int *)(param_2 + 0x24) + 100) & 0xff) != 0) {
      FUN_003de10c(0,param_2,*(int *)(param_2 + 0x24),0,0,0);
    }
    FUN_003ddd40(0x1e,param_2,*(unsigned int *)(param_2 + 0x20),1);
    FUN_00229888(param_1,param_2,(int)*(short *)(*(int *)(param_2 + 0x24) + 0x62),0,0x1e,0x1e);
    *(unsigned int *)(DAT_004342c8 + 0x634) = *(unsigned int *)(DAT_004342c8 + 0x634) & 0xfdffffff;
    *(unsigned char *)(DAT_0043427c + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 0x1b;
    temp_v1 = 1;
  }
  return temp_v1;
}
