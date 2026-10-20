/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_SoundThread_Finalize` (_code @ 0x1219bc, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00146ee0(void);

typedef struct fn_001219bc_arg0 fn_001219bc_arg0;
struct fn_001219bc_arg0 {
    unsigned char pad_0x0[0x1cc];
    undefined4 field_0x1cc; /* +0x1cc */
    unsigned char pad_0x1d0[0x10];
    void *field_0x1e0; /* +0x1e0 */
    unsigned char pad_0x1e4[0x10];
    byte field_0x1f4; /* +0x1f4 */
    unsigned char pad_0x1f5[0x2];
    undefined1 field_0x1f7; /* +0x1f7 */
};

typedef int romwright_code(...);
/* Supplied declaration required: FUN_00146ee0. */


void nw_snd_internal_driver_SoundThread_Finalize(fn_001219bc_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  if (param_1->field_0x1f4 != 0) {
    param_1->field_0x1f7 = 1;
    FUN_00146ee0();
    param_1->field_0x1f4 = 0;
  }
  puVar1 = (unsigned int *)param_1->field_0x1e0;
  if (param_1->field_0x1e0 != &param_1->field_0x1e0) {
    do {
      puVar2 = (unsigned int *)*puVar1;
      (**(romwright_code **)(puVar1[-1] + 0x10))(puVar1 + -1);
      puVar1 = puVar2;
    } while ((void **)puVar2 != &param_1->field_0x1e0);
  }
  param_1->field_0x1cc = 0xffffffff;
  return;
}

} /* extern "C" */
