#include "romwright_types.h"

extern "C" {

int nw_snd_SoundActor_Initialize(void *, unsigned int);

typedef struct fn_00120eb4_arg0 fn_00120eb4_arg0;
struct fn_00120eb4_arg0 {
    unsigned char pad_0x0[0x5c];
    undefined4 field_0x5c; /* +0x5c */
    undefined4 field_0x60; /* +0x60 */
    unsigned char pad_0x64[0x1d];
    byte field_0x81; /* +0x81 */
    undefined1 field_0x82; /* +0x82 */
};

/* Supplied declaration required: nw_snd_SoundActor_Initialize. */


void nw_snd_Sound3DActor_Initialize(fn_00120eb4_arg0 *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  if (param_1->field_0x81 == 0) {
    nw_snd_SoundActor_Initialize(param_1, param_2);
    param_1->field_0x81 = 1;
    param_1->field_0x5c = param_3;
    param_1->field_0x82 = 0;
    param_1->field_0x60 = param_2;
  }
  return;
}

} /* extern "C" */
