#include "romwright_types.h"

extern "C" {

int rt_memcpy(...);

typedef struct fn_0033f764_arg0 fn_0033f764_arg0;
struct fn_0033f764_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
    undefined4 field_0x20; /* +0x20 */
    undefined4 field_0x24; /* +0x24 */
    undefined4 field_0x28; /* +0x28 */
    undefined4 field_0x2c; /* +0x2c */
    undefined4 field_0x30; /* +0x30 */
    undefined4 field_0x34; /* +0x34 */
    undefined4 field_0x38; /* +0x38 */
    undefined1 field_0x3c; /* +0x3c */
    undefined1 field_0x3d; /* +0x3d */
    undefined1 field_0x3e; /* +0x3e */
    unsigned char pad_0x3f[0xc];
    undefined1 field_0x4b; /* +0x4b */
    undefined1 field_0x4c; /* +0x4c */
    undefined1 field_0x4d; /* +0x4d */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int FUN_002adc88(void);
/* Supplied declaration required: rt_memcpy. */


void FUN_0033f764(fn_0033f764_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002adc88();
  rt_memcpy(temp_v0 + 0x100,param_1,0x44);
  return;
}

} /* extern "C" */
