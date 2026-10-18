/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cbf10` (_code @ 0x3cbf10, 0x244 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern int DAT_0043427c; /* 0x43427c */
extern unsigned int DAT_00434290; /* 0x434290 */
extern unsigned int DAT_00435d18; /* 0x435d18 */
extern unsigned int DAT_00435d48; /* 0x435d48 */

/* Supplied declaration required: FUN_00229888. */
/* Supplied declaration required: FUN_00229bd0. */
/* Supplied declaration required: FUN_0022a498. */
/* Supplied declaration required: FUN_00240660. */
extern int FUN_0027e628(unsigned int);
extern int FUN_0027e92c(unsigned int, int);
/* Supplied declaration required: FUN_003cfeb0. */
/* Supplied declaration required: FUN_003d044c. */


unsigned int FUN_003cbf10(int *param_1,int param_2)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  
  temp_v0 = *param_1;
  if (((*(unsigned int *)(temp_v0 + 0x44a0) & 0x40000) == 0) && ((*(unsigned int *)(temp_v0 + 0xe0) & 0x40000) != 0)) {
    temp_v0 = FUN_0027e92c(DAT_00434290,param_2);
    if (temp_v0 == 0) {
      *(unsigned char *)(DAT_0043427c + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 1;
      FUN_0022a498(DAT_00435d18);
      return 1;
    }
    return 0;
  }
  if (*(int *)(temp_v0 + 0x88) != 4) {
    FUN_003d044c(param_1,param_2,0);
    piVar2 = param_1;
    FUN_003cfeb0(param_1,param_2,0);
    if (*(int *)(param_2 + 0x56c) == 0x20) {
      FUN_00240660(0,param_2,*(unsigned int *)(*param_1 + 0x1e98),9,0xb);
    }
    if (*(int *)(param_2 + 0x56c) == 0x25) {
      FUN_00229bd0(0,param_2,0,2,0);
    }
    *(int *)(param_2 + 0x56c) = *(int *)(param_2 + 0x56c) + 1;
    temp_v0 = FUN_0027e92c(DAT_00434290,param_2);
    if (0 < temp_v0) {
      return 0;
    }
    if (piVar2 != (int *)0x0) {
      *(unsigned int *)(param_2 + 0xf04) = 0;
      *(unsigned char *)(DAT_0043427c + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 0x1b;
      return 1;
    }
    if (*(int *)(*param_1 + 0x88) != 4) {
      return 0;
    }
  }
  temp_v0 = FUN_0027e628(DAT_00435d48);
  if (temp_v0 == 0) {
    FUN_003d044c(param_1,param_2,1);
    piVar2 = param_1;
    FUN_003cfeb0(param_1,param_2,1);
    *(int *)(param_2 + 0x56c) = *(int *)(param_2 + 0x56c) + 1;
    temp_v0 = FUN_0027e92c(DAT_00434290,param_2);
    if ((temp_v0 < 1) && (piVar2 != (int *)0x0)) {
      *(unsigned int *)(param_2 + 0xf04) = 0x1e;
      FUN_00229888(param_1,param_2,(int)*(short *)(*(int *)(param_2 + 0x24) + 0x62),0,0x11,0x11);
      *(unsigned char *)(DAT_0043427c + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 0x1b;
      return 1;
    }
  }
  return 0;
}
