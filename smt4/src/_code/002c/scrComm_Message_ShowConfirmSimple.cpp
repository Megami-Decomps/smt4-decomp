#include "romwright_types.h"

extern "C" {

int FUN_00254e2c(unsigned int, unsigned int, unsigned int, int, int);
int FUN_002bff50(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

/* Supplied declaration required: FUN_00254e2c. */
extern unsigned int FUN_002893d8(void);
extern unsigned int scrGetArg(unsigned int);
extern unsigned int FUN_002b47f4(unsigned int);
/* Supplied declaration required: FUN_002bff50. */


void scrComm_Message_ShowConfirmSimple(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = FUN_002b47f4(0x1e);
  temp_v2 = FUN_002893d8();
  FUN_002bff50();
  FUN_00254e2c(temp_v1,temp_v0,temp_v2,6,0);
  return;
}

} /* extern "C" */
