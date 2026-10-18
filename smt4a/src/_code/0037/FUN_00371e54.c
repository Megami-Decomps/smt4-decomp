/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00371e54` (_code @ 0x371e54, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00371e54_arg0 fn_00371e54_arg0;
typedef struct fn_00371e54_arg1 fn_00371e54_arg1;
struct fn_00371e54_arg0 {
    unsigned char pad_0x0[0x1];
    undefined1 field_0x1; /* +0x1 */
    undefined1 field_0x2; /* +0x2 */
    unsigned char pad_0x3[0xc];
    undefined1 field_0xf; /* +0xf */
    undefined1 field_0x10; /* +0x10 */
    undefined1 field_0x11; /* +0x11 */
};
struct fn_00371e54_arg1 {
    unsigned char pad_0x0[0x1];
    byte field_0x1; /* +0x1 */
    byte field_0x2; /* +0x2 */
    unsigned char pad_0x3[0xc];
    byte field_0xf; /* +0xf */
    byte field_0x10; /* +0x10 */
    byte field_0x11; /* +0x11 */
};

extern int DAT_00588fe8; /* 0x588fe8 */

/* Supplied declaration required: rt_memcpy. */


void FUN_00371e54(fn_00371e54_arg0 *param_1,fn_00371e54_arg1 *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_00588fe8;
  if ((int)param_2 < 9) {
    *(unsigned int *)(DAT_00588fe8 + 0x5cc) = 0;
    *(unsigned int *)(temp_v0 + 0x5d0) = 0;
    *(unsigned int *)(temp_v0 + 0x5d4) = 0;
    *(unsigned int *)(temp_v0 + 0x5d8) = 0;
    rt_memcpy(temp_v0 + 0x5cc,param_1,(int)param_2 << 1);
    return;
  }
  return;
}
