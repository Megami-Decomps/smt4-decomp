/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018b28c` (_code @ 0x18b28c, 0x1d8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0017fd20(...);
int FUN_00188b60(...);
int FUN_001a089c(...);
int FUN_001a2420(...);
int FUN_002e3140(...);
int FUN_002fb0d4(...);
int nn_os_SharedMemoryBlock_AttachAndMap(...);

/* stack frame of param_1: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned char LAB_00100ad9; /* 0x100ad9 */
extern unsigned char LAB_00100ded; /* 0x100ded */
extern unsigned char LAB_00100df3; /* 0x100df3 */
extern int FUN_001a26e4(...); /* 0x1a26e4 */

/* Supplied declaration required: FUN_0017fd20. */
/* Supplied declaration required: FUN_00188b60. */
extern int FUN_0018b620(void);
/* Supplied declaration required: FUN_001a089c. */
/* Supplied declaration required: FUN_001a2420. */
extern int FUN_001a2a3c(void);
extern unsigned int FUN_001a2a5c(void);
/* Supplied declaration required: FUN_002e3140. */
/* Supplied declaration required: FUN_002fb0d4. */
extern unsigned int nn_gxlow_CTR_Gpu_RegisterInterruptRelayQueue(unsigned int, unsigned int, unsigned int, unsigned int, int *);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);
/* Supplied declaration required: nn_os_SharedMemoryBlock_AttachAndMap. */


void FUN_0018b28c(int param_1)

{
/* irregular: 8 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char *temp_v6;
  unsigned char *temp_v7;
  unsigned char *temp_v8;
  int temp_v9;
  
  puVar1 = (unsigned char *)&temp_v2;
  temp_v4 = 0;
  FUN_00188b60();
  nn_os_CriticalSection_Enter(param_1);
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0x14) = 0;
  *(unsigned int *)(param_1 + 0x18) = 0;
  *(unsigned int *)(param_1 + 0x1c) = 0;
  *(unsigned int *)(param_1 + 0x20) = 0;
  *(unsigned int *)(param_1 + 0x24) = 0;
  *(unsigned int *)(param_1 + 0x28) = 0;
  temp_v2 = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    puVar1 = (unsigned char *)0xe0a0183b;
  }
  else {
    FUN_0017fd20(&temp_v2,0);
    if (-1 < (int)puVar1) {
      puVar1 = (unsigned char *)0x0;
      *(unsigned int *)(param_1 + 0x2c) = temp_v2;
    }
  }
  if ((int)puVar1 < 0) {
    FUN_002e3140();
  }
  *(unsigned char *)(param_1 + 0x77) = 0;
  *(unsigned char *)(param_1 + 0x76) = 0;
  FUN_001a089c(param_1 + 100,0);
  temp_v2 = FUN_001a2a5c();
  temp_v0 = FUN_0018b620();
  if (temp_v0 == 0) {
    temp_v1 = 1;
  }
  else {
    temp_v1 = 2;
  }
  temp_v0 = FUN_001a2a3c();
  if (temp_v0 != 0) {
    temp_v1 = temp_v1 | 4;
  }
  temp_v1 = nn_gxlow_CTR_Gpu_RegisterInterruptRelayQueue
                    (temp_v2,*(unsigned int *)(param_1 + 0x2c),temp_v1,(unsigned int)&temp_v4,&temp_v3);
  *(char *)(param_1 + 0x74) = (char)temp_v3;
  nn_os_SharedMemoryBlock_AttachAndMap(param_1 + 0x38,temp_v4,0x1000,0);
  *(unsigned int *)(param_1 + 0x30) = *(unsigned int *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x40) + temp_v3 * 0x40;
  FUN_001a2420(param_1 + 0x58,*(int *)(param_1 + 0x40) + temp_v3 * 0x200 + 0x800);
  temp_v0 = temp_v3 * 0x80 + 0x200 + *(int *)(param_1 + 0x40);
  *(int *)(param_1 + 0x5c) = temp_v0;
  *(int *)(param_1 + 0x60) = temp_v0 + 0x40;
  if (temp_v1 == 0x2a07) {
    *(unsigned char *)(param_1 + 0x75) = 1;
  }
  else {
    *(unsigned char *)(param_1 + 0x75) = 0;
  }
  temp_v5 = 4;
  temp_v6 = &LAB_00100ad9;
  temp_v7 = &LAB_00100df3;
  temp_v8 = &LAB_00100ded;
  temp_v0 = param_1 + 0x6c;
  temp_v9 = param_1;
  FUN_002fb0d4(temp_v0,&temp_v5,FUN_001a26e4,&temp_v9);
  if (temp_v0 < 0) {
    FUN_002e3140();
  }
  nn_os_CriticalSection_Leave(param_1);
  return;
}

} /* extern "C" */
