/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a4bac` (_code @ 0x2a4bac, 0x168 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00152bec(void);
int FUN_00152ed8(int *);
int FUN_002a72c0(int);
int asdMdlManagerDestroy(int);
int asdMemFree(void);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int DAT_0044ea5c; /* 0x44ea5c */

/* Supplied declaration required: FUN_00152bec. */
/* Supplied declaration required: FUN_00152ed8. */
/* Supplied declaration required: FUN_002a72c0. */
/* Supplied declaration required: asdMdlManagerDestroy. */
/* Supplied declaration required: asdMemFree. */


void FUN_002a4bac(int *param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  
  FUN_002a72c0(0);
  if (param_1[7] != 0) {
    FUN_00152bec();
    asdMdlManagerDestroy(param_1[7]);
    param_1[7] = 0;
  }
  if (param_1[10] != 0) {
    FUN_00152bec();
    asdMdlManagerDestroy(param_1[10]);
    param_1[10] = 0;
  }
  if (param_1[8] != 0) {
    FUN_00152bec();
    asdMdlManagerDestroy(param_1[8]);
    param_1[8] = 0;
  }
  if (param_1[9] != 0) {
    FUN_00152bec();
    asdMdlManagerDestroy(param_1[9]);
    param_1[9] = 0;
  }
  FUN_00152ed8(param_1);
  temp_v1 = 0;
  if (temp_v1 < *param_1) {
    do {
      puVar2 = (unsigned int *)param_1[temp_v1 + 0x15b];
      if (puVar2 != (unsigned int *)0x0) {
        (**(romwright_code **)*puVar2)(puVar2);
        (**(romwright_code **)(*(int *)puVar2[1] + 0xc))((int *)puVar2[1],puVar2);
        param_1[temp_v1 + 0x15b] = 0;
      }
      temp_v0 = 0;
      if (temp_v0 < param_1[2]) {
        do {
          puVar2 = (unsigned int *)param_1[temp_v1 * 0x20 + temp_v0 + 0x17b];
          if (puVar2 != (unsigned int *)0x0) {
            (**(romwright_code **)*puVar2)(puVar2);
            (**(romwright_code **)(*(int *)puVar2[1] + 0xc))((int *)puVar2[1],puVar2);
            param_1[temp_v1 * 0x20 + temp_v0 + 0x17b] = 0;
          }
          temp_v0 = temp_v0 + 1;
        } while (temp_v0 < param_1[2]);
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < *param_1);
  }
  if (param_1[6] != 0) {
    asdMemFree();
    param_1[6] = 0;
  }
  temp_v1 = DAT_0044ea5c;
  temp_v0 = DAT_0044ea5c + 0x590;
  *(int *)(DAT_0044ea5c + 0x80) = DAT_0044ea5c + 0x88;
  *(int *)(temp_v1 + 0x84) = temp_v0;
  return;
}

} /* extern "C" */
