/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004824fc` (_code @ 0x4824fc, 0xd4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00178b04(int, unsigned char *, int);
int controllerSetDestination(int, int *);
int controllerSetPosition(int);
int controllerSetRotationEulerDegrees(int);
int FUN_003fe86c(int, int, int);
int moriModelContentCopyBody(void);
int handleRegistryRegisterObject(unsigned int, int);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char LAB_004825d0; /* 0x4825d0 */
extern unsigned int g_handleRegistry; /* 0x56fcc0 */

/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: controllerSetDestination. */
/* Supplied declaration required: controllerSetPosition. */
/* Supplied declaration required: controllerSetRotationEulerDegrees. */
/* Supplied declaration required: FUN_003fe86c. */
/* Supplied declaration required: moriModelContentCopyBody. */
extern unsigned int modelListInit(void);
/* Supplied declaration required: handleRegistryRegisterObject. */


void FUN_004824fc(int param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = 0x20;
  FUN_00178b04(0x20,&LAB_004825d0,0x9a);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = modelListInit();
  }
  *(unsigned int *)(param_1 + 0x78) = temp_v1;
  moriModelContentCopyBody();
  temp_v0 = *(int *)(*(int *)(param_1 + 0x78) + 4);
  handleRegistryRegisterObject(g_handleRegistry,temp_v0);
  *(unsigned int *)(temp_v0 + 4) = *(unsigned int *)(temp_v0 + 4) | 3;
  *(unsigned char *)(param_1 + 0xc) = *(unsigned char *)(param_1 + 0xc) | 2;
  temp_v2 = 0;
  temp_v3 = 0;
  temp_v4 = 0;
  controllerSetDestination(temp_v0,&temp_v2);
  controllerSetRotationEulerDegrees(temp_v0);
  controllerSetPosition(temp_v0);
  FUN_003fe86c(temp_v0,0,2);
  return;
}

} /* extern "C" */
