/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026a978` (_code @ 0x26a978, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int rt_memcpy(...);

typedef struct fn_0026a978_arg0 fn_0026a978_arg0;
struct fn_0026a978_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
    unsigned char pad_0x20[0x20];
    undefined4 field_0x40; /* +0x40 */
    undefined4 field_0x44; /* +0x44 */
    undefined4 field_0x48; /* +0x48 */
    undefined4 field_0x4c; /* +0x4c */
    undefined4 field_0x50; /* +0x50 */
    undefined4 field_0x54; /* +0x54 */
    undefined4 field_0x58; /* +0x58 */
    byte field_0x5c; /* +0x5c */
    byte field_0x5d; /* +0x5d */
    byte field_0x5e; /* +0x5e */
    unsigned char pad_0x5f[0xc];
    byte field_0x6b; /* +0x6b */
    byte field_0x6c; /* +0x6c */
    byte field_0x6d; /* +0x6d */
};

extern int g_statusDown; /* 0x44e190 */

/* Supplied declaration required: rt_memcpy. */


void FUN_0026a978(fn_0026a978_arg0 *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = g_statusDown;
  if (param_2 < 9) {
    *(unsigned int *)(g_statusDown + 0x4a2) = 0;
    *(unsigned int *)(temp_v0 + 0x4a6) = 0;
    *(unsigned int *)(temp_v0 + 0x4aa) = 0;
    *(unsigned int *)(temp_v0 + 0x4ae) = 0;
    if (-1 < param_2) {
      *(unsigned char *)(temp_v0 + 0x538) = 1;
      rt_memcpy(temp_v0 + 0x4a2,param_1,param_2 << 1);
      return;
    }
    *(unsigned char *)(temp_v0 + 0x538) = 0;
  }
  return;
}

} /* extern "C" */
