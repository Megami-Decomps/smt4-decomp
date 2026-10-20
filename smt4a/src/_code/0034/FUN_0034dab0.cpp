#include "romwright_types.h"

extern "C" {

int asdMemFree(int);
int FUN_0040a244(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int jobGetWork(void);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_0040a244. */


void FUN_0034dab0(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = jobGetWork();
  if (*(int *)(temp_v0 + 0x34) != 0) {
    FUN_0040a244();
    *(unsigned int *)(temp_v0 + 0x34) = 0;
  }
  asdMemFree(temp_v0);
  return;
}

} /* extern "C" */
