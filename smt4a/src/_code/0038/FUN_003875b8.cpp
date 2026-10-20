/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003875b8` (_code @ 0x3875b8, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
} param_1_stack;

extern unsigned char g_asdSoundSystem; /* 0x63e1e8 */

extern int nw_snd_SoundArchive_IsAvailable(unsigned char *);
extern int FUN_00178400(unsigned char *, unsigned int, unsigned char *);


unsigned int FUN_003875b8(unsigned int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [12];
  unsigned int temp_v3;
  
  temp_v0 = nw_snd_SoundArchive_IsAvailable(&g_asdSoundSystem);
  temp_v1 = 0xffffffff;
  if ((temp_v0 != 0) && (temp_v0 = FUN_00178400(&g_asdSoundSystem,param_1,temp_v2), temp_v0 != 0)) {
    temp_v1 = temp_v3;
  }
  return temp_v1;
}

} /* extern "C" */
