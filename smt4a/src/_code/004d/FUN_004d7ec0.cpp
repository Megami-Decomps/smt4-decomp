/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d7ec0` (_code @ 0x4d7ec0, 0x11c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(int);
int scrScriptProcessStartEntry(unsigned int);
int FUN_004d7ca8(unsigned int *, int);
int FUN_004f741c(int);
int FUN_004f89e8(int);
int FUN_004f9080(void);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern int DAT_00573808; /* 0x573808 */
extern unsigned int DAT_005738b8; /* 0x5738b8 */
extern unsigned int DAT_005738bc; /* 0x5738bc */

/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: FUN_004d7ca8. */
/* Supplied declaration required: FUN_004f741c. */
/* Supplied declaration required: FUN_004f89e8. */
/* Supplied declaration required: FUN_004f9080. */
extern int FUN_004f9c2c(int);


void FUN_004d7ec0(unsigned int *param_1,int param_2)

{
/* irregular: 1 goto(s); 6 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  
  temp_v0 = *(char *)(param_1 + 0xb);
  if (temp_v0 != '\0') {
    if (temp_v0 != '\x01') {
      if (temp_v0 != '\x02') goto LAB_004d7eec;
    }
    else {
      temp_v1 = DAT_00573808;
      FUN_004f9080();
      if (temp_v1 == 0) {
        return;
      }
      FUN_004f89e8(DAT_00573808);
      *(unsigned char *)(param_1 + 0xb) = 2;
    }
  }
  else {
    FUN_004f741c(DAT_00573808);
    *(unsigned char *)(param_1 + 0xb) = 1;
    temp_v1 = DAT_00573808;
    FUN_004f9080();
    if (temp_v1 == 0) {
      return;
    }
    FUN_004f89e8(DAT_00573808);
    *(unsigned char *)(param_1 + 0xb) = 2;
  }
  temp_v1 = FUN_004f9c2c(DAT_00573808);
  if (temp_v1 == 0) {
    return;
  }
  *(unsigned char *)(param_1 + 0xb) = 3;
LAB_004d7eec:
  *param_1 = 9;
  if ((int)param_1[8] < 0) {
    return;
  }
  scrScriptProcessStartEntry(param_1[5]);
  *param_1 = 10;
  puVar4 = (unsigned int *)(param_2 + 0x45a0);
  param_1[10] = 0;
  if ((*puVar4 & DAT_005738b8) != 0 || (*(unsigned int *)(param_2 + 0x45a4) & DAT_005738bc) != 0) {
    sysPlaySe(0xdf);
  }
  if (param_1[9] == 5) {
    temp_v2 = *(unsigned int *)(param_2 + 0x45a4) | DAT_005738bc;
    *puVar4 = DAT_005738b8 | *puVar4;
    *(unsigned int *)(param_2 + 0x45a4) = temp_v2;
    sysPlaySe(0xdf);
  }
  FUN_004d7ca8(param_1,param_2);
  return;
}

} /* extern "C" */
