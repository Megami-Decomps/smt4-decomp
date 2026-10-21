/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00379108` (_code @ 0x379108, 0x128 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int ptrListRemoveClearOwner(unsigned int);
int FUN_001bc124(void);
int FUN_001f3eec(void);
int controllerSetDestination(int, int *);
int VectorSignedToFloat(unsigned int, int);

typedef int romwright_code(...);
/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned int g_handleRegistry; /* 0x56fcc0 */
extern int g_lmapScene; /* 0x581288 */
extern float DAT_0058128c; /* 0x58128c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: ptrListRemoveClearOwner. */
/* Supplied declaration required: FUN_001bc124. */
/* Supplied declaration required: FUN_001f3eec. */
/* Supplied declaration required: controllerSetDestination. */


void FUN_00379108(void)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int in_fpscr;
  float temp_v3;
  int temp_v4;
  float temp_v5;
  unsigned int temp_v6;
  
  temp_v2 = g_lmapScene;
  temp_v1 = *(int *)(g_lmapScene + 0x250);
  if (temp_v1 == 0) {
    temp_v3 = DAT_0058128c + 0.1f;
    DAT_0058128c = temp_v3;
    *(int *)(g_lmapScene + 0x24c) = *(int *)(g_lmapScene + 0x24c) + 1;
    temp_v6 = *(unsigned int *)(temp_v2 + 0x25c);
    temp_v4 = *(unsigned int *)(temp_v2 + 0x254);
    temp_v5 = *(float *)(temp_v2 + 600);
    FUN_001bc124();
    temp_v5 = temp_v5 + temp_v3 * 2.0f;
    VectorSignedToFloat(*(unsigned int *)(g_lmapScene + 0x24c),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v0 = 0x3f800000;
    FUN_001f3eec();
    temp_v2 = *(int *)(*(int *)(g_lmapScene + 400) + 4);
    controllerSetDestination(temp_v2,&temp_v4);
    *(unsigned int *)(temp_v2 + 0x1fc) = temp_v0;
    return;
  }
  if (temp_v1 != 1) {
    if (temp_v1 != 2) {
      return;
    }
    if (*(int **)(g_lmapScene + 400) != (int *)0x0) {
      (**(romwright_code **)(**(int **)(g_lmapScene + 400) + 4))();
      *(unsigned int *)(g_lmapScene + 400) = 0;
    }
    temp_v0 = 3;
  }
  else {
    if ((*(int *)(g_lmapScene + 400) != 0) && (*(int *)(*(int *)(g_lmapScene + 400) + 4) != 0)) {
      ptrListRemoveClearOwner(g_handleRegistry);
    }
    temp_v0 = 2;
  }
  *(unsigned int *)(g_lmapScene + 0x250) = temp_v0;
  return;
}

} /* extern "C" */
