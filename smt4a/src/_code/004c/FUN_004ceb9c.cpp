/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ceb9c` (_code @ 0x4ceb9c, 0x18c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001517b4(...);
int FUN_001641b4(...);
int sysPlaySe(...);
int scrScriptProcessStartEntry(...);
int FUN_0034913c(...);
int panelSetTarget(...);
int FUN_0037c8e4(...);
int FUN_00388758(...);
int FUN_004cdbd4(...);

typedef struct fn_004ceb9c_arg0 fn_004ceb9c_arg0;
struct fn_004ceb9c_arg0 {
    unsigned char pad_0x0[0xc];
    unsigned char field_0xc; /* +0xc */
    unsigned char pad_0xd[0x3];
    undefined4 field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x4];
    undefined4 field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0x538];
    unsigned char field_0x554; /* +0x554 */
    unsigned char pad_0x555[0x3b];
    unsigned char field_0x590; /* +0x590 */
    unsigned char pad_0x591[0x7];
    undefined4 field_0x598; /* +0x598 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char LAB_004ced30; /* 0x4ced30 */
extern unsigned char LAB_004ced40; /* 0x4ced40 */

/* Supplied declaration required: FUN_001517b4. */
/* Supplied declaration required: FUN_001641b4. */
/* Supplied declaration required: sysPlaySe. */
extern int FUN_00224880(unsigned int);
extern int FUN_00239414(void);
extern int FUN_0026272c(void);
/* Supplied declaration required: scrScriptProcessStartEntry. */
extern int FUN_002a4b60(void);
/* Supplied declaration required: FUN_0034913c. */
extern int FUN_0034919c(void);
extern int tableGroupFindEntryIndex(unsigned int, unsigned char *);
/* Supplied declaration required: panelSetTarget. */
/* Supplied declaration required: FUN_0037c8e4. */
/* Supplied declaration required: FUN_00388758. */
/* Supplied declaration required: FUN_004cdbd4. */


void FUN_004ceb9c(fn_004ceb9c_arg0 *param_1)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00224880(param_1->field_0x18);
  sysPlaySe(0x122);
  if (temp_v0 != 2) {
    temp_v0 = 1;
    FUN_001517b4();
    if (temp_v0 == 0) {
      return;
    }
    temp_v0 = FUN_00239414();
    if (temp_v0 != 0) {
      return;
    }
    FUN_001641b4(0x100020f);
    FUN_0034913c();
    param_1->field_0x598 = 0xb;
    temp_v0 = tableGroupFindEntryIndex(param_1->field_0x10,&LAB_004ced30);
    if (-1 < temp_v0) {
      scrScriptProcessStartEntry(param_1->field_0x18);
    }
    temp_v0 = FUN_00224880(param_1->field_0x18);
    if (temp_v0 != 2) {
      return;
    }
    temp_v0 = FUN_0026272c();
  }
  else {
    FUN_0034913c();
    temp_v0 = FUN_002a4b60();
    if (temp_v0 == 0) {
      temp_v0 = tableGroupFindEntryIndex(param_1->field_0x10,&LAB_004ced40);
      if (-1 < temp_v0) {
        scrScriptProcessStartEntry(param_1->field_0x18);
      }
      temp_v0 = FUN_0034919c();
      if (temp_v0 == 0) {
        FUN_0037c8e4(1,0);
        panelSetTarget(-*(int *)(*(int *)&param_1->field_0x590 + *(int *)&param_1->field_0x554 * 4),0)
        ;
      }
      param_1->field_0x598 = 6;
      FUN_004cdbd4(param_1);
      return;
    }
    temp_v0 = tableGroupFindEntryIndex(param_1->field_0x10,&LAB_004ced30);
    if (-1 < temp_v0) {
      scrScriptProcessStartEntry(param_1->field_0x18);
    }
    temp_v0 = FUN_0034919c();
    if (temp_v0 != 0) {
      FUN_00388758(0);
    }
    param_1->field_0x598 = 0xb;
    temp_v0 = FUN_00224880(param_1->field_0x18);
    if (temp_v0 != 2) {
      return;
    }
    temp_v0 = FUN_0026272c();
  }
  if (temp_v0 == 0) {
    FUN_00388758(0);
  }
  *(unsigned int *)&param_1->field_0xc = 4;
  return;
}

} /* extern "C" */
