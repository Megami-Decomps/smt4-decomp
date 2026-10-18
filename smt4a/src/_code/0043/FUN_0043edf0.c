/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043edf0` (_code @ 0x43edf0, 0x4ac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_8: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_8_stack;

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
extern int FUN_0043de60(unsigned int *);
extern int FUN_00440620(int *, unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */


/* WARNING: Removing unreachable block (ram,0x0043ef44) */
/* WARNING: Removing unreachable block (ram,0x0043ef5c) */
/* WARNING: Removing unreachable block (ram,0x0043ef68) */
/* WARNING: Removing unreachable block (ram,0x0043ef70) */
/* WARNING: Removing unreachable block (ram,0x0043ef78) */
/* WARNING: Removing unreachable block (ram,0x0043ef80) */
/* WARNING: Removing unreachable block (ram,0x0043ef90) */
/* WARNING: Removing unreachable block (ram,0x0043f020) */
/* WARNING: Removing unreachable block (ram,0x0043efb0) */
/* WARNING: Removing unreachable block (ram,0x0043efc0) */

int FUN_0043edf0(unsigned int param_1,unsigned int param_2,unsigned int param_3,int param_4,
                unsigned int param_5,unsigned int param_6,unsigned int param_7,unsigned int param_8)

{
/* irregular: 13 native warning(s); review required */
  int *piVar1;
  int *unaff_r6;
  int temp_v0;
  int *piVar3;
  int temp_v1 [2];
  unsigned int temp_v2;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  int iStack_28;
  
  if ((param_4 < 0x1e01) && (param_8 < 0x201)) {
    temp_v2 = param_1;
    uStack_30 = param_2;
    uStack_2c = param_3;
    iStack_28 = param_4;
    nn_os_CriticalSection_Enter(&DAT_0064603c);
    if ((DAT_0064606d == '\0') || (DAT_0064606e != '\0')) {
      temp_v0 = -0x375f8c08;
      nn_os_CriticalSection_Leave(&DAT_0064603c);
    }
    else if ((DAT_00646034 == (int *)0x0) && (temp_v0 = FUN_0043de60(&DAT_0064602c), temp_v0 < 0)) {
      nn_os_CriticalSection_Leave(&DAT_0064603c);
    }
    else {
      unaff_r6 = DAT_00646034;
      piVar1 = DAT_00646034;
      if (DAT_00646034 != (int *)0x0) {
        if ((int *)*DAT_00646034 == DAT_00646034) {
          DAT_00646034 = (int *)0x0;
        }
        else {
          temp_v0 = *DAT_00646034;
          piVar3 = DAT_00646034 + 1;
          DAT_00646034 = (int *)DAT_00646034[1];
          *(int *)*piVar3 = temp_v0;
          *(int *)(*unaff_r6 + 4) = unaff_r6[1];
        }
        unaff_r6[1] = 0;
        *unaff_r6 = 0;
      }
      piVar3 = DAT_00646030;
      DAT_00646058 = DAT_00646058 - 1;
      if (DAT_00646030 != (int *)0x0) {
        unaff_r6[1] = (int)DAT_00646030;
        *(int **)(*piVar3 + 4) = unaff_r6;
        *unaff_r6 = *piVar3;
        *piVar3 = (int)unaff_r6;
      }
      else {
        unaff_r6[1] = (int)unaff_r6;
        *unaff_r6 = (int)unaff_r6;
        DAT_00646030 = piVar1;
      }
      temp_v0 = 0;
      DAT_00646050 = DAT_00646050 + 1;
      nn_os_CriticalSection_Leave(&DAT_0064603c);
    }
    if (-1 < temp_v0) {
      temp_v1[0] = unaff_r6[2];
      temp_v0 = FUN_00440620(temp_v1,temp_v2,uStack_30,uStack_2c,param_4,param_5,param_6,param_7,
                           param_8);
      if (-1 < temp_v0) {
        if (unaff_r6 != (int *)0x0) {
          nn_os_CriticalSection_Enter();
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
            piVar3 = DAT_00646038;
            piVar1 = DAT_00646034;
            DAT_00646050 = DAT_00646050 - 1;
            if (unaff_r6[2] != 0) {
              if (DAT_00646034 != (int *)0x0) {
                unaff_r6[1] = (int)DAT_00646034;
                *(int **)(*piVar1 + 4) = unaff_r6;
                *unaff_r6 = *piVar1;
                *piVar1 = (int)unaff_r6;
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
                *(int **)(*piVar3 + 4) = unaff_r6;
                *unaff_r6 = *piVar3;
                *piVar3 = (int)unaff_r6;
              }
              else {
                unaff_r6[1] = (int)unaff_r6;
                *unaff_r6 = (int)unaff_r6;
                DAT_00646038 = unaff_r6;
              }
              DAT_00646054 = DAT_00646054 + 1;
            }
            FUN_001a08d8(&DAT_00646048);
            nn_os_CriticalSection_Leave(&DAT_0064603c);
          }
          else {
            nn_os_CriticalSection_Leave(&DAT_0064603c);
          }
        }
        return 0;
      }
      if (unaff_r6 != (int *)0x0) {
        nn_os_CriticalSection_Enter();
        if (DAT_0064606d == '\0') {
          nn_os_CriticalSection_Leave(&DAT_0064603c);
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
          piVar3 = DAT_00646038;
          piVar1 = DAT_00646034;
          DAT_00646050 = DAT_00646050 - 1;
          if (unaff_r6[2] != 0) {
            if (DAT_00646034 == (int *)0x0) {
              unaff_r6[1] = (int)unaff_r6;
              *unaff_r6 = (int)unaff_r6;
              DAT_00646034 = unaff_r6;
            }
            else {
              unaff_r6[1] = (int)DAT_00646034;
              *(int **)(*piVar1 + 4) = unaff_r6;
              *unaff_r6 = *piVar1;
              *piVar1 = (int)unaff_r6;
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
              *(int **)(*piVar3 + 4) = unaff_r6;
              *unaff_r6 = *piVar3;
              *piVar3 = (int)unaff_r6;
            }
            DAT_00646054 = DAT_00646054 + 1;
          }
          FUN_001a08d8(&DAT_00646048);
          nn_os_CriticalSection_Leave(&DAT_0064603c);
        }
      }
    }
    return temp_v0;
  }
  return -0x271f8c14;
}
