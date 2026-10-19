/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_applet_CTR_detail_LockTransition` (_code @ 0x12a6d4, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 5 slot(s), 17 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned char spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern unsigned int nn_applet_CTR_detail_CallUtility(unsigned int, unsigned char *, unsigned int, unsigned char *, unsigned int, int *);


void nn_applet_CTR_detail_LockTransition(unsigned int param_1,unsigned char param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  
  temp_v0 = param_1;
  temp_v1 = param_2;
  nn_applet_CTR_detail_CallUtility(5,(unsigned char *)&temp_v0,8,0x0,0,0x0);
                    /* WARNING: Treating indirect jump as return */
  return;
}
