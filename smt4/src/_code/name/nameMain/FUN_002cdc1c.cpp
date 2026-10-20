/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cdc1c` (_code @ 0x2cdc1c, 0x12c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001d3848(unsigned int *, int);
int FUN_0028dc98(...);
int FUN_00295660(int, unsigned int);
int buttonHelpSetPreset(int);
int asdMemFree(void);
int FUN_0033f7f4(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern signed char g_name; /* 0x44d180 */
extern signed char DAT_0044d181; /* 0x44d181 */
extern unsigned int *DAT_0044d184; /* 0x44d184 */

/* Supplied declaration required: FUN_001d3848. */
extern unsigned int gameDataGetSecondName(void);
extern unsigned int gameDataGetPlayerName(void);
/* Supplied declaration required: FUN_0028dc98. */
/* Supplied declaration required: FUN_00295660. */
extern unsigned int scrGetArg(unsigned int);
extern int jobFind(unsigned int);
/* Supplied declaration required: buttonHelpSetPreset. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_0033f7f4. */


unsigned int FUN_002cdc1c(void)

{
/* irregular: irregular input(s): in_r3; 7 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int in_r3;
  unsigned int temp_v2;
  
  temp_v2 = in_r3;
  temp_v2 = scrGetArg(0);
  if (temp_v2 == 3) {
    DAT_0044d181 = '\x01';
    temp_v2 = 2;
  }
  FUN_0028dc98(1);
  if (g_name == '\0') {
    if ((temp_v2 >= 2) && (temp_v2 == 2)) {
      FUN_0033f7f4();
    }
    FUN_001d3848(&temp_v2,4);
    g_name = '\x01';
  }
  puVar1 = DAT_0044d184;
  if (DAT_0044d184 != (unsigned int *)0x0) {
    temp_v0 = jobFind(*DAT_0044d184);
    if ((temp_v0 != 0) || (*(char *)(puVar1 + 3) == '\0')) {
      return 0;
    }
    if (DAT_0044d184 != (unsigned int *)0x0) {
      asdMemFree();
      DAT_0044d184 = (unsigned int *)0x0;
    }
  }
  if (temp_v2 != 1) {
    if (temp_v2 == 2) {
      temp_v1 = gameDataGetSecondName();
      FUN_00295660(0x33,temp_v1);
    }
  }
  else {
    temp_v1 = gameDataGetPlayerName();
    FUN_00295660(0x33,temp_v1);
  }
  g_name = 0;
  FUN_0028dc98(0xffffffff);
  if (DAT_0044d181 != '\0') {
    DAT_0044d181 = '\0';
    buttonHelpSetPreset(0x90);
  }
  return 1;
}

} /* extern "C" */
