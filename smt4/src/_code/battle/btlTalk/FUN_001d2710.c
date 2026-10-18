/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d2710` (_code @ 0x1d2710, 0xe0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_4_stack;

extern unsigned char LAB_001b72b8; /* 0x1b72b8 */
extern unsigned char LAB_001d2830; /* 0x1d2830 */
extern int FUN_0020f4c0(); /* 0x20f4c0 */
extern int *DAT_00439b58; /* 0x439b58 */
extern unsigned int DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_00267d3c. */
/* Supplied declaration required: FUN_002bf244. */
/* Supplied declaration required: FUN_002c424c. */
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c4a08. */


void FUN_001d2710(unsigned int *param_1,int param_2,int param_3,int param_4)

{
/* irregular: 6 native warning(s); review required */
  int *piVar1;
  unsigned char *puVar2;
  int *piVar3;
  
  FUN_002bf244(param_1[8]);
  piVar1 = (int *)0x100;
  FUN_002c498c(0x100,0x100,0,0xcc,1);
  puVar2 = &LAB_001d2830;
  DAT_00439b58 = piVar1;
  FUN_002c4a08(&LAB_001d2830,2,0,0,&LAB_001b72b8,FUN_0020f4c0,param_1,*param_1);
  param_1[8] = (unsigned int)puVar2;
  piVar1 = DAT_00439b58;
  piVar3 = DAT_00439b58 + 7;
  *DAT_00439b58 = (int)param_1;
  piVar1[1] = param_2;
  *piVar3 = param_3;
  piVar1[8] = param_4;
  *(unsigned char *)(piVar1 + 0x31) = 0;
  *(unsigned char *)((int)piVar1 + 0xc5) = 0;
  piVar1[0x32] = -1;
  piVar1[0xc] = (int)*(short *)(*(int *)(param_2 + 0x28) + 0x14e);
  FUN_002c424c(piVar1 + 0xd,0x80,0xffffffff);
  FUN_00267d3c(DAT_00439ca8);
  piVar1[6] = 0;
  return;
}
