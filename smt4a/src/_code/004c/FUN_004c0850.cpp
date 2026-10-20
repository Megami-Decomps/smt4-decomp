/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c0850` (_code @ 0x4c0850, 0x714 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int btlGetMainState(void);
int FUN_003f0e20(...);
int FUN_003f21ec(void);
int FUN_003f24e0(unsigned int *, int);
int FUN_003f2aac(unsigned int *, int, int);
int FUN_003fd63c(...);
int countersAddSaturating(int, int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

extern unsigned int g_btlScriptUnit; /* 0x57113c */
extern unsigned int DAT_005713f0; /* 0x5713f0 */
extern unsigned int DAT_005713f4; /* 0x5713f4 */
extern unsigned int DAT_005713f8; /* 0x5713f8 */
extern unsigned int DAT_005713fc; /* 0x5713fc */
extern unsigned int DAT_00571410; /* 0x571410 */
extern unsigned int DAT_00571414; /* 0x571414 */
extern unsigned int DAT_00571418; /* 0x571418 */
extern unsigned int DAT_0057141c; /* 0x57141c */
extern unsigned int DAT_00571488; /* 0x571488 */
extern unsigned int DAT_0057148c; /* 0x57148c */

/* Supplied declaration required: btlGetMainState. */
extern int FUN_0018719c(unsigned int);
extern int FUN_001ab854(void);
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: FUN_003f21ec. */
/* Supplied declaration required: FUN_003f24e0. */
/* Supplied declaration required: FUN_003f2aac. */
/* Supplied declaration required: FUN_003fd63c. */
/* Supplied declaration required: countersAddSaturating. */
extern unsigned int FUN_004c53fc(unsigned int);
extern int btlUnitGet(unsigned int);


void FUN_004c0850(int param_1,int param_2,unsigned short param_3)

{
/* irregular: 7 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int temp_v1;
  unsigned int *puVar5;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  puVar2 = (unsigned int *)btlGetMainState();
  puVar3 = puVar2;
  FUN_003f0e20(puVar2,param_1);
  if (puVar3 == (unsigned int *)0x0) {
    if ((-1 < param_1 - 0x6d) && (temp_v1 = FUN_001ab854(), temp_v1 != 0)) {
      if (param_2 == 0) {
        param_3 = *(unsigned short *)(temp_v1 + 0x60) & ~param_3;
      }
      else {
        if (((((param_3 & 2) != 0 || (param_3 & 0x20) != 0) ||
             ((param_3 & 0x40) != 0 || (param_3 & 0x80) != 0)) ||
            ((param_3 & 0x100) != 0 || (param_3 & 0x200) != 0)) ||
           (((param_3 & 0x400) != 0 || (param_3 & 8) != 0 ||
            (((param_3 & 0x800) != 0 || (param_3 & 0x1000) != 0) || (param_3 & 0x2000) != 0)))) {
          *(unsigned short *)(temp_v1 + 0x60) = *(unsigned short *)(temp_v1 + 0x60) & 0xffef;
        }
        if (((param_3 & 2) != 0 || (param_3 & 0x800) != 0) ||
           (((param_3 & 0x80) != 0 || (param_3 & 0x40) != 0) || (param_3 & 0x100) != 0)) {
          *(unsigned short *)(temp_v1 + 0x60) = *(unsigned short *)(temp_v1 + 0x60) & 0xefff;
        }
        param_3 = *(unsigned short *)(temp_v1 + 0x60) | param_3;
      }
      *(unsigned short *)(temp_v1 + 0x60) = param_3;
    }
    return;
  }
  if ((*puVar3 & DAT_00571418) != 0 || (DAT_0057141c & puVar3[1]) != 0) {
    return;
  }
  if (param_2 != 0) {
    if (((((param_3 & 2) != 0 || (param_3 & 0x20) != 0) ||
         ((param_3 & 0x40) != 0 || (param_3 & 0x80) != 0)) ||
        ((param_3 & 0x100) != 0 || (param_3 & 0x200) != 0)) ||
       (((param_3 & 0x400) != 0 || (param_3 & 8) != 0 ||
        (((param_3 & 0x800) != 0 || (param_3 & 0x1000) != 0) || (param_3 & 0x2000) != 0)))) {
      FUN_003f2aac(puVar2,param_1,0);
    }
    *(unsigned short *)(puVar3 + 0x9d) = (unsigned short)puVar3[0x9d] | param_3;
    if (puVar3[0xfe] != 0) {
      temp_v0 = *(unsigned short *)(puVar3[0xfe] + 0x5e) | param_3;
      *(unsigned short *)(puVar3[0xfe] + 0x5e) = temp_v0;
      *(unsigned short *)(puVar3[0xfe] + 0x5e) = temp_v0 & 0xfbff;
      if (((param_3 & 2) != 0 || (param_3 & 0x800) != 0) ||
         (((param_3 & 0x80) != 0 || (param_3 & 0x40) != 0) || (param_3 & 0x100) != 0)) {
        *(unsigned short *)(puVar3[0xfe] + 0x5e) = temp_v0 & 0xebff;
      }
    }
    if (puVar3[0xff] != 0) {
      temp_v0 = *(unsigned short *)(puVar3[0xff] + 0x60) | param_3;
      *(unsigned short *)(puVar3[0xff] + 0x60) = temp_v0;
      if (((param_3 & 2) != 0 || (param_3 & 0x800) != 0) ||
         (((param_3 & 0x80) != 0 || (param_3 & 0x40) != 0) || (param_3 & 0x100) != 0)) {
        *(unsigned short *)(puVar3[0xff] + 0x60) = temp_v0 & 0xefff;
      }
    }
    if (puVar3[0x100] != 0) {
      temp_v0 = *(unsigned short *)(puVar3[0x100] + 0x60) | param_3;
      *(unsigned short *)(puVar3[0x100] + 0x60) = temp_v0;
      if (((param_3 & 2) != 0 || (param_3 & 0x800) != 0) ||
         (((param_3 & 0x80) != 0 || (param_3 & 0x40) != 0) || (param_3 & 0x100) != 0)) {
        *(unsigned short *)(puVar3[0x100] + 0x60) = temp_v0 & 0xefff;
      }
    }
    if ((DAT_005713f8 & *puVar3) != 0 || (DAT_005713fc & puVar3[1]) != 0) {
      *(unsigned short *)(puVar3 + 0x9d) = (unsigned short)puVar3[0x9d] & 0xfbff;
    }
    if ((puVar3[1] & DAT_00571414) != 0 || (DAT_00571410 & *puVar3) != 0) {
      *(unsigned short *)(puVar3 + 0x9d) = (unsigned short)puVar3[0x9d] & 0xfbff;
    }
    if (((param_3 & 2) != 0 || (param_3 & 0x800) != 0) ||
       (((param_3 & 0x80) != 0 || (param_3 & 0x40) != 0) || (param_3 & 0x100) != 0)) {
      *(unsigned short *)(puVar3 + 0x9d) = (unsigned short)puVar3[0x9d] & 0xefff;
    }
    temp_v1 = btlUnitGet(g_btlScriptUnit);
    if ((((temp_v1 != 0) && (-1 < *(short *)((int)puVar3 + 0x6e))) &&
        (*(short *)((int)puVar3 + 0x6e) < 4)) &&
       ((((puVar3[1] & DAT_00571414) == 0 && (DAT_00571410 & *puVar3) == 0 && (puVar3[0xff] != 0))
        && ((puVar3[0x9d] & 0x400) != 0)))) {
      puVar5 = puVar2;
      FUN_003f21ec();
      if (puVar5 != (unsigned int *)0x0) {
        *(unsigned short *)(temp_v1 + *(short *)((int)puVar3 + 0x6e) * 2 + 0x5b0) =
             *(unsigned short *)(puVar3[0xff] + 0x62);
      }
      temp_v1 = FUN_0018719c(0x4b6);
      if (temp_v1 != 0) {
        FUN_003fd63c(0x4b6,0,1);
      }
      temp_v1 = FUN_0018719c(0x4b0);
      if (temp_v1 == 0) {
        FUN_003fd63c(0x4b0,1);
      }
      FUN_003f21ec();
      if ((puVar2 != (unsigned int *)0x0) && (temp_v1 = FUN_0018719c(0x4c6), temp_v1 == 0)) {
        FUN_003fd63c(0x4c6,1);
      }
    }
    if ((DAT_00571414 & puVar3[1]) != 0 || (*puVar3 & DAT_00571410) != 0) {
      return;
    }
    if ((param_3 & 0x10) == 0) {
      return;
    }
    if ((puVar3[0x9d] & 0x10) == 0) {
      return;
    }
    countersAddSaturating(8,1);
    return;
  }
  *(unsigned short *)(puVar3 + 0x9d) = (unsigned short)puVar3[0x9d] & ~param_3;
  temp_v2 = puVar3[0xfe];
  if (temp_v2 != 0) {
    *(unsigned short *)(temp_v2 + 0x5e) = *(unsigned short *)(temp_v2 + 0x5e) & ~param_3;
  }
  temp_v2 = puVar3[0xff];
  if (temp_v2 != 0) {
    *(unsigned short *)(temp_v2 + 0x60) = *(unsigned short *)(temp_v2 + 0x60) & ~param_3;
  }
  temp_v2 = puVar3[0x100];
  if (temp_v2 != 0) {
    *(unsigned short *)(temp_v2 + 0x60) = *(unsigned short *)(temp_v2 + 0x60) & ~param_3;
  }
  if ((param_3 & 0x80) != 0) {
    temp_v3 = FUN_004c53fc(0x1b);
    temp_v1 = btlGetMainState();
    FUN_003f0e20(temp_v1,param_1);
    if (temp_v1 != 0) {
      *(unsigned int *)(temp_v1 + 0xe0) = temp_v3;
    }
  }
  if ((param_3 & 0x40) != 0) {
    temp_v3 = FUN_004c53fc(0x1c);
    temp_v1 = btlGetMainState();
    FUN_003f0e20(temp_v1,param_1);
    if (temp_v1 != 0) {
      *(unsigned int *)(temp_v1 + 0xe4) = temp_v3;
    }
  }
  if ((param_3 & 0x100) != 0) {
    temp_v3 = FUN_004c53fc(0x1d);
    temp_v1 = btlGetMainState();
    FUN_003f0e20(temp_v1,param_1);
    if (temp_v1 != 0) {
      *(unsigned int *)(temp_v1 + 0xe8) = temp_v3;
    }
  }
  if ((param_3 & 8) != 0) {
    temp_v3 = FUN_004c53fc(0x1e);
    temp_v1 = btlGetMainState();
    FUN_003f0e20(temp_v1,param_1);
    if (temp_v1 != 0) {
      *(unsigned int *)(temp_v1 + 0xec) = temp_v3;
    }
  }
  if ((param_3 & 0x800) != 0) {
    temp_v3 = FUN_004c53fc(0x1f);
    temp_v1 = btlGetMainState();
    FUN_003f0e20(temp_v1,param_1);
    if (temp_v1 != 0) {
      *(unsigned int *)(temp_v1 + 0xf0) = temp_v3;
    }
  }
  if ((param_3 & 0x1000) != 0) {
    temp_v3 = FUN_004c53fc(0x20);
    temp_v1 = btlGetMainState();
    FUN_003f0e20(temp_v1,param_1);
    if (temp_v1 != 0) {
      *(unsigned int *)(temp_v1 + 0xf4) = temp_v3;
    }
  }
  if ((param_3 & 0x2000) != 0) {
    temp_v3 = FUN_004c53fc(0x21);
    temp_v1 = btlGetMainState();
    FUN_003f0e20(temp_v1,param_1);
    if (temp_v1 != 0) {
      *(unsigned int *)(temp_v1 + 0xf8) = temp_v3;
    }
  }
  if ((param_3 & 0x10) != 0) {
    temp_v3 = FUN_004c53fc(0x22);
    temp_v1 = btlGetMainState();
    FUN_003f0e20(temp_v1,param_1);
    if (temp_v1 != 0) {
      *(unsigned int *)(temp_v1 + 0xfc) = temp_v3;
    }
  }
  if ((param_3 & 2) == 0) {
    return;
  }
  temp_v2 = *puVar3;
  temp_v4 = puVar3[1];
  if (!((temp_v4 & DAT_005713fc) == 0 && (temp_v2 & DAT_005713f8) == 0)) {
    temp_v4 = temp_v4 | DAT_005713f4;
    *puVar3 = temp_v2 | DAT_005713f0;
    puVar3[1] = temp_v4;
    temp_v1 = btlGetMainState();
    temp_v1 = *(int *)(temp_v1 + 0x1ed4) + param_1 * 0x1d0;
    *(unsigned int *)(temp_v1 + 0x50) = *(unsigned int *)(temp_v1 + 0x50) | 0x81;
    if ((puVar2[0x1169] & DAT_0057148c) != 0 || (puVar2[0x1168] & DAT_00571488) != 0) {
      *(short *)(puVar2 + 0x800) = (short)puVar2[0x800] + 1;
      return;
    }
  }
  else {
    if (puVar3[0xff] == 0) {
      return;
    }
    if (*(char *)((int)puVar3 + 0x23b) != '\0') {
      return;
    }
    temp_v4 = temp_v4 | DAT_005713f4;
    *puVar3 = temp_v2 | DAT_005713f0;
    puVar3[1] = temp_v4;
    temp_v1 = btlGetMainState();
    temp_v1 = *(int *)(temp_v1 + 0x1ed4) + param_1 * 0x1d0;
    *(unsigned int *)(temp_v1 + 0x50) = *(unsigned int *)(temp_v1 + 0x50) | 0x81;
    if ((puVar2[0x1169] & DAT_0057148c) != 0 || (puVar2[0x1168] & DAT_00571488) != 0) {
      *(short *)(puVar2 + 0x800) = (short)puVar2[0x800] + 1;
      return;
    }
  }
  FUN_003f24e0(puVar2,(int)*(short *)(temp_v1 + 0x6a));
  *(short *)(puVar2 + 0x800) = (short)puVar2[0x800] + 1;
  return;
}

} /* extern "C" */
