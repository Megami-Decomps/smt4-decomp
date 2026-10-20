/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00189a80` (_code @ 0x189a80, 0x108 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a300(...);
int nn_os_LightEvent_Initialize(...);
int FUN_001ab838(...);
int nn_os_LightEvent_Wait(...);
int svcSleepThread(...);
int software_interrupt(...);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char LAB_004c4b40; /* 0x4c4b40 */
extern int DAT_0058936c; /* 0x58936c */
extern unsigned int DAT_0062d280; /* 0x62d280 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0019a300. */
/* Supplied declaration required: nn_os_LightEvent_Initialize. */
/* Supplied declaration required: FUN_001ab838. */
/* Supplied declaration required: nn_os_LightEvent_Wait. */
/* Supplied declaration required: svcSleepThread. */
extern unsigned int nn_err_CTR_FatalErr_Throw(unsigned int, unsigned int);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


void FUN_00189a80(unsigned char *param_1)

{
/* irregular: 2 unstructured edge(s); 6 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char temp_v0;
  int temp_v1 [2];
  
  do {
    nn_os_CriticalSection_Enter((unsigned int)&DAT_0062d280);
    if (DAT_0058936c == 0) {
      puVar1 = (unsigned int *)&DAT_0058936c;
      FUN_0019a300(&DAT_0058936c,"err:f");
      if (-1 < (int)puVar1) {
        puVar1 = (unsigned int *)0x0;
      }
    }
    else {
      puVar1 = (unsigned int *)0x0;
    }
    if (-1 < (int)puVar1) {
      FUN_001ab838(param_1 + 0xc,0xffff8001);
      temp_v1[0] = DAT_0058936c;
      nn_err_CTR_FatalErr_Throw((unsigned int)temp_v1,(unsigned int)param_1);
      if (DAT_0058936c != 0) {
        software_interrupt(0x23);
        DAT_0058936c = 0;
      }
      nn_os_CriticalSection_Leave((unsigned int)&DAT_0062d280);
      if (*param_1 != 2 && *param_1 != 5) {
        temp_v1[0] = 0;
        temp_v1[1] = 0;
        nn_os_LightEvent_Initialize(temp_v1,1);
        nn_os_LightEvent_Wait(temp_v1);
      }
      return;
    }
    temp_v0 = puVar1 == (unsigned int *)0xd0401834;
    if (temp_v0) {
      puVar1 = (unsigned int *)(unsigned int)*param_1;
    }
    if (!temp_v0 || puVar1 != (unsigned int *)0x2) {
      nn_os_CriticalSection_Leave((unsigned int)&DAT_0062d280);
      if (*param_1 != 2 && *param_1 != 5) {
        temp_v1[0] = 0;
        temp_v1[1] = 0;
        nn_os_LightEvent_Initialize(temp_v1,1);
        nn_os_LightEvent_Wait(temp_v1);
      }
      return;
    }
    svcSleepThread(&LAB_004c4b40,0);
    nn_os_CriticalSection_Leave((unsigned int)&DAT_0062d280);
  } while( 1 );
}

} /* extern "C" */
