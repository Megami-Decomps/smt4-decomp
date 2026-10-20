/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035da20` (_code @ 0x35da20, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int rt_memcpy(...);

typedef struct fn_0035da20_arg0 fn_0035da20_arg0;
typedef struct fn_0035da20_arg1 fn_0035da20_arg1;
struct fn_0035da20_arg0 {
    unsigned char pad_0x0[0x1];
    undefined1 field_0x1; /* +0x1 */
    undefined1 field_0x2; /* +0x2 */
    unsigned char pad_0x3[0xc];
    undefined1 field_0xf; /* +0xf */
    undefined1 field_0x10; /* +0x10 */
    undefined1 field_0x11; /* +0x11 */
};
struct fn_0035da20_arg1 {
    unsigned char pad_0x0[0x1];
    byte field_0x1; /* +0x1 */
    byte field_0x2; /* +0x2 */
    unsigned char pad_0x3[0xc];
    byte field_0xf; /* +0xf */
    byte field_0x10; /* +0x10 */
    byte field_0x11; /* +0x11 */
};

extern int g_statusDown; /* 0x588fe8 */

/* Supplied declaration required: rt_memcpy. */


void FUN_0035da20(fn_0035da20_arg0 *param_1,fn_0035da20_arg1 *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = g_statusDown;
  if ((int)param_2 < 9) {
    *(unsigned int *)(g_statusDown + 0x5bc) = 0;
    *(unsigned int *)(temp_v0 + 0x5c0) = 0;
    *(unsigned int *)(temp_v0 + 0x5c4) = 0;
    *(unsigned int *)(temp_v0 + 0x5c8) = 0;
    if (-1 < (int)param_2) {
      *(unsigned char *)(temp_v0 + 0x650) = 1;
      rt_memcpy(temp_v0 + 0x5bc,param_1,(int)param_2 << 1);
      return;
    }
    *(unsigned char *)(temp_v0 + 0x650) = 0;
  }
  return;
}

} /* extern "C" */
