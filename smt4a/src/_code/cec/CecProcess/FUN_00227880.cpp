/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00227880` (_code @ 0x227880, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016007c(void);
int FUN_00163060(int, int, int, int, int);
int FUN_002e6354(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_0057f390; /* 0x57f390 */

/* Supplied declaration required: FUN_0016007c. */
/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_002e6354. */
extern unsigned int FUN_004bb440(void);


void FUN_00227880(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = 0x100;
  FUN_00163060(0x100,0x100,0,0xd68,1);
  FUN_002e6354();
  temp_v1 = 0x14;
  DAT_0057f390 = temp_v0;
  FUN_0016007c();
  temp_v2 = 0;
  if (temp_v1 != 0) {
    temp_v2 = FUN_004bb440();
  }
  *(unsigned int *)(temp_v0 + 4) = temp_v2;
  return;
}

} /* extern "C" */
