/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bb3fc` (_code @ 0x3bb3fc, 0x1ec bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdTMTexTableNodeIsLoaded(...);
int asdTMTexTableReleaseNode(int, int);
int uiSpriteSetImageKeyframe(int, int, int);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int FUN_0023360c(int);
/* Supplied declaration required: asdTMTexTableNodeIsLoaded. */
/* Supplied declaration required: asdTMTexTableReleaseNode. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
extern int FUN_002bf818(int);


void FUN_003bb3fc(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  romwright_code *pcVar5;
  unsigned int temp_v4;
  
  temp_v0 = param_1 + *(int *)(param_1 + 0x28) * 8;
  pcVar5 = *(romwright_code **)(temp_v0 + 0xdc0);
  temp_v1 = *(unsigned int *)(temp_v0 + 0xdc4);
  if ((pcVar5 != (romwright_code *)0x0) || (((temp_v1 & 1) != 0 && (temp_v1 != 0)))) {
    if ((temp_v1 & 1) != 0) {
      pcVar5 = *(romwright_code **)((unsigned char *)pcVar5 + *(int *)(param_1 + ((int)temp_v1 >> 1)));
    }
    (*pcVar5)();
  }
  temp_v0 = param_1 + 0x9c;
  if (*(char *)(param_1 + 0x6cd) != '\0') {
    *(int *)(param_1 + 0xcf8) = (*(int *)(param_1 + 0xcf8) + 1) % 0x10;
  }
  if (((*(int *)(param_1 + 0xd10) != -1) && (temp_v2 = asdTMTexTableNodeIsLoaded(0x2a), temp_v2 != 0)) &&
     (*(char *)(param_1 + 0xcf2) != '\0')) {
    temp_v2 = FUN_0023360c(temp_v0);
    if (*(int *)(param_1 + 0xd10) == *(unsigned short *)(*(int *)(temp_v0 + temp_v2 * 4 + 0x530) + 0x5a) + 1) {
      temp_v4 = *(unsigned int *)(param_1 + 0xd0c);
      *(int *)(param_1 + 0xd08) = *(int *)(param_1 + 0xd10);
      *(unsigned int *)(param_1 + 0xd0c) = 0xffffffff;
      *(unsigned int *)(param_1 + 0xd04) = temp_v4;
      *(unsigned int *)(param_1 + 0xd10) = 0xffffffff;
      uiSpriteSetImageKeyframe(param_1 + 0xc68,1,0);
    }
  }
  if ((*(int *)(param_1 + 0xd04) != -1) && (temp_v2 = FUN_002bf818(param_1 + 0xc68), temp_v2 != 0)) {
    *(unsigned int *)(param_1 + 0xcfc) = *(unsigned int *)(param_1 + 0xd04);
    *(unsigned int *)(param_1 + 0xd00) = *(unsigned int *)(param_1 + 0xd08);
    *(unsigned int *)(param_1 + 0xd04) = 0xffffffff;
    *(unsigned int *)(param_1 + 0xd08) = 0xffffffff;
  }
  temp_v2 = 0;
  do {
    if ((((*(char *)(temp_v0 + temp_v2 + 0xc78) != '\0') &&
         ((*(int *)(param_1 + 0xd00) == -1 || (*(int *)(param_1 + 0xd00) != temp_v2)))) &&
        ((*(int *)(param_1 + 0xd08) == -1 || (*(int *)(param_1 + 0xd08) != temp_v2)))) &&
       (((*(int *)(param_1 + 0xd10) == -1 || (*(int *)(param_1 + 0xd10) != temp_v2)) &&
        (temp_v3 = asdTMTexTableNodeIsLoaded(0x2a,temp_v2), temp_v3 != 0)))) {
      asdTMTexTableReleaseNode(0x2a,temp_v2);
      *(unsigned char *)(temp_v0 + temp_v2 + 0xc78) = 0;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x40);
  return;
}

} /* extern "C" */
