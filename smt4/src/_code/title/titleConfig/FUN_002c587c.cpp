/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c587c` (_code @ 0x2c587c, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001082a0(int);
int FUN_00109670(int);
int FUN_002c34e8(int);
int VectorUnsignedToFloat(unsigned int, int);
int nw_snd_internal_BasicSound_SetVolume(int, int, unsigned int, unsigned int, unsigned long long, unsigned int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_4_stack;

extern unsigned char DAT_0044e0b1; /* 0x44e0b1 */
extern unsigned char DAT_0044e0f8; /* 0x44e0f8 */
extern unsigned char DAT_0044e0f9; /* 0x44e0f9 */
extern unsigned char DAT_0044e0fa; /* 0x44e0fa */
extern unsigned char DAT_0044e0fb; /* 0x44e0fb */
extern unsigned char DAT_004e2f68; /* 0x4e2f68 */
extern unsigned char DAT_004e3135; /* 0x4e3135 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001082a0. */
/* Supplied declaration required: FUN_00109670. */
/* Supplied declaration required: FUN_002c34e8. */
/* Supplied declaration required: nw_snd_internal_BasicSound_SetVolume. */


void FUN_002c587c(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_d8, in_fpscr; 5 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned int unaff_r4;
  unsigned int in_fpscr;
  unsigned long long in_d8;
  
  FUN_001082a0(DAT_0044e0f8);
  FUN_002c34e8(DAT_0044e0f9);
  FUN_00109670(DAT_0044e0fa);
  temp_v0 = 0xb0;
  DAT_0044e0b1 = DAT_0044e0fb;
  if (DAT_0044e0fb >= 0x41) {
    temp_v0 = 0x40;
  }
  DAT_004e3135 = DAT_0044e0fb;
  if (DAT_0044e0fb >= 0x41) {
    DAT_004e3135 = temp_v0;
  }
  if (DAT_0044e0fb != 0) {
    VectorUnsignedToFloat((unsigned int)DAT_004e3135,(unsigned char)(in_fpscr >> 0x16) & 3);
  }
  temp_v1 = 0;
  do {
    if (*(int *)(&DAT_004e2f68 + temp_v1 * 4) != 0) {
      nw_snd_internal_BasicSound_SetVolume
                (*(int *)(&DAT_004e2f68 + temp_v1 * 4),0,param_3,param_4,in_d8,unaff_r4);
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 4);
  return;
}

} /* extern "C" */
