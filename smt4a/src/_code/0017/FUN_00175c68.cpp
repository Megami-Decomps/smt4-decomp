#include "romwright_types.h"

extern "C" {

int FUN_001b2040(...);
int nw_snd_internal_driver_Voice_Free(...);
int nw_snd_internal_driver_Voice_Stop(...);

typedef struct fn_00175c68_arg0 fn_00175c68_arg0;
struct fn_00175c68_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x134];
    undefined1 field_0x138; /* +0x138 */
    undefined1 field_0x139; /* +0x139 */
    byte field_0x13a; /* +0x13a */
    unsigned char pad_0x13b[0x65];
    void *field_0x1a0; /* +0x1a0 */
    unsigned char field_0x1a4; /* +0x1a4 */
    unsigned char pad_0x1a5[0x3];
    int field_0x1a8; /* +0x1a8 */
};

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned int FUN_00191548(void);
/* Supplied declaration required: FUN_001b2040. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_Free. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_Stop. */


void FUN_00175c68(fn_00175c68_arg0 *param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  
  if (param_1->field_0x1a8 != 0) {
    nw_snd_internal_driver_Voice_Stop();
    nw_snd_internal_driver_Voice_Free(param_1->field_0x1a8);
    param_1->field_0x1a8 = 0;
    param_1->field_0x138 = 0;
    param_1->field_0x139 = 0;
    if (param_1->field_0x1a0 != (romwright_code *)0x0) {
      ((int (*)(...))param_1->field_0x1a0)(param_1,0,*(unsigned int *)&param_1->field_0x1a4);
    }
    if (param_1->field_0x13a != 0) {
      param_1->field_0x13a = 0;
      temp_v0 = FUN_00191548();
      FUN_001b2040(temp_v0,param_1);
      return;
    }
  }
  return;
}

} /* extern "C" */
