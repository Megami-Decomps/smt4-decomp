/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011bf24` (_code @ 0x11bf24, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern signed char DAT_0044e459; /* 0x44e459 */
extern unsigned short DAT_0044e45c; /* 0x44e45c */
extern unsigned short DAT_0044e45e; /* 0x44e45e */
extern int DAT_0044e460; /* 0x44e460 */
extern unsigned char *DAT_0044e470; /* 0x44e470 */
extern unsigned int DAT_0044e474; /* 0x44e474 */
extern unsigned char DAT_004657b8; /* 0x4657b8 */

extern unsigned int nn_dsp_CTR_DSP_LoadComponent(void);


unsigned int FUN_0011bf24(void)

{
  unsigned int temp_v0;
  
  DAT_0044e470 = &DAT_004657b8;
  DAT_0044e474 = 0xc20a;
  DAT_0044e45c = 0xff;
  DAT_0044e45e = 0xff;
  if ((DAT_0044e460 != 0) && (DAT_0044e459 == '\0')) {
    temp_v0 = nn_dsp_CTR_DSP_LoadComponent();
    return temp_v0;
  }
  return 0xc8a0a7fc;
}
