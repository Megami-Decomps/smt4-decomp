#include "romwright_types.h"

extern "C" {

int FUN_00184758(int, int, int);
int FUN_00184c00(int, int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_0057f574; /* 0x57f574 */

/* Supplied declaration required: FUN_00184758. */
/* Supplied declaration required: FUN_00184c00. */


typedef struct S { int p0; int p4; int state; int pc; int timer; int p14; int p18; int p1c; int mode; } S;
void FUN_00203d04(void)

{
  S *temp_v0 = *(S **)&DAT_0057f574;
  if (temp_v0->state != 0) {
    temp_v0->state = 5;
    temp_v0->timer = 0x1e;
    FUN_00184758((int)temp_v0 + 0x54,1,0);
    FUN_00184c00((int)temp_v0 + 0x54,1,0);
    if (temp_v0->mode == 2) {
      FUN_00184758((int)temp_v0 + 0xe0,4,0);
      return;
    }
  }
  return;
}

} /* extern "C" */
