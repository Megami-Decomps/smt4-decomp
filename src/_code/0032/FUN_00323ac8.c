/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00323ac8` (_code @ 0x323ac8, 0x70 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char LAB_00323b3c; /* 0x323b3c */
extern unsigned char DAT_00400001; /* 0x400001 */
extern unsigned char DAT_00400002; /* 0x400002 */
extern int DAT_0044ea94; /* 0x44ea94 */

/* Supplied declaration required: FUN_00243234. */
/* Supplied declaration required: FUN_002469c0. */
/* Supplied declaration required: FUN_002bf86c. */
extern unsigned int *FUN_002f3210(int, unsigned char *);


unsigned char * FUN_00323ac8(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned char *puVar3;
  unsigned char temp_v0 [256];
  int temp_v1;
  
  puVar3 = &DAT_00400001;
  FUN_00243234(&LAB_00323b3c,0x20,temp_v0);
  if (temp_v1 == 2) {
    puVar3 = (unsigned char *)0x400000;
  }
  else if (temp_v1 == 1) {
    if (DAT_0044ea94 != 0) {
      puVar1 = (unsigned int *)FUN_002f3210(DAT_0044ea94,temp_v0);
      puVar2 = puVar1;
      FUN_002469c0();
      FUN_002bf86c(puVar1 + 0x27,*puVar2);
    }
    puVar3 = &DAT_00400002;
  }
  return puVar3;
}
