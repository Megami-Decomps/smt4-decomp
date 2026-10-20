/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013a324` (_code @ 0x13a324, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00145adc(void);
int FUN_00178b04(int, unsigned char *, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char LAB_0013a390; /* 0x13a390 */
extern int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00145adc. */
extern int FUN_0015a21c(int);
/* Supplied declaration required: FUN_00178b04. */


void FUN_0013a324(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = 0x13a8;
  FUN_00178b04(0x13a8,&LAB_0013a390,0x24);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_0015a21c(temp_v0 + 0x4a0);
    temp_v1 = FUN_0015a21c(temp_v1 + 0x700);
    temp_v0 = FUN_0015a21c(temp_v1 + 0x50c);
    temp_v1 = temp_v0 - 0x10ac;
    *(unsigned int *)(temp_v0 + 300) = 0x3f800000;
    *(unsigned int *)(temp_v0 + 0x130) = 0x3f800000;
    *(unsigned int *)(temp_v0 + 0x134) = 0x3f800000;
    *(unsigned int *)(temp_v0 + 0x138) = 0x3f800000;
  }
  g_renderCtx = temp_v1;
  FUN_00145adc();
  return;
}

} /* extern "C" */
