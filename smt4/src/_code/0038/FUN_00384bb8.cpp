#include "romwright_types.h"

extern "C" {

int FUN_002c18e4(unsigned int);
int FUN_002c198c(unsigned int);

typedef struct fn_00384bb8_arg0 fn_00384bb8_arg0;
struct fn_00384bb8_arg0 {
    unsigned char pad_0x0[0x4];
    unsigned char field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x11c7];
    undefined4 field_0x11cc; /* +0x11cc */
    undefined4 field_0x11d0; /* +0x11d0 */
    undefined4 field_0x11d4; /* +0x11d4 */
    undefined4 field_0x11d8; /* +0x11d8 */
    undefined1 field_0x11dc; /* +0x11dc */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_002c18e4. */
/* Supplied declaration required: FUN_002c198c. */


void FUN_00384bb8(fn_00384bb8_arg0 *param_1)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)&param_1->field_0x4 > 2) {
    FUN_002c198c(DAT_0044ea00);
    FUN_002c18e4(DAT_0044ea00);
    return;
  }
  return;
}

} /* extern "C" */
