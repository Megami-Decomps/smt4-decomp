/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003335ac` (_code @ 0x3335ac, 0xe4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00137ee0(int, int *, int);
int FUN_0016007c(void);
int FUN_00180008(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern char *DAT_00588eec; /* 0x588eec */

/* Supplied declaration required: FUN_00137ee0. */
/* Supplied declaration required: FUN_0016007c. */
/* Supplied declaration required: FUN_00180008. */
extern int FUN_00236038(unsigned int);


void FUN_003335ac(void)

{
/* irregular: irregular input(s): in_r3; 4 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  int in_r3;
  int temp_v1;
  
  temp_v1 = in_r3;
  FUN_00180008(0);
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_00236038(1);
  if (!(temp_v0 == -1 || temp_v1 == -1)) {
    if (temp_v0 != 0) {
      temp_v1 = temp_v1 + 100;
    }
  }
  else {
    if (DAT_00588eec == (char *)0x0) {
      pcVar2 = (char *)0x8;
      FUN_0016007c();
      DAT_00588eec = pcVar2;
      if (pcVar2 != (char *)0x0) {
        *pcVar2 = '\0';
        pcVar2[4] = '\0';
        pcVar2[5] = '\0';
        pcVar2[6] = '\0';
        pcVar2[7] = '\0';
      }
    }
    if (*DAT_00588eec == '\0') {
      return;
    }
    if (DAT_00588eec == (char *)0x0) {
      pcVar2 = (char *)0x8;
      FUN_0016007c();
      DAT_00588eec = pcVar2;
      if (pcVar2 != (char *)0x0) {
        *pcVar2 = '\0';
        pcVar2[4] = '\0';
        pcVar2[5] = '\0';
        pcVar2[6] = '\0';
        pcVar2[7] = '\0';
      }
    }
    temp_v1 = *(int *)(DAT_00588eec + 4);
    if (DAT_00588eec == (char *)0x0) {
      pcVar2 = (char *)0x8;
      FUN_0016007c();
      DAT_00588eec = pcVar2;
      if (pcVar2 != (char *)0x0) {
        *pcVar2 = '\0';
        pcVar2[4] = '\0';
        pcVar2[5] = '\0';
        pcVar2[6] = '\0';
        pcVar2[7] = '\0';
      }
    }
    *DAT_00588eec = '\0';
  }
  FUN_00137ee0(10,&temp_v1,4);
  return;
}

} /* extern "C" */
