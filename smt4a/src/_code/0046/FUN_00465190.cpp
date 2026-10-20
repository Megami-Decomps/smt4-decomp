/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00465190` (_code @ 0x465190, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_snd_internal_driver_Voice_Pause(int, unsigned int);

typedef struct fn_00465190_arg0 fn_00465190_arg0;
struct fn_00465190_arg0 {
    unsigned char pad_0x0[0xe];
    char field_0xe; /* +0xe */
    unsigned char pad_0xf[0x45];
    char field_0x54; /* +0x54 */
    byte field_0x55; /* +0x55 */
    unsigned char pad_0x56[0x1ca];
    undefined4 field_0x220; /* +0x220 */
};

/* Supplied declaration required: nw_snd_internal_driver_Voice_Pause. */


void FUN_00465190(fn_00465190_arg0 *param_1,int param_2,unsigned char param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  if (param_2 != 0) {
    param_3 = 1;
  }
  param_1->field_0xe = (char)param_2;
  if (param_2 != 0) {
    param_1->field_0x55 = param_3;
  }
  temp_v2 = (unsigned int)(param_2 != 0);
  if (param_1->field_0x55 != 0) {
    temp_v2 = 1;
  }
  if ((int)param_1->field_0x54 != temp_v2) {
    temp_v1 = 0;
    if (temp_v1 < (unsigned int)param_1->field_0x220) {
      do {
        temp_v0 = *(int *)((int)param_1 + temp_v1 * 0x3c8 + 0x22c);
        if (temp_v0 != 0) {
          nw_snd_internal_driver_Voice_Pause(temp_v0,temp_v2);
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < (unsigned int)param_1->field_0x220);
    }
    param_1->field_0x54 = (char)temp_v2;
  }
  return;
}

} /* extern "C" */
