/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032850c` (_code @ 0x32850c, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int asdMemFree(int);
int eventCommandSetPendingCleanup(int);
int FUN_00226578(int, int);
int cameraRegistryRemove(int);
int FUN_00359370(int, int);
int jobRefStopAndFree(void);
int gfxObjectDestroy(unsigned int);
int FUN_003d8f20(unsigned int);

typedef int romwright_code(...);
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int g_handleRegistry; /* 0x56fcc0 */
extern int g_btlCamera; /* 0x571508 */

/* Supplied declaration required: jobStop. */
extern int jobGetWork(void);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: eventCommandSetPendingCleanup. */
/* Supplied declaration required: FUN_00226578. */
/* Supplied declaration required: cameraRegistryRemove. */
/* Supplied declaration required: FUN_00359370. */
/* Supplied declaration required: jobRefStopAndFree. */
/* Supplied declaration required: gfxObjectDestroy. */
/* Supplied declaration required: FUN_003d8f20. */


void FUN_0032850c(void)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = jobGetWork();
  temp_v0 = g_btlCamera;
  if (g_btlCamera != 0) {
    *(unsigned int *)(g_handleRegistry + 0xc) = 0;
    jobRefStopAndFree();
    FUN_003d8f20(*(unsigned int *)(temp_v0 + 0x40));
    *(unsigned int *)(temp_v0 + 0x40) = 0;
    eventCommandSetPendingCleanup(0);
    if (*(int *)(temp_v0 + 0x79c) != 0) {
      FUN_00359370(*(int *)(temp_v0 + 0x79c),0);
      gfxObjectDestroy(*(unsigned int *)(temp_v0 + 0x79c));
      *(unsigned int *)(temp_v0 + 0x79c) = 0;
      *(unsigned int *)(temp_v0 + 0x7a0) = 0;
    }
    if (*(int **)(temp_v0 + 0x658) != (int *)0x0) {
      (**(romwright_code **)(**(int **)(temp_v0 + 0x658) + 4))();
      *(unsigned int *)(temp_v0 + 0x658) = 0;
    }
    cameraRegistryRemove(temp_v0 + 0x6c);
    FUN_00226578(0,1);
    asdMemFree(g_btlCamera);
    g_btlCamera = 0;
  }
  jobStop(*(unsigned int *)(temp_v1 + 0x68),0);
  return;
}

} /* extern "C" */
