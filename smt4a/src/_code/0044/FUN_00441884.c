/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00441884` (_code @ 0x441884, 0x52c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
} param_3_stack;

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
extern unsigned int FUN_00440968(int *, unsigned int, unsigned int, unsigned int);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


/* WARNING: Removing unreachable block (ram,0x004419f4) */
/* WARNING: Removing unreachable block (ram,0x00441a98) */
/* WARNING: Removing unreachable block (ram,0x00441a0c) */
/* WARNING: Removing unreachable block (ram,0x00441a18) */
/* WARNING: Removing unreachable block (ram,0x00441a20) */
/* WARNING: Removing unreachable block (ram,0x00441a28) */
/* WARNING: Removing unreachable block (ram,0x00441a30) */
/* WARNING: Removing unreachable block (ram,0x00441a40) */
/* WARNING: Removing unreachable block (ram,0x00441abc) */
/* WARNING: Removing unreachable block (ram,0x00441b10) */
/* WARNING: Removing unreachable block (ram,0x00441acc) */
/* WARNING: Removing unreachable block (ram,0x00441ae4) */
/* WARNING: Removing unreachable block (ram,0x00441a60) */
/* WARNING: Removing unreachable block (ram,0x00441aac) */
/* WARNING: Removing unreachable block (ram,0x00441a70) */
/* WARNING: Removing unreachable block (ram,0x00441a88) */
/* WARNING: Removing unreachable block (ram,0x00441af0) */

unsigned int FUN_00441884(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 19 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int *piVar3;
  int *unaff_r11;
  int *piVar4;
  int temp_v2 [2];
  unsigned int temp_v3;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  
  temp_v3 = param_1;
  uStack_2c = param_2;
  uStack_28 = param_3;
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
      unaff_r11 = DAT_00646034;
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
          *(int *)(*unaff_r11 + 4) = unaff_r11[1];
        }
        unaff_r11[1] = 0;
        *unaff_r11 = 0;
      }
      piVar4 = DAT_00646030;
      DAT_00646058 = DAT_00646058 - 1;
      if (DAT_00646030 != (int *)0x0) {
        unaff_r11[1] = (int)DAT_00646030;
        *(int **)(*piVar4 + 4) = unaff_r11;
        *unaff_r11 = *piVar4;
        *piVar4 = (int)unaff_r11;
      }
      else {
        unaff_r11[1] = (int)unaff_r11;
        *unaff_r11 = (int)unaff_r11;
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
    temp_v2[0] = unaff_r11[2];
    temp_v0 = FUN_00440968(temp_v2,temp_v3,uStack_2c,uStack_28);
    if ((int)temp_v0 < 0) {
      if (unaff_r11 != (int *)0x0) {
        nn_os_CriticalSection_Enter((unsigned int)&DAT_0064603c);
        if (DAT_0064606d != '\0') {
          if ((int *)*unaff_r11 == unaff_r11) {
            DAT_00646030 = (int *)0x0;
          }
          else {
            if (DAT_00646030 == unaff_r11) {
              DAT_00646030 = (int *)DAT_00646030[1];
            }
            *(int *)unaff_r11[1] = *unaff_r11;
            *(int *)(*unaff_r11 + 4) = unaff_r11[1];
          }
          unaff_r11[1] = 0;
          *unaff_r11 = 0;
          piVar4 = DAT_00646038;
          piVar3 = DAT_00646034;
          DAT_00646050 = DAT_00646050 - 1;
          if (unaff_r11[2] != 0) {
            if (DAT_00646034 != (int *)0x0) {
              unaff_r11[1] = (int)DAT_00646034;
              *(int **)(*piVar3 + 4) = unaff_r11;
              *unaff_r11 = *piVar3;
              *piVar3 = (int)unaff_r11;
            }
            else {
              unaff_r11[1] = (int)unaff_r11;
              *unaff_r11 = (int)unaff_r11;
              DAT_00646034 = unaff_r11;
            }
            DAT_00646058 = DAT_00646058 + 1;
          }
          else {
            if (DAT_00646038 != (int *)0x0) {
              unaff_r11[1] = (int)DAT_00646038;
              *(int **)(*piVar4 + 4) = unaff_r11;
              *unaff_r11 = *piVar4;
              *piVar4 = (int)unaff_r11;
            }
            else {
              unaff_r11[1] = (int)unaff_r11;
              *unaff_r11 = (int)unaff_r11;
              DAT_00646038 = unaff_r11;
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
      return temp_v0;
    }
    if (unaff_r11 != (int *)0x0) {
      nn_os_CriticalSection_Enter((unsigned int)&DAT_0064603c);
      if (DAT_0064606d != '\0') {
        if ((int *)*unaff_r11 == unaff_r11) {
          DAT_00646030 = (int *)0x0;
        }
        else {
          if (DAT_00646030 == unaff_r11) {
            DAT_00646030 = (int *)DAT_00646030[1];
          }
          *(int *)unaff_r11[1] = *unaff_r11;
          *(int *)(*unaff_r11 + 4) = unaff_r11[1];
        }
        unaff_r11[1] = 0;
        *unaff_r11 = 0;
        piVar4 = DAT_00646038;
        piVar3 = DAT_00646034;
        DAT_00646050 = DAT_00646050 - 1;
        if (unaff_r11[2] != 0) {
          if (DAT_00646034 != (int *)0x0) {
            unaff_r11[1] = (int)DAT_00646034;
            *(int **)(*piVar3 + 4) = unaff_r11;
            *unaff_r11 = *piVar3;
            *piVar3 = (int)unaff_r11;
          }
          else {
            unaff_r11[1] = (int)unaff_r11;
            *unaff_r11 = (int)unaff_r11;
            DAT_00646034 = unaff_r11;
          }
          DAT_00646058 = DAT_00646058 + 1;
        }
        else {
          if (DAT_00646038 != (int *)0x0) {
            unaff_r11[1] = (int)DAT_00646038;
            *(int **)(*piVar4 + 4) = unaff_r11;
            *unaff_r11 = *piVar4;
            *piVar4 = (int)unaff_r11;
          }
          else {
            unaff_r11[1] = (int)unaff_r11;
            *unaff_r11 = (int)unaff_r11;
            DAT_00646038 = unaff_r11;
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
  return temp_v0;
}
