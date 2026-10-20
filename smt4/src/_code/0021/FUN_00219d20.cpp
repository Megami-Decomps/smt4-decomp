/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00219d20` (_code @ 0x219d20, 0xfc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00250120(void);
int FUN_002be624(unsigned char [100], unsigned char *, unsigned char *, unsigned char [50]);
int FUN_002e70e0(unsigned int *, unsigned char [50]);
int FUN_002f2aa8(void);
int FUN_002f2e88(unsigned int *, unsigned char [50]);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp7C; /* 0x7c: local_7c */
} void_stack;

extern unsigned char LAB_00219e24; /* 0x219e24 */
extern unsigned char LAB_00219e38; /* 0x219e38 */
extern unsigned char LAB_00219e3c; /* 0x219e3c */
extern unsigned char DAT_00400001; /* 0x400001 */
extern unsigned char DAT_00400002; /* 0x400002 */
extern int DAT_0044ea9c; /* 0x44ea9c */
extern unsigned int *DAT_0044eac8; /* 0x44eac8 */

/* Supplied declaration required: FUN_00250120. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002e70e0. */
/* Supplied declaration required: FUN_002f2aa8. */
/* Supplied declaration required: FUN_002f2e88. */


/* WARNING: Removing unreachable block (ram,0x00219dbc) */

unsigned char * FUN_00219d20(void)

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
    FUN_002f2aa8();
    FUN_002e70e0(DAT_0044eac8,temp_v0);
    FUN_002f2e88(DAT_0044eac8,temp_v1);
    temp_v2 = DAT_0044eac8[2];
    if (temp_v2 == 1) {
      return puVar2;
    }
  }
  else {
    puVar1 = (unsigned int *)&LAB_00219e38;
    FUN_00250120();
    DAT_0044eac8 = puVar1;
    *puVar1 = 0xb6;
    puVar1[1] = 100;
  }
  if (temp_v2 == 2) {
    puVar2 = (unsigned char *)0x400000;
  }
  else if ((temp_v2 == 1) && (DAT_0044ea9c != 0)) {
    FUN_002be624(temp_v3,&LAB_00219e3c,&LAB_00219e24,temp_v0);
    puVar2 = &DAT_00400002;
  }
  return puVar2;
}

} /* extern "C" */
