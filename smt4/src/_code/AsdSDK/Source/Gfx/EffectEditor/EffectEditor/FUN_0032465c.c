/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032465c` (_code @ 0x32465c, 0x90 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned char LAB_003246f0; /* 0x3246f0 */
extern unsigned char DAT_00400001; /* 0x400001 */
extern unsigned char DAT_00400002; /* 0x400002 */
extern unsigned int DAT_0044ea8c; /* 0x44ea8c */
extern unsigned char *DAT_0044ea94; /* 0x44ea94 */
extern unsigned int DAT_0044f864; /* 0x44f864 */
extern unsigned char DAT_004d8bd0; /* 0x4d8bd0 */
extern unsigned int DAT_004d8c20; /* 0x4d8c20 */

/* Supplied declaration required: FUN_001e1a70. */
/* Supplied declaration required: FUN_002430c8. */
/* Supplied declaration required: FUN_002629f0. */
/* Supplied declaration required: FUN_002bf694. */
/* Supplied declaration required: rt_memcpy_w. */


unsigned char * FUN_0032465c(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned char *puVar1;
  unsigned char *puVar2;
  unsigned char temp_v0 [200];
  unsigned char temp_v1 [56];
  int temp_v2;
  
  puVar1 = temp_v0;
  puVar2 = &DAT_00400001;
  FUN_002430c8(&LAB_003246f0,0x10,temp_v0);
  if (temp_v2 == 2) {
    puVar2 = (unsigned char *)0x400000;
  }
  else if (temp_v2 == 1) {
    if (DAT_0044ea94 != (unsigned char *)0x0) {
      FUN_002629f0(DAT_0044ea94,3);
    }
    FUN_002bf694(&DAT_004d8bd0,temp_v1);
    FUN_001e1a70();
    DAT_0044ea94 = puVar1;
    rt_memcpy_w(&DAT_004d8c20,puVar1,0x80);
    puVar2 = &DAT_00400002;
    DAT_0044ea8c = 0;
    DAT_0044f864 = 0;
  }
  return puVar2;
}
