/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00291ce8` (_code @ 0x291ce8, 0xd8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015155c(...);
int FUN_00163060(...);
int FUN_003e9fe4(...);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int FUN_00276230(...); /* 0x276230 */
extern unsigned char LAB_00291dc8; /* 0x291dc8 */
extern int FUN_00315080(...); /* 0x315080 */
extern int DAT_0057a4f8; /* 0x57a4f8 */

/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_003e9fe4. */


void FUN_00291ce8(unsigned int *param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  
  puVar1 = &LAB_00291dc8;
  FUN_0015155c(&LAB_00291dc8,4,0,0,FUN_00276230,FUN_00315080,param_1,*param_1);
  param_1[0x15] = (unsigned int)puVar1;
  temp_v0 = 0x100;
  FUN_00163060(0x100,0x100,0,0xc4,1);
  DAT_0057a4f8 = temp_v0;
  *(unsigned int *)(temp_v0 + 0xb8) = 0;
  *(unsigned int *)(temp_v0 + 0xb4) = 0;
  *(unsigned int *)(temp_v0 + 0xb0) = 0;
  *(unsigned short *)(temp_v0 + 0xac) = 0xffff;
  temp_v1 = param_1[0x5e];
  temp_v3 = -1 < temp_v1;
  if (temp_v3) {
    temp_v1 = param_1[0x5f];
  }
  if (!temp_v3 || temp_v1 < 0) {
    FUN_003e9fe4(param_1,param_1 + 0x3d,0);
    param_1[0x5e] = (int)*(char *)(param_1 + 0x45);
    param_1[0x5f] = (int)*(char *)((int)param_1 + 0x115);
  }
  temp_v2 = param_1[0x5f];
  *(unsigned int *)(temp_v0 + 0xa4) = param_1[0x5e];
  *(unsigned int *)(temp_v0 + 0xa8) = temp_v2;
  return;
}

} /* extern "C" */
