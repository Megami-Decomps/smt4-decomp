/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010376c` (_code @ 0x10376c, 0x310 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

extern unsigned char DAT_00420440; /* 0x420440 */
extern unsigned char DAT_00420580; /* 0x420580 */
extern unsigned char DAT_00465170; /* 0x465170 */
extern int DAT_00465174; /* 0x465174 */
extern unsigned int *DAT_00465178; /* 0x465178 */
extern unsigned int *DAT_0046517c; /* 0x46517c */
extern unsigned int *DAT_00465180; /* 0x465180 */
extern unsigned int DAT_00465184; /* 0x465184 */
extern unsigned int DAT_004e4100; /* 0x4e4100 */
extern unsigned int DAT_004e4104; /* 0x4e4104 */
extern unsigned int DAT_004e4108; /* 0x4e4108 */
extern unsigned int DAT_004e410c; /* 0x4e410c */
extern unsigned int DAT_004e4110; /* 0x4e4110 */
extern unsigned int DAT_004e4114; /* 0x4e4114 */
extern unsigned int DAT_004e4118; /* 0x4e4118 */
extern unsigned int DAT_004e411c; /* 0x4e411c */
extern unsigned int DAT_004e4120; /* 0x4e4120 */
extern unsigned int DAT_004e4124; /* 0x4e4124 */
extern unsigned int DAT_004e4128; /* 0x4e4128 */
extern unsigned int DAT_004e412c; /* 0x4e412c */
extern unsigned int DAT_004e4130; /* 0x4e4130 */
extern unsigned int DAT_004e4134; /* 0x4e4134 */

/* Supplied declaration required: FUN_0010a10c. */
/* Supplied declaration required: FUN_0011bf0c. */
/* Supplied declaration required: FUN_002c38d4. */
extern int FUN_002c3968(unsigned int);
extern unsigned int FUN_002c39a4(unsigned int);
/* Supplied declaration required: FUN_002c3a24. */
extern unsigned int FUN_002c3a44(int, int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c3aa8. */
/* Supplied declaration required: FUN_002c3b00. */
/* Supplied declaration required: FUN_002c3b1c. */
/* Supplied declaration required: FUN_002c3b48. */
extern unsigned int FUN_002c3b88(void);
extern unsigned int FUN_002c3b98(void);
/* Supplied declaration required: FUN_002c54f0. */


void FUN_0010376c(void)

{
/* irregular: 9 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  
  temp_v0 = FUN_002c3b98();
  *(unsigned int *)(DAT_00465174 + 0x80) = temp_v0;
  temp_v0 = FUN_002c3b88();
  temp_v3 = DAT_00465174;
  *(unsigned int *)(DAT_00465174 + 0x84) = temp_v0;
  FUN_002c3b48(*(unsigned int *)(temp_v3 + 0x80),temp_v0);
  temp_v3 = DAT_00465174;
  FUN_002c3b1c(DAT_00465174 + 0x88,*(unsigned int *)(DAT_00465174 + 0x80),
               *(unsigned int *)(DAT_00465174 + 0x84),0x100);
  FUN_002c3b00(temp_v3 + 0xe0);
  temp_v1 = *(unsigned int *)(DAT_00465174 + 0x84);
  if (temp_v1 >= 0x2000101) {
    temp_v4 = DAT_00465174 + 0x88;
    temp_v3 = DAT_00465174 + 0xe0;
    FUN_002c3aa8(temp_v3);
    temp_v0 = FUN_002c3a44(temp_v4,temp_v1 + 0xfe000080,0xffffff80,0,0,0);
    FUN_002c3a24(temp_v3);
    temp_v4 = DAT_00465174 + 0x88;
    temp_v3 = DAT_00465174 + 0xe0;
    DAT_00465184 = temp_v0;
    FUN_002c3aa8(temp_v3);
    FUN_0011bf0c(temp_v4,temp_v0,0x100);
    FUN_002c3a24(temp_v3);
  }
  temp_v0 = FUN_002c39a4(0x20000);
  *(unsigned int *)(DAT_00465174 + 0xec) = temp_v0;
  temp_v4 = FUN_002c3968(0x20000);
  temp_v3 = DAT_00465174;
  piVar1 = (int *)(DAT_00465174 + 0xec);
  *(int *)(DAT_00465174 + 0xf0) = temp_v4 - *piVar1;
  *(int *)(temp_v3 + 0xf4) = *piVar1;
  temp_v0 = FUN_002c39a4(0x30000);
  *(unsigned int *)(DAT_00465174 + 0xf8) = temp_v0;
  temp_v4 = FUN_002c3968(0x30000);
  temp_v3 = DAT_00465174;
  temp_v2 = *(int *)(DAT_00465174 + 0xf8);
  *(int *)(DAT_00465174 + 0xfc) = temp_v4 - temp_v2;
  *(int *)(temp_v3 + 0x100) = temp_v2;
  FUN_0010a10c(*(unsigned int *)(temp_v3 + 0x14),*(unsigned int *)(temp_v3 + 0x18),
               *(unsigned int *)(temp_v3 + 0x80),*(unsigned int *)(temp_v3 + 0x84),
               *(unsigned int *)(temp_v3 + 0xec),*(unsigned int *)(temp_v3 + 0xf0),temp_v2,temp_v4 - temp_v2);
  temp_v0 = *(unsigned int *)(DAT_00465174 + 0xec);
  temp_v5 = *(unsigned int *)(DAT_00465174 + 0xf0);
  DAT_004e4100 = 0;
  DAT_004e4104 = 0;
  DAT_004e4108 = 0;
  DAT_004e410c = 0;
  DAT_004e4110 = 0;
  DAT_004e4114 = 0;
  puVar3 = (unsigned int *)0x100;
  DAT_004e4118 = temp_v5;
  FUN_002c54f0(0x100,0x100,0,0x10,1);
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = temp_v0;
  puVar3[1] = temp_v5;
  FUN_002c38d4(&DAT_004e410c);
  temp_v0 = *(unsigned int *)(DAT_00465174 + 0xf8);
  temp_v5 = *(unsigned int *)(DAT_00465174 + 0xfc);
  DAT_004e411c = 0;
  DAT_004e4120 = 0;
  DAT_004e4124 = 0;
  DAT_004e4128 = 0;
  DAT_004e412c = 0;
  DAT_004e4130 = 0;
  puVar3 = (unsigned int *)0x100;
  DAT_004e4134 = temp_v5;
  FUN_002c54f0(0x100,0x100,0,0x10,1);
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = temp_v0;
  puVar3[1] = temp_v5;
  FUN_002c38d4(&DAT_004e4128,puVar3);
  puVar3 = (unsigned int *)0x100;
  FUN_002c54f0(0x100,0x100,0,4,1);
  if (puVar3 != (unsigned int *)0x0) {
    *puVar3 = (unsigned int)&DAT_00420580;
  }
  puVar4 = (unsigned int *)0x100;
  DAT_00465178 = puVar3;
  FUN_002c54f0(0x100,0x100,0,4,1);
  if (puVar4 != (unsigned int *)0x0) {
    *puVar4 = (unsigned int)&DAT_00420440;
  }
  DAT_00465170 = 0;
  puVar3 = (unsigned int *)0x100;
  DAT_0046517c = puVar4;
  FUN_002c54f0(0x100,0x100,0,4,1);
  if (puVar3 != (unsigned int *)0x0) {
    *puVar3 = (unsigned int)"訜4訔4";
  }
  DAT_00465180 = puVar3;
  return;
}
