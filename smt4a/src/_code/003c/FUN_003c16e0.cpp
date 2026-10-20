/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c16e0` (_code @ 0x3c16e0, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a4964(...);

typedef struct fn_003c16e0_arg0 fn_003c16e0_arg0;
struct fn_003c16e0_arg0 {
    unsigned char pad_0x0[0x1c];
    undefined4 field_0x1c; /* +0x1c */
    undefined4 field_0x20; /* +0x20 */
    undefined4 field_0x24; /* +0x24 */
    unsigned char pad_0x28[0x8];
    undefined4 field_0x30; /* +0x30 */
    unsigned char pad_0x34[0xc];
    undefined4 field_0x40; /* +0x40 */
    undefined4 field_0x44; /* +0x44 */
    unsigned char pad_0x48[0x18];
    undefined1 field_0x60; /* +0x60 */
    unsigned char pad_0x61[0x1];
    byte field_0x62; /* +0x62 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int g_statusDown; /* 0x588fe8 */

/* Supplied declaration required: FUN_002a4964. */
extern int FUN_00348ed0(void);


void FUN_003c16e0(fn_003c16e0_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if (g_statusDown != 0) {
    temp_v0 = g_statusDown + 0x5ec;
    temp_v1 = FUN_00348ed0();
    if (temp_v1 <= (int)param_1) {
      param_1 = (fn_003c16e0_arg0 *)(temp_v1 - 1);
    }
    if ((int)param_1 < 0) {
      param_1 = (fn_003c16e0_arg0 *)0x0;
    }
    FUN_002a4964(temp_v0,param_1);
    return;
  }
  return;
}

} /* extern "C" */
