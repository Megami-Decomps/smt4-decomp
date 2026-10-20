/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027ea28` (_code @ 0x27ea28, 0xc4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023478c(unsigned int, unsigned int);
int FUN_00296ae8(unsigned int, int, unsigned int, int, int, unsigned int, unsigned int);
int asdMemFreeSlot(void);
int FUN_002bd81c(unsigned int, int, int);
int FUN_002bd82c(unsigned int, int);
int FUN_0038abbc(unsigned int *, unsigned int, unsigned int, unsigned int);

/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

extern unsigned int g_aocMain; /* 0x432fc8 */

/* Supplied declaration required: FUN_0023478c. */
/* Supplied declaration required: FUN_00296ae8. */
/* Supplied declaration required: asdMemFreeSlot. */
/* Supplied declaration required: FUN_002bd81c. */
/* Supplied declaration required: FUN_002bd82c. */
extern unsigned int asdTextCreate(unsigned int);
/* Supplied declaration required: FUN_0038abbc. */


void FUN_0027ea28(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  
  *param_1 = *param_1 | 0x40;
  puVar3 = param_1 + 0x107;
  if (param_1[0x107] != 0) {
    asdMemFreeSlot();
    *puVar3 = 0;
  }
  temp_v0 = asdTextCreate(0);
  param_1[0x107] = temp_v0;
  FUN_002bd82c(temp_v0,0x320202ff);
  FUN_002bd81c(*puVar3,0,0x646464ff);
  temp_v1 = g_aocMain;
  FUN_0023478c(g_aocMain,0xffffffff);
  FUN_00296ae8(*puVar3,3,0xffffffff,0,3,temp_v1,param_2);
  temp_v1 = g_aocMain;
  FUN_0023478c(g_aocMain,param_2);
  FUN_0038abbc(param_1,temp_v1,param_3,param_4);
  return;
}

} /* extern "C" */
