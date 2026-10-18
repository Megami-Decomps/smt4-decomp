/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001560c4` (_code @ 0x1560c4, 0x198 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern unsigned char DAT_004e6f14; /* 0x4e6f14 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coproc_moveto_Data_Synchronization (CALLOTHER). */
#ifndef ROMWRIGHT_CARRY_4_DEFINED
#define ROMWRIGHT_CARRY_4_DEFINED
#define romwright_carry_4(left, right) ((unsigned char)((unsigned long long)(unsigned int)(left) + (unsigned long long)(unsigned int)(right) > 0xffffffffULL))
#endif
/* Supplied declaration required: FUN_0015335c. */
/* Supplied declaration required: FUN_00159eb8. */
/* Supplied declaration required: FUN_00159fd8. */
/* Supplied declaration required: FUN_002a208c. */
extern int *FUN_002ad3a4(void);
/* Supplied declaration required: FUN_002c3424. */
/* Supplied declaration required: FUN_002c3820. */
/* Supplied declaration required: FUN_002c38a4. */
/* Supplied declaration required: FUN_002c4040. */


void FUN_001560c4(void)

{
/* irregular: 12 native warning(s); review required */
  char temp_v0;
  int *piVar2;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar5;
  int temp_v3;
  int temp_v4;
  unsigned int *puVar6;
  int temp_v5;
  int temp_v6;
  int iStack_34;
  unsigned int temp_v7;
  int iStack_2c;
  unsigned char temp_v8 [4];
  unsigned char temp_v9 [12];
  
  piVar2 = (int *)FUN_002ad3a4();
  *(unsigned char *)((int)piVar2 + 0xd) = 1;
  do {
    puVar6 = (unsigned int *)0x0;
    temp_v5 = 0;
    temp_v7 = 0;
    iStack_2c = 0;
    if ((char)piVar2[2] != '\0') {
      puVar6 = &temp_v7;
      FUN_00159eb8();
      software_interrupt(0x28);
      temp_v5 = temp_v3;
    }
    else {
      FUN_002a208c();
    }
    temp_v1 = piVar2[10];
    temp_v0 = *(char *)((int)piVar2 + 0xe);
    temp_v2 = 0;
    if ((int)temp_v0 != 0) {
      FUN_0015335c(&DAT_004e6f14,0,&temp_v6,temp_v8);
      FUN_0015335c(&DAT_004e6f14,1,&iStack_34,temp_v9);
      temp_v2 = 0;
      if (temp_v6 != 0 || iStack_34 != 0) {
        temp_v2 = 1;
      }
    }
    temp_v2 = (int)temp_v0 & (temp_v2 | temp_v1 != 0);
    if (temp_v2 != 0) {
      coproc_moveto_Data_Synchronization(0);
      FUN_002c4040(piVar2 + 0x10);
    }
    if (((char)piVar2[0xc] == '\0') && ((romwright_code *)piVar2[10] != (romwright_code *)0x0)) {
      (*(romwright_code *)piVar2[10])(piVar2[0xb]);
    }
    if (piVar2[8] != 0) {
      FUN_002c38a4(piVar2 + 0xd);
      (*(romwright_code *)piVar2[8])(piVar2[9]);
      FUN_002c3820(piVar2 + 0xd);
    }
    if (temp_v2 != 0) {
      FUN_002c3424(piVar2 + 0x12);
    }
    FUN_002c38a4(piVar2 + 0xd);
    FUN_00159fd8();
    FUN_002c3820(piVar2 + 0xd);
    puVar5 = (unsigned int *)(unsigned int)*(unsigned char *)(piVar2 + 2);
    if (puVar5 != (unsigned int *)0x0) {
      software_interrupt(0x28);
      piVar2[1] = iStack_2c + (temp_v4 - (temp_v5 + (unsigned int)(puVar5 < puVar6))) +
                  (unsigned int)romwright_carry_4(temp_v7,(int)puVar5 - (int)puVar6);
      *piVar2 = temp_v7 + ((int)puVar5 - (int)puVar6);
    }
  } while (*(char *)((int)piVar2 + 0xd) != '\0');
  return;
}
