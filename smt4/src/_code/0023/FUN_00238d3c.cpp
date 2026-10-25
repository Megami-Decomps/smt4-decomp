/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00238d3c` (_code @ 0x238d3c, 0x1ac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int threadSleepDuration(int, int);
int FUN_002c40f8(unsigned char *, int *, int, int);
int FUN_002c526c(void);
int FUN_00358e78(int *);
int software_interrupt(int);

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

extern signed char DAT_004656ca; /* 0x4656ca */
extern signed char DAT_004656cb; /* 0x4656cb */
extern signed char DAT_004656cc; /* 0x4656cc */
extern unsigned int g_moduleCriticalSection2; /* 0x4e629c */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
extern int resourceDispatch(unsigned int);
extern int FUN_00239a54(void);
/* Supplied declaration required: threadSleepDuration. */
/* Supplied declaration required: FUN_002c40f8. */
/* Supplied declaration required: FUN_002c526c. */
/* Supplied declaration required: FUN_00358e78. */
extern unsigned int resourceDispatch2(int *);
extern int FUN_0035ae94(unsigned int);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


int FUN_00238d3c(int param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char *puVar5;
  int temp_v4;
  int temp_v5;
  int temp_v6 [3];
  int temp_v7;
  unsigned char temp_v8 [8];
  
  temp_v4 = -0x375ef410;
  if ((DAT_004656ca != '\0') || (temp_v0 = FUN_00239a54(), temp_v0 != 0)) {
    nn_os_CriticalSection_Enter((unsigned int)&g_moduleCriticalSection2);
    if (DAT_004656cb == '\0') {
      nn_os_CriticalSection_Leave((unsigned int)&g_moduleCriticalSection2);
      return -0x375ef410;
    }
    if (DAT_004656cc == '\0') {
      temp_v0 = FUN_0035ae94(0);
      if (temp_v0 < 0) {
        nn_os_CriticalSection_Leave((unsigned int)&g_moduleCriticalSection2);
        return temp_v0;
      }
      threadSleepDuration(16000000,0);
      DAT_004656cc = '\x01';
    }
    if (param_2 != 0) {
      if (param_1 != 0) {
        temp_v1 = resourceDispatch(0xc);
      }
      else {
        temp_v1 = resourceDispatch(0xb);
      }
    }
    else {
      temp_v5 = 0;
      temp_v6[0] = 0;
      temp_v2 = resourceDispatch2(temp_v6);
      temp_v0 = 0;
      if ((temp_v2 & 0x80000000) == 0) {
        temp_v0 = temp_v6[0];
      }
      if (param_1 != 0) {
        temp_v3 = resourceDispatch(0xc);
      }
      else {
        temp_v3 = resourceDispatch(0xb);
      }
      while( 1 ) {
        temp_v6[0] = 1000000000;
        temp_v6[1] = 0;
        puVar5 = temp_v8;
        temp_v7 = temp_v0;
        FUN_002c40f8(puVar5,&temp_v7,1,0);
        if ((int)puVar5 < 0) {
          FUN_002c526c();
        }
        temp_v1 = temp_v3;
        if (((((unsigned int)puVar5 & 0x3ff) != 0x3fe) || (FUN_00358e78(temp_v6 + 2), temp_v6[2] == 1)) ||
           (temp_v1 = temp_v4, temp_v5 >= 0x3d)) break;
        temp_v5 = temp_v5 + 1;
      }
      if (temp_v0 != 0) {
        software_interrupt(0x23);
      }
    }
    nn_os_CriticalSection_Leave((unsigned int)&g_moduleCriticalSection2);
    temp_v4 = temp_v1;
  }
  return temp_v4;
}

} /* extern "C" */
