/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d1fac` (_code @ 0x3d1fac, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016c4b8(int, unsigned int);
int FUN_0019e5e0(unsigned int, unsigned int, unsigned int, unsigned int, unsigned long long, unsigned long long);
int FUN_0019ea00(void);
int FUN_001b4120(unsigned long long *, int);
int VectorSignedToFloat(unsigned int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_001696f4(void);
/* Supplied declaration required: FUN_0016c4b8. */
/* Supplied declaration required: FUN_0019e5e0. */
/* Supplied declaration required: FUN_0019ea00. */
/* Supplied declaration required: FUN_001b4120. */


void FUN_003d1fac(void)

{
/* irregular: irregular input(s): in_d8, in_d9, in_fpscr; 6 native warning(s); review required */
  int temp_v0;
  unsigned int in_fpscr;
  unsigned long long in_d8;
  unsigned long long in_d9;
  unsigned long long uStack_20;
  unsigned long long uStack_18;
  unsigned long long uStack_10;
  
  temp_v0 = FUN_001696f4();
  if ((temp_v0 == 1) && (*(int *)(g_renderCtx + 0x52c) != 0)) {
    if (*(int *)(g_renderCtx + 0x52c) != 1) {
      return;
    }
    temp_v0 = 1;
  }
  else {
    temp_v0 = 0;
  }
  if (*(int *)(temp_v0 * 4 + 0x617e80) != 0) {
    FUN_0016c4b8(g_renderCtx,*(unsigned int *)(temp_v0 * 0x20 + 0x617ec0));
    temp_v0 = *(int *)(temp_v0 * 0x20 + 0x617ec0);
    VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x18),(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x14),(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_0019ea00();
    FUN_0019e5e0(0xffffffff,0xffffffff,0xffffffff,0xffffffff,in_d8,in_d9);
    uStack_20 = 0x1024500000001;
    uStack_18 = 0xf023100000001;
    uStack_10 = 0x1025300000000;
    FUN_001b4120(&uStack_20,0x18);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  return;
}

} /* extern "C" */
