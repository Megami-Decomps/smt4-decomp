/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b2988` (_code @ 0x2b2988, 0x10c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern int DAT_00464b28; /* 0x464b28 */
extern unsigned char DAT_004dae3c; /* 0x4dae3c */

/* Supplied declaration required: FUN_002b265c. */
extern int FUN_002c1870(int, char *, unsigned int);
/* Supplied declaration required: FUN_002c5300. */


unsigned int * FUN_002b2988(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  puVar1 = (unsigned int *)0x100;
  FUN_002c5300(0x100,0x100,0,0x1c,1);
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *puVar1 = 1;
  *(unsigned char *)(puVar1 + 1) = 1;
  temp_v2 = 0;
  puVar1[3] = param_1;
  temp_v0 = FUN_002c1870(param_1,"ATBC",4);
  temp_v1 = param_1;
  if (temp_v0 == 0) {
    temp_v1 = *(int *)(param_1 + 0x14);
    if (temp_v1 == 0) {
      temp_v1 = *(int *)(param_1 + 0x10);
    }
    temp_v1 = param_1 + temp_v1;
    temp_v0 = FUN_002c1870(temp_v1,"MDLSIGN",7);
    if (temp_v0 == 0) {
      temp_v2 = *(int *)(temp_v1 + 8);
      temp_v1 = temp_v1 + 0x80;
    }
    else {
      temp_v1 = 0;
    }
  }
  puVar1[2] = temp_v1;
  temp_v0 = 0;
  temp_v1 = FUN_002c1870(param_1,"ATBC",4);
  if (temp_v1 == 0) {
    temp_v0 = *(int *)(param_1 + 0xc) + param_1;
  }
  puVar1[4] = temp_v0;
  if (temp_v2 == 0) {
    puVar1[5] = param_2;
  }
  FUN_002b265c(&DAT_004dae3c,puVar1,0);
  DAT_00464b28 = DAT_00464b28 + 1;
  return puVar1;
}
