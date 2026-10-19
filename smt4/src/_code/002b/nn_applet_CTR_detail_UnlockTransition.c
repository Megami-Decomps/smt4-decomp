/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_applet_CTR_detail_UnlockTransition` (_code @ 0x2bb434, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned int nn_applet_CTR_detail_CallUtility(unsigned int, unsigned char *, unsigned int, unsigned char *, unsigned int, int *);


void nn_applet_CTR_detail_UnlockTransition(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0 [2];
  
  temp_v0[0] = param_1;
  nn_applet_CTR_detail_CallUtility(7,(unsigned char *)temp_v0,4,0x0,0,0x0);
                    /* WARNING: Treating indirect jump as return */
  return;
}
