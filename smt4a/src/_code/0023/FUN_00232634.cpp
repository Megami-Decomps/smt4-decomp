#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern int DAT_0058069c; /* 0x58069c */


void FUN_00232634(void)

{
  if (*(int **)(DAT_0058069c + 0xc) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(DAT_0058069c + 0xc) + 4))(*(int **)(DAT_0058069c + 0xc));
    *(unsigned int *)(DAT_0058069c + 0xc) = 0;
  }
  if (*(int **)(DAT_0058069c + 0x10) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(DAT_0058069c + 0x10) + 4))(*(int **)(DAT_0058069c + 0x10));
    *(unsigned int *)(DAT_0058069c + 0x10) = 0;
  }
  if (*(int **)(DAT_0058069c + 0x14) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(DAT_0058069c + 0x14) + 4))(*(int **)(DAT_0058069c + 0x14));
    *(unsigned int *)(DAT_0058069c + 0x14) = 0;
  }
  return;
}

} /* extern "C" */
