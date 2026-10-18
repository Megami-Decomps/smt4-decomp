/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003290d8` (_code @ 0x3290d8, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp50; /* 0x50: local_50 */
} void_stack;

extern unsigned int DAT_004d8c20; /* 0x4d8c20 */
extern unsigned int DAT_004d8c24; /* 0x4d8c24 */
extern unsigned int DAT_004d8c28; /* 0x4d8c28 */
extern unsigned int DAT_004d8c2c; /* 0x4d8c2c */

/* Supplied declaration required: FUN_00323a08. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_003290d8(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0 [64];
  unsigned int temp_v1;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  
  rt_memcpy_w(temp_v0,&DAT_004d8c20,0x80);
  temp_v1 = DAT_004d8c20;
  uStack_4c = DAT_004d8c24;
  uStack_48 = DAT_004d8c28;
  uStack_44 = DAT_004d8c2c;
  FUN_00323a08(temp_v0,0);
  DAT_004d8c20 = temp_v1;
  DAT_004d8c24 = uStack_4c;
  DAT_004d8c28 = uStack_48;
  DAT_004d8c2c = uStack_44;
  return;
}
