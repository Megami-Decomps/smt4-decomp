/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ef664` (_code @ 0x2ef664, 0x184 bytes) from smt4.cxi.
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

extern unsigned char LAB_001dd178; /* 0x1dd178 */
extern int FUN_002016cc(); /* 0x2016cc */
extern int FUN_002fea58(); /* 0x2fea58 */
extern unsigned int *DAT_0044d04c; /* 0x44d04c */
extern char s__B_B_B_B_B_B_B_B_B_B_0044d060[105]; /* 0x44d060 */

extern int FUN_0025b978(void);
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002bf86c. */
/* Supplied declaration required: FUN_002c4b30. */
extern unsigned int FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */


unsigned int FUN_002ef664(int param_1,unsigned char param_2)

{
/* irregular: 7 native warning(s); review required */
  unsigned int *puVar1;
  char *pcVar2;
  char *pcVar3;
  int temp_v0;
  romwright_code *temp_v1;
  romwright_code *temp_v2;
  unsigned int *temp_v3;
  char *temp_v4;
  
  temp_v1 = (romwright_code *)0x1;
  puVar1 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x74);
  DAT_0044d04c = puVar1;
  FUN_002c4b30(puVar1,0x74);
  temp_v1 = (romwright_code *)&LAB_001dd178;
  temp_v2 = FUN_002fea58;
  pcVar2 = "Move";
  temp_v3 = puVar1;
  FUN_002c5978("Move",2,0);
  *puVar1 = (unsigned int)pcVar2;
  pcVar3 = "Move NCL";
  temp_v2 = (romwright_code *)0x0;
  temp_v1 = FUN_002016cc;
  temp_v3 = puVar1;
  temp_v4 = pcVar2;
  FUN_002c4c00("Move NCL",0x7a,0,0);
  puVar1[1] = (unsigned int)pcVar3;
  temp_v4 = (char *)*puVar1;
  pcVar2 = "Move NCR";
  temp_v2 = (romwright_code *)0x0;
  temp_v1 = FUN_002016cc;
  temp_v3 = puVar1;
  FUN_002c4c00("Move NCR",0xd8,0);
  puVar1[2] = (unsigned int)pcVar2;
  temp_v0 = FUN_0025b978();
  if (temp_v0 != 0) {
    puVar1[4] = 9;
  }
  else if (param_1 != -1) {
    FUN_002be7fc(&temp_v1,"%s/%s.moflex","rom:/moflex",
                 *(unsigned int *)(s__B_B_B_B_B_B_B_B_B_B_0044d060 + param_1 * 4));
    puVar1[4] = 2;
    FUN_002bf86c((int)puVar1 + 0x1b,&temp_v1);
    *(unsigned char *)((int)puVar1 + 0x5b) = 0;
    *(unsigned char *)(puVar1 + 6) = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    if (param_1 == 3) {
      *(unsigned char *)(puVar1 + 6) = 1;
    }
    else if ((param_1 == 0x18 || param_1 == 0x19) ||
            ((param_1 == 0xb || param_1 == 0xd) || param_1 == 0x10)) {
      *(unsigned char *)((int)puVar1 + 0x19) = 1;
    }
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
