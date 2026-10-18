/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00324854` (_code @ 0x324854, 0x90 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned char LAB_003248e8; /* 0x3248e8 */
extern unsigned char DAT_00400001; /* 0x400001 */
extern unsigned char DAT_00400002; /* 0x400002 */
extern unsigned int DAT_0044ea8c; /* 0x44ea8c */
extern unsigned char *DAT_0044ea94; /* 0x44ea94 */
extern unsigned int DAT_0044f864; /* 0x44f864 */
extern unsigned char DAT_004d8bd0; /* 0x4d8bd0 */
extern unsigned int DAT_004d8c20; /* 0x4d8c20 */

/* Supplied declaration required: FUN_001e1970. */
/* Supplied declaration required: FUN_00243234. */
/* Supplied declaration required: FUN_00262c1c. */
/* Supplied declaration required: FUN_002bcf58. */
/* Supplied declaration required: FUN_002bf86c. */


unsigned char * FUN_00324854(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned char *puVar1;
  unsigned char *puVar2;
  unsigned char temp_v0 [200];
  unsigned char temp_v1 [56];
  int temp_v2;
  
  puVar1 = temp_v0;
  puVar2 = &DAT_00400001;
  FUN_00243234(&LAB_003248e8,0x10,temp_v0);
  if (temp_v2 == 2) {
    puVar2 = (unsigned char *)0x400000;
  }
  else if (temp_v2 == 1) {
    if (DAT_0044ea94 != (unsigned char *)0x0) {
      FUN_00262c1c(DAT_0044ea94,3);
    }
    FUN_002bf86c(&DAT_004d8bd0,temp_v1);
    FUN_001e1970();
    DAT_0044ea94 = puVar1;
    FUN_002bcf58(&DAT_004d8c20,puVar1,0x80);
    puVar2 = &DAT_00400002;
    DAT_0044ea8c = 0;
    DAT_0044f864 = 0;
  }
  return puVar2;
}
