/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002236a4` (_code @ 0x2236a4, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int mapDepartSetTarget(int, int, int);
int FUN_0027d5ac(int);
int FUN_0028527c(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: mapDepartSetTarget. */
/* Supplied declaration required: FUN_0027d5ac. */
/* Supplied declaration required: FUN_0028527c. */
extern int FUN_00285574(void);


void FUN_002236a4(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00285574();
  temp_v0 = temp_v0 * 0x44;
  mapDepartSetTarget((int)*(char *)(temp_v0 + 0x447f55),(int)*(char *)(temp_v0 + 0x447f56),
               (int)*(char *)(temp_v0 + 0x447f57));
  FUN_0027d5ac(0);
  FUN_0028527c(0);
  return;
}

} /* extern "C" */
