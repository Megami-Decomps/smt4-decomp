/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043f8c8` (_code @ 0x43f8c8, 0xb8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0043a040(...);
int nn_os_TransferMemoryBlock_Finalize(...);
int nn_os_TransferMemoryBlock_Initialize(...);
int software_interrupt(...);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern unsigned char DAT_005c0b00; /* 0x5c0b00 */
extern int DAT_005c0b04; /* 0x5c0b04 */
extern unsigned char DAT_0064600c; /* 0x64600c */
extern unsigned int DAT_00646020; /* 0x646020 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0043a040. */
extern unsigned int *FUN_00440418(int *, unsigned int, int);
/* Supplied declaration required: nn_os_TransferMemoryBlock_Finalize. */
/* Supplied declaration required: nn_os_TransferMemoryBlock_Initialize. */


unsigned int * FUN_0043f8c8(unsigned int param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = (unsigned int *)&DAT_005c0b04;
  FUN_0043a040(&DAT_005c0b04,"soc:U");
  if (-1 < (int)puVar1) {
    temp_v0 = DAT_005c0b04;
    if (param_2 != 0) {
      nn_os_TransferMemoryBlock_Initialize(&DAT_0064600c,param_1,param_2,0,3);
    }
    puVar1 = (unsigned int *)FUN_00440418(&temp_v0,DAT_00646020,param_2);
    if (-1 < (int)puVar1) {
      DAT_005c0b00 = 1;
      return (unsigned int *)0x0;
    }
    if (DAT_005c0b04 != 0) {
      software_interrupt(0x23);
      DAT_005c0b04 = 0;
    }
    nn_os_TransferMemoryBlock_Finalize(&DAT_0064600c);
  }
  return puVar1;
}

} /* extern "C" */
