/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d5604` (_code @ 0x2d5604, 0xb4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sceneTraverserVisit(unsigned int, unsigned int);
int FUN_002abbe8(unsigned int, int);
int asdMemFree(int *);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned int DAT_00464b7c; /* 0x464b7c */
extern unsigned int DAT_00464b80; /* 0x464b80 */
extern unsigned int g_asdModelTransformBuilder; /* 0x464b84 */
extern unsigned int DAT_00464b88; /* 0x464b88 */
extern unsigned int g_asdModelSlotArray1; /* 0x464ba4 */

/* Supplied declaration required: sceneTraverserVisit. */
/* Supplied declaration required: FUN_002abbe8. */
/* Supplied declaration required: asdMemFree. */


void FUN_002d5604(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = *param_1;
  if (temp_v0 != -1) {
    *param_1 = -1;
    FUN_002abbe8((&g_asdModelSlotArray1)[temp_v0] + 0x10,param_1[1]);
    if (*param_1 == 0 || temp_v0 == 0) {
      sceneTraverserVisit(DAT_00464b7c,g_asdModelTransformBuilder);
    }
    if (*param_1 == 1 || temp_v0 == 1) {
      sceneTraverserVisit(DAT_00464b80,DAT_00464b88);
    }
  }
  puVar2 = (unsigned int *)param_1[1];
  if (puVar2 != (unsigned int *)0x0) {
    (**(romwright_code **)*puVar2)(puVar2);
    (**(romwright_code **)(*(int *)puVar2[1] + 0xc))((int *)puVar2[1],puVar2);
    param_1[1] = 0;
  }
  asdMemFree(param_1);
  return;
}

} /* extern "C" */
