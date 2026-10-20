#include "romwright_types.h"

extern "C" {

int FUN_0026d654(int);
int FUN_00293348(int, int);
int FUN_00298d28(int, int);
int FUN_0029ca58(void);
int timerStart(int, int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_0043dcf0; /* 0x43dcf0 */

/* Supplied declaration required: FUN_0026d654. */
/* Supplied declaration required: FUN_00293348. */
/* Supplied declaration required: FUN_00298d28. */
/* Supplied declaration required: FUN_0029ca58. */
/* Supplied declaration required: timerStart. */


void FUN_0026d5a4(void)

{
/* irregular: 5 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = DAT_0043dcf0;
  if (DAT_0043dcf0 == 0) {
    return;
  }
  temp_v0 = *(char *)(DAT_0043dcf0 + 0x66c);
  if ((temp_v0 != '\f' && temp_v0 != '\x04') && (temp_v0 != '\x0f')) {
    temp_v2 = 0;
    do {
      timerStart(temp_v1 + temp_v2 * 0x8c + 0x298,7,0);
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 4);
    timerStart(temp_v1 + 0x4c8,7,0);
  }
  FUN_00298d28(0,0);
  temp_v0 = *(char *)(temp_v1 + 0x66c);
  if ((temp_v0 != '\x01' && temp_v0 != '\x06') && (temp_v0 != '\a')) {
    FUN_0029ca58();
  }
  FUN_0026d654(1);
  FUN_00293348(0x15,1);
  return;
}

} /* extern "C" */
