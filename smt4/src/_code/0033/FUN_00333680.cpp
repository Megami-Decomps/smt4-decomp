/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00333680` (_code @ 0x333680, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00295ba4(int);
int FUN_002c43b4(unsigned int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int *DAT_00447a78; /* 0x447a78 */

/* Supplied declaration required: FUN_00295ba4. */
extern int FUN_002b6b04(void);
/* Supplied declaration required: FUN_002c43b4. */


void FUN_00333680(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = DAT_00447a78;
  if ((*(char *)(DAT_00447a78 + 6) != '\0') && (temp_v0 = FUN_002b6b04(), temp_v0 != 0)) {
    *(unsigned char *)(puVar1 + 6) = 0;
    FUN_00295ba4(1);
  }
  FUN_002c43b4(*puVar1,0);
  return;
}

} /* extern "C" */
