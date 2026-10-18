/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_SoundArchiveLoader_LoadWaveArchiveImpl` (_code @ 0x190a2c, 0xc0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 3 slot(s), 9 byte(s) */
typedef struct {
    unsigned char sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_6_stack;

/* Supplied declaration required: FUN_001a5c44. */
extern int FUN_001a8930(unsigned int, unsigned int, unsigned int *);
extern unsigned int FUN_001a8e14(unsigned int, unsigned int);
/* Supplied declaration required: nw_snd_internal_SoundArchiveLoader_LoadImpl. */


void nw_snd_internal_SoundArchiveLoader_LoadWaveArchiveImpl
               (int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5,
               unsigned int param_6)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2 [2];
  char temp_v3;
  
  temp_v2[0] = 0xffffffff;
  temp_v3 = '\0';
  temp_v0 = FUN_001a8930(*(unsigned int *)(param_1 + 4),param_2,temp_v2);
  if (temp_v0 != 0) {
    if (temp_v3 != '\0') {
      FUN_001a5c44(param_1,param_2,param_3,param_4,param_6);
    }
    else if ((param_5 & 8) != 0) {
      temp_v1 = FUN_001a8e14(*(unsigned int *)(param_1 + 4),param_2);
      nw_snd_internal_SoundArchiveLoader_LoadImpl(param_1,temp_v1,param_4,param_6,1);
    }
  }
  return;
}
