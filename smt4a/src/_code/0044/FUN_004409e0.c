/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004409e0` (_code @ 0x4409e0, 0x4a4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

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
/* Supplied declaration required: FUN_001af148. */
extern unsigned int FUN_0043de60(unsigned int *);
extern unsigned int FUN_00440784(int *, unsigned int, unsigned int);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


/* WARNING: Removing unreachable block (ram,0x00440b50) */
/* WARNING: Removing unreachable block (ram,0x00440b68) */
/* WARNING: Removing unreachable block (ram,0x00440b74) */
/* WARNING: Removing unreachable block (ram,0x00440b7c) */
/* WARNING: Removing unreachable block (ram,0x00440b84) */
/* WARNING: Removing unreachable block (ram,0x00440b8c) */
/* WARNING: Removing unreachable block (ram,0x00440b9c) */
/* WARNING: Removing unreachable block (ram,0x00440c1c) */
/* WARNING: Removing unreachable block (ram,0x00440bbc) */
/* WARNING: Removing unreachable block (ram,0x00440bcc) */

unsigned int FUN_004409e0(unsigned int param_1,unsigned int param_2)

{
/* irregular: 12 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int *unaff_r8;
  int *piVar3;
  int *piVar4;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int uStack_28;
  
  temp_v3 = param_1;
  uStack_28 = param_2;
  while( 1 ) {
    nn_os_CriticalSection_Enter((unsigned int)&DAT_0064603c);
    if ((DAT_0064606d == '\0') || (DAT_0064606e != '\0')) {
      nn_os_CriticalSection_Leave((unsigned int)&DAT_0064603c);
      temp_v0 = 0xc8a073f8;
    }
    else if ((DAT_00646034 == (int *)0x0) && (temp_v0 = FUN_0043de60(&DAT_0064602c), (int)temp_v0 < 0))
    {
      nn_os_CriticalSection_Leave((unsigned int)&DAT_0064603c);
    }
    else {
      unaff_r8 = DAT_00646034;
      piVar3 = DAT_00646034;
      if (DAT_00646034 != (int *)0x0) {
        if ((int *)*DAT_00646034 == DAT_00646034) {
          DAT_00646034 = (int *)0x0;
        }
        else {
          temp_v1 = *DAT_00646034;
          piVar4 = DAT_00646034 + 1;
          DAT_00646034 = (int *)DAT_00646034[1];
          *(int *)*piVar4 = temp_v1;
          *(int *)(*unaff_r8 + 4) = unaff_r8[1];
        }
        unaff_r8[1] = 0;
        *unaff_r8 = 0;
      }
      piVar4 = DAT_00646030;
      DAT_00646058 = DAT_00646058 - 1;
      if (DAT_00646030 != (int *)0x0) {
        unaff_r8[1] = (int)DAT_00646030;
        *(int **)(*piVar4 + 4) = unaff_r8;
        *unaff_r8 = *piVar4;
        *piVar4 = (int)unaff_r8;
      }
      else {
        unaff_r8[1] = (int)unaff_r8;
        *unaff_r8 = (int)unaff_r8;
        DAT_00646030 = piVar3;
      }
      temp_v0 = 0;
      DAT_00646050 = DAT_00646050 + 1;
      nn_os_CriticalSection_Leave((unsigned int)&DAT_0064603c);
    }
    if ((-1 < (int)temp_v0) || ((temp_v0 & 0x3ff) != 8)) break;
    FUN_001af148(&DAT_00646048);
  }
  if (-1 < (int)temp_v0) {
    temp_v2 = unaff_r8[2];
    temp_v0 = FUN_00440784(&temp_v2,temp_v3,uStack_28);
    if (-1 < (int)temp_v0) {
      if (unaff_r8 != (int *)0x0) {
        nn_os_CriticalSection_Enter((unsigned int)&DAT_0064603c);
        if (DAT_0064606d != '\0') {
          if ((int *)*unaff_r8 == unaff_r8) {
            DAT_00646030 = (int *)0x0;
          }
          else {
            if (DAT_00646030 == unaff_r8) {
              DAT_00646030 = (int *)DAT_00646030[1];
            }
            *(int *)unaff_r8[1] = *unaff_r8;
            *(int *)(*unaff_r8 + 4) = unaff_r8[1];
          }
          unaff_r8[1] = 0;
          *unaff_r8 = 0;
          piVar4 = DAT_00646038;
          piVar3 = DAT_00646034;
          DAT_00646050 = DAT_00646050 - 1;
          if (unaff_r8[2] != 0) {
            if (DAT_00646034 != (int *)0x0) {
              unaff_r8[1] = (int)DAT_00646034;
              *(int **)(*piVar3 + 4) = unaff_r8;
              *unaff_r8 = *piVar3;
              *piVar3 = (int)unaff_r8;
            }
            else {
              unaff_r8[1] = (int)unaff_r8;
              *unaff_r8 = (int)unaff_r8;
              DAT_00646034 = unaff_r8;
            }
            DAT_00646058 = DAT_00646058 + 1;
          }
          else {
            if (DAT_00646038 != (int *)0x0) {
              unaff_r8[1] = (int)DAT_00646038;
              *(int **)(*piVar4 + 4) = unaff_r8;
              *unaff_r8 = *piVar4;
              *piVar4 = (int)unaff_r8;
            }
            else {
              unaff_r8[1] = (int)unaff_r8;
              *unaff_r8 = (int)unaff_r8;
              DAT_00646038 = unaff_r8;
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
      return 0;
    }
    if (unaff_r8 != (int *)0x0) {
      nn_os_CriticalSection_Enter((unsigned int)&DAT_0064603c);
      if (DAT_0064606d == '\0') {
        nn_os_CriticalSection_Leave((unsigned int)&DAT_0064603c);
      }
      else {
        if ((int *)*unaff_r8 == unaff_r8) {
          DAT_00646030 = (int *)0x0;
        }
        else {
          if (DAT_00646030 == unaff_r8) {
            DAT_00646030 = (int *)DAT_00646030[1];
          }
          *(int *)unaff_r8[1] = *unaff_r8;
          *(int *)(*unaff_r8 + 4) = unaff_r8[1];
        }
        unaff_r8[1] = 0;
        *unaff_r8 = 0;
        piVar4 = DAT_00646038;
        piVar3 = DAT_00646034;
        DAT_00646050 = DAT_00646050 - 1;
        if (unaff_r8[2] != 0) {
          if (DAT_00646034 == (int *)0x0) {
            unaff_r8[1] = (int)unaff_r8;
            *unaff_r8 = (int)unaff_r8;
            DAT_00646034 = unaff_r8;
          }
          else {
            unaff_r8[1] = (int)DAT_00646034;
            *(int **)(*piVar3 + 4) = unaff_r8;
            *unaff_r8 = *piVar3;
            *piVar3 = (int)unaff_r8;
          }
          DAT_00646058 = DAT_00646058 + 1;
        }
        else {
          if (DAT_00646038 == (int *)0x0) {
            unaff_r8[1] = (int)unaff_r8;
            *unaff_r8 = (int)unaff_r8;
            DAT_00646038 = unaff_r8;
          }
          else {
            unaff_r8[1] = (int)DAT_00646038;
            *(int **)(*piVar4 + 4) = unaff_r8;
            *unaff_r8 = *piVar4;
            *piVar4 = (int)unaff_r8;
          }
          DAT_00646054 = DAT_00646054 + 1;
        }
        FUN_001a08d8(&DAT_00646048);
        nn_os_CriticalSection_Leave((unsigned int)&DAT_0064603c);
      }
    }
  }
  return temp_v0;
}
