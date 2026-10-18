/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00384304` (_code @ 0x384304, 0x318 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp134; /* 0x134: local_134 */
    unsigned int sp140; /* 0x140: local_140 */
} param_4_stack;

extern unsigned char LAB_00384628; /* 0x384628 */
extern unsigned char LAB_00384638; /* 0x384638 */
extern unsigned char LAB_00384650; /* 0x384650 */
extern unsigned char LAB_00384658; /* 0x384658 */
extern unsigned char LAB_00384668; /* 0x384668 */
extern unsigned char LAB_0038468c; /* 0x38468c */

/* Supplied declaration required: FUN_0023509c. */
/* Supplied declaration required: FUN_002350f4. */
/* Supplied declaration required: FUN_002353e8. */
extern int FUN_002355ac(unsigned char);
/* Supplied declaration required: FUN_0023eb7c. */
/* Supplied declaration required: FUN_00282e6c. */
/* Supplied declaration required: FUN_00287790. */
/* Supplied declaration required: FUN_0028796c. */
/* Supplied declaration required: FUN_00297704. */
/* Supplied declaration required: FUN_0029bddc. */
/* Supplied declaration required: FUN_0029c0fc. */
/* Supplied declaration required: FUN_002a06c8. */
/* Supplied declaration required: FUN_002a0c54. */
/* Supplied declaration required: FUN_002be7fc. */
extern int FUN_002c23e4(int);
/* Supplied declaration required: FUN_002c23f8. */
/* Supplied declaration required: FUN_002c4b30. */
/* Supplied declaration required: FUN_002d5780. */
/* Supplied declaration required: FUN_002e11bc. */
extern int FUN_00381b24(void);
/* Supplied declaration required: FUN_00381cd0. */


void FUN_00384304(int param_1,char param_2,unsigned char param_3,unsigned char param_4)

{
/* irregular: 18 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char *puVar2;
  unsigned int *puVar3;
  unsigned int temp_v1;
  unsigned int *puVar5;
  int temp_v2;
  int *piVar7;
  int temp_v3;
  char temp_v4 [12];
  char *temp_v5;
  unsigned char temp_v6 [64];
  unsigned char temp_v7 [64];
  unsigned char temp_v8 [144];
  
  *(char *)(param_1 + 0x10) = param_2;
  *(unsigned char *)(param_1 + 0x11) = param_3;
  *(unsigned char *)(param_1 + 0x21) = param_4;
  if (param_2 != '\v') {
    if ('\v' >= param_2) {
      if (param_2 == '\x01') {
        *(unsigned char *)(param_1 + 0x18) = 0;
      }
      else if (param_2 == '\t') {
        temp_v0 = 2;
        *(unsigned char *)(param_1 + 0x18) = temp_v0;
      }
      else if (param_2 != '\n') {
        *(unsigned char *)(param_1 + 0x18) = 1;
      }
      else {
        temp_v0 = 3;
        *(unsigned char *)(param_1 + 0x18) = temp_v0;
      }
    }
    else if (param_2 != '\f' && param_2 != '\r') {
      *(unsigned char *)(param_1 + 0x18) = 1;
    }
    else {
      temp_v0 = 3;
      *(unsigned char *)(param_1 + 0x18) = temp_v0;
    }
  }
  else {
    temp_v0 = 3;
    *(unsigned char *)(param_1 + 0x18) = temp_v0;
  }
  temp_v1 = 0;
  temp_v5 = "quest_center/bg/hunter_company_chaos/hunter_company_chaos";
  temp_v4[0] = -0x1c;
  temp_v4[1] = 'X';
  temp_v4[2] = 'B';
  temp_v4[3] = '\0';
  temp_v4[4] = 'r';
  temp_v4[5] = 'Y';
  temp_v4[6] = 'B';
  temp_v4[7] = '\0';
  temp_v4[8] = '<';
  temp_v4[9] = 'Y';
  temp_v4[10] = 'B';
  temp_v4[0xb] = '\0';
  do {
    FUN_002be7fc(temp_v8,&LAB_00384628,
                 *(unsigned int *)(temp_v4 + (unsigned int)*(unsigned char *)(param_1 + 0x18) * 4),temp_v1 + 1);
    puVar2 = temp_v8;
    FUN_0029bddc(puVar2,7);
    temp_v3 = param_1 + temp_v1 * 4;
    puVar5 = (unsigned int *)(temp_v3 + 0xd10);
    *(unsigned char **)(temp_v3 + 0xd10) = puVar2;
    FUN_002a06c8();
    FUN_0023eb7c(*puVar5,0);
    FUN_002d5780(*puVar5);
    FUN_002e11bc(*puVar5,0);
    FUN_002be7fc(temp_v8,&LAB_00384638,
                 *(unsigned int *)(temp_v4 + (unsigned int)*(unsigned char *)(param_1 + 0x18) * 4),temp_v1 + 1);
    puVar2 = temp_v8;
    FUN_0029bddc(puVar2,7);
    piVar7 = (int *)(temp_v3 + 0xd28);
    *(unsigned char **)(temp_v3 + 0xd28) = puVar2;
    FUN_002a06c8();
    FUN_0023eb7c(*piVar7,0);
    FUN_002d5780(*piVar7);
    FUN_002e11bc(*puVar5,1);
    puVar3 = (unsigned int *)*piVar7;
    temp_v1 = temp_v1 + 1;
    *puVar3 = *puVar3 | 2;
    *(unsigned char *)(*(int *)(puVar3[2] + 0x2c) + 0x1f6) = 0;
  } while (temp_v1 < 6);
  *(unsigned int *)(param_1 + 0xd44) = 0x41f00000;
  if (*(char *)(param_1 + 0x21) == '\x02') {
    FUN_002be7fc(temp_v8,&LAB_00384650,
                 *(unsigned int *)(temp_v4 + (unsigned int)*(unsigned char *)(param_1 + 0x18) * 4));
    puVar2 = temp_v8;
    FUN_0029bddc(puVar2,7);
    *(unsigned char **)(param_1 + 0xfb8) = puVar2;
    FUN_002a06c8();
    FUN_002be7fc(temp_v8,&LAB_00384658,
                 *(unsigned int *)(temp_v4 + (unsigned int)*(unsigned char *)(param_1 + 0x18) * 4));
    FUN_002a0c54(temp_v8,0);
  }
  temp_v2 = 0x17f0;
  FUN_002c23f8();
  temp_v3 = 0;
  if (temp_v2 != 0) {
    FUN_002c4b30();
    temp_v3 = FUN_002c23e4(temp_v2 + 0x4cc);
    temp_v3 = temp_v3 - 0x4cc;
  }
  *(int *)(param_1 + 0xfac) = temp_v3;
  FUN_002353e8();
  FUN_002350f4(*(unsigned int *)(param_1 + 0xfac),
               *(unsigned int *)(temp_v4 + (unsigned int)*(unsigned char *)(param_1 + 0x18) * 4),0);
  FUN_0023509c(*(unsigned int *)(param_1 + 0xfac),0);
  FUN_002be7fc(temp_v6,&LAB_00384668,(int)*(char *)(param_1 + 0x10));
  FUN_002be7fc(temp_v7,&LAB_0038468c,(int)*(char *)(param_1 + 0x10));
  FUN_00297704(temp_v6,param_1 + 0x5ac,0);
  FUN_00297704(temp_v7,param_1 + 0x5b0,0);
  if (*(char *)(param_1 + 0x18) != '\x02' && *(char *)(param_1 + 0x18) != '\x03') {
    FUN_0028796c();
    temp_v3 = FUN_00381b24();
    if (temp_v3 != 0) {
      FUN_0028796c(*(unsigned char *)(param_1 + 0x18));
      FUN_00381cd0();
    }
  }
  temp_v3 = FUN_002355ac(*(unsigned char *)(param_1 + 0x18));
  if (temp_v3 != 0) {
    FUN_00287790(0);
  }
  FUN_00282e6c(0,0xff);
  FUN_00282e6c(1,0xff);
  FUN_0029c0fc(0x1c,1);
  return;
}
