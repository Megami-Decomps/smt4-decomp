/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038358c` (_code @ 0x38358c, 0xe4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int qcMainSetMode(int);
int FUN_0026f960(int);
int FUN_00270028(int);
int FUN_00275dec(void);
int FUN_002917b8(void);
int FUN_002b63c0(void);
int FUN_002b8e84(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: qcMainSetMode. */
/* Supplied declaration required: FUN_0026f960. */
/* Supplied declaration required: FUN_00270028. */
/* Supplied declaration required: FUN_00275dec. */
extern int FUN_00287894(void);
extern int FUN_002903f0(void);
/* Supplied declaration required: FUN_002917b8. */
/* Supplied declaration required: FUN_002b63c0. */
/* Supplied declaration required: FUN_002b8e84. */


void FUN_0038358c(int param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = *(int *)(param_1 + 8);
  if (temp_v0 != 0) {
    if (temp_v0 != 1) {
      if (((temp_v0 == 2) && (temp_v0 = FUN_002903f0(), temp_v0 != 0)) &&
         (temp_v1 = FUN_00287894(), temp_v1 == 6)) {
        qcMainSetMode(1);
        FUN_002b63c0();
        FUN_0026f960(*(unsigned short *)(temp_v0 + 0x148));
        FUN_002917b8();
        return;
      }
    }
    else {
      if (*(int *)(param_1 + 0xc) == 0) {
        FUN_00270028(1);
      }
      temp_v0 = *(int *)(param_1 + 0xc);
      temp_v1 = temp_v0 + 1;
      *(int *)(param_1 + 0xc) = temp_v1;
      if (temp_v1 >= 4) {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        *(int *)(param_1 + 0xc) = temp_v0 + 2;
        return;
      }
    }
  }
  else {
    temp_v0 = *(int *)(param_1 + 0xc) + 1;
    *(int *)(param_1 + 0xc) = temp_v0;
    if (temp_v0 == 7) {
      FUN_002b8e84(0x1000184);
      FUN_00275dec();
    }
    if (*(int *)(param_1 + 0xc) == 8) {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      *(unsigned int *)(param_1 + 0xc) = 0;
    }
  }
  return;
}

} /* extern "C" */
