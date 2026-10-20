#include "romwright_types.h"

extern "C" {

int FUN_0022a478(char *, unsigned int);
int FUN_00298d64(char *, unsigned int);
int FUN_002992bc(char *, unsigned int);
int FUN_0029d620(char *, unsigned int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

/* Supplied declaration required: FUN_0022a478. */
/* Supplied declaration required: FUN_00298d64. */
/* Supplied declaration required: FUN_002992bc. */
/* Supplied declaration required: FUN_0029d620. */


void FUN_0022e4a4(char *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 4 native warning(s); review required */
  if (*param_1 == '\0') {
    FUN_00298d64(param_1 + 0x10,param_2);
    FUN_0029d620(param_1 + 0x10,param_3);
  }
  if (*param_1 == '\x01') {
    FUN_0022a478(param_1 + 0x10,param_2);
    FUN_002992bc(param_1 + 0x10,param_3);
    return;
  }
  return;
}

} /* extern "C" */
