/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_hid_CTR_AnalogStickClamper_ClampCore` (_code @ 0x1286ec, 0x94 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_5_stack;

extern short nn_hidlow_ClampStickCircle(short *, short *, int, int, int, int);
extern short nn_hidlow_ClampStickCross(short *, short *, int, int, int, int);
extern void nn_hidlow_ClampStickMinimum(short *, short *, int, int, int, int);


short * nn_hid_CTR_AnalogStickClamper_ClampCore
                  (short *param_1,short *param_2,short *param_3,int param_4,int param_5)

{
  char temp_v0;
  short temp_v1;
  
  temp_v0 = (char)param_1[6];
  if (temp_v0 == '\0') {
    temp_v1 = nn_hidlow_ClampStickCircle
                      (param_2,param_3,param_4,param_5,(int)*param_1,(int)param_1[3]);
    return (short *)(int)temp_v1;
  }
  if (temp_v0 != '\x01') {
    if (temp_v0 == '\x02') {
      nn_hidlow_ClampStickMinimum(param_2,param_3,param_4,param_5,(int)param_1[2],(int)param_1[5]);
      param_1 = param_2;
    }
    return param_1;
  }
  temp_v1 = nn_hidlow_ClampStickCross(param_2,param_3,param_4,param_5,(int)param_1[1],(int)param_1[4])
  ;
  return (short *)(int)temp_v1;
}

} /* extern "C" */
