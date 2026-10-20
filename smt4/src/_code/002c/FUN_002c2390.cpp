/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c2390` (_code @ 0x2c2390, 0x94 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c2424(unsigned int, unsigned int);
int coproc_movefrom_User_R_Thread_and_Process_ID(void);
int software_interrupt(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
extern unsigned int *FUN_002ad264(void);
/* Supplied declaration required: FUN_002c2424. */


unsigned int FUN_002c2390(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v3 = 0;
  if (temp_v3 < *(int *)(param_1 + 0x34)) {
    do {
      temp_v1 = param_1 + temp_v3 * 0x1c;
      if (*(char *)(temp_v1 + 0x41) != '\0') {
        FUN_002c2424(*(unsigned int *)(temp_v1 + (unsigned int)(*(char *)(param_1 + 0x30) != '\0') * 4 + 0x44),
                     *(int *)(param_1 + 0x2c) * (unsigned int)*(unsigned char *)(temp_v1 + 0x40) * 4);
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < *(int *)(param_1 + 0x34));
  }
  temp_v3 = *(int *)(param_1 + 0x2c);
  temp_v2 = *(unsigned int *)(param_1 + (unsigned int)(*(char *)(param_1 + 0x30) != '\0') * 4 + 0x1f8);
  puVar1 = (unsigned int *)FUN_002ad264();
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int *)(temp_v1 + 0x80) = 0x80082;
  *(unsigned int *)(temp_v1 + 0x90) = 0xffff8001;
  *(unsigned int *)(temp_v1 + 0x84) = temp_v2;
  *(int *)(temp_v1 + 0x88) = temp_v3 << 1;
  *(unsigned int *)(temp_v1 + 0x8c) = 0;
  temp_v0 = *puVar1;
  software_interrupt(0x32);
  if ((temp_v0 & 0x80000000) == 0) {
    temp_v0 = *(unsigned int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}

} /* extern "C" */
