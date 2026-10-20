#include "romwright_types.h"

extern "C" {

int FUN_00183318(int);
int FUN_00183e58(void);
int FUN_00184aa8(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char DAT_0057f0c4; /* 0x57f0c4 */

/* Supplied declaration required: FUN_00183318. */
/* Supplied declaration required: FUN_00183e58. */
/* Supplied declaration required: FUN_00184aa8. */


void FUN_00168980(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00184aa8(*(unsigned short *)((*(int *)((unsigned char *)&DAT_0057f0c4 + 0x4)) + 0x5e6));
  temp_v1 = FUN_00184aa8(param_1);
  if (temp_v0 == 0 || temp_v1 == 0) {
    return;
  }
  if ((*(char *)(temp_v0 + 0xc) == '\0') && (*(char *)(temp_v1 + 0xc) != '\0')) {
    FUN_00183318(1);
    return;
  }
  FUN_00183e58();
  return;
}

} /* extern "C" */
