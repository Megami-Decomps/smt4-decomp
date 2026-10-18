/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00370b8c` (_code @ 0x370b8c, 0x1c8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} param_2_stack;

extern unsigned char LAB_00284524; /* 0x284524 */
extern int FUN_002c3038(); /* 0x2c3038 */
extern int FUN_0038b024(); /* 0x38b024 */
extern unsigned char DAT_005329a0; /* 0x5329a0 */
extern unsigned int *DAT_0058803c; /* 0x58803c */
extern char s__V_V_V_V_V_V_V_V_V_V_00588040[129]; /* 0x588040 */
extern unsigned int DAT_0058804c; /* 0x58804c */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_0013a618. */
/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_00163060. */
extern int FUN_0028029c(void);
/* Supplied declaration required: FUN_002e342c. */
/* Supplied declaration required: FUN_002e6354. */


unsigned int FUN_00370b8c(int param_1,unsigned char param_2)

{
/* irregular: 9 native warning(s); review required */
  unsigned int *puVar1;
  char *pcVar2;
  char *pcVar3;
  int temp_v0;
  romwright_code *temp_v1;
  romwright_code *temp_v2;
  unsigned int *temp_v3;
  char *temp_v4;
  
  puVar1 = (unsigned int *)0x100;
  temp_v1 = (romwright_code *)0x1;
  FUN_00163060(0x100,0x100,0,0x7c);
  DAT_0058803c = puVar1;
  FUN_002e6354();
  temp_v1 = (romwright_code *)&LAB_00284524;
  temp_v2 = FUN_0038b024;
  pcVar2 = "Move";
  temp_v3 = puVar1;
  FUN_0014e38c("Move",4,0);
  *puVar1 = (unsigned int)pcVar2;
  pcVar3 = "Move NCL";
  temp_v2 = (romwright_code *)0x0;
  temp_v1 = FUN_002c3038;
  temp_v3 = puVar1;
  temp_v4 = pcVar2;
  FUN_0015155c("Move NCL",0x7e,0,0);
  puVar1[1] = (unsigned int)pcVar3;
  if ((&DAT_005329a0)[param_1] == '\0') {
    temp_v4 = (char *)*puVar1;
    pcVar2 = "Move NCR";
    temp_v2 = (romwright_code *)0x0;
    temp_v1 = FUN_002c3038;
    temp_v3 = puVar1;
    FUN_0015155c("Move NCR",0xda,0);
    puVar1[2] = (unsigned int)pcVar2;
  }
  temp_v0 = FUN_0028029c();
  if (temp_v0 != 0) {
    puVar1[4] = 0xe;
  }
  else if (param_1 != -1) {
    if ((&DAT_005329a0)[param_1] != '\x01') {
      *(unsigned char *)((int)puVar1 + 0x79) = 0;
    }
    else {
      FUN_0013a618(0);
      *(unsigned char *)((int)puVar1 + 0x79) = 1;
    }
    if (param_1 != 3) {
      *(unsigned char *)(puVar1 + 0x1d) = 0;
      FUN_00100388(&temp_v1,"%s/%s.moflex","rom:/moflex",
                   *(unsigned int *)(s__V_V_V_V_V_V_V_V_V_V_00588040 + param_1 * 4));
    }
    else {
      *(unsigned char *)(puVar1 + 0x1d) = 1;
      *(unsigned char *)((int)puVar1 + 0x75) = 0;
      *(unsigned char *)((int)puVar1 + 0x76) = 0;
      FUN_00100388(&temp_v1,"moflex/%s.moflex",DAT_0058804c);
    }
    puVar1[4] = 2;
    FUN_002e342c((int)puVar1 + 0x1b,&temp_v1);
    *(unsigned char *)((int)puVar1 + 0x5b) = 0;
    *(unsigned char *)(puVar1 + 6) = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    *(unsigned char *)(puVar1 + 0x1e) = 0;
    *(unsigned char *)((int)puVar1 + 0x77) = 0;
  }
  else {
    puVar1[4] = 0;
    *(unsigned char *)((int)puVar1 + 0x5b) = 1;
    *(unsigned char *)(puVar1 + 6) = 0;
    *(unsigned char *)((int)puVar1 + 0x19) = 0;
  }
  *(unsigned char *)((int)puVar1 + 0x1a) = param_2;
  return *puVar1;
}
