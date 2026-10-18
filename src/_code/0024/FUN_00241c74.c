/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00241c74` (_code @ 0x241c74, 0xf8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned short sp5D2; /* 0x5d2: local_5d2 */
} param_1_stack;

/* Supplied declaration required: FUN_00257bf0. */
/* Supplied declaration required: FUN_00257c84. */
extern int FUN_00263140(void);
/* Supplied declaration required: FUN_0029dcd4. */
/* Supplied declaration required: FUN_002b8b78. */


void FUN_00241c74(int *param_1)

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
      FUN_002b8b78(0x50);
      FUN_00257c84(temp_v2,(int)*(char *)(temp_v1 + 0xad),(int)*(char *)(temp_v1 + 0xac));
      if (puVar1 != (unsigned char *)0x0) {
        FUN_0029dcd4(0,1,temp_v3,temp_v2);
      }
      return;
    }
    FUN_002b8b78(0x4f);
    return;
  }
  temp_v0 = FUN_00263140();
  if (temp_v0 == 0) {
    if (*(char *)(temp_v1 + 0x98) != '\x01') {
      FUN_002b8b78(3);
      FUN_00257bf0(0);
      return;
    }
    FUN_002b8b78(1);
    FUN_00257bf0(1);
    return;
  }
  if (*(char *)(temp_v1 + 0x98) != '\x01') {
    FUN_002b8b78(4);
    FUN_00257bf0(0);
    return;
  }
  FUN_002b8b78(2);
  FUN_00257bf0(1);
  return;
}
