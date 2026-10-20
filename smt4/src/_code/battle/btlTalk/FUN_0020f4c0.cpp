/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020f4c0` (_code @ 0x20f4c0, 0x98 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0026c820(unsigned int);
int FUN_002a7218(void);
int FUN_002c415c(...);
int FUN_002c43b4(unsigned int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int DAT_00439b58; /* 0x439b58 */
extern unsigned int DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_0026c820. */
/* Supplied declaration required: FUN_002a7218. */
extern int FUN_002c08f0(void);
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c43b4. */


void FUN_0020f4c0(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = FUN_002c08f0();
  temp_v0 = DAT_00439b58;
  if (DAT_00439b58 != 0) {
    FUN_0026c820(DAT_00439ca8);
    if (*(int *)(temp_v0 + 8) != 0) {
      FUN_002c415c();
      *(unsigned int *)(temp_v0 + 8) = 0;
    }
    if (*(int *)(temp_v0 + 0x10) != 0) {
      FUN_002a7218();
      *(unsigned int *)(temp_v0 + 0x10) = 0;
    }
    if (*(int *)(temp_v0 + 0xc) != 0) {
      FUN_002c415c();
      *(unsigned int *)(temp_v0 + 0xc) = 0;
    }
    if (*(int *)(temp_v0 + 0x14) != 0) {
      FUN_002c415c();
      *(unsigned int *)(temp_v0 + 0x14) = 0;
    }
    FUN_002c415c(DAT_00439b58);
    DAT_00439b58 = 0;
  }
  FUN_002c43b4(*(unsigned int *)(temp_v1 + 0x20),0);
  return;
}

} /* extern "C" */
