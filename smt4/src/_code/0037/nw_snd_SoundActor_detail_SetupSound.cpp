/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_SoundActor_detail_SetupSound` (_code @ 0x376744, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_1: 2 slot(s), 5 byte(s) */
typedef struct {
    unsigned char spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;


unsigned char nw_snd_SoundActor_detail_SetupSound(int *param_1)

{
  unsigned char temp_v0;
  
  temp_v0 = (**(romwright_code **)(*param_1 + 0x10))();
  return temp_v0;
}

} /* extern "C" */
