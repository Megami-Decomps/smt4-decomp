/* NON_MATCHING: romwright 0.5.0 decompilation of `scrComm_Message_ShowConfirmAndApply` (_code @ 0x2144c8, 0xa0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002542bc(int);
int FUN_002542d4(...);
int FUN_00254e2c(int, int, unsigned int, int, int);
int FUN_0028ed3c(int, int, int);
int FUN_002bff50(void);
int FUN_00348a1c(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

/* Supplied declaration required: FUN_002542bc. */
/* Supplied declaration required: FUN_002542d4. */
/* Supplied declaration required: FUN_00254e2c. */
extern int FUN_002893d8(void);
/* Supplied declaration required: FUN_0028ed3c. */
extern unsigned short scrGetArg(unsigned int);
extern int FUN_002b47f4(unsigned int);
/* Supplied declaration required: FUN_002bff50. */
/* Supplied declaration required: FUN_00348a1c. */


unsigned char scrComm_Message_ShowConfirmAndApply(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = FUN_002893d8();
  if (temp_v1 == 0) {
    FUN_002542d4(0);
    FUN_0028ed3c(temp_v0,0,1);
    FUN_002bff50();
  }
  temp_v1 = FUN_002b47f4(0x1e);
  temp_v2 = FUN_002542bc(0);
  FUN_00254e2c(temp_v1,0x10,temp_v2,6,0);
  temp_v3 = FUN_002542bc(0);
  FUN_002542d4(0,temp_v3 + 1);
  if (temp_v1 == 1) {
    FUN_00348a1c(temp_v0);
  }
  return temp_v1 == 1;
}

} /* extern "C" */
