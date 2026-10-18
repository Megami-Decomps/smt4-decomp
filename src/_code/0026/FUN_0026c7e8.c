/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026c7e8` (_code @ 0x26c7e8, 0x98 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char LAB_0026c888; /* 0x26c888 */
extern int DAT_0043dd68; /* 0x43dd68 */

/* Supplied declaration required: FUN_00210030. */
/* Supplied declaration required: FUN_0029bdb4. */
/* Supplied declaration required: FUN_0029bddc. */
/* Supplied declaration required: FUN_002a06c8. */
/* Supplied declaration required: FUN_002b2d40. */


void FUN_0026c7e8(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned int *puVar3;
  int *piVar4;
  
  temp_v0 = DAT_0043dd68;
  FUN_002b2d40(*(unsigned int *)(DAT_0043dd68 + 0x95c8));
  piVar4 = (int *)(temp_v0 + 0x95cc);
  if (*piVar4 == 0) {
    puVar2 = &LAB_0026c888;
    FUN_0029bddc(&LAB_0026c888,7);
    *piVar4 = (int)puVar2;
    FUN_002a06c8();
    puVar3 = (unsigned int *)*piVar4;
    if ((*puVar3 & 4) != 0) {
      *puVar3 = *puVar3 & 0xfffffffb;
      *(unsigned int *)(puVar3[2] + 0x74) = 0x3f800000;
      FUN_0029bdb4();
    }
    FUN_00210030(*piVar4);
    return;
  }
  return;
}
