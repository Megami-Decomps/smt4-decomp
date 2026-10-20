/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003901bc` (_code @ 0x3901bc, 0x814 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00295660(...);
int FUN_002be624(...);
int memClear(...);

int FUN_00233404(void);
int FUN_00233410(unsigned int *);
int FUN_002335f8(...);
int FUN_0023360c(...);
int FUN_0023392c(...);
int FUN_0023478c(...);
int FUN_00234974(unsigned int *);
int FUN_0023499c(unsigned int *, unsigned int *, unsigned int *);
int FUN_002869e8(...);
int FUN_00287328(int);
int FUN_00296ae8(...);
int scrScriptProcessStartEntry(...);
int FUN_002b8244(...);
int eventQueueAddUniqueIfValid(...);
int FUN_003c2d84(unsigned int *, int);
int recordResetIndex(unsigned int *);
int _ZN13ObjBase3c2ef07vfunc0cEv(unsigned int *, unsigned int *);

typedef int romwright_code(...);
/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
} param_1_stack;

extern unsigned char LAB_0039091c; /* 0x39091c */
extern unsigned char LAB_0039092c; /* 0x39092c */
extern unsigned char LAB_00390940; /* 0x390940 */
extern unsigned char LAB_00390950; /* 0x390950 */
extern unsigned char LAB_0039095c; /* 0x39095c */
extern unsigned char LAB_0039096c; /* 0x39096c */
extern unsigned int *g_aocMain; /* 0x432fc8 */

extern int FUN_0019e0c0(unsigned int);
extern int FUN_002333a4(unsigned int *, unsigned int);
extern unsigned int FUN_002333f0(unsigned int *);
/* Supplied declaration required: FUN_00233404. */
/* Supplied declaration required: FUN_00233410. */
/* Supplied declaration required: FUN_002335f8. */
/* Supplied declaration required: FUN_0023360c. */
/* Supplied declaration required: FUN_0023392c. */
/* Supplied declaration required: FUN_0023478c. */
/* Supplied declaration required: FUN_00234974. */
/* Supplied declaration required: FUN_0023499c. */
extern int FUN_00240d5c(unsigned int *);
extern int FUN_0026ee68(unsigned int);
/* Supplied declaration required: FUN_002869e8. */
/* Supplied declaration required: FUN_00287328. */
extern int bgmGetStateById(unsigned int);
extern unsigned int tableGroupFindEntryIndex(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_00295660. */
/* Supplied declaration required: FUN_00296ae8. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
extern int FUN_002973d8(void);
extern int FUN_0029d65c(int);
extern int FUN_002a12d8(unsigned int *);
extern int FUN_002af600(int);
/* Supplied declaration required: FUN_002b8244. */
/* Supplied declaration required: eventQueueAddUniqueIfValid. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: memClear. */
extern int FUN_0039411c(int);
/* Supplied declaration required: FUN_003c2d84. */
/* Supplied declaration required: recordResetIndex. */
/* Supplied declaration required: _ZN13ObjBase3c2ef07vfunc0cEv. */


void FUN_003901bc(unsigned int *param_1)

{
/* irregular: 4 goto(s); 20 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int *puVar3;
  unsigned int temp_v1;
  int temp_v2;
  int *piVar6;
  unsigned int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6;
  unsigned int temp_v7;
  unsigned int *temp_v8;
  unsigned int temp_v9;
  unsigned int *puStack_9c;
  unsigned int *temp_v10;
  int temp_v11;
  
  puVar1 = g_aocMain;
  temp_v10 = param_1 + 0x70c;
  switch(param_1[2]) {
  case 0:
    FUN_002b8244(0);
    *param_1 = *param_1 & 0xfffeffff;
    FUN_0023499c(&temp_v9,puVar1 + 10,puVar1 + 6);
    temp_v7 = temp_v9;
    temp_v8 = puStack_9c;
    temp_v2 = FUN_002a12d8(&temp_v7);
    if (temp_v2 < 0) {
      param_1[2] = 9999;
      *(unsigned char *)(param_1 + 0x84) = 100;
      param_1[0x85] = temp_v7;
      param_1[0x86] = (unsigned int)temp_v8;
    }
    else {
      FUN_00234974(puVar1 + 10);
      param_1[2] = 1;
      param_1[0x44a] = 0;
      param_1[1099] = 0;
      temp_v2 = FUN_0023360c(param_1 + 0x90);
      puVar1 = g_aocMain;
      temp_v4 = FUN_002335f8(g_aocMain,temp_v2);
      if ((temp_v4 != 0) && (temp_v2 = puVar1[0x19e] + temp_v2 * 0x9c8, temp_v2 != 0)) {
        if (*(char *)(temp_v2 + 0x9b3) != '\0') {
          puVar1 = g_aocMain;
          FUN_0023478c(g_aocMain,0xffffffff);
          temp_v7 = 3;
          temp_v9 = 0xc;
          temp_v8 = puVar1;
          FUN_00296ae8(*temp_v10,3,0xffffffff,0);
        }
        else {
          temp_v8 = (unsigned int *)(temp_v2 + 0x180);
          temp_v7 = 3;
          FUN_002869e8(*temp_v10,3,0xffffffff,0);
        }
      }
      *(unsigned char *)(param_1 + 0xd3) = 1;
      temp_v2 = bgmGetStateById(0x1000059);
      if (temp_v2 != 1) {
        FUN_00287328(0x1000059);
        return;
      }
    }
    break;
  case 1:
    temp_v11 = FUN_0023360c(param_1 + 0x90);
    FUN_00233410(param_1 + 0x90);
    temp_v8 = param_1 + 0x90;
    temp_v3 = param_1[0xae];
    puVar3 = param_1 + 0xad;
    temp_v5 = temp_v3 != 0xffffffff;
    if (temp_v5) {
      temp_v3 = param_1[0xaf];
    }
    temp_v6 = temp_v3 != 0xffffffff;
    if (temp_v5 && temp_v6) {
      temp_v3 = param_1[0xb0];
    }
    if ((temp_v5 && temp_v6) && temp_v3 != 0xffffffff) {
      recordResetIndex(puVar3);
      temp_v2 = FUN_00240d5c(temp_v8);
      temp_v4 = 0;
      if (temp_v4 < (int)param_1[0xb0]) {
        do {
          temp_v5 = 0;
          temp_v0 = FUN_002af600((int)*(short *)((int)puVar3 + temp_v4 * 2 + 0x18));
          if (temp_v0 != 0) {
            if (temp_v4 != temp_v2) {
              *(unsigned char *)((int)param_1 + 0x2e6) = 1;
              FUN_003c2d84(temp_v8,temp_v4);
              if ((char)param_1[0xb1] != '\0' && temp_v4 != temp_v2) {
                FUN_00233404();
              }
              break;
            }
            *(unsigned char *)((int)param_1 + 0x2e6) = 0;
          }
          else {
            temp_v0 = FUN_0029d65c((int)*(short *)((int)puVar3 + temp_v4 * 2 + 0x18));
            if (((temp_v0 == 1) || (temp_v0 == 2)) && (temp_v4 != temp_v2)) {
              temp_v5 = 1;
            }
            temp_v6 = temp_v4 == temp_v2 && temp_v0 == 6;
            if (temp_v4 == temp_v2 && temp_v0 == 6) {
              temp_v6 = *(char *)((int)param_1 + 0x2e6) == '\0';
            }
            if (temp_v6) {
              *(unsigned char *)((int)param_1 + 0x2c6) = 1;
              *(short *)(param_1 + 0xb2) = (short)temp_v4;
              break;
            }
            if (temp_v5) {
              FUN_003c2d84(temp_v8,temp_v4);
              if ((char)param_1[0xb1] != '\0' && temp_v4 != temp_v2) {
                FUN_00233404();
              }
              break;
            }
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < (int)param_1[0xb0]);
      }
    }
    _ZN13ObjBase3c2ef07vfunc0cEv(param_1 + 0xba,param_1 + 0x90);
    temp_v2 = FUN_0023360c(param_1 + 0x90);
    if (temp_v2 != temp_v11) {
      temp_v2 = FUN_0023360c(param_1 + 0x90);
      puVar3 = g_aocMain;
      temp_v4 = FUN_002335f8(g_aocMain,temp_v2);
      if ((temp_v4 != 0) && (temp_v2 = puVar3[0x19e] + temp_v2 * 0x9c8, temp_v2 != 0)) {
        if (*(char *)(temp_v2 + 0x9b3) != '\0') {
          puVar3 = g_aocMain;
          FUN_0023478c(g_aocMain,0xffffffff);
          temp_v7 = 3;
          temp_v9 = 0xc;
          temp_v8 = puVar3;
          FUN_00296ae8(*temp_v10,3,0xffffffff,0);
        }
        else {
          temp_v8 = (unsigned int *)(temp_v2 + 0x180);
          temp_v7 = 3;
          FUN_002869e8(*temp_v10,3,0xffffffff,0);
        }
      }
      FUN_0023392c(param_1,2,0);
    }
    if (*(char *)((int)param_1 + 0x2c6) != '\0') {
      temp_v1 = FUN_002333f0(param_1 + 0xad);
      temp_v2 = FUN_002333a4(param_1 + 0x90,temp_v1);
      if (temp_v2 != 0) {
        temp_v1 = FUN_0023360c(param_1 + 0x90);
        temp_v2 = FUN_002335f8(puVar1,temp_v1);
        if (temp_v2 != 0) {
          temp_v2 = FUN_0023360c(param_1 + 0x90);
          if (*(char *)(puVar1[0x19e] + temp_v2 * 0x9c8 + 0x9b3) != '\0') {
LAB_003907d0:
            param_1[2] = 6;
            temp_v1 = tableGroupFindEntryIndex(param_1[0xd4],&LAB_0039095c);
            scrScriptProcessStartEntry(param_1[0xd6],temp_v1);
            eventQueueAddUniqueIfValid(0x100016d);
            *(unsigned char *)(param_1 + 0xd3) = 0;
            return;
          }
          temp_v2 = FUN_0023360c(param_1 + 0x90);
          temp_v2 = FUN_0039411c(puVar1[0x19e] + temp_v2 * 0x9c8);
          if (temp_v2 == 0) goto LAB_00390634;
          if (temp_v2 == 1) goto LAB_00390684;
          if (temp_v2 == 2) goto LAB_003906d4;
        }
      }
    }
    else {
      temp_v2 = FUN_0026ee68(0xc);
      if (temp_v2 != 0) {
LAB_00390634:
        param_1[2] = 2;
        temp_v1 = tableGroupFindEntryIndex(param_1[0xd4],&LAB_0039091c);
        scrScriptProcessStartEntry(param_1[0xd6],temp_v1);
        eventQueueAddUniqueIfValid(0x100016d);
        *(unsigned char *)(param_1 + 0xd3) = 0;
        return;
      }
      temp_v2 = FUN_0026ee68(0xd);
      if (temp_v2 != 0) {
LAB_00390684:
        param_1[2] = 3;
        temp_v1 = tableGroupFindEntryIndex(param_1[0xd4],&LAB_0039092c);
        scrScriptProcessStartEntry(param_1[0xd6],temp_v1);
        eventQueueAddUniqueIfValid(0x100016d);
        *(unsigned char *)(param_1 + 0xd3) = 0;
        return;
      }
      temp_v2 = FUN_0026ee68(0xe);
      if (temp_v2 != 0) {
LAB_003906d4:
        param_1[2] = 4;
        temp_v1 = tableGroupFindEntryIndex(param_1[0xd4],&LAB_00390940);
        scrScriptProcessStartEntry(param_1[0xd6],temp_v1);
        eventQueueAddUniqueIfValid(0x100016d);
        *(unsigned char *)(param_1 + 0xd3) = 0;
        return;
      }
      temp_v2 = FUN_0026ee68(0xb);
      if (temp_v2 != 0) {
        param_1[2] = 5;
        temp_v1 = tableGroupFindEntryIndex(param_1[0xd4],&LAB_00390950);
        scrScriptProcessStartEntry(param_1[0xd6],temp_v1);
        eventQueueAddUniqueIfValid(0x100016d);
        *(unsigned char *)(param_1 + 0xd3) = 0;
        return;
      }
      temp_v2 = FUN_0026ee68(10);
      if (temp_v2 != 0) {
        param_1[1] = 0xc;
        param_1[2] = 0;
        if ((int *)param_1[0x82] != (int *)0x0) {
          (**(romwright_code **)(*(int *)param_1[0x82] + 4))();
          param_1[0x82] = 0;
        }
        FUN_002b8244(1);
        eventQueueAddUniqueIfValid(0x100016d);
        *(unsigned char *)(param_1 + 0xd3) = 0;
        return;
      }
      temp_v2 = FUN_0026ee68(0xf);
      if (temp_v2 != 0) goto LAB_003907d0;
    }
    break;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    temp_v2 = FUN_0023360c(param_1 + 0x90);
    temp_v3 = puVar1[0x19e];
    memClear(&temp_v7,0x80);
    FUN_002be624(&temp_v7,&LAB_0039096c,temp_v3 + temp_v2 * 0x9c8);
    FUN_00295660(0,&temp_v7);
    FUN_002b8244(1);
    temp_v2 = FUN_0019e0c0(param_1[0xd6]);
    if (temp_v2 == 2) {
      temp_v2 = FUN_002973d8();
      if (temp_v2 != 0) {
        if (temp_v2 == 1) {
          param_1[2] = 0;
        }
        return;
      }
      temp_v3 = param_1[2];
      if (temp_v3 != 2) {
        if (temp_v3 != 3) {
          if (temp_v3 != 4) {
            if (temp_v3 != 5) {
              if (temp_v3 != 6) {
                return;
              }
              piVar6 = (int *)param_1[0x82];
              param_1[1] = 0xd;
              param_1[2] = 0;
              if (piVar6 == (int *)0x0) {
                return;
              }
            }
            else {
              piVar6 = (int *)param_1[0x82];
              param_1[1] = 0xf;
              param_1[2] = 0;
              if (piVar6 == (int *)0x0) {
                return;
              }
            }
          }
          else {
            piVar6 = (int *)param_1[0x82];
            param_1[1] = 9;
            param_1[2] = 0;
            if (piVar6 == (int *)0x0) {
              return;
            }
          }
        }
        else {
          piVar6 = (int *)param_1[0x82];
          param_1[1] = 8;
          param_1[2] = 0;
          if (piVar6 == (int *)0x0) {
            return;
          }
        }
      }
      else {
        piVar6 = (int *)param_1[0x82];
        param_1[1] = 7;
        param_1[2] = 0;
        if (piVar6 == (int *)0x0) {
          return;
        }
      }
      (**(romwright_code **)(*piVar6 + 4))();
      param_1[0x82] = 0;
      return;
    }
  }
  return;
}

} /* extern "C" */
