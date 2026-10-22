/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026f784` (_code @ 0x26f784, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int objSetAnglesDegrees(unsigned int, unsigned int *);
int FUN_00293e08(unsigned int);
int nodeOwnerSetTranslations(unsigned int, int *);
int FUN_00297684(void);
int lmapSceneSetUnk134(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: objSetAnglesDegrees. */
/* Supplied declaration required: FUN_00293e08. */
/* Supplied declaration required: nodeOwnerSetTranslations. */
extern int objSlotsAllEmpty(unsigned int);
/* Supplied declaration required: FUN_00297684. */
/* Supplied declaration required: lmapSceneSetUnk134. */


unsigned int FUN_0026f784(unsigned int *param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  temp_v1 = 0;
  if (param_1[7] != 0) {
    FUN_00297684();
    temp_v0 = objSlotsAllEmpty(param_1[7]);
    if (temp_v0 != 0) {
      temp_v2 = *param_1;
      uStack_14 = param_1[1];
      uStack_10 = param_1[2];
      nodeOwnerSetTranslations(param_1[7],&temp_v2);
      FUN_00293e08(param_1[7]);
      objSetAnglesDegrees(param_1[7],param_1 + 3);
      lmapSceneSetUnk134(0);
      temp_v1 = 1;
    }
  }
  return temp_v1;
}

} /* extern "C" */
