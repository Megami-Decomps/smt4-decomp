/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_SoundArchivePlayer_detail_SetupSound` (_code @ 0x3779e0, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00377b9c(void);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_00377b9c. */


unsigned int nw_snd_SoundArchivePlayer_detail_SetupSound(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_00377b9c();
  return param_1 & 0xff;
}

} /* extern "C" */
