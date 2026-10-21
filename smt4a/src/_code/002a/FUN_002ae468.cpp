/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ae468` (_code @ 0x2ae468, 0xec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemFree(void);
int btlStageFreeContext(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int g_engineOptionalWork; /* 0x5710d8 */
extern int DAT_00573948; /* 0x573948 */
extern int DAT_0057394c; /* 0x57394c */
extern int DAT_00573950; /* 0x573950 */
extern int DAT_00573954; /* 0x573954 */
extern int DAT_00573958; /* 0x573958 */
extern int DAT_0057395c; /* 0x57395c */
extern int DAT_00573960; /* 0x573960 */
extern int DAT_00573964; /* 0x573964 */
extern int DAT_00573968; /* 0x573968 */
extern int DAT_0057396c; /* 0x57396c */

/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: btlStageFreeContext. */


void FUN_002ae468(void)

{
/* irregular: 2 native warning(s); review required */
  if (DAT_00573948 != 0) {
    asdMemFree();
    DAT_00573948 = 0;
  }
  if (DAT_0057394c != 0) {
    asdMemFree();
    DAT_0057394c = 0;
  }
  if (DAT_00573950 != 0) {
    asdMemFree();
    DAT_00573950 = 0;
  }
  if (DAT_00573954 != 0) {
    asdMemFree();
    DAT_00573954 = 0;
  }
  if (DAT_00573958 != 0) {
    asdMemFree();
    DAT_00573958 = 0;
  }
  if (DAT_0057395c != 0) {
    asdMemFree();
    DAT_0057395c = 0;
  }
  if (DAT_00573960 != 0) {
    asdMemFree();
    DAT_00573960 = 0;
  }
  if (DAT_00573964 != 0) {
    asdMemFree();
    DAT_00573964 = 0;
  }
  if (DAT_00573968 != 0) {
    asdMemFree();
    DAT_00573968 = 0;
  }
  if (DAT_0057396c != 0) {
    asdMemFree();
    DAT_0057396c = 0;
  }
  btlStageFreeContext();
  if (g_engineOptionalWork != 0) {
    asdMemFree();
    g_engineOptionalWork = 0;
  }
  return;
}

} /* extern "C" */
