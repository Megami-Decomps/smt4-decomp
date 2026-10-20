/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002add8c` (_code @ 0x2add8c, 0xf8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(int);
int FUN_002f3bc4(unsigned char [98], int, int);
int FUN_0032d0c8(int, int, int, unsigned char [98]);
int FUN_00331380(int);

/* stack frame of void: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned short spD6; /* 0xd6: local_d6 */
} void_stack;

extern int g_camp; /* 0x57f108 */

/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_002f3bc4. */
/* Supplied declaration required: FUN_0032d0c8. */
/* Supplied declaration required: FUN_00331380. */
extern int partyPanelIsActive(void);


void FUN_002add8c(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  int temp_v1;
  unsigned char temp_v2 [98];
  unsigned short temp_v3;
  
  temp_v0 = g_camp;
  puVar2 = temp_v2;
  if (*(char *)(g_camp + 0xb7) != '\0') {
    if (*(char *)(g_camp + 0xb9) != '\x03') {
      sysPlaySe(0x52);
      FUN_002f3bc4(temp_v2,(int)*(char *)(temp_v0 + 0xb9),(int)*(char *)(temp_v0 + 0xb8));
      if (puVar2 != (unsigned char *)0x0) {
        FUN_0032d0c8(0,1,temp_v3,temp_v2);
      }
      return;
    }
    sysPlaySe(0x51);
    return;
  }
  temp_v1 = partyPanelIsActive();
  if (temp_v1 == 0) {
    if (*(char *)(temp_v0 + 0xa4) != '\x01') {
      sysPlaySe(3);
      FUN_00331380(0);
      return;
    }
    sysPlaySe(1);
    FUN_00331380(1);
    return;
  }
  if (*(char *)(temp_v0 + 0xa4) != '\x01') {
    sysPlaySe(4);
    FUN_00331380(0);
    return;
  }
  sysPlaySe(2);
  FUN_00331380(1);
  return;
}

} /* extern "C" */
