/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00432b10` (_code @ 0x432b10, 0x1d8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00110b28(int, unsigned char **);
int FUN_00135804(int, int *);
int FUN_002e6e14(...);
int FUN_002f6ed2(int, unsigned int);
int FUN_00302f28(...);
int FUN_00522bf4(int, unsigned int **);

typedef int romwright_code(...);
/* stack frame of param_1: 10 slot(s), 37 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned char sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned char DAT_00558760; /* 0x558760 */
extern unsigned char DAT_00559804; /* 0x559804 */
extern unsigned char DAT_0055a5b0; /* 0x55a5b0 */
extern unsigned int DAT_0058955c; /* 0x58955c */

/* Supplied declaration required: FUN_00110b28. */
/* Supplied declaration required: FUN_00135804. */
extern int FUN_002e6dac(unsigned int);
/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: FUN_002f6ed2. */
/* Supplied declaration required: FUN_00302f28. */
extern int FUN_0030395c(int, unsigned int);
/* Supplied declaration required: FUN_00522bf4. */


unsigned int * FUN_00432b10(unsigned int *param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int *puVar3;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int *temp_v4;
  unsigned int *temp_v5;
  unsigned int temp_v6;
  unsigned char *temp_v7;
  unsigned char temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  
  *param_1 = (unsigned int)&DAT_0055a5b0;
  *(unsigned char *)(param_1 + 1) = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  temp_v0 = FUN_002e6dac(0x80);
  param_1[2] = temp_v0;
  param_1[3] = temp_v0;
  param_1[4] = temp_v0 + 0x80;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  temp_v0 = FUN_002e6dac(0x80);
  param_1[6] = temp_v0;
  param_1[7] = temp_v0;
  param_1[8] = temp_v0 + 0x80;
  temp_v0 = FUN_00302f28(param_1 + 10);
  temp_v0 = FUN_00302f28(temp_v0 + 8);
  temp_v0 = FUN_00302f28(temp_v0 + 8);
  temp_v0 = FUN_00302f28(temp_v0 + 8);
  temp_v0 = FUN_0030395c(temp_v0 + 0xc,0);
  *(unsigned char *)(temp_v0 + 0x14) = 0;
  *(unsigned char **)(temp_v0 + 0x10) = &DAT_00558760;
  *(unsigned int *)(temp_v0 + 0x18) = 0;
  *(unsigned int *)(temp_v0 + 0x1c) = 0x14;
  *(unsigned char **)(temp_v0 - 0x4c) = &DAT_00559804;
  *(unsigned char *)(temp_v0 - 0x47) = 1;
  temp_v1 = 0;
  temp_v2 = 0;
  temp_v3 = 0;
  FUN_00135804(temp_v0 - 0x44,&temp_v1);
  FUN_002e6e14(temp_v1);
  *(unsigned char *)(temp_v0 - 0x38) = 0;
  temp_v1 = 0;
  temp_v2 = 0;
  temp_v3 = 0;
  FUN_00135804(temp_v0 - 0x34,&temp_v1);
  FUN_002e6e14(temp_v1);
  *(unsigned short *)(temp_v0 - 0x28) = 0xffff;
  FUN_002f6ed2(temp_v0 - 0x24,DAT_0058955c);
  FUN_002f6ed2(temp_v0 - 0x1c,DAT_0058955c);
  FUN_002f6ed2(temp_v0 - 0x14,DAT_0058955c);
  FUN_002f6ed2(temp_v0 - 0xc,DAT_0058955c);
  *(unsigned int *)(temp_v0 - 4) = 0;
  *(unsigned char *)(temp_v0 + 0xc) = 0;
  *(unsigned char *)(temp_v0 + 0xd) = 0;
  temp_v10 = 0x14;
  temp_v8 = 0;
  temp_v7 = &DAT_00558760;
  temp_v9 = 0;
  FUN_00110b28(temp_v0 + 0x10,&temp_v7);
  *(unsigned char *)(temp_v0 + 0x20) = 0;
  temp_v4 = (unsigned int *)0x0;
  temp_v5 = (unsigned int *)0x0;
  temp_v6 = 0;
  FUN_00522bf4(temp_v0,&temp_v4);
  puVar1 = temp_v5;
  for (puVar3 = temp_v4; puVar3 != puVar1; puVar3 = puVar3 + 2) {
    (**(romwright_code **)*puVar3)(puVar3);
  }
  FUN_002e6e14(temp_v4);
  *(unsigned int *)(temp_v0 + 0x24) = 0;
  *(unsigned char *)(temp_v0 + 0x28) = 0;
  return (unsigned int *)(temp_v0 - 0x4c);
}

} /* extern "C" */
