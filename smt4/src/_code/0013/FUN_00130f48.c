/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00130f48` (_code @ 0x130f48, 0x124 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00130f48_arg0 fn_00130f48_arg0;
struct fn_00130f48_arg0 {
    unsigned char pad_0x0[0x1f0];
    undefined4 field_0x1f0; /* +0x1f0 */
    byte field_0x1f4; /* +0x1f4 */
    unsigned char pad_0x1f5[0x1];
    char field_0x1f6; /* +0x1f6 */
    undefined1 field_0x1f7; /* +0x1f7 */
};

/* stack frame of param_9: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
} param_9_stack;

extern int nw_snd_internal_driver_SoundThread_SoundThreadFunc(); /* 0x14c4c8 */
extern unsigned int DAT_00472364; /* 0x472364 */
extern unsigned char DAT_004ea4c8; /* 0x4ea4c8 */

/* Supplied declaration required: FUN_00147004. */
/* Supplied declaration required: FUN_002bfefc. */
/* Supplied declaration required: nn_snd_CTR_StartSoundThread. */
/* Supplied declaration required: nw_snd_internal_driver_SoundThread_SoundThread_sub_object. */


int FUN_00130f48(fn_00130f48_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                unsigned int param_5,unsigned int param_6,unsigned int param_7,unsigned int param_8,
                unsigned int param_9)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned long long temp_v1;
  int temp_v2;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int temp_v3;
  
  if (param_1->field_0x1f4 == 0) {
    param_1->field_0x1f4 = 1;
    param_1->field_0x1f6 = (char)param_9;
    param_1->field_0x1f7 = 0;
  }
  param_1->field_0x1f0 = param_8;
  temp_v3 = param_7;
  uStack_30 = param_5;
  uStack_2c = param_6;
  temp_v2 = param_2;
  uStack_38 = param_3;
  uStack_34 = param_4;
  if ((DAT_00472364 & 1) == 0) {
    temp_v1 = FUN_002bfefc(&DAT_00472364);
    param_2 = (unsigned int)((unsigned long long)temp_v1 >> 0x20);
    if ((int)temp_v1 != 0) {
      nw_snd_internal_driver_SoundThread_SoundThread_sub_object(&DAT_004ea4c8);
      param_2 = 0x141040;
    }
  }
  if (((DAT_00472364 & 1) == 0) && (temp_v0 = FUN_002bfefc(&DAT_00472364,param_2), temp_v0 != 0)) {
    nw_snd_internal_driver_SoundThread_SoundThread_sub_object(&DAT_004ea4c8);
  }
  puVar2 = (unsigned int *)&temp_v2;
  nn_snd_CTR_StartSoundThread
            (puVar2,nw_snd_internal_driver_SoundThread_SoundThreadFunc,&DAT_004ea4c8);
  FUN_00147004(param_9);
  return ((int)puVar2 >> 0x1f) + 1;
}
