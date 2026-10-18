/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d3cd8` (_code @ 0x1d3cd8, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_00432fc8; /* 0x432fc8 */
extern unsigned int DAT_00433158; /* 0x433158 */
extern int DAT_004342c8; /* 0x4342c8 */
extern int DAT_00435d18; /* 0x435d18 */
extern unsigned int *DAT_00435d48; /* 0x435d48 */
extern unsigned int DAT_00439ca8; /* 0x439ca8 */

extern int FUN_0019dfbc(unsigned int);
extern unsigned int FUN_0022a210(unsigned int *, int);
/* Supplied declaration required: FUN_0022a2b0. */
extern unsigned int FUN_0022a324(unsigned int *, int);
extern int FUN_0022a458(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0022a498. */
/* Supplied declaration required: FUN_00242a80. */
/* Supplied declaration required: FUN_00256ad8. */
/* Supplied declaration required: FUN_00256b04. */
extern int FUN_00256b80(int, int, unsigned int);
/* Supplied declaration required: FUN_00293074. */
/* Supplied declaration required: FUN_002971e4. */
/* Supplied declaration required: FUN_002972f8. */
/* Supplied declaration required: FUN_00297704. */
extern unsigned int FUN_002ac2f4(int, unsigned int);
/* Supplied declaration required: FUN_002b8b78. */
/* Supplied declaration required: FUN_002be7fc. */
extern int FUN_002c0ac8(void);
extern unsigned int FUN_002c0e4c(unsigned int);
extern unsigned int FUN_002c0e9c(void);
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c4b30. */
/* Supplied declaration required: FUN_00385e68. */
/* Supplied declaration required: FUN_00387c8c. */
/* Supplied declaration required: FUN_003db004. */
/* Supplied declaration required: FUN_003dc094. */
/* Supplied declaration required: FUN_003dc368. */
extern int FUN_003dce60(int);


unsigned int FUN_001d3cd8(void)

{
/* irregular: 5 goto(s); 18 native warning(s); review required */
  char temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int *puVar8;
  unsigned char temp_v6 [128];
  unsigned char temp_v7 [132];
  
  temp_v1 = FUN_002c0ac8();
  puVar2 = DAT_00435d48;
  if (DAT_00435d48 == (unsigned int *)0x0) {
    return 0;
  }
  switch(*DAT_00435d48) {
  default:
    return 0;
  case 1:
    FUN_002c4b30(temp_v7,0x80);
    FUN_002be7fc(temp_v7,"battle/event/%s/ProTable_%s.tbb",temp_v1 + 0x100);
    temp_v5 = FUN_0022a458(DAT_00433158,*(unsigned int *)(temp_v1 + 0xc4));
    if (temp_v5 != 0) {
      FUN_00387c8c(DAT_00433158,*(unsigned int *)(temp_v1 + 0xc4),puVar2 + 2,temp_v7);
    }
    else {
      FUN_00297704(temp_v7,puVar2 + 2,0);
    }
    *puVar2 = 2;
    if (puVar2[2] == 0) {
      return 0;
    }
    temp_v3 = FUN_002ac2f4(puVar2[2],0);
    temp_v2 = FUN_002c0e9c();
    puVar2[6] = temp_v2;
    temp_v3 = FUN_002c0e4c(temp_v3);
    *puVar2 = 3;
    puVar2[7] = temp_v3;
    temp_v3 = FUN_0022a324(puVar2,temp_v1);
    return temp_v3;
  case 2:
    if (DAT_00435d48[2] == 0) {
      return 0;
    }
    temp_v3 = FUN_002ac2f4(DAT_00435d48[2],0);
    temp_v2 = FUN_002c0e9c();
    puVar2[6] = temp_v2;
    temp_v3 = FUN_002c0e4c(temp_v3);
    *puVar2 = 3;
    puVar2[7] = temp_v3;
    goto code_r0x0022a324;
  case 3:
code_r0x0022a324:
    FUN_002c4b30(temp_v6,0x80);
    FUN_002be7fc(temp_v6,"battle/event/%s/%s.mbm",temp_v1 + 0x100);
    temp_v5 = FUN_0022a458(DAT_00433158,*(unsigned int *)(temp_v1 + 0xc4));
    if (temp_v5 != 0) {
      FUN_00385e68(DAT_00433158,*(unsigned int *)(temp_v1 + 0xc4),puVar2 + 3,temp_v6);
    }
    else {
      FUN_00297704(temp_v6,puVar2 + 3,0);
    }
    *puVar2 = 4;
    temp_v3 = 0;
    if (puVar2[3] != 0) {
      *puVar2 = 5;
      FUN_002c4b30(temp_v7,0x80);
      FUN_002be7fc(temp_v7,"battle/event/%s/%s.bf",temp_v1 + 0x100);
      temp_v5 = FUN_0022a458(DAT_00433158,*(unsigned int *)(temp_v1 + 0xc4));
      if (temp_v5 != 0) {
        FUN_0022a2b0(DAT_00433158,*(unsigned int *)(temp_v1 + 0xc4),puVar2 + 4,temp_v7);
      }
      else {
        FUN_00297704(temp_v7,puVar2 + 4,0);
      }
      *puVar2 = 6;
      if (puVar2[4] == 0) {
        temp_v3 = 0;
      }
      else {
        *puVar2 = 7;
        temp_v3 = FUN_0022a210(puVar2,temp_v1);
      }
    }
    return temp_v3;
  case 4:
    if (DAT_00435d48[3] == 0) {
      return 0;
    }
    *DAT_00435d48 = 5;
    FUN_002c4b30(temp_v7,0x80);
    FUN_002be7fc(temp_v7,"battle/event/%s/%s.bf",temp_v1 + 0x100);
    temp_v5 = FUN_0022a458(DAT_00433158,*(unsigned int *)(temp_v1 + 0xc4));
    if (temp_v5 != 0) {
      FUN_0022a2b0(DAT_00433158,*(unsigned int *)(temp_v1 + 0xc4),puVar2 + 4,temp_v7);
    }
    else {
      FUN_00297704(temp_v7,puVar2 + 4,0);
    }
    *puVar2 = 6;
    temp_v5 = puVar2[4];
    break;
  case 5:
    FUN_002c4b30(temp_v7,0x80);
    FUN_002be7fc(temp_v7,"battle/event/%s/%s.bf",temp_v1 + 0x100);
    temp_v5 = FUN_0022a458(DAT_00433158,*(unsigned int *)(temp_v1 + 0xc4));
    if (temp_v5 != 0) {
      FUN_0022a2b0(DAT_00433158,*(unsigned int *)(temp_v1 + 0xc4),puVar2 + 4,temp_v7);
    }
    else {
      FUN_00297704(temp_v7,puVar2 + 4,0);
    }
    *puVar2 = 6;
    temp_v5 = puVar2[4];
    break;
  case 6:
    if (DAT_00435d48[4] == 0) {
      return 0;
    }
    *DAT_00435d48 = 7;
    goto code_r0x0022a210;
  case 7:
code_r0x0022a210:
    temp_v4 = *(unsigned int *)(DAT_00432fc8 + 0x754);
    *(unsigned int *)(DAT_00432fc8 + 0x754) = temp_v4 & 0xffffff8f;
    if ((temp_v4 & 0x10) == 0) {
      temp_v1 = puVar2[4];
      FUN_002972f8(temp_v1,puVar2[3]);
      puVar2[5] = temp_v1;
      *(unsigned int *)(temp_v1 + 0x108) = 2;
      *puVar2 = 0;
      return 0;
    }
    *puVar2 = 1;
    if (puVar2[2] != 0) {
      FUN_002c4360();
      puVar2[2] = 0;
    }
    if (puVar2[3] != 0) {
      FUN_002c4360();
      puVar2[3] = 0;
    }
    if (puVar2[4] != 0) {
      FUN_002c4360();
      puVar2[4] = 0;
    }
    return 0;
  case 8:
    temp_v0 = *(char *)(DAT_00435d48 + 0xb);
    if (temp_v0 != '\0') {
      if (temp_v0 == '\x01') goto code_r0x003c7e50;
      if (temp_v0 == '\x02') {
        temp_v5 = FUN_003dce60(DAT_00435d18);
        if (temp_v5 == 0) {
          return 0;
        }
        *(unsigned char *)(puVar2 + 0xb) = 3;
      }
    }
    else {
      FUN_003db004(DAT_00435d18);
      *(unsigned char *)(puVar2 + 0xb) = 1;
code_r0x003c7e50:
      temp_v5 = DAT_00435d18;
      FUN_003dc368();
      if (temp_v5 == 0) {
        return 0;
      }
      FUN_003dc094(DAT_00435d18);
      *(unsigned char *)(puVar2 + 0xb) = 2;
      temp_v5 = FUN_003dce60(DAT_00435d18);
      if (temp_v5 == 0) {
        return 0;
      }
      *(unsigned char *)(puVar2 + 0xb) = 3;
    }
    *puVar2 = 9;
    if ((int)puVar2[8] < 0) {
      return 0;
    }
    FUN_002971e4(puVar2[5]);
    *puVar2 = 10;
    puVar2[10] = 0;
    temp_v4 = *(unsigned int *)(temp_v1 + 0x44a0);
    goto joined_r0x003c7da8;
  case 9:
    if ((int)DAT_00435d48[8] < 0) {
      return 0;
    }
    FUN_002971e4(DAT_00435d48[5]);
    *puVar2 = 10;
    puVar2[10] = 0;
    temp_v4 = *(unsigned int *)(temp_v1 + 0x44a0);
joined_r0x003c7da8:
    if ((temp_v4 & 0x100000) != 0) {
      FUN_002b8b78(0xdd);
    }
FUN_003c7988:
    puVar8 = (unsigned int *)(temp_v1 + 0x44a0);
    if (((*puVar8 & 0x100000) != 0) && ((puVar2[1] & 1) == 0)) {
      if ((-1 < *(int *)(DAT_004342c8 + 0x760)) &&
         (temp_v1 = FUN_00256b80(DAT_004342c8,temp_v1,1), temp_v1 != 0)) {
        FUN_00256b04(0);
      }
      FUN_00256ad8(1,0);
      puVar2[1] = puVar2[1] | 1;
    }
    temp_v1 = FUN_0019dfbc(puVar2[5]);
    if (temp_v1 == 2) {
      if (((*puVar8 & 0x100000) != 0) && (FUN_00293074(0), (*puVar8 & 0x20000000) != 0)) {
        FUN_00242a80(DAT_00439ca8,0);
        *puVar8 = *puVar8 & 0xdfffffff;
      }
      *puVar2 = 0;
      *puVar8 = *puVar8 & 0xffefffff;
      FUN_0022a498(DAT_00435d18);
    }
    if ((int)puVar2[10] < 0xffff) {
      puVar2[10] = puVar2[10] + 1;
    }
    return 0;
  case 10:
    goto FUN_003c7988;
  }
  if (temp_v5 != 0) {
    *puVar2 = 7;
    temp_v3 = FUN_0022a210(puVar2,temp_v1);
    return temp_v3;
  }
  return 0;
}
