/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042230c` (_code @ 0x42230c, 0x208 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorNew(...);
int memAlloc(...);
int FUN_0016dfc4(...);
int FUN_0017fd20(...);
int nn_os_CriticalSection_Initialize(...);
int FUN_002e3140(...);
int FUN_002fb0d4(...);
int software_interrupt(...);

typedef int romwright_code(...);
/* stack frame of param_3: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_3_stack;

extern int FUN_00422534(...); /* 0x422534 */
extern unsigned char LAB_00514a74; /* 0x514a74 */
extern unsigned char LAB_00514b20; /* 0x514b20 */
extern unsigned char LAB_00514b88; /* 0x514b88 */
extern unsigned int DAT_005880f8; /* 0x5880f8 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: asdOperatorNew. */
/* Supplied declaration required: memAlloc. */
/* Supplied declaration required: FUN_0016dfc4. */
/* Supplied declaration required: FUN_0017fd20. */
/* Supplied declaration required: nn_os_CriticalSection_Initialize. */
/* Supplied declaration required: FUN_002e3140. */
/* Supplied declaration required: FUN_002fb0d4. */


unsigned int FUN_0042230c(unsigned int *param_1,int *param_2,unsigned int *param_3)

{
/* irregular: 9 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int uStack_3c;
  unsigned int *temp_v3 [3];
  int temp_v4;
  unsigned char *puStack_24;
  unsigned char *temp_v5;
  unsigned char *temp_v6;
  
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
  nn_os_CriticalSection_Initialize(param_1 + 0x10);
  temp_v1 = 0;
  puVar3 = (unsigned int *)0xe0a0183b;
  puVar2 = puVar3;
  if (param_1[0x13] == 0) {
    puVar2 = (unsigned int *)&temp_v1;
    FUN_0017fd20();
    if (-1 < (int)puVar2) {
      param_1[0x13] = temp_v1;
      puVar2 = (unsigned int *)0x0;
    }
  }
  if ((int)puVar2 < 0) {
    FUN_002e3140();
  }
  temp_v1 = 0;
  if (param_1[0x14] == 0) {
    puVar3 = (unsigned int *)&temp_v1;
    FUN_0017fd20(puVar3,0);
    if (-1 < (int)puVar3) {
      puVar3 = (unsigned int *)0x0;
      param_1[0x14] = temp_v1;
    }
  }
  if ((int)puVar3 < 0) {
    FUN_002e3140();
  }
  param_1[0x15] = (unsigned int)(param_1 + 0x13);
  param_1[0x16] = (unsigned int)(param_1 + 0x14);
  temp_v1 = 1;
  temp_v0 = 0x100;
  memAlloc(0x100,0x100,0,0x1000,0x1000);
  puVar2 = (unsigned int *)0x18;
  DAT_005880f8 = temp_v0;
  asdOperatorNew();
  if (puVar2 != (unsigned int *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(unsigned char *)(puVar2 + 4) = 0;
  }
  (*(unsigned int * *)((unsigned char *)&DAT_005880f8 + 0x4)) = puVar2;
  FUN_0016dfc4();
  temp_v4 = 4;
  puStack_24 = &LAB_00514a74;
  puVar2 = param_1 + 0xc;
  temp_v5 = &LAB_00514b88;
  temp_v6 = &LAB_00514b20;
  temp_v1 = 4;
  temp_v2 = 0xfffffffe;
  uStack_3c = 0;
  temp_v3[0] = param_1;
  FUN_002fb0d4(puVar2,&temp_v4,FUN_00422534,temp_v3,(*(unsigned int * *)((unsigned char *)&DAT_005880f8 + 0x4))[3] + (*(unsigned int * *)((unsigned char *)&DAT_005880f8 + 0x4))[2]);
  if ((int)puVar2 < 0) {
    FUN_002e3140();
  }
  software_interrupt(0x18);
  if ((int)param_1[0x13] < 0) {
    FUN_002e3140();
  }
  return 1;
}

} /* extern "C" */
