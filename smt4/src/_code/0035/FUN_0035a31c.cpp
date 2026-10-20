/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035a31c` (_code @ 0x35a31c, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern signed char DAT_0044e459; /* 0x44e459 */
extern unsigned short DAT_0044e45c; /* 0x44e45c */
extern unsigned short DAT_0044e45e; /* 0x44e45e */
extern int DAT_0044e460; /* 0x44e460 */
extern unsigned char *DAT_0044e470; /* 0x44e470 */
extern unsigned int DAT_0044e474; /* 0x44e474 */

extern unsigned int nn_dsp_CTR_DSP_LoadComponent(unsigned int, unsigned char *, unsigned int, unsigned short, unsigned short, unsigned char *);


unsigned int FUN_0035a31c(unsigned char *param_1,unsigned int param_2,unsigned short param_3,unsigned short param_4)

{
  unsigned int temp_v0;
  
  DAT_0044e470 = param_1;
  DAT_0044e474 = param_2;
  DAT_0044e45c = param_3;
  DAT_0044e45e = param_4;
  if ((DAT_0044e460 != 0) && (DAT_0044e459 == '\0')) {
    temp_v0 = nn_dsp_CTR_DSP_LoadComponent
                      (DAT_0044e460,param_1,param_2,param_3,param_4,(unsigned char *)&DAT_0044e459);
    return temp_v0;
  }
  return 0xc8a0a7fc;
}

} /* extern "C" */
