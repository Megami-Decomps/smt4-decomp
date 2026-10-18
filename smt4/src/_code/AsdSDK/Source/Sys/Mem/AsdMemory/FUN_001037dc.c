/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001037dc` (_code @ 0x1037dc, 0x310 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

extern unsigned char DAT_004207f8; /* 0x4207f8 */
extern unsigned char DAT_00420938; /* 0x420938 */
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

/* Supplied declaration required: FUN_0010a174. */
/* Supplied declaration required: FUN_0011bfec. */
/* Supplied declaration required: FUN_002c36d0. */
extern unsigned int FUN_002c37a0(unsigned int);
/* Supplied declaration required: FUN_002c38fc. */
/* Supplied declaration required: FUN_002c3918. */
/* Supplied declaration required: FUN_002c3944. */
extern unsigned int FUN_002c3984(void);
extern unsigned int FUN_002c3994(void);
extern unsigned int *FUN_002c5300(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
extern unsigned int nn_fnd_ExpHeapBase_Allocate(int, int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */
extern int nngxGetVramEndAddr(unsigned int);


void FUN_001037dc(void)

{
/* irregular: 8 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  unsigned int *puVar3;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  
  temp_v0 = FUN_002c3994();
  *(unsigned int *)(DAT_00465174 + 0x80) = temp_v0;
  temp_v0 = FUN_002c3984();
  temp_v3 = DAT_00465174;
  *(unsigned int *)(DAT_00465174 + 0x84) = temp_v0;
  FUN_002c3944(*(unsigned int *)(temp_v3 + 0x80),temp_v0);
  temp_v3 = DAT_00465174;
  FUN_002c3918(DAT_00465174 + 0x88,*(unsigned int *)(DAT_00465174 + 0x80),
               *(unsigned int *)(DAT_00465174 + 0x84),0x100);
  FUN_002c38fc(temp_v3 + 0xe0);
  temp_v1 = *(unsigned int *)(DAT_00465174 + 0x84);
  if (temp_v1 >= 0x2000101) {
    temp_v4 = DAT_00465174 + 0x88;
    temp_v3 = DAT_00465174 + 0xe0;
    nn_os_CriticalSection_Enter(temp_v3);
    temp_v0 = nn_fnd_ExpHeapBase_Allocate(temp_v4,temp_v1 + 0xfe000080,0xffffff80,0,0,0);
    nn_os_CriticalSection_Leave(temp_v3);
    temp_v4 = DAT_00465174 + 0x88;
    temp_v3 = DAT_00465174 + 0xe0;
    DAT_00465184 = temp_v0;
    nn_os_CriticalSection_Enter(temp_v3);
    FUN_0011bfec(temp_v4,temp_v0,0x100);
    nn_os_CriticalSection_Leave(temp_v3);
  }
  temp_v0 = FUN_002c37a0(0x20000);
  *(unsigned int *)(DAT_00465174 + 0xec) = temp_v0;
  temp_v4 = nngxGetVramEndAddr(0x20000);
  temp_v3 = DAT_00465174;
  piVar1 = (int *)(DAT_00465174 + 0xec);
  *(int *)(DAT_00465174 + 0xf0) = temp_v4 - *piVar1;
  *(int *)(temp_v3 + 0xf4) = *piVar1;
  temp_v0 = FUN_002c37a0(0x30000);
  *(unsigned int *)(DAT_00465174 + 0xf8) = temp_v0;
  temp_v4 = nngxGetVramEndAddr(0x30000);
  temp_v3 = DAT_00465174;
  temp_v2 = *(int *)(DAT_00465174 + 0xf8);
  *(int *)(DAT_00465174 + 0xfc) = temp_v4 - temp_v2;
  *(int *)(temp_v3 + 0x100) = temp_v2;
  FUN_0010a174(*(unsigned int *)(temp_v3 + 0x14),*(unsigned int *)(temp_v3 + 0x18),
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
  DAT_004e4118 = temp_v5;
  puVar3 = (unsigned int *)FUN_002c5300(0x100,0x100,0,0x10,1);
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = temp_v0;
  puVar3[1] = temp_v5;
  FUN_002c36d0(&DAT_004e410c);
  temp_v0 = *(unsigned int *)(DAT_00465174 + 0xf8);
  temp_v5 = *(unsigned int *)(DAT_00465174 + 0xfc);
  DAT_004e411c = 0;
  DAT_004e4120 = 0;
  DAT_004e4124 = 0;
  DAT_004e4128 = 0;
  DAT_004e412c = 0;
  DAT_004e4130 = 0;
  DAT_004e4134 = temp_v5;
  puVar3 = (unsigned int *)FUN_002c5300(0x100,0x100,0,0x10,1);
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = temp_v0;
  puVar3[1] = temp_v5;
  FUN_002c36d0(&DAT_004e4128,puVar3);
  DAT_00465178 = (unsigned int *)FUN_002c5300(0x100,0x100,0,4,1);
  if (DAT_00465178 != (unsigned int *)0x0) {
    *DAT_00465178 = (unsigned int)&DAT_00420938;
  }
  DAT_0046517c = (unsigned int *)FUN_002c5300(0x100,0x100,0,4,1);
  if (DAT_0046517c != (unsigned int *)0x0) {
    *DAT_0046517c = (unsigned int)&DAT_004207f8;
  }
  DAT_00465170 = 0;
  DAT_00465180 = (unsigned int *)FUN_002c5300(0x100,0x100,0,4,1);
  if (DAT_00465180 != (unsigned int *)0x0) {
    *DAT_00465180 = (unsigned int)"螸4螰4";
  }
  return;
}
