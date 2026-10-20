#include "romwright_types.h"

extern "C" {

int FUN_00253ce4(void);
int FUN_00253d24(void);
int FUN_002b2368(void);
int FUN_002c0894(void);
int FUN_002c415c(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_00253ce4. */
/* Supplied declaration required: FUN_00253d24. */
/* Supplied declaration required: FUN_002b2368. */
/* Supplied declaration required: FUN_002c0894. */
/* Supplied declaration required: FUN_002c415c. */


void FUN_0024ad88(int *param_1)

{
/* irregular: 5 native warning(s); review required */
  if (*param_1 != 0) {
    FUN_00253d24();
    if (*param_1 != 0) {
      FUN_00253ce4();
      FUN_002b2368();
    }
  }
  if (param_1[5] != 0) {
    FUN_002c0894();
  }
  FUN_002c415c(param_1[1]);
  FUN_002c415c(param_1);
  return;
}

} /* extern "C" */
