/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_hid_CTR_AccelerometerReader_ReadLatest` (_code @ 0x11c4e4, 0xc4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern void nn_hid_CTR_AccelerometerReader_Transform(unsigned int, unsigned int);
/* Supplied declaration required: nn_hid_CTR_detail_CalculateAccelerationTightly. */
extern void nn_hidlow_CTR_AccelerometerLifoRing_ReadData(unsigned int, unsigned int, int, int *, long long *, int *);


unsigned char nn_hid_CTR_AccelerometerReader_ReadLatest(int *param_1,short *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1 [2];
  unsigned long long temp_v2;
  
  (*(unsigned int *)((unsigned char *)&temp_v2 + 0)) = 0xffffffff;
  (*(unsigned int *)((unsigned char *)&temp_v2 + 4)) = 0xffffffff;
  temp_v1[1] = 0xffffffff;
  nn_hidlow_CTR_AccelerometerLifoRing_ReadData
            (*(unsigned int *)(*param_1 + 4),(unsigned int)param_2,1,temp_v1,(long long *)&temp_v2,temp_v1 + 1);
  if (0 < temp_v1[0]) {
    temp_v0 = (int)*param_2;
    nn_hid_CTR_detail_CalculateAccelerationTightly
              (temp_v0,(int)(short)param_1[2],(int)(short)param_1[1],(int)*(short *)((int)param_1 + 6)
              );
    *param_2 = (short)temp_v0;
    *(short *)(param_1 + 2) = (short)temp_v0;
    temp_v0 = (int)param_2[1];
    nn_hid_CTR_detail_CalculateAccelerationTightly
              (temp_v0,(int)*(short *)((int)param_1 + 10),(int)(short)param_1[1],
               (int)*(short *)((int)param_1 + 6));
    param_2[1] = (short)temp_v0;
    *(short *)((int)param_1 + 10) = (short)temp_v0;
    temp_v0 = (int)param_2[2];
    nn_hid_CTR_detail_CalculateAccelerationTightly
              (temp_v0,(int)(short)param_1[3],(int)(short)param_1[1],(int)*(short *)((int)param_1 + 6)
              );
    param_2[2] = (short)temp_v0;
    *(short *)(param_1 + 3) = (short)temp_v0;
    nn_hid_CTR_AccelerometerReader_Transform((unsigned int)param_1,(unsigned int)param_2);
  }
  return 0 < temp_v1[0];
}
