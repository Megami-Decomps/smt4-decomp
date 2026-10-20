#include "romwright_types.h"

extern "C" {

int FUN_00155b74(void);
int asdMemFree(unsigned int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_00155b74. */
extern unsigned int jobGetWork(void);
/* Supplied declaration required: asdMemFree. */


void FUN_001ff458(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = jobGetWork();
  FUN_00155b74();
  asdMemFree(temp_v0);
  return;
}

} /* extern "C" */
