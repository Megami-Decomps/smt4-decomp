/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00207e04` (_code @ 0x207e04, 0x128 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int FUN_001fc610(); /* 0x1fc610 */
extern unsigned char LAB_00207f34; /* 0x207f34 */
extern int FUN_002d4f88(); /* 0x2d4f88 */
extern unsigned int *DAT_00435d30; /* 0x435d30 */

/* Supplied declaration required: FUN_00270298. */
/* Supplied declaration required: FUN_0029c0fc. */
/* Supplied declaration required: FUN_002c4360. */
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */


void FUN_00207e04(unsigned int *param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned char *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  int temp_v1;
  unsigned int *puVar5;
  
  puVar1 = &LAB_00207f34;
  FUN_002c4c00(&LAB_00207f34,2,0,0,FUN_001fc610,FUN_002d4f88,param_1,*param_1);
  param_1[2] = (unsigned int)puVar1;
  puVar2 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x14,1);
  DAT_00435d30 = puVar2;
  *puVar2 = 0;
  puVar2[3] = 0;
  if (puVar2[1] != 0) {
    FUN_002c4360();
    puVar2[1] = 0;
  }
  temp_v1 = 0x32;
  temp_v0 = 0;
  do {
    param_1[temp_v0 * 8 + 0xfd] = 0xffffffff;
    *(unsigned char *)((int)param_1 + temp_v0 * 0x20 + 0x3fa) = 0xff;
    temp_v1 = temp_v1 - 1;
    *(unsigned short *)(param_1 + temp_v0 * 8 + 0xfe) = 0xffff;
    temp_v0 = temp_v0 + 1;
  } while (temp_v1 != 0);
  FUN_0029c0fc(2,1);
  if ((((*(char *)((int)param_1 + 0x44b7) == '\0') && (-1 < (int)param_1[0x30])) &&
      ((param_1[0x38] & 0x2000000) == 0)) &&
     (puVar5 = param_1 + 0x1128, (*puVar5 & 2) == 0 && (*puVar5 & 0x40000000) == 0)) {
    FUN_00270298(2);
    *puVar5 = *puVar5 | 0x40000000;
  }
  return;
}
