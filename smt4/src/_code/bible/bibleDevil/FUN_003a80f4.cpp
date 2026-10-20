/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a80f4` (_code @ 0x3a80f4, 0x144 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022d434(int);
int FUN_0022e4a4(int, int, int);
int FUN_00232848(void);
int FUN_00233240(int, int);
int FUN_0026c57c(void);
int FUN_0029ca58(void);
int FUN_0029cc44(int);
int FUN_0029ee6c(int, int);
int FUN_002a0cb0(void);
int FUN_002a0cc8(int);
int FUN_002b8838(void);
int FUN_003a7fec(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char DAT_0043d9c8; /* 0x43d9c8 */

extern int FUN_0019e0c0(unsigned int);
/* Supplied declaration required: FUN_0022d434. */
/* Supplied declaration required: FUN_0022e4a4. */
/* Supplied declaration required: FUN_00232848. */
/* Supplied declaration required: FUN_00233240. */
extern int FUN_0023360c(int);
extern int FUN_00240d5c(int);
/* Supplied declaration required: FUN_0026c57c. */
extern int FUN_002973d8(void);
/* Supplied declaration required: FUN_0029ca58. */
/* Supplied declaration required: FUN_0029cc44. */
extern int FUN_0029e924(int);
/* Supplied declaration required: FUN_0029ee6c. */
/* Supplied declaration required: FUN_002a0cb0. */
/* Supplied declaration required: FUN_002a0cc8. */
/* Supplied declaration required: FUN_002b8838. */
/* Supplied declaration required: FUN_003a7fec. */


void FUN_003a80f4(int param_1)

{
/* irregular: 12 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_0019e0c0(*(unsigned int *)(param_1 + 0x5a0));
  if (temp_v0 == 2) {
    temp_v0 = FUN_002973d8();
    if (temp_v0 == 0) {
      temp_v0 = FUN_0023360c(param_1 + 0x20);
      FUN_003a7fec(param_1,*(unsigned short *)(param_1 + temp_v0 * 0x20 + 0x5ac));
      (*(unsigned int *)((unsigned char *)&DAT_0043d9c8 + 0x4)) = 0xffffffff;
      temp_v1 = FUN_00240d5c(param_1 + 0x20);
      temp_v0 = FUN_0029e924(param_1 + 0x20);
      FUN_0022d434(param_1);
      if (temp_v0 >= 1) {
        temp_v0 = temp_v0 - 1;
      }
      else if ((temp_v1 != 0) && (*(int *)(param_1 + 0x28) <= temp_v1 + temp_v0)) {
        temp_v1 = temp_v1 - 1;
      }
      FUN_0022e4a4(param_1 + 0x20,temp_v0,temp_v1);
    }
    FUN_002a0cb0();
    FUN_002b8838();
    FUN_002a0cc8(0);
    if (*(short *)(param_1 + 0x5a8) < 1) {
      if (*(char *)(param_1 + 0x5a4) == '\0') {
        FUN_0029cc44(1);
      }
      FUN_0029ee6c(0,0x323232ff);
      FUN_0029ca58();
      FUN_00233240(param_1 + 0xdc,1);
      FUN_002a0cc8(1);
      *(unsigned int *)(param_1 + 0x14) = 0xb;
      *(unsigned int *)(param_1 + 0x18) = 0;
      FUN_00232848();
      FUN_0026c57c();
      return;
    }
    *(unsigned int *)(param_1 + 0x14) = 2;
    *(unsigned int *)(param_1 + 0x18) = 0;
  }
  return;
}

} /* extern "C" */
