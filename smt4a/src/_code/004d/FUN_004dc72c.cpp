/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004dc72c` (_code @ 0x4dc72c, 0x404 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00192550(void);
int FUN_001aba54(...);
int FUN_004a92d0(unsigned int, int, int);
int FUN_004a96b8(unsigned int);
int FUN_004a9c40(unsigned int, unsigned int, unsigned int);
int FUN_004aa7c8(unsigned int);
int FUN_004eb838(int *, unsigned int *);

extern int g_btlScriptUnit; /* 0x57113c */
extern unsigned int DAT_00571150; /* 0x571150 */
extern unsigned int DAT_00571154; /* 0x571154 */
extern unsigned int DAT_00571160; /* 0x571160 */
extern unsigned int DAT_00571164; /* 0x571164 */
extern unsigned int DAT_00571218; /* 0x571218 */
extern unsigned int DAT_0057121c; /* 0x57121c */
extern unsigned int DAT_00571228; /* 0x571228 */
extern unsigned int DAT_0057122c; /* 0x57122c */
extern unsigned int DAT_00571250; /* 0x571250 */
extern unsigned int DAT_00571254; /* 0x571254 */
extern unsigned int DAT_005712f0; /* 0x5712f0 */
extern unsigned int DAT_0057a9c8; /* 0x57a9c8 */

/* Supplied declaration required: FUN_00192550. */
/* Supplied declaration required: FUN_001aba54. */
extern int FUN_00333758(void);
extern int FUN_003e7adc(int);
extern int FUN_0040de1c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_004a92d0. */
/* Supplied declaration required: FUN_004a96b8. */
/* Supplied declaration required: FUN_004a9c40. */
extern int FUN_004aa020(unsigned int);
/* Supplied declaration required: FUN_004aa7c8. */
extern int FUN_004abb54(unsigned int);
/* Supplied declaration required: FUN_004eb838. */


/* WARNING: Removing unreachable block (ram,0x004dc8e0) */
/* WARNING: Removing unreachable block (ram,0x004dc918) */

unsigned int FUN_004dc72c(int *param_1,unsigned int *param_2)

{
/* irregular: 1 goto(s); 9 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  if ((*(unsigned int *)(*param_1 + 0x45a0) & DAT_00571250) != 0 ||
      (DAT_00571254 & *(unsigned int *)(*param_1 + 0x45a4)) != 0) {
    temp_v1 = FUN_0040de1c(DAT_005712f0,0);
    if (0 < temp_v1) {
      return 0;
    }
    temp_v1 = *param_1;
    temp_v2 = ~DAT_00571250;
    *(unsigned int *)(temp_v1 + 0x45a4) = *(unsigned int *)(temp_v1 + 0x45a4) & ~DAT_00571254;
    *(unsigned int *)(temp_v1 + 0x45a0) = *(unsigned int *)(temp_v1 + 0x45a0) & temp_v2;
    FUN_004a96b8(DAT_0057a9c8);
  }
  temp_v1 = FUN_004abb54(DAT_0057a9c8);
  if (temp_v1 != 0) {
    temp_v2 = *(unsigned int *)(*param_1 + 0x45a0);
    temp_v3 = *(unsigned int *)(*param_1 + 0x45a4);
    if (!((DAT_0057121c & temp_v3) == 0 && (DAT_00571218 & temp_v2) == 0)) {
      if ((*param_2 & 0x80) == 0) {
        *param_2 = *param_2 | 0x80;
        FUN_004aa7c8(DAT_0057a9c8);
        FUN_004a92d0(DAT_0057a9c8,(short)param_2[0xb],1);
      }
    }
    else if (((temp_v3 & DAT_0057122c) != 0 || (DAT_00571228 & temp_v2) != 0) &&
            ((*param_2 & 0x1000) == 0)) {
      *param_2 = *param_2 | 0x1000;
      FUN_004aa7c8(DAT_0057a9c8);
      FUN_004a92d0(DAT_0057a9c8,(short)param_2[0xb],1);
    }
  }
  temp_v1 = FUN_004aa020(DAT_0057a9c8);
  if (temp_v1 == 0) {
    return 0;
  }
  FUN_004a9c40(DAT_0057a9c8,param_2[10] + 0x1be,param_2[10] + 0x1c0);
  if (((*param_2 & 0x80) != 0) || ((*param_2 & 0x1000) != 0)) {
    *(unsigned short *)(param_2[10] + 0x1be) = 1;
    *(unsigned short *)(param_2[10] + 0x1c0) = 1;
  }
  switch(*(unsigned short *)(param_2[10] + 0x1be)) {
  case 1:
  case 0xe:
    *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 6;
    break;
  case 2:
  case 3:
    FUN_001aba54((int)*(short *)(param_2[10] + 0x1c0));
    temp_v1 = FUN_00333758();
joined_r0x004dca3c:
    if (temp_v1 != 0) {
      *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 6;
      break;
    }
    *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 8;
    break;
  case 4:
  case 0xb:
    *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 0xb;
    break;
  case 6:
  case 0xf:
    FUN_004eb838(param_1,param_2);
    break;
  case 7:
    temp_v0 = *(short *)(param_2[10] + 0x1c0);
    param_2[0x16a] = (int)temp_v0;
    if ((int)temp_v0 == 4) {
      *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 0xb;
      break;
    }
    *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 6;
    break;
  case 8:
    temp_v1 = (int)*(short *)(param_2[10] + 0x1c0);
    FUN_00192550();
    if (*(short *)(temp_v1 + 0x32) != 0) {
      FUN_001aba54();
      temp_v1 = FUN_00333758();
      goto joined_r0x004dca3c;
    }
    *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 8;
    break;
  case 9:
  case 10:
  case 0xd:
    if ((((DAT_00571150 | DAT_00571160) & *(unsigned int *)param_2[8]) != 0 ||
         ((DAT_00571154 | DAT_00571164) & ((unsigned int *)param_2[8])[1]) != 0) &&
       (temp_v1 = FUN_003e7adc(*param_1), temp_v1 == 0)) {
      *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 0xb;
      return 1;
    }
    *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 8;
  }
  return 1;
}

} /* extern "C" */
