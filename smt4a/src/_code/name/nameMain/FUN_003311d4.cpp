/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003311d4` (_code @ 0x3311d4, 0x12c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(int);
int asdMemFree(void);
int FUN_00275748(unsigned int *, int);
int FUN_002c76c0(...);
int FUN_003180c4(int, unsigned int);
int FUN_003fd540(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern signed char g_name; /* 0x58810c */
extern signed char DAT_0058810d; /* 0x58810d */
extern unsigned int *DAT_00588110; /* 0x588110 */

/* Supplied declaration required: sysPlaySe. */
extern int jobFind(unsigned int);
/* Supplied declaration required: asdMemFree. */
extern unsigned int scrGetArg(unsigned int);
extern unsigned int FUN_00261828(void);
/* Supplied declaration required: FUN_00275748. */
/* Supplied declaration required: FUN_002c76c0. */
/* Supplied declaration required: FUN_003180c4. */
extern unsigned int gameBlockGetArea221AA(void);
/* Supplied declaration required: FUN_003fd540. */


unsigned int FUN_003311d4(void)

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
    DAT_0058810d = '\x01';
    temp_v2 = 2;
  }
  FUN_002c76c0(1);
  if (g_name == '\0') {
    if ((temp_v2 >= 2) && (temp_v2 == 2)) {
      FUN_003fd540();
    }
    FUN_00275748(&temp_v2,4);
    g_name = '\x01';
  }
  puVar1 = DAT_00588110;
  if (DAT_00588110 != (unsigned int *)0x0) {
    temp_v0 = jobFind(*DAT_00588110);
    if ((temp_v0 != 0) || (*(char *)(puVar1 + 3) == '\0')) {
      return 0;
    }
    if (DAT_00588110 != (unsigned int *)0x0) {
      asdMemFree();
      DAT_00588110 = (unsigned int *)0x0;
    }
  }
  if (temp_v2 != 1) {
    if (temp_v2 == 2) {
      temp_v1 = gameBlockGetArea221AA();
      FUN_003180c4(0x33,temp_v1);
    }
  }
  else {
    temp_v1 = FUN_00261828();
    FUN_003180c4(0x33,temp_v1);
  }
  g_name = 0;
  FUN_002c76c0(0xffffffff);
  if (DAT_0058810d != '\0') {
    DAT_0058810d = '\0';
    sysPlaySe(0x92);
  }
  return 1;
}

} /* extern "C" */
