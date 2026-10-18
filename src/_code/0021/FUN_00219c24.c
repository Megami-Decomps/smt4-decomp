/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00219c24` (_code @ 0x219c24, 0xfc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp7C; /* 0x7c: local_7c */
} void_stack;

extern unsigned char LAB_00219d28; /* 0x219d28 */
extern unsigned char LAB_00219d3c; /* 0x219d3c */
extern unsigned char LAB_00219d40; /* 0x219d40 */
extern unsigned char DAT_00400001; /* 0x400001 */
extern unsigned char DAT_00400002; /* 0x400002 */
extern int DAT_0044ea9c; /* 0x44ea9c */
extern unsigned int *DAT_0044eac8; /* 0x44eac8 */

/* Supplied declaration required: FUN_0025036c. */
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002e706c. */
/* Supplied declaration required: FUN_002f2a5c. */
/* Supplied declaration required: FUN_002f2e3c. */


/* WARNING: Removing unreachable block (ram,0x00219cc0) */

unsigned char * FUN_00219c24(void)

{
/* irregular: 6 native warning(s); review required */
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
    puVar1 = (unsigned int *)&LAB_00219d3c;
    FUN_0025036c();
    DAT_0044eac8 = puVar1;
    *puVar1 = 0xb6;
    puVar1[1] = 100;
  }
  if (temp_v2 == 2) {
    puVar2 = (unsigned char *)0x400000;
  }
  else if ((temp_v2 == 1) && (DAT_0044ea9c != 0)) {
    FUN_002be7fc(temp_v3,&LAB_00219d40,&LAB_00219d28,temp_v0);
    puVar2 = &DAT_00400002;
  }
  return puVar2;
}
