/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014b66c` (_code @ 0x14b66c, 0x66c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemFree(...);
int nn_os_LightEvent_ClearSignal(...);
int svcSleepThread(...);

int syncWaitHandleForever(int *);
int refIsNullOrZero(int *);
int FUN_00178b04(int, unsigned char *, int);
int FUN_001858ec(...);
int asdFileHashPackReadRequest(int, int *);
int FUN_001883b0(char *, int *, unsigned int);
int vcallSlot12IfValid(...);
int sysFatalBreak(void);
int FUN_0019a364(...);
int nn_os_LightEvent_Wait(unsigned int *);
int FUN_002e3140(void);
int FUN_002e3c44(int *, int *, int, int *);
int software_interrupt(...);

typedef int romwright_code(...);
/* stack frame of void: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp240; /* 0x240: local_240 */
    unsigned int sp248; /* 0x248: local_248 */
} void_stack;

extern unsigned char LAB_0014bab8; /* 0x14bab8 */
extern unsigned char LAB_002dc6c0; /* 0x2dc6c0 */
extern signed char g_asdFile; /* 0x5b3fb4 */
extern int *DAT_005b3fbc; /* 0x5b3fbc */
extern int g_asdFileMutex; /* 0x5b3fc0 */
extern unsigned int g_asdFileEvent; /* 0x5b3fd4 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: syncWaitHandleForever. */
/* Supplied declaration required: refIsNullOrZero. */
extern int FUN_00100836(int *, unsigned int, unsigned int *);
extern int asdFileHashPackTryReadRequest(int *);
/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_001858ec. */
extern int asdFileHashPackIsOpen(void);
/* Supplied declaration required: asdFileHashPackReadRequest. */
/* Supplied declaration required: FUN_001883b0. */
/* Supplied declaration required: vcallSlot12IfValid. */
/* Supplied declaration required: sysFatalBreak. */
/* Supplied declaration required: FUN_0019a364. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: nn_os_LightEvent_ClearSignal. */
/* Supplied declaration required: nn_os_LightEvent_Wait. */
/* Supplied declaration required: svcSleepThread. */
/* Supplied declaration required: FUN_002e3140. */
/* Supplied declaration required: FUN_002e3c44. */


void FUN_0014b66c(void)

{
/* irregular: 16 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  unsigned short *puVar3;
  int *piVar4;
  int temp_v1;
  unsigned int temp_v2;
  int *piVar7;
  int *piVar8;
  int temp_v3;
  unsigned int uStack_244;
  int *temp_v4;
  char *temp_v5;
  unsigned int uStack_38;
  unsigned char temp_v6 [4];
  int temp_v7;
  unsigned int temp_v8;
  
  do {
    nn_os_LightEvent_Wait(&g_asdFileEvent);
    if (g_asdFile != '\0') {
      return;
    }
    syncWaitHandleForever(&g_asdFileMutex);
    piVar8 = DAT_005b3fbc;
    piVar4 = &temp_v3;
    FUN_0019a364(&temp_v3,g_asdFileMutex,1);
    while( 1 ) {
      if ((int)piVar4 < 0) {
        FUN_002e3140();
      }
      if (piVar8 == (int *)0x0) break;
      if (g_asdFile != '\0') {
        return;
      }
      if (!(*piVar8 == 4 || *piVar8 == 5)) {
        if (piVar8[0x4e] != 0) {
          software_interrupt(0x24);
          if (g_asdFileMutex < 0) {
            FUN_002e3140();
          }
          (*(romwright_code *)piVar8[0x4e])(piVar8 + 0xb);
          piVar8[0x4e] = 0;
          piVar4 = &temp_v3;
          FUN_0019a364(&temp_v3,g_asdFileMutex,1);
          if ((int)piVar4 < 0) {
            FUN_002e3140();
          }
        }
        temp_v0 = piVar8[0x4f];
        if (((temp_v0 == 0) || (asdFileHashPackReadRequest(temp_v0,piVar8), temp_v0 == 0)) &&
           ((temp_v0 = asdFileHashPackIsOpen(), temp_v0 == 0 || (temp_v0 = asdFileHashPackTryReadRequest(piVar8), temp_v0 == 0)))) {
          switch(*piVar8) {
          case 0:
            pcVar2 = (char *)0x18;
            FUN_00178b04(0x18,&LAB_0014bab8,0x2ff);
            if (pcVar2 != (char *)0x0) {
              pcVar2[4] = '\0';
              pcVar2[5] = '\0';
              pcVar2[6] = '\0';
              pcVar2[7] = '\0';
              pcVar2[8] = '\0';
              pcVar2[9] = '\0';
              pcVar2[10] = '\0';
              pcVar2[0xb] = '\0';
              pcVar2[0xc] = '\0';
              pcVar2[0xd] = '\0';
              pcVar2[0xe] = '\0';
              pcVar2[0xf] = '\0';
              pcVar2[0x10] = '\0';
              pcVar2[0x11] = '\0';
              pcVar2[0x12] = '\0';
              pcVar2[0x13] = '\0';
              pcVar2[0x14] = '\0';
              pcVar2[0x15] = '\0';
              pcVar2[0x16] = '\0';
              pcVar2[0x17] = '\0';
              pcVar2[0] = 'D';
              pcVar2[1] = -0x7f;
              pcVar2[2] = 'U';
              pcVar2[3] = '\0';
              pcVar2[0] = 'D';
              pcVar2[1] = -0x7f;
              pcVar2[2] = 'U';
              pcVar2[3] = '\0';
            }
            piVar8[0x4b] = (int)pcVar2;
            temp_v5 = pcVar2 + 4;
            temp_v7 = 0;
            temp_v8 = 0;
            uStack_38 = 1;
            piVar7 = piVar8 + 0xb;
            refIsNullOrZero(&temp_v7);
            piVar4 = &temp_v3;
            while ((temp_v0 = FUN_00100836(piVar7,0x105,(unsigned int *)&temp_v7), temp_v0 != 0 &&
                   (puVar3 = (unsigned short *)piVar4, FUN_002e3c44(piVar4,piVar7,temp_v0,&temp_v7),
                   puVar3 != (unsigned short *)0x0))) {
              piVar4 = (int *)((int)piVar4 + 2);
              piVar7 = (int *)((int)piVar7 + temp_v0);
            }
            *(unsigned short *)piVar4 = 0;
            temp_v5[0xc] = '\0';
            temp_v5[0xd] = '\0';
            temp_v5[0xe] = '\0';
            temp_v5[0xf] = '\0';
            temp_v5[0x10] = '\0';
            temp_v5[0x11] = '\0';
            temp_v5[0x12] = '\0';
            temp_v5[0x13] = '\0';
            temp_v5[4] = '\0';
            temp_v5[5] = '\0';
            temp_v5[6] = '\0';
            temp_v5[7] = '\0';
            temp_v5[8] = '\0';
            temp_v5[9] = '\0';
            temp_v5[10] = '\0';
            temp_v5[0xb] = '\0';
            pcVar2 = temp_v5;
            FUN_001883b0(temp_v5,&temp_v3,uStack_38);
            piVar8[0x50] = (int)pcVar2;
            piVar4 = (int *)piVar8[0x4b];
            if (-1 < (int)pcVar2) {
              temp_v0 = (**(romwright_code **)(*piVar4 + 0x24))();
              piVar8[6] = temp_v0;
              temp_v3 = 0;
              (**(romwright_code **)(*(int *)piVar8[0x4b] + 0xc))();
              if (piVar8[3] == 0) {
                temp_v1 = piVar8[9];
                if (temp_v1 != 0x10) {
                  if (temp_v1 != 1) {
                    if (temp_v1 != 0x11) {
                      temp_v3 = piVar8[10];
                      temp_v4 = piVar8 + 0xb;
                      uStack_244 = 1;
                      temp_v1 = 0x100;
                      FUN_001858ec(0x100,0x100,0,piVar8[6]);
                      piVar8[3] = temp_v1;
                    }
                    else {
                      temp_v3 = piVar8[10];
                      temp_v4 = piVar8 + 0xb;
                      uStack_244 = 0;
                      temp_v1 = 0x10000;
                      FUN_001858ec(0x10000,0x100,0,piVar8[6]);
                      piVar8[3] = temp_v1;
                    }
                  }
                  else {
                    temp_v3 = piVar8[10];
                    temp_v4 = piVar8 + 0xb;
                    uStack_244 = 1;
                    temp_v1 = 0x10000;
                    FUN_001858ec(0x10000,0x100,0,piVar8[6]);
                    piVar8[3] = temp_v1;
                  }
                }
                else {
                  temp_v3 = piVar8[10];
                  temp_v4 = piVar8 + 0xb;
                  uStack_244 = 0;
                  temp_v1 = 0x100;
                  FUN_001858ec(0x100,0x100,0,piVar8[6]);
                  piVar8[3] = temp_v1;
                }
              }
              temp_v2 = (**(romwright_code **)(*(int *)piVar8[0x4b] + 0x28))
                                ((int *)piVar8[0x4b],temp_v6,piVar8[3],temp_v0);
              piVar8[0x50] = temp_v2;
              if ((temp_v2 & 0x80000000) != 0) {
                *piVar8 = 5;
              }
              temp_v0 = piVar8[0x4b];
              if ((*(unsigned int *)(temp_v0 + 4) & 0xfffffffe) != 0) {
                if ((*(unsigned int *)(temp_v0 + 4) & 1) != 0) {
                  sysFatalBreak();
                }
                vcallSlot12IfValid(*(unsigned int *)(temp_v0 + 4) & 0xfffffffe);
                *(unsigned int *)(temp_v0 + 4) = 0;
              }
              if ((int *)piVar8[0x4b] != (int *)0x0) {
                (**(romwright_code **)(*(int *)piVar8[0x4b] + 4))();
              }
              *piVar8 = 3;
              piVar8[0x4b] = 0;
              *piVar8 = 4;
              break;
            }
            if (piVar4 != (int *)0x0) {
              (**(romwright_code **)(*piVar4 + 4))();
            }
            *piVar8 = 5;
            piVar8[6] = 0;
            break;
          case 3:
            *piVar8 = 4;
          }
        }
        if ((piVar8[0x50] < 0) && (piVar8[0x51] != 0)) {
          software_interrupt(0x24);
          if (g_asdFileMutex < 0) {
            FUN_002e3140();
          }
          (*(romwright_code *)piVar8[0x51])(piVar8[0x52],piVar8);
          piVar4 = &temp_v3;
          FUN_0019a364(&temp_v3,g_asdFileMutex,1);
          if ((int)piVar4 < 0) {
            FUN_002e3140();
          }
        }
        if ((*piVar8 == 4 || *piVar8 == 5) && (piVar8[0x4c] != 0)) {
          software_interrupt(0x24);
          if (g_asdFileMutex < 0) {
            FUN_002e3140();
          }
          piVar4 = (int *)piVar8[0x4d];
          if ((int *)piVar8[0x4d] == (int *)0x0) {
            piVar4 = piVar8;
          }
          (*(romwright_code *)piVar8[0x4c])(piVar4);
          piVar4 = &temp_v3;
          FUN_0019a364(&temp_v3,g_asdFileMutex,1);
          if ((int)piVar4 < 0) {
            FUN_002e3140();
          }
        }
        software_interrupt(0x24);
        if (g_asdFileMutex < 0) {
          FUN_002e3140();
        }
        piVar8 = (int *)piVar8[0x53];
        piVar4 = &temp_v3;
        FUN_0019a364(&temp_v3,g_asdFileMutex,1);
      }
      else {
        software_interrupt(0x24);
        if (g_asdFileMutex < 0) {
          FUN_002e3140();
        }
        temp_v0 = piVar8[1];
        piVar8[1] = temp_v0 - piVar8[2];
        if (0 < temp_v0 - piVar8[2]) {
          piVar4 = &temp_v3;
          FUN_0019a364(&temp_v3,g_asdFileMutex,1);
          if ((int)piVar4 < 0) {
            FUN_002e3140();
          }
          software_interrupt(0x24);
          if (g_asdFileMutex < 0) {
            FUN_002e3140();
          }
          piVar8 = (int *)piVar8[0x53];
          piVar4 = &temp_v3;
          FUN_0019a364(&temp_v3,g_asdFileMutex,1);
          continue;
        }
        temp_v0 = piVar8[0x54];
        piVar7 = (int *)piVar8[0x53];
        if (temp_v0 != 0) {
          *(int **)(temp_v0 + 0x14c) = piVar7;
          if (piVar7 != (int *)0x0) {
            piVar7[0x54] = temp_v0;
          }
        }
        else {
          DAT_005b3fbc = piVar7;
          if (piVar7 != (int *)0x0) {
            piVar7[0x54] = 0;
          }
        }
        if ((piVar8[4] == 0) && (piVar8[3] != 0)) {
          asdMemFree();
        }
        piVar8[3] = 0;
        asdMemFree(piVar8);
        piVar4 = &temp_v3;
        FUN_0019a364(&temp_v3,g_asdFileMutex,1);
        piVar8 = piVar7;
      }
    }
    if (g_asdFile != '\0') {
      return;
    }
    nn_os_LightEvent_ClearSignal(&g_asdFileEvent);
    svcSleepThread(&LAB_002dc6c0,0);
  } while( 1 );
}

} /* extern "C" */
