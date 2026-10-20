/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ba890` (_code @ 0x4ba890, 0x1e8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdTMTexTableNodeIsLoaded(...);
int uiSpriteSetImageKeyframe(int, int, int);
int asdTMTexTableReleaseNode(int, int);
int FUN_004cf8dc(int, int);

typedef int romwright_code(...);
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int FUN_00163aa4(int);
/* Supplied declaration required: asdTMTexTableNodeIsLoaded. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
/* Supplied declaration required: asdTMTexTableReleaseNode. */
/* Supplied declaration required: FUN_004cf8dc. */
extern int FUN_004cfe4c(int);


void FUN_004ba890(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  romwright_code *pcVar6;
  unsigned int temp_v5;
  
  temp_v0 = param_1 + *(int *)(param_1 + 0x28) * 8;
  pcVar6 = *(romwright_code **)(temp_v0 + 0x117c);
  temp_v1 = *(unsigned int *)(temp_v0 + 0x1180);
  if ((pcVar6 != (romwright_code *)0x0) || (((temp_v1 & 1) != 0 && (temp_v1 != 0)))) {
    if ((temp_v1 & 1) != 0) {
      pcVar6 = *(romwright_code **)((unsigned char *)pcVar6 + *(int *)(param_1 + ((int)temp_v1 >> 1)));
    }
    (*pcVar6)();
  }
  temp_v0 = param_1 + 0x9c;
  if (*(char *)(param_1 + 0xa89) != '\0') {
    *(int *)(param_1 + 0x10b4) = (*(int *)(param_1 + 0x10b4) + 1) % 0x10;
  }
  if (((*(int *)(param_1 + 0x10cc) != -1) && (temp_v2 = asdTMTexTableNodeIsLoaded(0x1f), temp_v2 != 0)) &&
     (*(char *)(param_1 + 0x10ae) != '\0')) {
    temp_v2 = FUN_004cfe4c(temp_v0);
    if (*(int *)(param_1 + 0x10cc) == *(unsigned short *)(*(int *)(temp_v0 + temp_v2 * 4 + 0x7ec) + 0x5a) + 1) {
      *(unsigned int *)(param_1 + 0x10c0) = *(unsigned int *)(param_1 + 0x10c8);
      *(int *)(param_1 + 0x10c4) = *(int *)(param_1 + 0x10cc);
      *(unsigned int *)(param_1 + 0x10c8) = 0xffffffff;
      *(unsigned int *)(param_1 + 0x10cc) = 0xffffffff;
      uiSpriteSetImageKeyframe(param_1 + 0x1024,1,0);
    }
  }
  if (*(int *)(param_1 + 0x10c0) != -1) {
    temp_v2 = FUN_00163aa4(param_1 + 0x1024);
    if (temp_v2 != 0) {
      temp_v3 = *(unsigned int *)(param_1 + 0x10c0);
      temp_v5 = *(unsigned int *)(param_1 + 0x10c4);
      *(unsigned int *)(param_1 + 0x10c0) = 0xffffffff;
      *(unsigned int *)(param_1 + 0x10c4) = 0xffffffff;
      *(unsigned int *)(param_1 + 0x10b8) = temp_v3;
      *(unsigned int *)(param_1 + 0x10bc) = temp_v5;
    }
  }
  temp_v2 = 0;
  do {
    if ((((*(char *)(temp_v0 + temp_v2 + 0x1034) != '\0') &&
         ((*(int *)(param_1 + 0x10bc) == -1 || (*(int *)(param_1 + 0x10bc) != temp_v2)))) &&
        ((*(int *)(param_1 + 0x10c4) == -1 || (*(int *)(param_1 + 0x10c4) != temp_v2)))) &&
       (((*(int *)(param_1 + 0x10cc) == -1 || (*(int *)(param_1 + 0x10cc) != temp_v2)) &&
        (temp_v4 = asdTMTexTableNodeIsLoaded(0x1f,temp_v2), temp_v4 != 0)))) {
      asdTMTexTableReleaseNode(0x1f,temp_v2);
      *(unsigned char *)(temp_v0 + temp_v2 + 0x1034) = 0;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x40);
  FUN_004cf8dc(param_1 + 0x144,0xc);
  return;
}

} /* extern "C" */
