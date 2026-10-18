/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e6f34` (_code @ 0x2e6f34, 0x108 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp7C; /* 0x7c: local_7c */
} void_stack;

extern unsigned char LAB_002e7044; /* 0x2e7044 */
extern unsigned char LAB_002e7054; /* 0x2e7054 */
extern unsigned char LAB_002e7060; /* 0x2e7060 */
extern unsigned char DAT_00400001; /* 0x400001 */
extern unsigned char DAT_00400002; /* 0x400002 */
extern int DAT_0044ea94; /* 0x44ea94 */
extern unsigned int *DAT_0044eac8; /* 0x44eac8 */
extern unsigned char DAT_004d8bd0; /* 0x4d8bd0 */

/* Supplied declaration required: FUN_0025036c. */
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002bf86c. */
/* Supplied declaration required: FUN_002e706c. */
/* Supplied declaration required: FUN_002f2a5c. */
/* Supplied declaration required: FUN_002f2e3c. */


/* WARNING: Removing unreachable block (ram,0x002e6fd0) */

unsigned char * FUN_002e6f34(void)

{
/* irregular: 7 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  unsigned char temp_v0 [50];
  unsigned char temp_v1 [50];
  int temp_v2;
  unsigned char temp_v3 [100];
  
  puVar2 = &DAT_00400001;
  if (DAT_0044eac8 != (unsigned int *)0x0) {
    FUN_002f2a5c();
    FUN_002e706c(DAT_0044eac8,temp_v0);
    FUN_002f2e3c(DAT_0044eac8,temp_v1);
    temp_v2 = DAT_0044eac8[2];
    if (temp_v2 == 1) {
      return puVar2;
    }
  }
  else {
    puVar1 = (unsigned int *)&LAB_002e7054;
    FUN_0025036c();
    DAT_0044eac8 = puVar1;
    *puVar1 = 0xb6;
    puVar1[1] = 100;
  }
  if (temp_v2 == 2) {
    puVar2 = (unsigned char *)0x400000;
  }
  else if ((temp_v2 == 1) && (DAT_0044ea94 != 0)) {
    FUN_002bf86c(&DAT_004d8bd0,temp_v1);
    FUN_002be7fc(temp_v3,&LAB_002e7060,&LAB_002e7044,temp_v0);
    puVar2 = &DAT_00400002;
  }
  return puVar2;
}
