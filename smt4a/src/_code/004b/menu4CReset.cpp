#include "romwright_types.h"

extern "C" {

int FUN_00184528(int, int);
int uiSpriteSetImageKeyframe(int, int, int);
int asdTMTexLoadMainHeap(int);

/* Supplied declaration required: FUN_00184528. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
/* Supplied declaration required: asdTMTexLoadMainHeap. */
extern int FUN_004cfe4c(int);


void menu4CReset(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  *(unsigned char *)(param_1 + 0x9ed) = 0;
  *(unsigned char *)(param_1 + 0x9ee) = 0;
  *(unsigned int *)(param_1 + 0x1014) = 0;
  *(unsigned int *)(param_1 + 0x1018) = 0;
  temp_v2 = 0;
  *(unsigned int *)(param_1 + 0x1074) = 0;
  do {
    uiSpriteSetImageKeyframe(param_1 + temp_v2 * 0x8c + 0xa10,0,0);
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 10);
  FUN_00184528(param_1 + 0xa8,0);
  FUN_00184528(param_1 + 0xa8,1);
  temp_v2 = FUN_004cfe4c(param_1);
  temp_v0 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + temp_v2 * 4 + 0x7ec) + 0x5a);
  *(unsigned int *)(param_1 + 0x101c) = temp_v0 + 2;
  temp_v1 = temp_v0 + 1;
  temp_v2 = param_1 + temp_v1;
  *(int *)(param_1 + 0x1020) = temp_v1;
  if (*(char *)(temp_v2 + 0x1034) == '\0') {
    asdTMTexLoadMainHeap(0x1f);
    *(unsigned char *)(temp_v2 + 0x1034) = 1;
  }
  return;
}

} /* extern "C" */
