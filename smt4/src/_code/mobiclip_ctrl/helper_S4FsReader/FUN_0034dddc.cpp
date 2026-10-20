/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034dddc` (_code @ 0x34dddc, 0x1ec bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b5820(...);
int FUN_002bcc60(...);
int FUN_002bcd44(...);
int asdOperatorNew(...);
int memAlloc(...);
int FUN_002c38fc(...);
int FUN_002c526c(...);
int software_interrupt(...);

typedef int romwright_code(...);
/* stack frame of param_3: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
} param_3_stack;

extern int FUN_0034e020(...); /* 0x34e020 */
extern unsigned char LAB_003f6ed4; /* 0x3f6ed4 */
extern unsigned char LAB_003f6f8c; /* 0x3f6f8c */
extern unsigned char LAB_003f6ff8; /* 0x3f6ff8 */
extern unsigned int DAT_0044d130; /* 0x44d130 */
extern unsigned int *DAT_0044d134; /* 0x44d134 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002b5820. */
/* Supplied declaration required: FUN_002bcc60. */
/* Supplied declaration required: FUN_002bcd44. */
/* Supplied declaration required: asdOperatorNew. */
/* Supplied declaration required: memAlloc. */
/* Supplied declaration required: FUN_002c38fc. */
/* Supplied declaration required: FUN_002c526c. */


unsigned int FUN_0034dddc(unsigned int *param_1,int *param_2,unsigned int *param_3)

{
/* irregular: 9 native warning(s); review required */
  unsigned int temp_v0;
  int *piVar2;
  int *piVar3;
  unsigned int *puVar4;
  int temp_v1 [5];
  unsigned int *temp_v2 [3];
  int temp_v3;
  unsigned char *puStack_24;
  unsigned char *temp_v4;
  unsigned char *temp_v5;
  
  piVar2 = temp_v1;
  piVar3 = temp_v1;
  param_1[0xe] = (unsigned int)param_2;
  temp_v0 = (**(romwright_code **)(*param_2 + 0x24))(param_2);
  param_1[4] = temp_v0;
  param_1[5] = 0;
  param_1[0xf] = (unsigned int)param_3;
  temp_v0 = (**(romwright_code **)*param_3)(param_3,0x40000,4);
  param_1[8] = temp_v0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_002c38fc(param_1 + 0x10);
  temp_v1[0] = 0;
  FUN_002b5820(temp_v1,0);
  if (-1 < (int)piVar2) {
    piVar2 = (int *)0x0;
    param_1[0x13] = temp_v1[0];
  }
  if ((int)piVar2 < 0) {
    FUN_002c526c();
  }
  temp_v1[0] = 0;
  FUN_002b5820(temp_v1,0);
  if (-1 < (int)piVar3) {
    piVar3 = (int *)0x0;
    param_1[0x14] = temp_v1[0];
  }
  if ((int)piVar3 < 0) {
    FUN_002c526c();
  }
  param_1[0x15] = (unsigned int)(param_1 + 0x13);
  param_1[0x16] = (unsigned int)(param_1 + 0x14);
  temp_v1[0] = 0x1000;
  temp_v1[1] = 1;
  temp_v0 = 0x100;
  memAlloc(0x100,0x100,0,0x1000);
  puVar4 = (unsigned int *)0x18;
  DAT_0044d130 = temp_v0;
  asdOperatorNew();
  if (puVar4 != (unsigned int *)0x0) {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *(unsigned char *)(puVar4 + 4) = 0;
  }
  DAT_0044d134 = puVar4;
  FUN_002bcd44();
  temp_v3 = 4;
  puStack_24 = &LAB_003f6ed4;
  puVar4 = param_1 + 0xc;
  temp_v4 = &LAB_003f6ff8;
  temp_v5 = &LAB_003f6f8c;
  temp_v1[0] = DAT_0044d134[3] + DAT_0044d134[2];
  temp_v1[1] = 4;
  temp_v1[2] = 0xfffffffe;
  temp_v1[3] = 0;
  temp_v2[0] = param_1;
  FUN_002bcc60(puVar4,&temp_v3,FUN_0034e020,temp_v2);
  if ((int)puVar4 < 0) {
    FUN_002c526c();
  }
  software_interrupt(0x18);
  if ((int)param_1[0x13] < 0) {
    FUN_002c526c();
  }
  return 1;
}

} /* extern "C" */
