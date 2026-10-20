/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032850c` (_code @ 0x32850c, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int asdMemFree(int);
int FUN_00203a6c(int);
int FUN_00226578(int, int);
int FUN_00358f38(int);
int FUN_00359370(int, int);
int jobRefStopAndFree(void);
int FUN_003ae864(unsigned int);
int FUN_003d8f20(unsigned int);

typedef int romwright_code(...);
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int DAT_0056fcc0; /* 0x56fcc0 */
extern int DAT_00571508; /* 0x571508 */

/* Supplied declaration required: jobStop. */
extern int jobGetWork(void);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_00203a6c. */
/* Supplied declaration required: FUN_00226578. */
/* Supplied declaration required: FUN_00358f38. */
/* Supplied declaration required: FUN_00359370. */
/* Supplied declaration required: jobRefStopAndFree. */
/* Supplied declaration required: FUN_003ae864. */
/* Supplied declaration required: FUN_003d8f20. */


void FUN_0032850c(void)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = jobGetWork();
  temp_v0 = DAT_00571508;
  if (DAT_00571508 != 0) {
    *(unsigned int *)(DAT_0056fcc0 + 0xc) = 0;
    jobRefStopAndFree();
    FUN_003d8f20(*(unsigned int *)(temp_v0 + 0x40));
    *(unsigned int *)(temp_v0 + 0x40) = 0;
    FUN_00203a6c(0);
    if (*(int *)(temp_v0 + 0x79c) != 0) {
      FUN_00359370(*(int *)(temp_v0 + 0x79c),0);
      FUN_003ae864(*(unsigned int *)(temp_v0 + 0x79c));
      *(unsigned int *)(temp_v0 + 0x79c) = 0;
      *(unsigned int *)(temp_v0 + 0x7a0) = 0;
    }
    if (*(int **)(temp_v0 + 0x658) != (int *)0x0) {
      (**(romwright_code **)(**(int **)(temp_v0 + 0x658) + 4))();
      *(unsigned int *)(temp_v0 + 0x658) = 0;
    }
    FUN_00358f38(temp_v0 + 0x6c);
    FUN_00226578(0,1);
    asdMemFree(DAT_00571508);
    DAT_00571508 = 0;
  }
  jobStop(*(unsigned int *)(temp_v1 + 0x68),0);
  return;
}

} /* extern "C" */
