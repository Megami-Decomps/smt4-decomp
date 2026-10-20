/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00241b44` (_code @ 0x241b44, 0xf8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002579bc(int);
int FUN_00257a50(unsigned char [70], int, int);
int FUN_0029da34(int, int, int, unsigned char [70]);
int buttonHelpSetPreset(int);

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned short sp5D2; /* 0x5d2: local_5d2 */
} param_1_stack;

/* Supplied declaration required: FUN_002579bc. */
/* Supplied declaration required: FUN_00257a50. */
extern int FUN_00262f14(void);
/* Supplied declaration required: FUN_0029da34. */
/* Supplied declaration required: buttonHelpSetPreset. */


void FUN_00241b44(int *param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2 [70];
  unsigned short temp_v3;
  
  puVar1 = temp_v2;
  temp_v1 = *param_1;
  if (*(char *)(temp_v1 + 0xab) != '\0') {
    if (*(char *)(temp_v1 + 0xad) != '\x03') {
      buttonHelpSetPreset(0x50);
      FUN_00257a50(temp_v2,(int)*(char *)(temp_v1 + 0xad),(int)*(char *)(temp_v1 + 0xac));
      if (puVar1 != (unsigned char *)0x0) {
        FUN_0029da34(0,1,temp_v3,temp_v2);
      }
      return;
    }
    buttonHelpSetPreset(0x4f);
    return;
  }
  temp_v0 = FUN_00262f14();
  if (temp_v0 == 0) {
    if (*(char *)(temp_v1 + 0x98) != '\x01') {
      buttonHelpSetPreset(3);
      FUN_002579bc(0);
      return;
    }
    buttonHelpSetPreset(1);
    FUN_002579bc(1);
    return;
  }
  if (*(char *)(temp_v1 + 0x98) != '\x01') {
    buttonHelpSetPreset(4);
    FUN_002579bc(0);
    return;
  }
  buttonHelpSetPreset(2);
  FUN_002579bc(1);
  return;
}

} /* extern "C" */
