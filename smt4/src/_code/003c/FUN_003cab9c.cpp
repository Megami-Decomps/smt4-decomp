/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cab9c` (_code @ 0x3cab9c, 0x2c4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022a8c8(int, int, int);
int FUN_00245228(int, int, int);
int FUN_002ae164(void);
int FUN_003da010(int);
int FUN_003dc504(void);
int FUN_003dcaac(int, unsigned int);

extern int DAT_0043427c; /* 0x43427c */
extern int DAT_00435d18; /* 0x435d18 */

/* Supplied declaration required: FUN_0022a8c8. */
/* Supplied declaration required: FUN_00245228. */
/* Supplied declaration required: FUN_002ae164. */
extern int FUN_0033b390(int, unsigned int);
/* Supplied declaration required: FUN_003da010. */
extern unsigned long long FUN_003db7b4(int);
/* Supplied declaration required: FUN_003dc504. */
/* Supplied declaration required: FUN_003dcaac. */


unsigned int FUN_003cab9c(int *param_1,unsigned int *param_2)

{
/* irregular: 1 goto(s); 7 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned char temp_v2;
  unsigned int *temp_v3;
  unsigned int *puVar5;
  unsigned char temp_v4;
  unsigned long long temp_v5;
  
  temp_v0 = param_2[2];
  if (temp_v0 == 0) {
    temp_v1 = FUN_0033b390(*param_1,0);
    if (temp_v1 != 0) {
      FUN_00245228(*param_1,0,0x1e);
    }
    param_2[2] = 1;
LAB_003cac08:
    temp_v1 = DAT_00435d18;
    FUN_003dc504();
    if (temp_v1 == 0) {
      return 0;
    }
    FUN_003da010(DAT_00435d18);
    param_2[2] = 2;
    return 0;
  }
  if (temp_v0 == 1) goto LAB_003cac08;
  if (temp_v0 != 2) {
    puVar5 = param_2;
    if (temp_v0 != 5) {
      return 0;
    }
  }
  else {
    temp_v5 = FUN_003db7b4(DAT_00435d18);
    if ((int)temp_v5 == 0) {
      return 0;
    }
    param_2[2] = 5;
    puVar5 = (unsigned int *)((unsigned long long)temp_v5 >> 0x20);
    if ((*(unsigned int *)(*param_1 + 0x44a0) & 4) == 0) {
      FUN_003dcaac(DAT_00435d18,param_2[0x165]);
      puVar5 = temp_v3;
    }
  }
  puVar3 = (unsigned int *)param_2[0x15b];
  temp_v4 = puVar3 == (unsigned int *)0x0;
  if (!temp_v4) {
    puVar5 = (unsigned int *)(unsigned int)*(unsigned short *)((int)param_2 + 6);
  }
  if ((temp_v4 || puVar5 <= puVar3) && (!temp_v4 && puVar3 != puVar5)) {
    return 0;
  }
  switch(*(unsigned short *)(param_2[10] + 0x14c)) {
  default:
    if ((*(unsigned short *)(param_2[10] + 0xfa) & 0x10) != 0) {
      FUN_0022a8c8(*param_1,(int)*(short *)(param_2[9] + 0x62),0);
    }
    return 1;
  case 1:
  case 2:
  case 3:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
    if (*(short *)(param_2[10] + 0x14c) == 2) {
      temp_v1 = (int)*(short *)(param_2[10] + 0x14e);
      FUN_002ae164();
      if ((temp_v1 != 0) && (*(char *)(temp_v1 + 0x45) != '\0')) {
        if ((*(unsigned int *)(*param_1 + 0x44a0) & 0x40) != 0) {
          temp_v0 = *param_2 | 0x80;
        }
        else {
          if ((*(unsigned int *)(*param_1 + 0x44a0) & 0x100) == 0) {
            temp_v2 = 0xe;
            temp_v1 = DAT_0043427c + *(int *)(*param_1 + 0x84) * 0xf1c;
            break;
          }
          temp_v0 = *param_2 | 0x1000;
        }
        *param_2 = temp_v0;
      }
    }
    temp_v2 = 0xe;
    temp_v1 = DAT_0043427c + *(int *)(*param_1 + 0x84) * 0xf1c;
    break;
  case 4:
    temp_v2 = 0x14;
    temp_v1 = DAT_0043427c + *(int *)(*param_1 + 0x84) * 0xf1c;
    break;
  case 5:
  case 6:
  case 0xf:
  case 0x10:
  case 0x11:
    temp_v2 = 0x13;
    temp_v1 = DAT_0043427c + *(int *)(*param_1 + 0x84) * 0xf1c;
    break;
  case 7:
    temp_v2 = 0xf;
    temp_v1 = DAT_0043427c + *(int *)(*param_1 + 0x84) * 0xf1c;
    break;
  case 0xd:
    *(unsigned char *)(DAT_0043427c + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 8;
    if ((*(unsigned short *)(param_2[10] + 0xfa) & 0x10) != 0) {
      FUN_0022a8c8(*param_1,(int)*(short *)(param_2[9] + 0x62),0);
    }
    return 1;
  case 0xe:
    *(unsigned char *)(DAT_0043427c + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 0x16;
    if ((*(unsigned short *)(param_2[10] + 0xfa) & 0x10) != 0) {
      FUN_0022a8c8(*param_1,(int)*(short *)(param_2[9] + 0x62),0);
    }
    return 1;
  }
  *(unsigned char *)(temp_v1 + 9) = temp_v2;
  if ((*(unsigned short *)(param_2[10] + 0xfa) & 0x10) != 0) {
    FUN_0022a8c8(*param_1,(int)*(short *)(param_2[9] + 0x62),0);
  }
  return 1;
}

} /* extern "C" */
