#include "romwright_types.h"

extern "C" {

int timerStart(int, int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_0043da90; /* 0x43da90 */

/* Supplied declaration required: timerStart. */


void FUN_0026a598(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0043da90;
  timerStart(DAT_0043da90 + 0x648,3,0);
  temp_v1 = 0;
  do {
    timerStart(temp_v0 + temp_v1 * 0x8c + 0x904,3,0);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 8);
  timerStart(temp_v0 + 0x878,3,0);
  return;
}

} /* extern "C" */
