/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026b7c0` (_code @ 0x26b7c0, 0x1f4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int DAT_0043dcf0; /* 0x43dcf0 */

/* Supplied declaration required: FUN_002621b4. */
/* Supplied declaration required: FUN_00298d28. */
extern int FUN_0029a924(unsigned short);
extern int FUN_0029a9d4(unsigned short, unsigned int);
extern int FUN_002a8764(void);


void FUN_0026b7c0(void)

{
/* irregular: irregular input(s): in_r3; 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int in_r3;
  int temp_v3;
  int temp_v4;
  
  temp_v0 = DAT_0043dcf0;
  temp_v4 = in_r3;
  temp_v1 = FUN_002a8764();
  temp_v4 = 0;
  if (*(short *)(temp_v0 + 0x38) >= 0) {
    temp_v3 = 0;
    do {
      if ((int)*(char *)(temp_v1 + temp_v3 + 0x9108) == (int)*(short *)(temp_v0 + 0x38)) {
        temp_v2 = FUN_0029a924(*(unsigned short *)(temp_v0 + 0x36));
        *(int *)(*(int *)(temp_v0 + temp_v3 * 4 + 0x6cc) + 0x44) = -temp_v2;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 3);
    temp_v3 = 0;
    do {
      if (*(int *)(temp_v0 + temp_v3 * 8 + 0x738) == (int)*(short *)(temp_v0 + 0x38)) {
        temp_v2 = FUN_0029a924(*(unsigned short *)(temp_v0 + 0x36));
        *(int *)(*(int *)(temp_v0 + temp_v3 * 4 + 0x6d8) + 0x44) = -temp_v2;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x18);
  }
  else {
    temp_v3 = FUN_0029a9d4(*(unsigned short *)(temp_v0 + 0x36),1);
    *(int *)(*(int *)(temp_v0 + 0x6c8) + 0x44) = -temp_v3;
  }
  if (*(char *)(temp_v0 + 0x678) != '\0') {
    FUN_002621b4((int)*(short *)(temp_v0 + 0x38),0xffffffff,*(unsigned short *)(temp_v0 + 0x36),&temp_v4);
    *(unsigned int *)(*(int *)(temp_v0 + 0x6c8) + 0x40) = temp_v4;
  }
  temp_v3 = 0;
  do {
    temp_v2 = (int)*(char *)(temp_v1 + temp_v3 + 0x9108);
    if (-1 < temp_v2) {
      FUN_002621b4((int)*(short *)(temp_v0 + 0x38),temp_v2,*(unsigned short *)(temp_v0 + 0x36),&temp_v4);
      *(unsigned int *)(*(int *)(temp_v0 + temp_v3 * 4 + 0x6cc) + 0x40) = temp_v4;
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 3);
  temp_v1 = 0;
  do {
    temp_v3 = *(int *)(temp_v0 + temp_v1 * 8 + 0x738);
    if (-1 < temp_v3) {
      FUN_002621b4((int)*(short *)(temp_v0 + 0x38),temp_v3,*(unsigned short *)(temp_v0 + 0x36),&temp_v4);
      *(unsigned int *)(*(int *)(temp_v0 + temp_v1 * 4 + 0x6d8) + 0x40) = temp_v4;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x18);
  if (*(short *)(temp_v0 + 0x38) < 0) {
    FUN_00298d28(*(unsigned int *)(*(int *)(temp_v0 + 0x6c8) + 0x40),
                 *(unsigned int *)(*(int *)(temp_v0 + 0x6c8) + 0x44));
    return;
  }
  temp_v1 = 0;
  do {
    if (*(int *)(temp_v0 + temp_v1 * 8 + 0x738) == (int)*(short *)(temp_v0 + 0x38)) {
      temp_v3 = temp_v0 + temp_v1 * 4;
      FUN_00298d28(*(unsigned int *)(*(int *)(temp_v3 + 0x6d8) + 0x40),
                   *(unsigned int *)(*(int *)(temp_v3 + 0x6d8) + 0x44));
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x18);
  return;
}
