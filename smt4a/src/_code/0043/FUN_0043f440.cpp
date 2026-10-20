/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043f440` (_code @ 0x43f440, 0x420 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a46c(unsigned char *, char *, int);
int FUN_001bcd48(int, int);
int FUN_002f5020(int, unsigned char *, int);
int FUN_0042cc10(unsigned int *);
int software_interrupt(int);

typedef int romwright_code(...);
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

extern unsigned char LAB_0043dd40; /* 0x43dd40 */
extern unsigned int DAT_0064602c; /* 0x64602c */
extern unsigned int *DAT_00646030; /* 0x646030 */
extern int *DAT_00646034; /* 0x646034 */
extern int *DAT_00646038; /* 0x646038 */
extern unsigned int DAT_0064603c; /* 0x64603c */
extern unsigned int DAT_00646048; /* 0x646048 */
extern int DAT_00646050; /* 0x646050 */
extern int DAT_00646054; /* 0x646054 */
extern int DAT_00646058; /* 0x646058 */
extern unsigned int DAT_00646060; /* 0x646060 */
extern unsigned char DAT_00646064; /* 0x646064 */
extern signed char DAT_0064606d; /* 0x64606d */
extern unsigned char DAT_0064606e; /* 0x64606e */
extern int DAT_00646070; /* 0x646070 */
extern int *DAT_00646074; /* 0x646074 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0019a46c. */
/* Supplied declaration required: FUN_001bcd48. */
extern unsigned int wstrlen(char *);
/* Supplied declaration required: FUN_002f5020. */
/* Supplied declaration required: FUN_0042cc10. */
extern int FUN_0043de60(unsigned int *);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


int FUN_0043f440(int *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  int temp_v1;
  int *piVar4;
  unsigned int *puVar5;
  int temp_v2;
  unsigned int *puVar7;
  unsigned char temp_v3;
  char *pcVar9;
  
  temp_v0 = wstrlen("soc:U");
  DAT_00646070 = (**(romwright_code **)*param_1)(param_1,param_2 * 0xc,4,*(romwright_code **)*param_1,param_4);
  if (DAT_00646070 == 0) {
    temp_v1 = -0x279f8c0d;
  }
  else {
    FUN_002f5020(DAT_00646070,&LAB_0043dd40,0xc);
    temp_v1 = DAT_00646070;
    pcVar9 = "soc:U";
    DAT_00646074 = param_1;
    nn_os_CriticalSection_Enter((unsigned int)&DAT_0064603c);
    if (DAT_0064606d != '\0') {
      temp_v1 = -0x375f8c07;
      nn_os_CriticalSection_Leave((unsigned int)&DAT_0064603c);
    }
    else {
      FUN_0019a46c(&DAT_00646064,pcVar9,9);
      temp_v2 = 0;
      DAT_00646060 = temp_v0;
      if (0 < param_2) {
        do {
          piVar1 = DAT_00646038;
          piVar4 = (int *)(temp_v1 + temp_v2 * 0xc);
          if (DAT_00646038 != (int *)0x0) {
            piVar4[1] = (int)DAT_00646038;
            *(int **)(*piVar1 + 4) = piVar4;
            *piVar4 = *piVar1;
            *piVar1 = (int)piVar4;
          }
          else {
            piVar4[1] = (int)piVar4;
            *piVar4 = (int)piVar4;
            DAT_00646038 = piVar4;
          }
          temp_v2 = temp_v2 + 1;
          DAT_00646054 = DAT_00646054 + 1;
        } while (temp_v2 < param_2);
      }
      temp_v1 = FUN_0043de60(&DAT_0064602c);
      if (temp_v1 < 0) {
        nn_os_CriticalSection_Leave((unsigned int)&DAT_0064603c);
        nn_os_CriticalSection_Enter((unsigned int)&DAT_0064603c);
        DAT_0064606e = 1;
        FUN_0042cc10(&DAT_00646048);
        while (piVar1 = DAT_00646034, DAT_00646034 != (int *)0x0) {
          if ((int *)*DAT_00646034 == DAT_00646034) {
            DAT_00646034 = (int *)0x0;
          }
          else {
            temp_v2 = *DAT_00646034;
            piVar4 = DAT_00646034 + 1;
            DAT_00646034 = (int *)DAT_00646034[1];
            *(int *)*piVar4 = temp_v2;
            *(int *)(*piVar1 + 4) = piVar1[1];
          }
          piVar1[1] = 0;
          *piVar1 = 0;
          if (piVar1[2] != 0) {
            software_interrupt(0x23);
            piVar1[2] = 0;
          }
          DAT_00646058 = DAT_00646058 - 1;
        }
        while (piVar1 = DAT_00646038, DAT_00646038 != (int *)0x0) {
          DAT_00646054 = DAT_00646054 - 1;
          if ((int *)*DAT_00646038 == DAT_00646038) {
            DAT_00646038 = (int *)0x0;
          }
          else {
            temp_v2 = *DAT_00646038;
            piVar4 = DAT_00646038 + 1;
            DAT_00646038 = (int *)DAT_00646038[1];
            *(int *)*piVar4 = temp_v2;
            *(int *)(*piVar1 + 4) = piVar1[1];
          }
          piVar1[1] = 0;
          *piVar1 = 0;
          if (piVar1[2] != 0) {
            software_interrupt(0x23);
            piVar1[2] = 0;
          }
        }
        nn_os_CriticalSection_Leave((unsigned int)&DAT_0064603c);
        nn_os_CriticalSection_Enter((unsigned int)&DAT_0064603c);
        puVar7 = DAT_00646030;
        if (DAT_00646030 != (unsigned int *)0x0) {
          do {
            if (puVar7[2] != 0) {
              software_interrupt(0x23);
              puVar7[2] = 0;
            }
            puVar5 = (unsigned int *)0x0;
            if (DAT_00646030 != (unsigned int *)0x0) {
              puVar5 = (unsigned int *)*DAT_00646030;
            }
            temp_v3 = puVar5 != puVar7;
            if (temp_v3) {
              puVar7 = (unsigned int *)puVar7[1];
            }
          } while (temp_v3 && puVar7 != (unsigned int *)0x0);
        }
        while (DAT_00646050 != 0) {
          nn_os_CriticalSection_Leave((unsigned int)&DAT_0064603c);
          FUN_001bcd48(100000000,0);
          nn_os_CriticalSection_Enter((unsigned int)&DAT_0064603c);
        }
        DAT_0064606d = '\0';
        nn_os_CriticalSection_Leave((unsigned int)&DAT_0064603c);
        nn_os_CriticalSection_Enter((unsigned int)&DAT_0064603c);
        DAT_0064606e = 1;
        FUN_0042cc10(&DAT_00646048);
        while (piVar1 = DAT_00646034, DAT_00646034 != (int *)0x0) {
          if ((int *)*DAT_00646034 == DAT_00646034) {
            DAT_00646034 = (int *)0x0;
          }
          else {
            temp_v2 = *DAT_00646034;
            piVar4 = DAT_00646034 + 1;
            DAT_00646034 = (int *)DAT_00646034[1];
            *(int *)*piVar4 = temp_v2;
            *(int *)(*piVar1 + 4) = piVar1[1];
          }
          piVar1[1] = 0;
          *piVar1 = 0;
          if (piVar1[2] != 0) {
            software_interrupt(0x23);
            piVar1[2] = 0;
          }
          DAT_00646058 = DAT_00646058 - 1;
        }
        while (piVar1 = DAT_00646038, DAT_00646038 != (int *)0x0) {
          DAT_00646054 = DAT_00646054 - 1;
          if ((int *)*DAT_00646038 == DAT_00646038) {
            DAT_00646038 = (int *)0x0;
          }
          else {
            temp_v2 = *DAT_00646038;
            piVar4 = DAT_00646038 + 1;
            DAT_00646038 = (int *)DAT_00646038[1];
            *(int *)*piVar4 = temp_v2;
            *(int *)(*piVar1 + 4) = piVar1[1];
          }
          piVar1[1] = 0;
          *piVar1 = 0;
          if (piVar1[2] != 0) {
            software_interrupt(0x23);
            piVar1[2] = 0;
          }
        }
        nn_os_CriticalSection_Leave((unsigned int)&DAT_0064603c);
        nn_os_CriticalSection_Enter((unsigned int)&DAT_0064603c);
        nn_os_CriticalSection_Leave((unsigned int)&DAT_0064603c);
      }
      else {
        DAT_0064606d = '\x01';
        DAT_0064606e = 0;
        nn_os_CriticalSection_Leave((unsigned int)&DAT_0064603c);
        temp_v1 = 0;
      }
    }
    if (temp_v1 < 0) {
      (**(romwright_code **)(*param_1 + 4))(param_1,DAT_00646070);
      DAT_00646070 = 0;
    }
  }
  return temp_v1;
}

} /* extern "C" */
