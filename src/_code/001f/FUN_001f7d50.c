/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f7d50` (_code @ 0x1f7d50, 0x158 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_5_stack;

extern int FUN_001e48d0(); /* 0x1e48d0 */
extern unsigned char LAB_001f7ebc; /* 0x1f7ebc */
extern int FUN_002c9e00(); /* 0x2c9e00 */
extern int *DAT_0043427c; /* 0x43427c */

/* Supplied declaration required: FUN_002569ac. */
/* Supplied declaration required: FUN_002bf244. */
/* Supplied declaration required: FUN_002c4a08. */


void FUN_001f7d50(unsigned int *param_1,int param_2,int param_3,int param_4,int param_5)

{
/* irregular: 5 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  unsigned char *puVar3;
  int temp_v1;
  unsigned int *puVar5;
  
  temp_v0 = (param_1[0x21] + 1) % 4;
  param_1[0x21] = temp_v0;
  FUN_002bf244(param_1[temp_v0 + 3]);
  piVar1 = DAT_0043427c;
  *DAT_0043427c = (int)param_1;
  temp_v0 = param_1[0x21];
  *(unsigned char *)(piVar1 + temp_v0 * 0x3c7 + 2) = 0;
  temp_v1 = param_1[0x7f0];
  piVar1[temp_v0 * 0x3c7 + 10] = 0;
  puVar5 = (unsigned int *)(temp_v1 + param_3 * 0x288);
  piVar1[temp_v0 * 0x3c7 + 9] = (int)puVar5;
  if ((*puVar5 & 0x80) == 0) {
    piVar1[temp_v0 * 0x3c7 + 10] = param_1[0x7a6] + (short)puVar5[2] * 0x114;
  }
  piVar1[temp_v0 * 0x3c7 + 0xb] = (int)(puVar5 + 0x33);
  *(short *)(piVar1 + temp_v0 * 0x3c7 + 0xc) = (short)param_3;
  piVar1[temp_v0 * 0x3c7 + 5] = 0;
  piVar1[temp_v0 * 0x3c7 + 0x161] = param_5;
  piVar1[temp_v0 * 0x3c7 + 7] = 0;
  piVar1[temp_v0 * 0x3c7 + 1] = 0;
  piVar1[temp_v0 * 0x3c7 + 0xd] = param_2;
  piVar1[temp_v0 * 0x3c7 + 0xe] = param_4;
  if ((*(unsigned int *)(*piVar1 + 0x44a0) & 0x40) != 0) {
    temp_v1 = 0x80;
  }
  else {
    if ((*(unsigned int *)(*piVar1 + 0x44a0) & 0x100) == 0) {
      FUN_002569ac(piVar1,*(unsigned int *)(*piVar1 + 0x84));
      puVar3 = &LAB_001f7ebc;
      FUN_002c4a08(&LAB_001f7ebc,1,0,0,FUN_001e48d0,FUN_002c9e00,param_1,*param_1);
      param_1[param_1[0x21] + 3] = (unsigned int)puVar3;
      return;
    }
    temp_v1 = 0x1000;
  }
  piVar1[temp_v0 * 0x3c7 + 1] = temp_v1;
  FUN_002569ac(piVar1,*(unsigned int *)(*piVar1 + 0x84));
  puVar3 = &LAB_001f7ebc;
  FUN_002c4a08(&LAB_001f7ebc,1,0,0,FUN_001e48d0,FUN_002c9e00,param_1,*param_1);
  param_1[param_1[0x21] + 3] = (unsigned int)puVar3;
  return;
}
