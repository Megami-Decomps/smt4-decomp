/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ad4f8` (_code @ 0x2ad4f8, 0x108 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int DAT_0044e608; /* 0x44e608 */
extern unsigned char DAT_004c4b40; /* 0x4c4b40 */
extern unsigned int DAT_004d4280; /* 0x4d4280 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_001383a8. */
/* Supplied declaration required: FUN_00144f90. */
/* Supplied declaration required: FUN_002bb150. */
/* Supplied declaration required: FUN_002c3424. */
extern unsigned int nn_err_CTR_FatalErr_Throw(unsigned int, unsigned int);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);
extern void nn_os_LightEvent_Initialize(unsigned int, unsigned char);


void FUN_002ad4f8(unsigned char *param_1)

{
/* irregular: 2 unstructured edge(s); 5 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char temp_v0;
  int temp_v1 [2];
  
  do {
    nn_os_CriticalSection_Enter((unsigned int)&DAT_004d4280);
    if (DAT_0044e608 == 0) {
      puVar1 = (unsigned int *)&DAT_0044e608;
      FUN_001383a8(&DAT_0044e608,"err:f");
      if (-1 < (int)puVar1) {
        puVar1 = (unsigned int *)0x0;
      }
    }
    else {
      puVar1 = (unsigned int *)0x0;
    }
    if (-1 < (int)puVar1) {
      FUN_00144f90(param_1 + 0xc,0xffff8001);
      temp_v1[0] = DAT_0044e608;
      nn_err_CTR_FatalErr_Throw((unsigned int)temp_v1,(unsigned int)param_1);
      if (DAT_0044e608 != 0) {
        software_interrupt(0x23);
        DAT_0044e608 = 0;
      }
      nn_os_CriticalSection_Leave((unsigned int)&DAT_004d4280);
      if (*param_1 != 2 && *param_1 != 5) {
        temp_v1[0] = 0;
        temp_v1[1] = 0;
        nn_os_LightEvent_Initialize((unsigned int)temp_v1,1);
        FUN_002c3424(temp_v1);
      }
      return;
    }
    temp_v0 = puVar1 == (unsigned int *)0xd0401834;
    if (temp_v0) {
      puVar1 = (unsigned int *)(unsigned int)*param_1;
    }
    if (!temp_v0 || puVar1 != (unsigned int *)0x2) {
      nn_os_CriticalSection_Leave((unsigned int)&DAT_004d4280);
      if (*param_1 != 2 && *param_1 != 5) {
        temp_v1[0] = 0;
        temp_v1[1] = 0;
        nn_os_LightEvent_Initialize((unsigned int)temp_v1,1);
        FUN_002c3424(temp_v1);
      }
      return;
    }
    FUN_002bb150(&DAT_004c4b40,0);
    nn_os_CriticalSection_Leave((unsigned int)&DAT_004d4280);
  } while( 1 );
}
