/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00442554` (_code @ 0x442554, 0xdc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorDelete(void);
int FUN_003f2f1c(void);
int FUN_003fa2e8(unsigned int *);
int coproc_movefrom_User_R_Thread_and_Process_ID(void);
int software_interrupt(int);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int DAT_00589384; /* 0x589384 */
extern unsigned int *DAT_005c0a98; /* 0x5c0a98 */
extern unsigned int DAT_0062d2a4; /* 0x62d2a4 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: asdOperatorDelete. */
/* Supplied declaration required: FUN_003f2f1c. */
/* Supplied declaration required: FUN_003fa2e8. */
extern int FUN_00442280(void);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


unsigned int * FUN_00442554(unsigned int *param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned char temp_v1;
  
  puVar1 = (unsigned int *)*param_1;
  switch((unsigned int)puVar1) {
  case (unsigned int)0x1:
    puVar1 = (unsigned int *)0x0;
    if (param_1[0xc] != 0) {
      FUN_003f2f1c();
      asdOperatorDelete();
      param_1[0xc] = 0;
      return (unsigned int *)0x0;
    }
    break;
  case (unsigned int)0x6:
    puVar1 = (unsigned int *)0x0;
    if ((int *)param_1[0x10] != (int *)0x0) {
      (**(romwright_code **)(*(int *)param_1[0x10] + 4))();
      param_1[0x10] = 0;
      return (unsigned int *)0x0;
    }
    break;
  case (unsigned int)0x7:
    FUN_003fa2e8(param_1);
    return param_1;
  case (unsigned int)0x8:
    if ((int *)param_1[0xf] != (int *)0x0) {
      (**(romwright_code **)(*(int *)param_1[0xf] + 4))();
      param_1[0xf] = 0;
    }
    if ((int *)param_1[0xd] != (int *)0x0) {
      (**(romwright_code **)(*(int *)param_1[0xd] + 4))();
      param_1[0xd] = 0;
    }
    nn_os_CriticalSection_Enter((unsigned int)&DAT_0062d2a4);
    temp_v1 = DAT_00589384 == 0;
    nn_os_CriticalSection_Leave((unsigned int)&DAT_0062d2a4);
    if ((temp_v1) && (temp_v0 = FUN_00442280(), temp_v0 == 0)) {
      return (unsigned int *)0xd8a0c7f8;
    }
    temp_v0 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(unsigned int *)(temp_v0 + 0x80) = 0x40000;
    software_interrupt(0x32);
    puVar1 = DAT_005c0a98;
    if (((unsigned int)DAT_005c0a98 & 0x80000000) == 0) {
      puVar1 = *(unsigned int **)(temp_v0 + 0x84);
    }
    return puVar1;
  }
  return puVar1;
}

} /* extern "C" */
