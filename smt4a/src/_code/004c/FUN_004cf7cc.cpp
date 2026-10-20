/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004cf7cc` (_code @ 0x4cf7cc, 0xac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e188(int, int, int, int, int);
int FUN_001505ac(int, unsigned char *, int, unsigned char *, int, int, int, int, int, unsigned char *, int);
int FUN_00184528(int, int);
int Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(void);

/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned char DAT_00535e90; /* 0x535e90 */
extern unsigned char DAT_00535f14; /* 0x535f14 */
extern unsigned char DAT_00535f5c; /* 0x535f5c */

/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: FUN_001505ac. */
/* Supplied declaration required: FUN_00184528. */
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


void FUN_004cf7cc(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object();
  FUN_001505ac(param_1,&DAT_00535e90,0x84,&DAT_00535f14,0x48,0,0,0,0,&DAT_00535f5c,0xe0);
  temp_v0 = 0;
  do {
    FUN_0014e188(param_1 + temp_v0 * 0x8c + 0x20,0x13,1,param_1,0x15);
    FUN_00184528(param_1,temp_v0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0xd);
  return;
}

} /* extern "C" */
