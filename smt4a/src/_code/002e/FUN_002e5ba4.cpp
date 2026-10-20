/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e5ba4` (_code @ 0x2e5ba4, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdTMTexTableLoadTmx(int, int);
int asdMemFree(void);
int FUN_0019a7f4(int, int);
int scrScriptProcessDestroy(void);
int FUN_001acf98(int, int);
int FUN_00275bc8(int, unsigned int);
int FUN_00275f44(unsigned int, int);
int FUN_002804b0(...);
int asdTMTexTableFreeEntry(int);
int FUN_00342334(int);
int FUN_004cf370(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: asdTMTexTableLoadTmx. */
extern int jobIsValid(unsigned int);
extern int FUN_0018206c(unsigned int, int);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_0019a7f4. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: FUN_001acf98. */
extern int FUN_00224880(unsigned int);
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: FUN_00275f44. */
/* Supplied declaration required: FUN_002804b0. */
/* Supplied declaration required: asdTMTexTableFreeEntry. */
/* Supplied declaration required: FUN_00342334. */
extern int FUN_00399e04(void);
extern int FUN_004cf140(int);
/* Supplied declaration required: FUN_004cf370. */


int FUN_002e5ba4(int *param_1)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  
  temp_v3 = *param_1;
  if (temp_v3 == 0) {
    return 0;
  }
  temp_v0 = *(int *)(temp_v3 + 0xc);
  if (temp_v0 == 0) {
    temp_v0 = jobIsValid(*(unsigned int *)(temp_v3 + 4));
    if (temp_v0 != 0) {
      return 0;
    }
    *(unsigned int *)(temp_v3 + 0xc) = 3;
    *(unsigned int *)(temp_v3 + 0x10) = 0;
    return 0;
  }
  if (temp_v0 != 1) {
    if (temp_v0 == 2) {
      FUN_004cf370(temp_v3);
      return temp_v3;
    }
    if (temp_v0 != 3) {
      return 0;
    }
    return -1;
  }
  switch(*(unsigned int *)(temp_v3 + 0x10)) {
  case 0:
    FUN_002804b0("battle/gameover/gameover.bf",temp_v3 + 0x18,0);
    FUN_002804b0("battle/gameover/gameover.mbm",temp_v3 + 0x20,0);
    asdTMTexTableLoadTmx(0x22,0);
    temp_v0 = 1;
    do {
      FUN_001acf98(0x22,temp_v0);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 7);
    *(unsigned int *)(temp_v3 + 0x10) = 1;
    if ((*(char *)(temp_v3 + 8) == '\x03') && (temp_v0 = FUN_00399e04(), temp_v0 != 0)) {
      FUN_00342334(0);
    }
  case 1:
    temp_v4 = *(int *)(temp_v3 + 0x18) != 0;
    temp_v0 = 0;
    if (temp_v4) {
      temp_v0 = *(int *)(temp_v3 + 0x20);
    }
    if (temp_v4 && temp_v0 != 0) {
      temp_v0 = 1;
      do {
        temp_v1 = FUN_0018206c(0x22,temp_v0);
        if (temp_v1 == 0) {
          return 0;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < 7);
      temp_v0 = *(int *)(temp_v3 + 0x18);
      FUN_00275bc8(temp_v0,*(unsigned int *)(temp_v3 + 0x20));
      *(int *)(temp_v3 + 0x1c) = temp_v0;
      *(unsigned int *)(temp_v0 + 0x108) = 1;
      FUN_00275f44(*(unsigned int *)(temp_v3 + 0x1c),0);
      if (*(char *)(temp_v3 + 8) != '\x02') {
        *(unsigned int *)(temp_v3 + 0x10) = 4;
      }
      else {
        FUN_00275f44(*(unsigned int *)(temp_v3 + 0x1c),4);
        temp_v2 = 2;
        *(unsigned int *)(temp_v3 + 0x10) = temp_v2;
      }
    }
    break;
  case 2:
    temp_v0 = FUN_00224880(*(unsigned int *)(temp_v3 + 0x1c));
    if (temp_v0 == 2) {
      FUN_00275f44(*(unsigned int *)(temp_v3 + 0x1c),3);
      *(unsigned int *)(temp_v3 + 0x10) = 3;
    }
    break;
  case 3:
    temp_v0 = FUN_00224880(*(unsigned int *)(temp_v3 + 0x1c));
    if (temp_v0 != 2) {
      return 0;
    }
    *(unsigned int *)(temp_v3 + 0x10) = 4;
  case 4:
    temp_v0 = FUN_004cf140(temp_v3);
    if (temp_v0 != 0) {
      return 0;
    }
    temp_v2 = 5;
    *(unsigned int *)(temp_v3 + 0x10) = temp_v2;
    break;
  case 5:
    if ((*(char *)(temp_v3 + 8) == '\x03') && (temp_v0 = FUN_00399e04(), temp_v0 != 0)) {
      FUN_00342334(1);
    }
    temp_v0 = 1;
    do {
      FUN_0019a7f4(0x22,temp_v0);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 7);
    asdTMTexTableFreeEntry(0x22);
    if (*(int *)(temp_v3 + 0x1c) != 0) {
      scrScriptProcessDestroy();
      *(unsigned int *)(temp_v3 + 0x1c) = 0;
    }
    if (*(int *)(temp_v3 + 0x18) != 0) {
      asdMemFree();
      *(unsigned int *)(temp_v3 + 0x18) = 0;
    }
    if (*(int *)(temp_v3 + 0x20) != 0) {
      asdMemFree();
      *(unsigned int *)(temp_v3 + 0x20) = 0;
    }
    *(unsigned int *)(temp_v3 + 0xc) = 3;
    *(unsigned int *)(temp_v3 + 0x10) = 0;
  }
  return 0;
}

} /* extern "C" */
