/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00112500` (_code @ 0x112500, 0xda bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 4 slot(s), 14 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned short sp5A; /* 0x5a: local_5a */
} param_2_stack;

extern unsigned char LAB_00112680; /* 0x112680 */
extern unsigned char LAB_00112a0d; /* 0x112a0d */
extern unsigned int DAT_00594eb8; /* 0x594eb8 */

/* Supplied declaration required: FUN_002e9538. */
/* Supplied declaration required: FUN_002e995c. */
/* Supplied declaration required: FUN_002ea20c. */
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
extern unsigned int FUN_002eab1c(unsigned char *, int);
/* Supplied declaration required: FUN_002eb60c. */
extern int FUN_002f34ac(int, int);


unsigned char * FUN_00112500(int param_1,int *param_2)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned char *puVar3;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char *puVar5;
  int temp_v4;
  unsigned char temp_v5 [6];
  unsigned short temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8 [4];
  int temp_v9;
  int temp_v10;
  unsigned char temp_v11 [8];
  unsigned char temp_v12 [20];
  
  puVar3 = (unsigned char *)*param_2;
  if ((unsigned char *)*param_2 == *(unsigned char **)(param_1 + 0x2d0)) {
    FUN_002e995c(temp_v5);
    temp_v2 = param_2[2];
    temp_v7 = (temp_v2 << 0x18) | (((temp_v2 >> 8) & 0xff) << 0x10) | (((temp_v2 >> 0x10) & 0xff) << 8) |
               (temp_v2 >> 0x18);
    temp_v6 = (unsigned short)((param_2[1] & 0xffU) << 8) | ((unsigned short)((unsigned int)param_2[1] >> 8) & 0xff);
    temp_v9 = param_1 + 0x158;
    FUN_002eb60c();
    temp_v4 = (int)*(char *)(temp_v3 + param_1 + 0x2c0);
    FUN_002ea20c(temp_v11,0x11254e);
    temp_v0 = FUN_002eab1c(temp_v11,temp_v4 + 0x2e8);
    *(unsigned int *)(param_1 + 0x2cc) = temp_v0;
    FUN_002e9538(temp_v9,temp_v5);
    temp_v10 = temp_v4 + 0x138;
    if ((unsigned short)((*(unsigned short *)(temp_v9 + 6) << 8) | (*(unsigned short *)(temp_v9 + 6) >> 8)) ==
        (unsigned short)((*(unsigned short *)(temp_v4 + 0x13e) << 8) | (*(unsigned short *)(temp_v4 + 0x13e) >> 8))) {
      *(unsigned char *)(param_1 + 800) = 1;
    }
    if (*(char *)(param_1 + 0x321) != '\0') {
      *(unsigned short *)(param_1 + 0x322) = (temp_v6 << 8) | (temp_v6 >> 8);
    }
    else {
      *(unsigned short *)(param_1 + 0x326) = (temp_v6 << 8) | (temp_v6 >> 8);
    }
    temp_v1 = FUN_002f34ac(temp_v9,temp_v10);
    temp_v0 = DAT_00594eb8;
    if (temp_v1 != 0) {
      *(unsigned int *)(param_1 + 0x2d4) = DAT_00594eb8;
      *(unsigned int *)(param_1 + 0x2d8) = temp_v0;
      puVar5 = &LAB_00112a0d;
      puVar3 = temp_v12;
    }
    else {
      puVar5 = (unsigned char *)0x113175;
      puVar3 = temp_v8;
    }
    temp_v0 = FUN_002ea3c0(puVar3,puVar5,0,&LAB_00112680);
    FUN_002ea3d0(temp_v4,temp_v0);
    puVar3 = temp_v5;
  }
  return puVar3;
}
