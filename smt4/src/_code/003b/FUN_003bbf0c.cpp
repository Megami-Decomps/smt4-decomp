#include "romwright_types.h"

extern "C" {

int FUN_001a9ebc(void);
int FUN_002b2368(unsigned int *);
int asdMemFree(unsigned int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

/* Supplied declaration required: FUN_001a9ebc. */
/* Supplied declaration required: FUN_002b2368. */
/* Supplied declaration required: asdMemFree. */


void FUN_003bbf0c(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  *param_1 = param_2;
  asdMemFree(param_1[1]);
  asdMemFree(param_1[2]);
  FUN_001a9ebc();
  FUN_002b2368(param_1);
  return;
}

} /* extern "C" */
