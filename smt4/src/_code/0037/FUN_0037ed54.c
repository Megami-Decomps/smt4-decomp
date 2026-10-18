/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037ed54` (_code @ 0x37ed54, 0x80 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0037ed54_arg0 fn_0037ed54_arg0;
struct fn_0037ed54_arg0 {
    unsigned char pad_0x0[0xe];
    char field_0xe; /* +0xe */
    unsigned char pad_0xf[0x44];
    char field_0x53; /* +0x53 */
    byte field_0x54; /* +0x54 */
    unsigned char pad_0x55[0x7b];
    undefined4 field_0xd0; /* +0xd0 */
};

/* Supplied declaration required: nw_snd_internal_driver_Voice_Pause. */


void FUN_0037ed54(fn_0037ed54_arg0 *param_1,int param_2,unsigned char param_3)

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
    param_1->field_0x54 = param_3;
  }
  temp_v2 = (unsigned int)(param_2 != 0);
  if (param_1->field_0x54 != 0) {
    temp_v2 = 1;
  }
  if ((int)param_1->field_0x53 != temp_v2) {
    temp_v1 = 0;
    if (temp_v1 < (unsigned int)param_1->field_0xd0) {
      do {
        temp_v0 = *(int *)((int)param_1 + temp_v1 * 0x340 + 0x108);
        if (temp_v0 != 0) {
          nw_snd_internal_driver_Voice_Pause(temp_v0,temp_v2);
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < (unsigned int)param_1->field_0xd0);
    }
    param_1->field_0x53 = (char)temp_v2;
  }
  return;
}
