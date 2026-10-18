/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_SoundArchiveLoader_LoadSequenceSound` (_code @ 0x174dd8, 0xe4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 9 slot(s), 30 byte(s) */
typedef struct {
    unsigned char sp23; /* 0x23: local_23 */
    unsigned char sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_5_stack;

/* Supplied declaration required: FUN_00190c24. */
extern int FUN_0019472c(unsigned int, unsigned int, unsigned int *);
extern unsigned int FUN_001a8e14(unsigned int);
/* Supplied declaration required: nw_snd_internal_SoundArchiveLoader_LoadImpl. */


void nw_snd_internal_SoundArchiveLoader_LoadSequenceSound
               (int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4 [5];
  unsigned char temp_v5;
  unsigned char temp_v6;
  
  if ((param_4 & 1) != 0) {
    temp_v0 = FUN_001a8e14(*(unsigned int *)(param_1 + 4));
    temp_v1 = param_1;
    nw_snd_internal_SoundArchiveLoader_LoadImpl(param_1,temp_v0,param_3,param_5,0);
    if (temp_v1 == 0) {
      return;
    }
  }
  if ((param_4 & 0xc) != 0) {
    temp_v5 = 0;
    temp_v3 = 0;
    temp_v6 = 0;
    temp_v4[4] = 0;
    temp_v4[0] = -1;
    temp_v4[1] = 0xffffffff;
    temp_v4[2] = 0xffffffff;
    temp_v4[3] = 0xffffffff;
    temp_v1 = FUN_0019472c(*(unsigned int *)(param_1 + 4),param_2,(unsigned int *)&temp_v3);
    if (temp_v1 != 0) {
      temp_v2 = 0;
      do {
        if ((temp_v4[temp_v2] != -1) &&
           (temp_v1 = param_1, FUN_00190c24(param_1,temp_v4[temp_v2],param_3,param_4,param_5),
           temp_v1 == 0)) {
          return;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 4);
    }
  }
  return;
}
