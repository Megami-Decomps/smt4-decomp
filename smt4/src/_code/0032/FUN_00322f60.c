/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00322f60` (_code @ 0x322f60, 0xe4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int FUN_002499b4(void);
/* Supplied declaration required: FUN_002499fc. */
extern unsigned int FUN_00249a54(void);
/* Supplied declaration required: FUN_0028dcb0. */
/* Supplied declaration required: FUN_002939f4. */
/* Supplied declaration required: FUN_00296cc8. */


unsigned int FUN_00322f60(void)

{
/* irregular: 4 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int aiStack_14 [3];
  
  FUN_00296cc8(0);
  temp_v1 = FUN_00249a54();
  FUN_002499fc(temp_v1,aiStack_14,&temp_v5);
  temp_v4 = aiStack_14[0];
  if (aiStack_14[0] < temp_v5 + aiStack_14[0]) {
    do {
      temp_v2 = FUN_002939f4();
      puVar4 = (unsigned int *)(*(int *)(temp_v2 + 0x1fc0) + temp_v4 * 0x288);
      temp_v3 = *puVar4;
      if (((((temp_v3 & 0x10) == 0) && ((temp_v3 & 1) != 0)) && ((temp_v3 & 0x40) == 0)) &&
         (0 < *(short *)((int)puVar4 + 0x9a))) {
        FUN_0028dcb0(1);
        return 1;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < temp_v5 + aiStack_14[0]);
  }
  temp_v4 = FUN_002939f4();
  if (*(char *)(temp_v4 + 0x49c5) != '\0') {
    FUN_002939f4();
    temp_v4 = FUN_002499b4();
    temp_v0 = 0;
    if (temp_v4 != 0) {
      temp_v0 = *(short *)(temp_v4 + 0x9a);
    }
    if ((temp_v4 != 0 && temp_v0 != 0) && -1 < temp_v0) {
      FUN_0028dcb0(1);
      return 1;
    }
  }
  FUN_0028dcb0(0);
  return 1;
}
