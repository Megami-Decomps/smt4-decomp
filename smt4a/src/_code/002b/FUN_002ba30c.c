/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ba30c` (_code @ 0x2ba30c, 0xdc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
#ifndef ROMWRIGHT_STORAGE_s__a_a_00587f08_9_1_DEFINED
#define ROMWRIGHT_STORAGE_s__a_a_00587f08_9_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_s__a_a_00587f08_9_1 {
    char whole[9];
    unsigned char u1[9];
    signed char s1[9];
};
typedef char romwright_storage_s__a_a_00587f08_9_1_size_check[(sizeof(union romwright_storage_s__a_a_00587f08_9_1) == 9) ? 1 : -1];
typedef char romwright_storage_s__a_a_00587f08_9_1_u1_width_check[(sizeof(((union romwright_storage_s__a_a_00587f08_9_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s__a_a_00587f08_9_1_s1_width_check[(sizeof(((union romwright_storage_s__a_a_00587f08_9_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_s__a_a_00587f08_9_1 s__a_a_00587f08; /* 0x587f08 */


void FUN_002ba30c(void)

{
  int *piVar1;
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  
  temp_v0 = 0;
  do {
    temp_v1 = (*(unsigned int *)&s__a_a_00587f08.u1[0]) + temp_v0 * 0x58;
    temp_v2 = *(char *)(temp_v1 + 0xba4) != '\0';
    piVar1 = (int *)0x0;
    if (temp_v2) {
      piVar1 = *(int **)(temp_v1 + 0xbd4);
    }
    if (temp_v2 && piVar1 != (int *)0x0) {
      (**(romwright_code **)(*piVar1 + 4))();
      *(unsigned int *)(temp_v1 + 0xbd4) = 0;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 3);
  temp_v0 = 0;
  do {
    temp_v1 = (*(unsigned int *)&s__a_a_00587f08.u1[0]) + temp_v0 * 0x58;
    temp_v2 = *(char *)(temp_v1 + 0xa4) != '\0';
    piVar1 = (int *)0x0;
    if (temp_v2) {
      piVar1 = (int *)(unsigned int)*(unsigned char *)(temp_v1 + 0xd0);
    }
    temp_v3 = piVar1 != (int *)0x0;
    if (temp_v2 && temp_v3) {
      piVar1 = *(int **)(temp_v1 + 0xd4);
    }
    if ((temp_v2 && temp_v3) && piVar1 != (int *)0x0) {
      (**(romwright_code **)(*piVar1 + 4))();
      *(unsigned int *)(temp_v1 + 0xd4) = 0;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x20);
  temp_v0 = 0;
  do {
    piVar1 = *(int **)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + temp_v0 * 8 + 0x20);
    if (piVar1 != (int *)0x0) {
      (**(romwright_code **)(*piVar1 + 4))();
      *(unsigned int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + temp_v0 * 8 + 0x20) = 0;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x11);
  return;
}
