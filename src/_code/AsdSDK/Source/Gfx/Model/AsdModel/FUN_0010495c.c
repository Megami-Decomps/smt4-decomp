/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010495c` (_code @ 0x10495c, 0x3a8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 12 slot(s), 42 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned char sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned char sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} void_stack;

extern unsigned char LAB_00104d08; /* 0x104d08 */
extern unsigned char LAB_00104d1c; /* 0x104d1c */
extern unsigned char LAB_00104d30; /* 0x104d30 */
extern unsigned char DAT_004204f0; /* 0x4204f0 */
extern unsigned char DAT_00420558; /* 0x420558 */
extern unsigned char DAT_004205c8; /* 0x4205c8 */
extern unsigned char DAT_00464af1; /* 0x464af1 */
extern int *DAT_00464b44; /* 0x464b44 */
extern int DAT_00464b5c; /* 0x464b5c */
extern unsigned int DAT_00464bbc; /* 0x464bbc */
extern unsigned int *DAT_00472950; /* 0x472950 */
extern unsigned int *DAT_00472954; /* 0x472954 */
extern unsigned int *DAT_00472958; /* 0x472958 */
extern unsigned int *DAT_004dae64; /* 0x4dae64 */

/* Supplied declaration required: FUN_0010bb08. */
/* Supplied declaration required: FUN_001208b8. */
extern unsigned int FUN_002c2be8(int);
/* Supplied declaration required: FUN_002c2cf0. */
/* Supplied declaration required: FUN_002c3188. */
extern unsigned int FUN_002c31bc(void);
extern unsigned int FUN_002c31d8(void);
extern int FUN_002c31e8(int *, unsigned char *, unsigned int);
extern unsigned int FUN_002c3290(unsigned char *);
extern int FUN_002c32f0(unsigned char *, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c54f0. */


void FUN_0010495c(void)

{
/* irregular: 3 goto(s); 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int *piVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  int temp_v3;
  int *piVar8;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned char temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int uStack_40;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned char temp_v14;
  int temp_v15 [4];
  
  DAT_00464af1 = 1;
  FUN_0010bb08();
  DAT_00464b5c = FUN_002c32f0(&LAB_00104d08,0,1);
  temp_v4 = *(int *)(DAT_00464b5c + 0x20);
  if (temp_v4 != 0) {
    temp_v4 = DAT_00464b5c + 0x20 + temp_v4;
  }
  else {
    temp_v4 = 0;
  }
  if (temp_v4 != 0) {
    temp_v0 = FUN_002c3290(&LAB_00104d1c);
    temp_v1 = FUN_002c31e8(&temp_v4,&LAB_00104d1c,temp_v0);
    if (temp_v1 != 0) {
      temp_v15[0] = *(int *)(temp_v1 + 0xc);
      if (temp_v15[0] == 0) {
        temp_v15[0] = 0;
      }
      else {
        temp_v15[0] = temp_v1 + 0xc + temp_v15[0];
      }
    }
    else {
      temp_v15[0] = 0;
    }
  }
  else {
    temp_v15[0] = 0;
  }
  temp_v0 = FUN_002c31d8();
  FUN_001208b8(temp_v15,temp_v0,DAT_00464b5c);
  temp_v0 = FUN_002c31bc();
  temp_v2 = FUN_002c31d8();
  temp_v7 = 1;
  temp_v8 = 8;
  temp_v9 = 4;
  uStack_40 = 0;
  temp_v10 = 0;
  temp_v12 = 4;
  piVar8 = &temp_v6;
  temp_v11 = 0;
  temp_v13 = 0;
  temp_v14 = 1;
  temp_v6 = temp_v15[0];
  FUN_002c3188(piVar8,temp_v0,temp_v2);
  if (piVar8 != (int *)0x0) {
    piVar4 = (int *)(**(romwright_code **)(*piVar8 + 8))(piVar8);
    do {
      if (piVar4 == (int *)0x44e858) goto LAB_00104a9c;
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)0x0);
  }
  piVar8 = (int *)0x0;
LAB_00104a9c:
  if (piVar8 != (int *)0x0) {
    piVar4 = (int *)(**(romwright_code **)(*piVar8 + 8))(piVar8);
    do {
      DAT_00464b44 = piVar8;
      if (piVar4 == (int *)0x472180) goto LAB_00104ad8;
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)0x0);
  }
  DAT_00464b44 = (int *)0x0;
LAB_00104ad8:
  temp_v5 = FUN_002c32f0(&LAB_00104d30,0,1);
  temp_v0 = FUN_002c31bc();
  FUN_002c2cf0(&temp_v5,temp_v0,temp_v5);
  temp_v1 = *(int *)(temp_v5 + 0x40);
  if (temp_v1 != 0) {
    temp_v1 = temp_v5 + 0x40 + temp_v1;
  }
  else {
    temp_v1 = 0;
  }
  temp_v3 = 0;
  if (temp_v1 != 0) {
    temp_v3 = *(int *)(temp_v1 + 0x28);
    if (temp_v3 == 0) {
      temp_v3 = 0;
    }
    else {
      temp_v3 = temp_v1 + 0x28 + temp_v3;
    }
  }
  temp_v1 = *(int *)(temp_v3 + 0x2c);
  if (temp_v1 != 0) {
    piVar4 = (int *)(temp_v3 + 0x2c + temp_v1);
  }
  else {
    piVar4 = (int *)0x0;
  }
  if (*piVar4 != 0) {
    temp_v1 = (int)piVar4 + *piVar4;
  }
  else {
    temp_v1 = 0;
  }
  temp_v3 = *(int *)DAT_00464b44[0x59];
  *(int *)(temp_v3 + 0x20) = temp_v1;
  *(unsigned int *)(*(int *)(temp_v3 + 8) + 0x2a4) = 0;
  if (piVar8 != (int *)0x0) {
    piVar4 = (int *)(**(romwright_code **)(*piVar8 + 8))(piVar8);
    do {
      if (piVar4 == (int *)0x472180) goto LAB_00104ba0;
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)0x0);
  }
  piVar8 = (int *)0x0;
LAB_00104ba0:
  *(unsigned int *)(*(int *)(*(int *)piVar8[0x59] + 8) + 0x140) =
       *(unsigned int *)(*(int *)(*(int *)piVar8[0x59] + 8) + 0x140) | 3;
  temp_v1 = *(int *)(*(int *)piVar8[0x59] + 8);
  *(unsigned int *)(temp_v1 + 0x44) = 0;
  *(unsigned int *)(temp_v1 + 0x48) = 0;
  *(unsigned int *)(temp_v1 + 0x4c) = 0;
  *(unsigned int *)(temp_v1 + 0x50) = 0;
  temp_v0 = FUN_002c2be8(temp_v1 + 0x44);
  *(unsigned int *)(temp_v1 + 0xdc) = temp_v0;
  temp_v0 = *(unsigned int *)DAT_00464b44[0x59];
  puVar5 = (unsigned int *)0x10000;
  temp_v4 = 1;
  FUN_002c54f0(0x10000,0x100,0,0x18);
  if (puVar5 != (unsigned int *)0x0) {
    temp_v2 = *DAT_004dae64;
    puVar5[2] = 2;
    *puVar5 = (unsigned int)&DAT_004205c8;
    puVar5[1] = temp_v2;
    puVar5[3] = temp_v0;
    puVar5[4] = 0;
    puVar5[5] = 0;
  }
  puVar6 = (unsigned int *)0x10000;
  temp_v4 = 1;
  DAT_00472950 = puVar5;
  FUN_002c54f0(0x10000,0x100,0,0xc);
  puVar5 = DAT_00472950;
  if (puVar6 != (unsigned int *)0x0) {
    *puVar6 = (unsigned int)&DAT_00420558;
    puVar6[1] = (unsigned int)puVar5;
    puVar6[2] = 0;
  }
  puVar5 = (unsigned int *)0x10000;
  temp_v4 = 1;
  DAT_00472954 = puVar6;
  FUN_002c54f0(0x10000,0x100,0,0x10);
  temp_v0 = DAT_00464bbc;
  if (puVar5 != (unsigned int *)0x0) {
    temp_v2 = *DAT_004dae64;
    *puVar5 = (unsigned int)&DAT_004204f0;
    puVar5[1] = temp_v2;
    puVar5[2] = temp_v0;
    puVar5[3] = 0;
  }
  DAT_00472958 = puVar5;
  return;
}
