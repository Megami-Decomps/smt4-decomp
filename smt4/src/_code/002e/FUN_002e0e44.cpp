/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e0e44` (_code @ 0x2e0e44, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdCecMessageBoxClose(unsigned int);
int asdCecMessageBoxOpen(int, unsigned int, unsigned int);

extern unsigned char g_asdCec; /* 0x464fa8 */

/* Supplied declaration required: asdCecMessageBoxClose. */
/* Supplied declaration required: asdCecMessageBoxOpen. */
extern int FUN_002b5a48(unsigned int);
extern unsigned int nn_cec_CTR_MessageBox_SetMessageBoxData(unsigned int, unsigned int, unsigned int, unsigned int);


unsigned int
FUN_002e0e44(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
            unsigned int param_5)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 5;
  temp_v0 = *(int *)((*(int *)((unsigned char *)&g_asdCec + 0x4)) + 0x18);
  asdCecMessageBoxOpen(temp_v0,param_1,param_2);
  if (-1 < temp_v0) {
    temp_v0 = FUN_002b5a48(param_3);
    nn_cec_CTR_MessageBox_SetMessageBoxData
              (*(unsigned int *)((*(int *)((unsigned char *)&g_asdCec + 0x4)) + 0x18),0x6e,param_3,temp_v0 << 1);
    nn_cec_CTR_MessageBox_SetMessageBoxData
              (*(unsigned int *)((*(int *)((unsigned char *)&g_asdCec + 0x4)) + 0x18),0x65,param_4,param_5);
    asdCecMessageBoxClose(*(unsigned int *)((*(int *)((unsigned char *)&g_asdCec + 0x4)) + 0x18));
    temp_v1 = 0;
  }
  return temp_v1;
}

} /* extern "C" */
