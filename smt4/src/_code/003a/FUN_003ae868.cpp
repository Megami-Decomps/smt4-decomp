#include "romwright_types.h"

extern "C" {

int FUN_002251d4(int);
int FUN_0028be40(int);
int FUN_0028be50(int);
int FUN_0028be84(int);
int FUN_0033c6f8(unsigned int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char DAT_00439c88; /* 0x439c88 */

/* Supplied declaration required: FUN_002251d4. */
/* Supplied declaration required: FUN_0028be40. */
/* Supplied declaration required: FUN_0028be50. */
/* Supplied declaration required: FUN_0028be84. */
extern int FUN_0028bebc(int);
/* Supplied declaration required: FUN_0033c6f8. */


void FUN_003ae868(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_00439c88 + 0x20));
  piVar3 = (int *)(temp_v0 + 0x7e38);
  if (*piVar3 == 9) {
    FUN_0033c6f8(*(unsigned int *)(temp_v0 + 0x7e20));
    FUN_002251d4(temp_v0 + 0x2460);
    *piVar3 = 7;
    temp_v0 = (*(int *)((unsigned char *)&DAT_00439c88 + 0x20));
    temp_v1 = FUN_0028bebc((*(int *)((unsigned char *)&DAT_00439c88 + 0x20)) + 8);
    if (temp_v1 != 0) {
      temp_v1 = FUN_0028be84(temp_v0 + 0x2200);
      if (temp_v1 != 0) {
        FUN_0028be50(temp_v0 + 8);
        FUN_0028be40(temp_v0 + 0x2200);
        return;
      }
    }
  }
  return;
}

} /* extern "C" */
