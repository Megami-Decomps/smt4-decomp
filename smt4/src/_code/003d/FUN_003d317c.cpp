/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d317c` (_code @ 0x3d317c, 0x7a8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int btlEntryValuesCopy(...);
int FUN_00229a24(void);
int FUN_00229b10(int *, unsigned int *);
int btlReflectCreateKind18(int, unsigned int *, int, int, int);
int FUN_00245cc0(...);
int FUN_00245d0c(...);
int FUN_00246d38(...);
int FUN_00250720(int);
int FUN_002550d8(...);
int FUN_00255180(...);
int FUN_002568c4(int, unsigned int *);
int FUN_002569ac(...);
int FUN_0026beb4(int, unsigned int *, int, unsigned int, int);
int memClear(unsigned int *, int);
int FUN_003c0484(...);
int FUN_003cf884(int *, unsigned int *, unsigned int);
int memClearTwo200(unsigned int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern int g_btlScriptUnit; /* 0x43427c */
extern int g_btlMain; /* 0x4342c8 */
extern unsigned int DAT_00435d18; /* 0x435d18 */
extern int g_btlUiBlock; /* 0x439ca8 */

/* Supplied declaration required: btlEntryValuesCopy. */
/* Supplied declaration required: FUN_00229a24. */
/* Supplied declaration required: FUN_00229b10. */
/* Supplied declaration required: btlReflectCreateKind18. */
extern int FUN_00245c78(void);
/* Supplied declaration required: FUN_00245cc0. */
/* Supplied declaration required: FUN_00245d0c. */
/* Supplied declaration required: FUN_00246d38. */
/* Supplied declaration required: FUN_00250720. */
/* Supplied declaration required: FUN_002550d8. */
/* Supplied declaration required: FUN_00255180. */
/* Supplied declaration required: FUN_002568c4. */
extern int FUN_00256940(int, int, unsigned int);
/* Supplied declaration required: FUN_002569ac. */
/* Supplied declaration required: FUN_0026beb4. */
extern int btlSceneIsReady(int);
extern int FUN_00293230(int);
/* Supplied declaration required: memClear. */
extern int btlUiIsSceneTransitionReady(int);
/* Supplied declaration required: FUN_003c0484. */
/* Supplied declaration required: FUN_003cf884. */
/* Supplied declaration required: memClearTwo200. */


unsigned int FUN_003d317c(int *param_1,unsigned int *param_2)

{
/* irregular: 17 native warning(s); review required */
  short temp_v0;
  unsigned short temp_v1;
  unsigned int temp_v2;
  int *piVar4;
  unsigned char temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned short temp_v6;
  int temp_v7;
  unsigned int *puVar10;
  
  *(unsigned int *)(*param_1 + 0x225c) = 0;
  *(unsigned int *)(*param_1 + 0x2260) = 0;
  *(unsigned int *)(*param_1 + 0x2264) = 0;
  *(unsigned short *)(*param_1 + 0x2258) = 0;
  *(unsigned short *)(*param_1 + 0x225a) = 0;
  *(unsigned int *)(*param_1 + 0x49e4) = 0;
  *(unsigned int *)(*param_1 + 0x48b8) = 0;
  param_2[0x169] = 0xffffffff;
  *(unsigned char *)(*param_1 + 0x2f04) = 0;
  temp_v7 = *param_1;
  *(unsigned int *)(temp_v7 + 0x1fd0) = 0;
  *(unsigned int *)(temp_v7 + 0x1fd4) = 0;
  temp_v7 = *param_1;
  *(unsigned int *)(temp_v7 + 0x1fd8) = 0;
  *(unsigned int *)(temp_v7 + 0x1fdc) = 0;
  *(unsigned int *)(*param_1 + 0x44a4) = *(unsigned int *)(*param_1 + 0x44a4) & 0xfffffffd;
  *(unsigned char *)(*param_1 + 0x80) = 0xff;
  *(unsigned char *)(*param_1 + 0x81) = 0xff;
  FUN_00250720(*param_1);
  temp_v7 = 0;
  do {
    puVar10 = (unsigned int *)(*(int *)(*param_1 + 0x1fc0) + temp_v7 * 0x288);
    temp_v1 = FUN_00245cc0(2);
    *(unsigned short *)((int)puVar10 + 0x76) = temp_v1;
    temp_v5 = *puVar10;
    temp_v7 = temp_v7 + 1;
    *puVar10 = temp_v5 & 0x9fffffff;
    puVar10[0x32] = 0;
    *puVar10 = temp_v5 & 0x1fffffff;
    puVar10[1] = 0;
  } while (temp_v7 < 0x6d);
  memClearTwo200(DAT_00435d18);
  *(unsigned short *)(param_2[10] + 0x14c) = 0;
  *(unsigned short *)(param_2[10] + 0x14e) = 0;
  *(unsigned int *)(param_2[8] + 0xc0) = 0;
  temp_v7 = 0;
  param_2[0x3c6] = 0;
  do {
    temp_v4 = temp_v7 * 0x288;
    temp_v7 = temp_v7 + 1;
    temp_v4 = *(int *)(*param_1 + 0x1fc0) + temp_v4 + 0xcc;
    *(unsigned short *)(temp_v4 + 0xfc) = 0;
    *(unsigned short *)(temp_v4 + 0xfe) = 0;
  } while (temp_v7 < 0x6d);
  if ((*(unsigned int *)(*param_1 + 0x44a0) & 0x40) != 0) {
    temp_v5 = *param_2 | 0x80;
    *param_2 = temp_v5;
  }
  else if ((*(unsigned int *)(*param_1 + 0x44a0) & 0x100) != 0) {
    temp_v5 = *param_2 | 0x1000;
    *param_2 = temp_v5;
  }
  temp_v7 = FUN_00293230(*param_1);
  if ((temp_v7 != 0) && (temp_v7 = btlUiIsSceneTransitionReady(g_btlUiBlock), temp_v7 == 0)) {
    return 0;
  }
  temp_v7 = *param_1;
  puVar10 = (unsigned int *)(temp_v7 + 0x44a0);
  if ((*puVar10 & 0x20000) != 0) {
    temp_v7 = btlSceneIsReady(g_btlUiBlock);
    if (temp_v7 == 0) {
      return 0;
    }
    FUN_0026beb4(0,param_2,0xf,param_2[9],1);
    temp_v7 = *param_1;
    puVar10 = (unsigned int *)(temp_v7 + 0x44a0);
    temp_v5 = *puVar10;
    *puVar10 = temp_v5 | 0x2000;
    temp_v4 = *param_1;
    *(unsigned int *)(temp_v4 + 0x44a4) = *(unsigned int *)(temp_v7 + 0x44a4);
    *(unsigned int *)(temp_v4 + 0x44a0) = (temp_v5 & 0xfffdffff) | 0x2000;
    *(unsigned int *)(g_btlUiBlock + 0x7e38) = 0;
    FUN_00229a24();
    temp_v7 = g_btlScriptUnit + *(int *)(*param_1 + 0x84) * 0xf1c;
  }
  else {
    temp_v5 = param_2[0xc];
    if (temp_v5 == 1) {
      *(unsigned short *)(param_2[10] + 0x14c) = 7;
      *(unsigned short *)(param_2[10] + 0x14e) = 8;
      param_2[0x168] = 0;
      memClear(param_2 + 0xe,0x85);
      FUN_003cf884(param_1,param_2,param_2[0xd]);
      *(unsigned short *)(*param_1 + 0x225a) =
           *(unsigned short *)(*(int *)(*param_1 + 0x1fc0) + param_2[0xd] * 0x288 + 8);
      *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 0xb;
      return 1;
    }
    if (temp_v5 == 4) {
      if ((*(unsigned int *)param_2[8] & 1) == 0) {
        *puVar10 = *puVar10 | 0x1000000;
        *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 0x23;
        return 1;
      }
      *(unsigned short *)(param_2[10] + 0x14c) = 1;
      *(unsigned int *)(param_2[8] + 0xc0) = param_2[0x160];
      if ((*(unsigned int *)param_2[8] & 6) != 0) {
        *(unsigned short *)(param_2[10] + 0x14e) = 1;
      }
      else {
        *(unsigned short *)(param_2[10] + 0x14e) = 0;
      }
      memClear(param_2 + 0xe,0x85);
      piVar4 = param_1;
      FUN_003cf884(param_1,param_2,param_2[0xd]);
      if (piVar4 != (int *)0x0) {
        *param_2 = *param_2 | 0x204;
        FUN_00229b10(param_1,param_2);
        return 1;
      }
      *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 0x23;
      return 1;
    }
    if (temp_v5 == 5) {
      *(unsigned char *)(g_btlScriptUnit + *(int *)(temp_v7 + 0x84) * 0xf1c + 9) = 0x1c;
      return 1;
    }
    temp_v7 = FUN_00256940(g_btlMain,temp_v7,1);
    if (temp_v7 != 0) {
      temp_v2 = 0xffffffff;
      temp_v0 = *(short *)(*param_1 + 0x1fc8);
      if (temp_v0 == 0) {
        temp_v2 = 1;
      }
      else if (temp_v0 == 1) {
        temp_v2 = 2;
      }
      else if (temp_v0 == 2) {
        temp_v2 = 3;
      }
      else if (temp_v0 == 3) {
        temp_v2 = 4;
      }
      *(unsigned int *)(g_btlMain + 0x760) = temp_v2;
    }
    if (((*(int *)(g_btlMain + 0x760) != (int)*(short *)(*param_1 + 0x1fc8)) &&
        (-1 < *(int *)(g_btlMain + 0x760))) &&
       (temp_v7 = FUN_00256940(g_btlMain,*param_1,1), temp_v7 != 0)) {
      FUN_002568c4(0,param_2);
    }
    btlReflectCreateKind18(1,param_2,(int)*(short *)(*param_1 + 0x1fc8),1,1);
    if (((*(unsigned int *)param_2[8] & 0x20) == 0) || (temp_v7 = FUN_00245c78(), temp_v7 != 0)) {
      temp_v6 = 0;
      temp_v7 = (int)*(short *)(param_2[9] + 0x62);
      if (((*(unsigned short *)(param_2[10] + 0xfa) & 0x80) != 0) &&
         (temp_v4 = temp_v7, FUN_00245d0c(temp_v7,7), temp_v4 != 0)) {
        temp_v6 = 0x80;
      }
      if (((*(unsigned short *)(param_2[10] + 0xfa) & 0x40) != 0) &&
         (temp_v4 = temp_v7, FUN_00245d0c(temp_v7,6), temp_v4 != 0)) {
        temp_v6 = temp_v6 | 0x40;
      }
      if (((*(unsigned short *)(param_2[10] + 0xfa) & 0x100) != 0) &&
         (temp_v4 = temp_v7, FUN_00245d0c(temp_v7,8), temp_v4 != 0)) {
        temp_v6 = temp_v6 | 0x100;
      }
      if (((*(unsigned short *)(param_2[10] + 0xfa) & 8) != 0) &&
         (temp_v4 = temp_v7, FUN_00245d0c(temp_v7,3), temp_v4 != 0)) {
        temp_v6 = temp_v6 | 8;
      }
      if (temp_v6 != 0) {
        FUN_00246d38(0,0,param_2[9],temp_v6);
      }
      if ((*(unsigned short *)(param_2[10] + 0xfa) & 0x80) == 0) {
        temp_v2 = FUN_00245cc0(0x16);
        FUN_00255180(temp_v7,0x16,temp_v2);
      }
      if ((*(unsigned short *)(param_2[10] + 0xfa) & 0x40) == 0) {
        temp_v2 = FUN_00245cc0(0x17);
        FUN_00255180(temp_v7,0x17,temp_v2);
      }
      if ((*(unsigned short *)(param_2[10] + 0xfa) & 0x100) == 0) {
        temp_v2 = FUN_00245cc0(0x18);
        FUN_00255180(temp_v7,0x18,temp_v2);
      }
      if ((*(unsigned short *)(param_2[10] + 0xfa) & 8) == 0) {
        temp_v2 = FUN_00245cc0(0x19);
        FUN_00255180(temp_v7,0x19,temp_v2);
      }
      if (((*(unsigned short *)(param_2[10] + 0xfa) & ~temp_v6 & 0x1c0) == 0) &&
         ((*(unsigned int *)param_2[8] & 0x60000) == 0)) {
        FUN_003c0484((unsigned int *)param_2[8],temp_v6,1);
        temp_v7 = *param_1;
        if ((*(unsigned int *)param_2[8] & 0x30) != 0) {
          if (*(int *)(temp_v7 + 0x49c8) == 0) {
            temp_v3 = 2;
          }
          else {
            temp_v3 = 3;
          }
          *(unsigned char *)(g_btlScriptUnit + *(int *)(temp_v7 + 0x84) * 0xf1c + 9) = temp_v3;
          return 1;
        }
        *(unsigned char *)(g_btlScriptUnit + *(int *)(temp_v7 + 0x84) * 0xf1c + 9) = 1;
        return 1;
      }
      *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 4;
      return 1;
    }
    FUN_002569ac(param_1,*(unsigned int *)(*param_1 + 0x84));
    btlEntryValuesCopy(param_1,param_2);
    FUN_002550d8((int)*(short *)(param_2[9] + 0x62),0x1d,1,0);
    temp_v7 = g_btlScriptUnit + *(int *)(*param_1 + 0x84) * 0xf1c;
  }
  *(unsigned char *)(temp_v7 + 9) = 0x1d;
  return 1;
}

} /* extern "C" */
