/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cf034` (_code @ 0x2cf034, 0xe4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern char *DAT_0044df80; /* 0x44df80 */

extern int FUN_00296cc8(unsigned int);
/* Supplied declaration required: FUN_002c222c. */
/* Supplied declaration required: FUN_002c564c. */
/* Supplied declaration required: FUN_002c57c8. */


void FUN_002cf034(void)

{
/* irregular: irregular input(s): in_r3; 4 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  int in_r3;
  int temp_v1;
  
  temp_v1 = in_r3;
  FUN_002c564c(0);
  temp_v0 = FUN_00296cc8(0);
  temp_v1 = FUN_00296cc8(1);
  if (!(temp_v0 == -1 || temp_v1 == -1)) {
    if (temp_v0 != 0) {
      temp_v1 = temp_v1 + 100;
    }
  }
  else {
    if (DAT_0044df80 == (char *)0x0) {
      pcVar2 = (char *)0x8;
      FUN_002c222c();
      DAT_0044df80 = pcVar2;
      if (pcVar2 != (char *)0x0) {
        *pcVar2 = '\0';
        pcVar2[4] = '\0';
        pcVar2[5] = '\0';
        pcVar2[6] = '\0';
        pcVar2[7] = '\0';
      }
    }
    if (*DAT_0044df80 == '\0') {
      return;
    }
    if (DAT_0044df80 == (char *)0x0) {
      pcVar2 = (char *)0x8;
      FUN_002c222c();
      DAT_0044df80 = pcVar2;
      if (pcVar2 != (char *)0x0) {
        *pcVar2 = '\0';
        pcVar2[4] = '\0';
        pcVar2[5] = '\0';
        pcVar2[6] = '\0';
        pcVar2[7] = '\0';
      }
    }
    temp_v1 = *(int *)(DAT_0044df80 + 4);
    if (DAT_0044df80 == (char *)0x0) {
      pcVar2 = (char *)0x8;
      FUN_002c222c();
      DAT_0044df80 = pcVar2;
      if (pcVar2 != (char *)0x0) {
        *pcVar2 = '\0';
        pcVar2[4] = '\0';
        pcVar2[5] = '\0';
        pcVar2[6] = '\0';
        pcVar2[7] = '\0';
      }
    }
    *DAT_0044df80 = '\0';
  }
  FUN_002c57c8(10,&temp_v1,4);
  return;
}
