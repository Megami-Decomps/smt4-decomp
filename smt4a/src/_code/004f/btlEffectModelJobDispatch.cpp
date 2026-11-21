/* NON_MATCHING: romwright 0.5.0 decompilation of `btlEffectModelJobDispatch` (_code @ 0x4fa828, 0x524 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include <stdio.h>
#include "romwright_types.h"
#include "battle/BtlGlobals.h"

extern "C" {

int btlGetMainState(...);
int asdLoadFileAsyncSimple(...);
int effectColorInitDefault(...);
int libc_strcpy(...);
int sysMemClear(...);
int FUN_003e7840(...);
int controllerSetPositionXyz(...);
int modelPlayClip(...);
int moriModelContentLoadBody(...);
int FUN_0040ab7c(...);
int handleRegistryRegisterObject(...);
int btlCameraFinishTransition(...);
int FUN_004f65d4(...);
int FUN_004f7778(...);
int battleCloneRoutedMaterialChannels(...);
int btlLoadUncachedSourceModels(...);
int __aeabi_memcpy4(...);

typedef int romwright_code(...);
/* stack frame of param_4: 3 slot(s), 9 byte(s) */
typedef struct {
    unsigned char spB0; /* 0xb0: local_b0 */
    unsigned int sp134; /* 0x134: local_134 */
    unsigned int sp138; /* 0x138: local_138 */
} param_4_stack;

extern unsigned int g_handleRegistry; /* 0x56fcc0 */
extern unsigned int g_btlAux; /* 0x573808 */

extern int libc_strrchr(unsigned char *, unsigned int);
/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: asdLoadFileAsyncSimple. */
/* Supplied declaration required: effectColorInitDefault. */
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: sysMemClear. */
extern int gameObjectFlagIsSet(void);
extern int findRecordByKey(int);
/* Supplied declaration required: FUN_003e7840. */
/* Supplied declaration required: controllerSetPositionXyz. */
/* Supplied declaration required: modelPlayClip. */
/* Supplied declaration required: moriModelContentLoadBody. */
/* Supplied declaration required: FUN_0040ab7c. */
extern int moriModelContentIsLoaded(unsigned int);
/* Supplied declaration required: handleRegistryRegisterObject. */
/* Supplied declaration required: btlCameraFinishTransition. */
/* Supplied declaration required: FUN_004f65d4. */
/* Supplied declaration required: FUN_004f7778. */
/* Supplied declaration required: battleCloneRoutedMaterialChannels. */
/* Supplied declaration required: btlLoadUncachedSourceModels. */
/* Supplied declaration required: __aeabi_memcpy4. */


unsigned int btlEffectModelJobDispatch(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 2 goto(s); 18 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int *puVar8;
  unsigned int temp_v7;
  unsigned char temp_v8;
  unsigned long long temp_v9;
  unsigned char temp_v10 [4];
  int temp_v11;
  unsigned char temp_v12 [8];
  unsigned char temp_v13;
  
  temp_v4 = *(int *)(param_1 + 0x3588);
  if (0 < temp_v4) {
    *(int *)(param_1 + 0x3588) = temp_v4 - 1;
  }
  temp_v1 = *(unsigned int *)(param_1 + 0x339c);
  temp_v8 = (temp_v1 & 2) != 0;
  if (temp_v8) {
    temp_v1 = *(unsigned int *)(param_1 + 0x33a8);
  }
  if (temp_v8 && temp_v1 != 0) {
    if ((g_btlCamera != 0) &&
       (temp_v0 = *(char *)(param_1 + 0x33ac), (temp_v0 == '\x02' || temp_v0 == '\b') || temp_v0 == '\t')) {
      g_btlCamera->flags = g_btlCamera->flags | 0x4000000;
    }
    (**(romwright_code **)(**(int **)(param_1 + 0x33a8) + 8))();
    temp_v4 = (**(romwright_code **)(**(int **)(param_1 + 0x33a8) + 0x14))();
    if (temp_v4 != 0) {
      btlCameraFinishTransition(param_1);
    }
  }
  if ((*(unsigned int *)(param_1 + 0x339c) & 4) != 0) {
    effectColorInitDefault(temp_v10);
    FUN_003e7840(param_2);
  }
  if ((*(unsigned int *)(param_1 + 0x339c) & 8) != 0) {
    effectColorInitDefault(temp_v10);
    FUN_003e7840(param_2);
    temp_v4 = gameObjectFlagIsSet();
    if (temp_v4 == 0) {
      *(unsigned int *)(param_1 + 0x339c) = *(unsigned int *)(param_1 + 0x339c) & 0xfffffff7;
    }
  }
  if ((*(unsigned int *)(param_1 + 0x339c) & 0x10) == 0) {
    temp_v1 = *(unsigned int *)(param_1 + 0x339c);
  }
  else {
    btlLoadUncachedSourceModels(g_btlAux,*(unsigned int *)(param_1 + 0x33a0));
    temp_v1 = (*(unsigned int *)(param_1 + 0x339c) & 0xffffffef) | 0x20;
    *(unsigned int *)(param_1 + 0x339c) = temp_v1;
  }
  if ((temp_v1 & 0x20) != 0) {
    if (*(int *)(param_1 + 0x33a0) != 0 && *(int *)(param_1 + 0x33a0) != 0x16) {
      temp_v4 = 0;
      do {
        temp_v2 = param_1 + temp_v4 * 0x28;
        if ((*(unsigned int *)(temp_v2 + 0x1b4) & 2) != 0) {
          temp_v3 = moriModelContentIsLoaded(*(unsigned int *)(temp_v2 + 400));
          if (temp_v3 == 0) goto LAB_004fab24;
          *(unsigned int *)(temp_v2 + 0x1b4) = *(unsigned int *)(temp_v2 + 0x1b4) | 4;
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 0x32);
    }
    if (*(int *)(param_1 + 0x33a0) != 0 && *(int *)(param_1 + 0x33a0) != 0x16) {
      temp_v4 = 0;
      do {
        temp_v2 = btlGetMainState();
        temp_v2 = temp_v2 + temp_v4 * 0x1c;
        temp_v3 = *(int *)(temp_v2 + 0x2418);
        if (-1 < temp_v3) {
          param_4 = *(int *)(temp_v2 + 0x241c);
        }
        if (-1 < temp_v3 && -1 < param_4) {
          temp_v2 = 0;
          while( 1 ) {
            temp_v5 = param_1 + temp_v2 * 0x28;
            temp_v6 = temp_v5 + 400;
            temp_v8 = *(int *)(temp_v5 + 0x194) == temp_v3;
            if (temp_v8) {
              temp_v6 = *(int *)(temp_v5 + 0x198);
            }
            if (temp_v8 && temp_v6 == param_4) break;
            temp_v2 = temp_v2 + 1;
            if (temp_v2 >= 0x32) {
              *(unsigned int *)(param_1 + 0x339c) = (*(unsigned int *)(param_1 + 0x339c) & 0xffffffdf) | 0x10;
              goto LAB_004fab24;
            }
          }
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 0x6d);
    }
    temp_v9 = 0;
    temp_v4 = 0;
    do {
      temp_v2 = param_1 + temp_v4 * 0x28;
      puVar8 = (unsigned int *)(temp_v2 + 400);
      temp_v1 = *(unsigned int *)(temp_v2 + 0x1b4);
      temp_v8 = (temp_v1 & 2) != 0;
      if (temp_v8) {
        temp_v1 = *puVar8;
      }
      if (temp_v8 && temp_v1 != 0) {
        FUN_0040ab7c(temp_v1,0);
        moriModelContentLoadBody(*puVar8,0);
        temp_v3 = *(int *)(*puVar8 + 4);
        controllerSetPositionXyz(temp_v3);
        *(int *)(temp_v3 + 0x1fc) = (int)temp_v9;
        modelPlayClip(temp_v3,0,2);
        handleRegistryRegisterObject(g_handleRegistry,temp_v3);
        *(unsigned int *)(temp_v3 + 4) = *(unsigned int *)(temp_v3 + 4) | 1;
        if (-1 < *(int *)(temp_v2 + 0x1ac)) {
          temp_v3 = param_1 + *(int *)(temp_v2 + 0x1ac) * 8;
          *(unsigned int *)(temp_v3 + 0x1030) = *(unsigned int *)(temp_v2 + 0x194);
          *(unsigned int *)(temp_v3 + 0x1034) = *(unsigned int *)(temp_v2 + 0x1ac);
        }
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 0x32);
    FUN_004f7778(param_1);
    *(unsigned int *)(param_1 + 0x339c) = (*(unsigned int *)(param_1 + 0x339c) & 0xffffffdf) | 0x40;
  }
LAB_004fab24:
  if ((*(unsigned int *)(param_1 + 0x339c) & 0x40) == 0) {
    temp_v1 = *(unsigned int *)(param_1 + 0x339c);
  }
  else {
    temp_v7 = *(unsigned int *)(param_1 + 0x33a0);
    temp_v4 = btlGetMainState();
    temp_v2 = 0;
    while (temp_v2 = temp_v2 + 1, temp_v2 < 0x6d) {
      if (temp_v2 >= 4) {
        temp_v3 = btlGetMainState();
        temp_v6 = temp_v2 * 0x1d0 + 0x50;
        if (((*(unsigned int *)(*(int *)(temp_v3 + 0x1ed4) + temp_v6) & 1) != 0) &&
           ((*(unsigned int *)(*(int *)(temp_v4 + 0x1ed4) + temp_v6) & 0x400) != 0)) {
          battleCloneRoutedMaterialChannels(param_1,temp_v7,temp_v2);
        }
      }
    }
    temp_v1 = (*(unsigned int *)(param_1 + 0x339c) & 0xffffffbf) | 0x80;
    *(unsigned int *)(param_1 + 0x339c) = temp_v1;
  }
  if ((temp_v1 & 0x80) == 0) {
    temp_v1 = *(unsigned int *)(param_1 + 0x339c);
  }
  else {
    temp_v4 = 0;
    while (temp_v4 = temp_v4 + 1, temp_v4 < 0x6d) {
      if (temp_v4 >= 4) {
        btlGetMainState();
      }
    }
    temp_v1 = *(unsigned int *)(param_1 + 0x339c) & 0xffffff0f;
    *(unsigned int *)(param_1 + 0x339c) = temp_v1;
  }
  if ((temp_v1 & 0x100) != 0) {
    temp_v4 = 0;
    do {
      sysMemClear(temp_v12,0x80);
      sysMemClear(temp_v10,0x80);
      sprintf((char *)temp_v10,"battle/effect/%s.eft","ef_e_ref" + temp_v4 * 0x20);
      libc_strcpy(temp_v12,temp_v10);
      temp_v2 = param_1 + temp_v4 * 0x8c;
      temp_v3 = libc_strrchr(temp_v12,0x2f);
      libc_strcpy(temp_v2 + 0x2824,temp_v3 + 1);
      temp_v3 = findRecordByKey(temp_v2 + 0x2824);
      if (temp_v3 == 0xff) {
        asdLoadFileAsyncSimple(temp_v12,temp_v2 + 0x2820,1);
        *(unsigned char *)(temp_v2 + 0x28a4) = *(unsigned char *)(temp_v2 + 0x28a4) | 1;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 0xb);
    *(unsigned int *)(param_1 + 0x339c) = (*(unsigned int *)(param_1 + 0x339c) & 0xfffffeff) | 0x200;
  }
  temp_v1 = *(unsigned int *)(param_1 + 0x339c);
  if ((temp_v1 & 0x200) != 0) {
    temp_v4 = 0;
    do {
      __aeabi_memcpy4(temp_v10,param_1 + temp_v4 * 0x8c + 0x281c,0x8c);
      if (((temp_v13 & 1) != 0) && (temp_v11 == 0)) {
        FUN_004f65d4(param_1);
        if (*(unsigned int *)(param_1 + 0x33a4) < 0xffff) {
          *(unsigned int *)(param_1 + 0x33a4) = *(unsigned int *)(param_1 + 0x33a4) + 1;
        }
        return 0;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 0xb);
    *(unsigned int *)(param_1 + 0x339c) = (temp_v1 & 0xfffffdff) | 0x400;
  }
  FUN_004f65d4(param_1);
  if (*(unsigned int *)(param_1 + 0x33a4) < 0xffff) {
    *(unsigned int *)(param_1 + 0x33a4) = *(unsigned int *)(param_1 + 0x33a4) + 1;
  }
  return 0;
}

} /* extern "C" */
