/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00359008` (_code @ 0x359008, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

struct AsdCecMessageBox;

extern "C" {

s32 asdCecMessageBoxOpen(AsdCecMessageBox* box, u32 id, u32 expectedTag);
int asdCecMessageBoxClose(unsigned int);

extern unsigned char g_asdCec; /* 0x5b3f94 */

extern int wstrlenU16(unsigned int);
/* Supplied declaration required: asdCecMessageBoxClose. */
extern unsigned int nn_cec_CTR_MessageBox_SetMessageBoxData(unsigned int, unsigned int, unsigned int, unsigned int);


unsigned int
FUN_00359008(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
            unsigned int param_5)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 5;
  temp_v0 = *(int *)((*(int *)((unsigned char *)&g_asdCec + 0x4)) + 0x18);
  temp_v0 = asdCecMessageBoxOpen((AsdCecMessageBox*)temp_v0,param_1,param_2);
  if (-1 < temp_v0) {
    temp_v0 = wstrlenU16(param_3);
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
