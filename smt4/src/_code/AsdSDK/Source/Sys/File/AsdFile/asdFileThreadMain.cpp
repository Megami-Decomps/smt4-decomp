/* NON_MATCHING: romwright 0.5.0 decompilation of `asdFileThreadMain` (_code @ 0x113e4c, 0x624 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int refIsNullOrZero(...);
int FUN_002bb150(...);
int FUN_002bb5a4(...);
int asdMemoryAllocAligned(...);
int asdOperatorNew(...);
int FUN_002c3424(...);
int FUN_002c40f8(...);
int asdMemFree(...);
int FUN_002c5254(...);
int FUN_002c526c(...);
int FUN_002c52f8(...);
int FUN_002c618c(...);
int builtin_strncpy(...);

typedef int romwright_code(...);
/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp248; /* 0x248: local_248 */
} void_stack;

extern unsigned char LAB_002dc6c0; /* 0x2dc6c0 */
extern signed char g_asdFile; /* 0x465000 */
extern unsigned int DAT_00465004; /* 0x465004 */
extern int *DAT_00465010; /* 0x465010 */
extern unsigned int g_asdFileMutex; /* 0x465014 */
extern unsigned int g_asdFileEvent; /* 0x465028 */
extern unsigned int DAT_00465124; /* 0x465124 */

/* Unsupported intrinsic, declaration required: builtin_strncpy (CALLOTHER). */
extern int FUN_002b90c8(int *, unsigned int, unsigned int *);
/* Supplied declaration required: refIsNullOrZero. */
/* Supplied declaration required: FUN_002bb150. */
/* Supplied declaration required: FUN_002bb5a4. */
/* Supplied declaration required: asdMemoryAllocAligned. */
/* Supplied declaration required: asdOperatorNew. */
/* Supplied declaration required: FUN_002c3424. */
/* Supplied declaration required: FUN_002c40f8. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_002c5254. */
/* Supplied declaration required: FUN_002c526c. */
/* Supplied declaration required: FUN_002c52f8. */
/* Supplied declaration required: FUN_002c618c. */
extern void nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(unsigned int);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);
extern void nn_os_LightEvent_ClearSignal(unsigned int);


void asdFileThreadMain(void)

{
/* irregular: 1 goto(s); 13 native warning(s); review required */
  unsigned char *puVar1;
  int *piVar2;
  char *pcVar3;
  unsigned short *puVar4;
  unsigned int temp_v0;
  int temp_v1;
  int *piVar7;
  int *piVar8;
  int temp_v2;
  unsigned int uStack_244;
  int uStack_240;
  unsigned char temp_v3 [512];
  char *temp_v4;
  unsigned int uStack_38;
  unsigned char temp_v5 [4];
  int temp_v6;
  unsigned int temp_v7;
  
  do {
    FUN_002c3424(&g_asdFileEvent);
    if (g_asdFile != '\0') {
      return;
    }
    uStack_240 = g_asdFileMutex;
    temp_v2 = -1;
    uStack_244 = 0xffffffff;
    puVar1 = temp_v3;
    FUN_002c40f8(puVar1,&uStack_240,1,0);
    if ((int)puVar1 < 0) {
      FUN_002c526c();
    }
    piVar8 = DAT_00465010;
    piVar2 = &temp_v2;
    FUN_002c5254(&temp_v2,g_asdFileMutex,1);
    while( 1 ) {
      if ((int)piVar2 < 0) {
        FUN_002c526c();
      }
      if (piVar8 == (int *)0x0) break;
      if (g_asdFile != '\0') {
        return;
      }
      if (!(*piVar8 == 4 || *piVar8 == 5)) {
        if (piVar8[0x4e] != 0) {
          uStack_240 = g_asdFileMutex;
          temp_v2 = -1;
          uStack_244 = 0xffffffff;
          puVar1 = temp_v3;
          FUN_002c40f8(puVar1,&uStack_240,1,0);
          if ((int)puVar1 < 0) {
            FUN_002c526c();
          }
          (*(romwright_code *)piVar8[0x4e])(piVar8 + 0xb);
          piVar8[0x4e] = 0;
          piVar2 = &temp_v2;
          FUN_002c5254(&temp_v2,g_asdFileMutex,1);
          if ((int)piVar2 < 0) {
            FUN_002c526c();
          }
        }
        switch(*piVar8) {
        case 0:
          pcVar3 = (char *)0x18;
          asdOperatorNew();
          if (pcVar3 != (char *)0x0) {
            pcVar3[4] = '\0';
            pcVar3[5] = '\0';
            pcVar3[6] = '\0';
            pcVar3[7] = '\0';
            pcVar3[8] = '\0';
            pcVar3[9] = '\0';
            pcVar3[10] = '\0';
            pcVar3[0xb] = '\0';
            pcVar3[0xc] = '\0';
            pcVar3[0xd] = '\0';
            pcVar3[0xe] = '\0';
            pcVar3[0xf] = '\0';
            pcVar3[0x10] = '\0';
            pcVar3[0x11] = '\0';
            pcVar3[0x12] = '\0';
            pcVar3[0x13] = '\0';
            pcVar3[0x14] = '\0';
            pcVar3[0x15] = '\0';
            pcVar3[0x16] = '\0';
            pcVar3[0x17] = '\0';
            builtin_strncpy(pcVar3,"h\fB",4);
          }
          piVar8[0x4b] = (int)pcVar3;
          temp_v4 = pcVar3 + 4;
          temp_v6 = 0;
          temp_v7 = 0;
          uStack_38 = 1;
          piVar7 = piVar8 + 0xb;
          refIsNullOrZero(&temp_v6);
          piVar2 = &temp_v2;
          while ((temp_v1 = FUN_002b90c8(piVar7,0x105,(unsigned int *)&temp_v6), temp_v1 != 0 &&
                 (puVar4 = (unsigned short *)piVar2, FUN_002c618c(piVar2,piVar7,temp_v1,&temp_v6),
                 puVar4 != (unsigned short *)0x0))) {
            piVar2 = (int *)((int)piVar2 + 2);
            piVar7 = (int *)((int)piVar7 + temp_v1);
          }
          *(unsigned short *)piVar2 = 0;
          temp_v4[0xc] = '\0';
          temp_v4[0xd] = '\0';
          temp_v4[0xe] = '\0';
          temp_v4[0xf] = '\0';
          temp_v4[0x10] = '\0';
          temp_v4[0x11] = '\0';
          temp_v4[0x12] = '\0';
          temp_v4[0x13] = '\0';
          temp_v4[4] = '\0';
          temp_v4[5] = '\0';
          temp_v4[6] = '\0';
          temp_v4[7] = '\0';
          temp_v4[8] = '\0';
          temp_v4[9] = '\0';
          temp_v4[10] = '\0';
          temp_v4[0xb] = '\0';
          pcVar3 = temp_v4;
          FUN_002bb5a4(temp_v4,&temp_v2,uStack_38);
          if (((unsigned int)pcVar3 & 0x80000000) != 0) {
            *piVar8 = 5;
          }
          temp_v1 = (**(romwright_code **)(*(int *)piVar8[0x4b] + 0x24))();
          piVar8[6] = temp_v1;
          temp_v2 = 0;
          (**(romwright_code **)(*(int *)piVar8[0x4b] + 0xc))();
          if (piVar8[3] == 0) {
            temp_v1 = piVar8[9];
            if (temp_v1 != 0x10) {
              if (temp_v1 != 1) {
                if (temp_v1 != 0x11) {
                  temp_v2 = piVar8[10];
                  uStack_244 = 1;
                  temp_v1 = 0x100;
                  asdMemoryAllocAligned(0x100,0x100,0,piVar8[6]);
                  piVar8[3] = temp_v1;
                }
                else {
                  temp_v2 = piVar8[10];
                  uStack_244 = 0;
                  temp_v1 = 0x10000;
                  asdMemoryAllocAligned(0x10000,0x100,0,piVar8[6]);
                  piVar8[3] = temp_v1;
                }
              }
              else {
                temp_v2 = piVar8[10];
                uStack_244 = 1;
                temp_v1 = 0x10000;
                asdMemoryAllocAligned(0x10000,0x100,0,piVar8[6]);
                piVar8[3] = temp_v1;
              }
            }
            else {
              temp_v2 = piVar8[10];
              uStack_244 = 0;
              temp_v1 = 0x100;
              asdMemoryAllocAligned(0x100,0x100,0,piVar8[6]);
              piVar8[3] = temp_v1;
            }
          }
          nn_os_CriticalSection_Enter(DAT_00465124);
          DAT_00465004 = 1;
          temp_v0 = (**(romwright_code **)(*(int *)piVar8[0x4b] + 0x28))
                            ((int *)piVar8[0x4b],temp_v5,piVar8[3],piVar8[6]);
          DAT_00465004 = 0;
          nn_os_CriticalSection_Leave(DAT_00465124);
          if ((temp_v0 & 0x80000000) != 0) {
            *piVar8 = 5;
          }
          temp_v1 = piVar8[0x4b];
          if ((*(unsigned int *)(temp_v1 + 4) & 0xfffffffe) != 0) {
            if ((*(unsigned int *)(temp_v1 + 4) & 1) != 0) {
              FUN_002c52f8();
            }
            nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(*(unsigned int *)(temp_v1 + 4) & 0xfffffffe);
            *(unsigned int *)(temp_v1 + 4) = 0;
          }
          if ((int *)piVar8[0x4b] != (int *)0x0) {
            (**(romwright_code **)(*(int *)piVar8[0x4b] + 4))();
          }
          *piVar8 = 3;
          piVar8[0x4b] = 0;
        case 3:
          *piVar8 = 4;
        }
        if ((*piVar8 == 4 || *piVar8 == 5) && (piVar8[0x4c] != 0)) {
          uStack_240 = g_asdFileMutex;
          temp_v2 = -1;
          uStack_244 = 0xffffffff;
          puVar1 = temp_v3;
          FUN_002c40f8(puVar1,&uStack_240,1,0);
          if ((int)puVar1 < 0) {
            FUN_002c526c();
          }
          piVar2 = (int *)piVar8[0x4d];
          if ((int *)piVar8[0x4d] == (int *)0x0) {
            piVar2 = piVar8;
          }
          (*(romwright_code *)piVar8[0x4c])(piVar2);
          piVar2 = &temp_v2;
          FUN_002c5254(&temp_v2,g_asdFileMutex,1);
joined_r0x0011436c:
          if ((int)piVar2 < 0) {
            FUN_002c526c();
          }
        }
        uStack_240 = g_asdFileMutex;
        temp_v2 = -1;
        uStack_244 = 0xffffffff;
        puVar1 = temp_v3;
        FUN_002c40f8(puVar1,&uStack_240,1,0);
        if ((int)puVar1 < 0) {
          FUN_002c526c();
        }
        piVar8 = (int *)piVar8[0x4f];
        piVar2 = &temp_v2;
        FUN_002c5254(&temp_v2,g_asdFileMutex,1);
      }
      else {
        uStack_240 = g_asdFileMutex;
        temp_v2 = -1;
        uStack_244 = 0xffffffff;
        puVar1 = temp_v3;
        FUN_002c40f8(puVar1,&uStack_240,1,0);
        if ((int)puVar1 < 0) {
          FUN_002c526c();
        }
        temp_v1 = piVar8[1];
        piVar8[1] = temp_v1 - piVar8[2];
        if (0 < temp_v1 - piVar8[2]) {
          piVar2 = &temp_v2;
          FUN_002c5254(&temp_v2,g_asdFileMutex,1);
          goto joined_r0x0011436c;
        }
        temp_v1 = piVar8[0x50];
        piVar7 = (int *)piVar8[0x4f];
        if (temp_v1 != 0) {
          *(int **)(temp_v1 + 0x13c) = piVar7;
          if (piVar7 != (int *)0x0) {
            piVar7[0x50] = temp_v1;
          }
        }
        else {
          DAT_00465010 = piVar7;
          if (piVar7 != (int *)0x0) {
            piVar7[0x50] = 0;
          }
        }
        if ((piVar8[4] == 0) && (piVar8[3] != 0)) {
          asdMemFree();
        }
        piVar8[3] = 0;
        asdMemFree(piVar8);
        piVar2 = &temp_v2;
        FUN_002c5254(&temp_v2,g_asdFileMutex,1);
        piVar8 = piVar7;
      }
    }
    if (g_asdFile != '\0') {
      return;
    }
    nn_os_LightEvent_ClearSignal((unsigned int)&g_asdFileEvent);
    FUN_002bb150(&LAB_002dc6c0,0);
  } while( 1 );
}

} /* extern "C" */
