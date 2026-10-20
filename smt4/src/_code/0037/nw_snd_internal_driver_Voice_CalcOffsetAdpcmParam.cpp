#include "romwright_types.h"

extern "C" {

int nn_snd_CTR_DecodeAdpcmData(int, unsigned char *, unsigned int, unsigned int, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
} param_4_stack;

/* Supplied declaration required: nn_snd_CTR_DecodeAdpcmData. */


void nw_snd_internal_driver_Voice_CalcOffsetAdpcmParam
               (unsigned int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1 [28];
  
  for (temp_v0 = 0; temp_v0 < param_3; temp_v0 += 0xe) {
    nn_snd_CTR_DecodeAdpcmData(param_4,temp_v1,param_2,param_1,0xe);
    param_4 = param_4 + 8;
  }
  return;
}

} /* extern "C" */
