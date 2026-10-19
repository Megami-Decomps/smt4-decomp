/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043e808` (_code @ 0x43e808, 0x498 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_7: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_7_stack;

extern unsigned int DAT_0064602c; /* 0x64602c */
extern int *DAT_00646030; /* 0x646030 */
extern int *DAT_00646034; /* 0x646034 */
extern int *DAT_00646038; /* 0x646038 */
extern unsigned int DAT_0064603c; /* 0x64603c */
extern unsigned int DAT_00646048; /* 0x646048 */
extern int DAT_00646050; /* 0x646050 */
extern int DAT_00646054; /* 0x646054 */
extern int DAT_00646058; /* 0x646058 */
extern signed char DAT_0064606d; /* 0x64606d */
extern signed char DAT_0064606e; /* 0x64606e */

/* Supplied declaration required: FUN_001a08d8. */
extern int *FUN_0043de60(unsigned int *);
/* Supplied declaration required: FUN_0044057c. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


/* WARNING: Removing unreachable block (ram,0x0043e948) */
/* WARNING: Removing unreachable block (ram,0x0043e960) */
/* WARNING: Removing unreachable block (ram,0x0043e96c) */
/* WARNING: Removing unreachable block (ram,0x0043e974) */
/* WARNING: Removing unreachable block (ram,0x0043e97c) */
/* WARNING: Removing unreachable block (ram,0x0043e984) */
/* WARNING: Removing unreachable block (ram,0x0043e994) */
/* WARNING: Removing unreachable block (ram,0x0043ea24) */
/* WARNING: Removing unreachable block (ram,0x0043e9b4) */
/* WARNING: Removing unreachable block (ram,0x0043e9c4) */

int * FUN_0043e808(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                  unsigned int param_5,unsigned char *param_6,unsigned int param_7)

{
/* irregular: 12 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int *unaff_r6;
  int *piVar3;
  int *piVar4;
  int temp_v1 [2];
  unsigned char temp_v2 [12];
  unsigned int temp_v3;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  int uStack_28;
  
  if (param_6 == (unsigned char *)0x0) {
    param_6 = temp_v2;
    param_7 = 0;
  }
  temp_v3 = param_1;
  uStack_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  nn_os_CriticalSection_Enter((unsigned int)&DAT_0064603c);
  if ((DAT_0064606d == '\0') || (DAT_0064606e != '\0')) {
    piVar3 = (int *)0xc8a073f8;
    nn_os_CriticalSection_Leave((unsigned int)&DAT_0064603c);
  }
  else if ((DAT_00646034 == (int *)0x0) &&
          (piVar3 = (int *)FUN_0043de60(&DAT_0064602c), (int)piVar3 < 0)) {
    nn_os_CriticalSection_Leave((unsigned int)&DAT_0064603c);
  }
  else {
    unaff_r6 = DAT_00646034;
    piVar3 = DAT_00646034;
    if (DAT_00646034 != (int *)0x0) {
      if ((int *)*DAT_00646034 == DAT_00646034) {
        DAT_00646034 = (int *)0x0;
      }
      else {
        temp_v0 = *DAT_00646034;
        piVar4 = DAT_00646034 + 1;
        DAT_00646034 = (int *)DAT_00646034[1];
        *(int *)*piVar4 = temp_v0;
        *(int *)(*unaff_r6 + 4) = unaff_r6[1];
      }
      unaff_r6[1] = 0;
      *unaff_r6 = 0;
    }
    piVar4 = DAT_00646030;
    DAT_00646058 = DAT_00646058 - 1;
    if (DAT_00646030 != (int *)0x0) {
      unaff_r6[1] = (int)DAT_00646030;
      *(int **)(*piVar4 + 4) = unaff_r6;
      *unaff_r6 = *piVar4;
      *piVar4 = (int)unaff_r6;
    }
    else {
      unaff_r6[1] = (int)unaff_r6;
      *unaff_r6 = (int)unaff_r6;
      DAT_00646030 = piVar3;
    }
    piVar3 = (int *)0x0;
    DAT_00646050 = DAT_00646050 + 1;
    nn_os_CriticalSection_Leave((unsigned int)&DAT_0064603c);
  }
  if (-1 < (int)piVar3) {
    temp_v1[0] = unaff_r6[2];
    piVar3 = temp_v1;
    FUN_0044057c(piVar3,temp_v3,uStack_30,uStack_2c,&uStack_28,param_5,param_6,param_7);
    if (-1 < (int)piVar3) {
      if (unaff_r6 != (int *)0x0) {
        nn_os_CriticalSection_Enter((unsigned int)&DAT_0064603c);
        if (DAT_0064606d != '\0') {
          if ((int *)*unaff_r6 == unaff_r6) {
            DAT_00646030 = (int *)0x0;
          }
          else {
            if (DAT_00646030 == unaff_r6) {
              DAT_00646030 = (int *)DAT_00646030[1];
            }
            *(int *)unaff_r6[1] = *unaff_r6;
            *(int *)(*unaff_r6 + 4) = unaff_r6[1];
          }
          unaff_r6[1] = 0;
          *unaff_r6 = 0;
          piVar4 = DAT_00646038;
          piVar3 = DAT_00646034;
          DAT_00646050 = DAT_00646050 - 1;
          if (unaff_r6[2] != 0) {
            if (DAT_00646034 != (int *)0x0) {
              unaff_r6[1] = (int)DAT_00646034;
              *(int **)(*piVar3 + 4) = unaff_r6;
              *unaff_r6 = *piVar3;
              *piVar3 = (int)unaff_r6;
            }
            else {
              unaff_r6[1] = (int)unaff_r6;
              *unaff_r6 = (int)unaff_r6;
              DAT_00646034 = unaff_r6;
            }
            DAT_00646058 = DAT_00646058 + 1;
          }
          else {
            if (DAT_00646038 != (int *)0x0) {
              unaff_r6[1] = (int)DAT_00646038;
              *(int **)(*piVar4 + 4) = unaff_r6;
              *unaff_r6 = *piVar4;
              *piVar4 = (int)unaff_r6;
            }
            else {
              unaff_r6[1] = (int)unaff_r6;
              *unaff_r6 = (int)unaff_r6;
              DAT_00646038 = unaff_r6;
            }
            DAT_00646054 = DAT_00646054 + 1;
          }
          FUN_001a08d8(&DAT_00646048);
          nn_os_CriticalSection_Leave((unsigned int)&DAT_0064603c);
        }
        else {
          nn_os_CriticalSection_Leave((unsigned int)&DAT_0064603c);
        }
      }
      return (int *)0x0;
    }
    if (unaff_r6 != (int *)0x0) {
      nn_os_CriticalSection_Enter((unsigned int)&DAT_0064603c);
      if (DAT_0064606d == '\0') {
        nn_os_CriticalSection_Leave((unsigned int)&DAT_0064603c);
      }
      else {
        if ((int *)*unaff_r6 == unaff_r6) {
          DAT_00646030 = (int *)0x0;
        }
        else {
          if (DAT_00646030 == unaff_r6) {
            DAT_00646030 = (int *)DAT_00646030[1];
          }
          *(int *)unaff_r6[1] = *unaff_r6;
          *(int *)(*unaff_r6 + 4) = unaff_r6[1];
        }
        unaff_r6[1] = 0;
        *unaff_r6 = 0;
        piVar1 = DAT_00646038;
        piVar4 = DAT_00646034;
        DAT_00646050 = DAT_00646050 - 1;
        if (unaff_r6[2] != 0) {
          if (DAT_00646034 == (int *)0x0) {
            unaff_r6[1] = (int)unaff_r6;
            *unaff_r6 = (int)unaff_r6;
            DAT_00646034 = unaff_r6;
          }
          else {
            unaff_r6[1] = (int)DAT_00646034;
            *(int **)(*piVar4 + 4) = unaff_r6;
            *unaff_r6 = *piVar4;
            *piVar4 = (int)unaff_r6;
          }
          DAT_00646058 = DAT_00646058 + 1;
        }
        else {
          if (DAT_00646038 == (int *)0x0) {
            unaff_r6[1] = (int)unaff_r6;
            *unaff_r6 = (int)unaff_r6;
            DAT_00646038 = unaff_r6;
          }
          else {
            unaff_r6[1] = (int)DAT_00646038;
            *(int **)(*piVar1 + 4) = unaff_r6;
            *unaff_r6 = *piVar1;
            *piVar1 = (int)unaff_r6;
          }
          DAT_00646054 = DAT_00646054 + 1;
        }
        FUN_001a08d8(&DAT_00646048);
        nn_os_CriticalSection_Leave((unsigned int)&DAT_0064603c);
      }
    }
  }
  return piVar3;
}
