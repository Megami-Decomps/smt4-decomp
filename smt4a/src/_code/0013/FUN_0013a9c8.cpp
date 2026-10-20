/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013a9c8` (_code @ 0x13a9c8, 0x128 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00145084(int);
int FUN_001640cc(int *);
int renderCtxResetColorScale(unsigned int);
int FUN_0016c4b8(unsigned int, unsigned int);
int skinObjectUpdateMatrices(unsigned int);
int VectorSignedToFloat(int, int);
int VectorUnsignedToFloat(int, int);

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned char DAT_0057ffd2; /* 0x57ffd2 */
extern int DAT_0057ffe4; /* 0x57ffe4 */
extern unsigned int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
extern int FUN_00144eec(void);
/* Supplied declaration required: FUN_00145084. */
extern unsigned int FUN_00153f64(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001640cc. */
/* Supplied declaration required: renderCtxResetColorScale. */
/* Supplied declaration required: FUN_0016c4b8. */
/* Supplied declaration required: skinObjectUpdateMatrices. */


unsigned int FUN_0013a9c8(void)

{
/* irregular: irregular input(s): in_fpscr; 8 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int in_fpscr;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  float temp_v5;
  
  if (DAT_0057ffe4 < 1) {
    DAT_0057ffe4 = 0;
    DAT_0057ffd2 = 0;
  }
  else {
    temp_v2 = 0x3f800000;
    temp_v3 = 0x3f800000;
    temp_v4 = 0x3f800000;
    temp_v5 = 1.0f;
    if (DAT_0057ffe4 >= 0x54) {
      temp_v5 = (float)VectorUnsignedToFloat(0x58 - DAT_0057ffe4,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v5 = temp_v5 * 0.2f;
    }
    else if (DAT_0057ffe4 < 0x16) {
      temp_v5 = (float)VectorSignedToFloat(DAT_0057ffe4 - 2,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v5 = temp_v5 * 0.05f;
    }
    if (0.0f < temp_v5) {
      temp_v0 = FUN_00153f64(0x21,0);
      FUN_0016c4b8(g_renderCtx,temp_v0);
      FUN_001640cc(&temp_v2);
      skinObjectUpdateMatrices(g_renderCtx);
      renderCtxResetColorScale(g_renderCtx);
    }
    temp_v1 = FUN_00144eec();
    DAT_0057ffe4 = (DAT_0057ffe4 - temp_v1) - 1;
  }
  FUN_00145084(0x401);
  return 0;
}

} /* extern "C" */
