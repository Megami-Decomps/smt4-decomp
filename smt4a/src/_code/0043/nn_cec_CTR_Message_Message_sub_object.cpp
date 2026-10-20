#include "romwright_types.h"

extern "C" {

int nn_cec_CTR_Message_InitializeMessage(...);

typedef struct fn_00430e0c_arg0 fn_00430e0c_arg0;
struct fn_00430e0c_arg0 {
    uint field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x12c];
    undefined1 field_0x130; /* +0x130 */
    unsigned char pad_0x131[0x7];
    undefined4 field_0x138; /* +0x138 */
    undefined4 field_0x13c; /* +0x13c */
    undefined4 field_0x140; /* +0x140 */
    undefined4 field_0x144; /* +0x144 */
    undefined4 field_0x148; /* +0x148 */
    undefined4 field_0x14c; /* +0x14c */
    undefined4 field_0x150; /* +0x150 */
    undefined4 field_0x154; /* +0x154 */
    undefined4 field_0x158; /* +0x158 */
    undefined4 field_0x15c; /* +0x15c */
    undefined4 field_0x160; /* +0x160 */
};

/* Supplied declaration required: nn_cec_CTR_Message_InitializeMessage. */


int nn_cec_CTR_Message_Message_sub_object(fn_00430e0c_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  param_1->field_0x130 = 0;
  param_1->field_0x138 = 0;
  param_1->field_0x144 = 0;
  param_1->field_0x148 = 0;
  param_1->field_0x14c = 0;
  param_1->field_0x150 = 0;
  param_1->field_0x154 = 0;
  param_1->field_0x158 = 0;
  param_1->field_0x15c = 0;
  param_1->field_0x160 = 0;
  param_1->field_0x13c = 0;
  param_1->field_0x140 = 0;
  nn_cec_CTR_Message_InitializeMessage(param_1);
  return (int)param_1;
}

} /* extern "C" */
