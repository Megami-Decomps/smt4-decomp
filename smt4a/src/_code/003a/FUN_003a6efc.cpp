#include "romwright_types.h"

extern "C" {

int FUN_00153630(unsigned int, unsigned int, int, int, int);
int scrGetArg(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

/* Supplied declaration required: FUN_00153630. */
extern unsigned int *jobGetWork(void);
/* Supplied declaration required: scrGetArg. */


unsigned int FUN_003a6efc(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  scrGetArg(0);
  puVar1 = (unsigned int *)jobGetWork();
  temp_v1 = *puVar1;
  temp_v0 = scrGetArg(1);
  FUN_00153630(temp_v1,temp_v0,1,1,1);
  return 1;
}

} /* extern "C" */
