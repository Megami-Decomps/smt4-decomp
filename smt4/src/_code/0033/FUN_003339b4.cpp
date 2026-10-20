#include "romwright_types.h"

extern "C" {

int FUN_002c0c74(unsigned int);

extern int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_002c0c74. */
extern int FUN_002c0cc4(void);
extern unsigned int FUN_002c0cec(unsigned int, unsigned int);


int * FUN_003339b4(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  piVar1 = *(int **)(DAT_00433158 + 0x390);
  if (piVar1 != (int *)0x0) {
    unsigned int uVar3 = *(unsigned int *)(DAT_00433158 + 0x38c);
    for (temp_v2 = 0; temp_v2 < uVar3; temp_v2++) {
      if (*piVar1 == param_1) {
        return piVar1 + 1;
      }
      piVar1 = piVar1 + 0x15;
    }
  }
  temp_v0 = FUN_002c0cec(0x1c,1);
  temp_v1 = FUN_002c0cc4();
  FUN_002c0c74(temp_v0);
  return (int *)(temp_v1 + param_1 * 0x50);
}

} /* extern "C" */
