/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_SoundArchiveLoader_LoadImpl` (_code @ 0x2ac658, 0x128 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_5: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_5_stack;

extern int FUN_00152314(int, unsigned int, int **);
/* Supplied declaration required: FUN_002a4b0c. */
/* Supplied declaration required: FUN_002a78c0. */
extern int FUN_002c3984(void);
extern unsigned int FUN_002c3994(void);


unsigned int nw_snd_internal_SoundArchiveLoader_LoadImpl
               (int *param_1,unsigned int param_2,int *param_3,unsigned int param_4,int param_5)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int *piVar4;
  int *unaff_r4;
  int *temp_v3;
  unsigned int temp_v4;
  unsigned int uStack_28;
  
  temp_v0 = (**(romwright_code **)(*param_1 + 0x10))(param_1);
  if (temp_v0 != 0) {
    return temp_v0;
  }
  temp_v3 = (int *)0xffffffff;
  temp_v4 = 0xffffffff;
  uStack_28 = 0;
  temp_v1 = FUN_00152314(param_1[1],param_2,&temp_v3);
  if (temp_v1 != 0) {
    unaff_r4 = temp_v3;
  }
  if ((temp_v1 == 0 || unaff_r4 == (int *)0x0) || unaff_r4 == (int *)0xffffffff) {
    return 0;
  }
  temp_v0 = (**(romwright_code **)(*param_3 + 8))(param_3,unaff_r4);
  if (temp_v0 == 0) {
    return 0;
  }
  if (param_5 != 0) {
    temp_v2 = FUN_002c3994();
    temp_v1 = FUN_002c3984();
    if ((temp_v0 < temp_v2) || (temp_v1 + temp_v2 < temp_v0 + (int)unaff_r4)) {
      temp_v0 = 0;
      if (temp_v0 == 0) {
        return 0;
      }
      (**(romwright_code **)(*param_1 + 8))(param_1,param_2,temp_v0);
      return temp_v0;
    }
  }
  piVar4 = param_1;
  FUN_002a78c0(param_1,param_2,temp_v0,unaff_r4,0,param_4);
  if (piVar4 != unaff_r4) {
    return 0;
  }
  FUN_002a4b0c(temp_v0,unaff_r4);
  if (temp_v0 == 0) {
    return 0;
  }
  (**(romwright_code **)(*param_1 + 8))(param_1,param_2,temp_v0);
  return temp_v0;
}
