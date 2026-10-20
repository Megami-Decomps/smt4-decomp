/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002dddb4` (_code @ 0x2dddb4, 0xe4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int ptrListRemoveClearOwner(unsigned int);

extern unsigned int g_handleRegistry; /* 0x56fcc0 */
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

/* Supplied declaration required: ptrListRemoveClearOwner. */


void FUN_002dddb4(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  
  temp_v4 = 0;
  do {
    temp_v0 = (*(unsigned int *)&s__a_a_00587f08.u1[0]) + temp_v4 * 0x58;
    temp_v5 = *(char *)(temp_v0 + 0xba4) != '\0';
    temp_v1 = 0;
    if (temp_v5) {
      temp_v1 = (unsigned int)*(unsigned char *)(temp_v0 + 0xbd8);
    }
    if (temp_v5 && temp_v1 != 0) {
      temp_v0 = *(int *)(temp_v0 + 0xbd4);
      if (temp_v0 != 0) {
        temp_v1 = *(unsigned int *)(temp_v0 + 4);
      }
      if (temp_v0 != 0 && temp_v1 != 0) {
        ptrListRemoveClearOwner(g_handleRegistry);
      }
    }
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 3);
  temp_v4 = 0;
  do {
    temp_v0 = (*(unsigned int *)&s__a_a_00587f08.u1[0]) + temp_v4 * 0x58;
    pcVar2 = (char *)(temp_v0 + 0xa4);
    temp_v1 = 0;
    if (*pcVar2 != '\0') {
      temp_v1 = (unsigned int)*(unsigned char *)(temp_v0 + 0xd0);
    }
    if (*pcVar2 != '\0' && temp_v1 != 0) {
      temp_v1 = (unsigned int)*(unsigned char *)(temp_v0 + 0xd8);
      if (temp_v1 != 0) {
        pcVar2 = *(char **)(temp_v0 + 0xd4);
      }
      if ((temp_v1 != 0 && pcVar2 != (char *)0x0) && (temp_v1 = 0, *(int *)(pcVar2 + 4) != 0)) {
        ptrListRemoveClearOwner(g_handleRegistry);
        temp_v1 = temp_v2;
      }
    }
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 0x20);
  temp_v4 = 0;
  do {
    temp_v0 = *(int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + temp_v4 * 8 + 0x20);
    if (temp_v0 != 0) {
      temp_v1 = *(unsigned int *)(temp_v0 + 4);
    }
    if (temp_v0 != 0 && temp_v1 != 0) {
      ptrListRemoveClearOwner(g_handleRegistry);
      temp_v1 = temp_v3;
    }
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 0x11);
  return;
}

} /* extern "C" */
