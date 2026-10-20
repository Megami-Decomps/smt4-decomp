/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033a360` (_code @ 0x33a360, 0xac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023e52c(unsigned int, int, int, int);
int FUN_0027dd9c(unsigned int);
int FUN_003cc944(unsigned int, int, int);
int FUN_003cf438(unsigned int, int, int);
int FUN_003db5bc(unsigned int);
int FUN_003dbed8(unsigned int, unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned int DAT_0043427c; /* 0x43427c */
extern unsigned int DAT_00435d18; /* 0x435d18 */

/* Supplied declaration required: FUN_0023e52c. */
/* Supplied declaration required: FUN_0027dd9c. */
extern int FUN_0027e928(unsigned int);
/* Supplied declaration required: FUN_003cc944. */
/* Supplied declaration required: FUN_003cf438. */
/* Supplied declaration required: FUN_003db5bc. */
/* Supplied declaration required: FUN_003dbed8. */


void FUN_0033a360(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = FUN_0027e928(DAT_0043427c);
  FUN_003cf438(DAT_0043427c,temp_v0,1);
  temp_v1 = 0;
  temp_v2 = 0x6d;
  do {
    temp_v2 = temp_v2 - 1;
    temp_v3 = param_1 + temp_v1 * 0x1c;
    temp_v1 = temp_v1 + 1;
    *(unsigned int *)(temp_v3 + 0x2318) = 0xffffffff;
    *(unsigned int *)(temp_v3 + 0x231c) = 0xffffffff;
    *(unsigned int *)(temp_v3 + 0x2330) = 0xffffffff;
  } while (temp_v2 != 0);
  FUN_003db5bc(DAT_00435d18);
  FUN_0023e52c(DAT_0043427c,temp_v0,5,0);
  FUN_003cc944(DAT_0043427c,temp_v0,1);
  FUN_0027dd9c(DAT_00435d18);
  FUN_003dbed8(DAT_00435d18,*(unsigned int *)(temp_v0 + 0x594));
  return;
}

} /* extern "C" */
