/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ba170` (_code @ 0x2ba170, 0x18c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b5cb4(void);

extern int g_lmapScene; /* 0x581288 */
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

/* Supplied declaration required: FUN_002b5cb4. */


void FUN_002ba170(void)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8;
  unsigned char temp_v9;
  unsigned int temp_v10;
  float temp_v11;
  
  if (*(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 4) == 0x65) {
    temp_v3 = 0;
    do {
      temp_v4 = (*(unsigned int *)&s__a_a_00587f08.u1[0]) + temp_v3 * 0x58;
      temp_v8 = *(char *)(temp_v4 + 0xa4) != '\0';
      temp_v0 = '\0';
      if (temp_v8) {
        temp_v0 = *(char *)(temp_v4 + 0xe0);
      }
      if (temp_v8 && temp_v0 != '\0') {
        temp_v10 = *(unsigned int *)(g_lmapScene + 0x1c);
        FUN_002b5cb4();
        *(unsigned int *)(temp_v4 + 0xe8) = temp_v10;
        *(unsigned int *)(temp_v4 + 0xec) = 999;
      }
      temp_v10 = (*(unsigned int *)&s__a_a_00587f08.u1[0]);
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x20);
    temp_v3 = 0;
    do {
      temp_v4 = -1;
      temp_v1 = 0;
      temp_v11 = 90000.0f;
      do {
        temp_v2 = temp_v10 + temp_v1 * 0x58;
        temp_v8 = *(char *)(temp_v2 + 0xa4) != '\0';
        temp_v5 = 0;
        if (temp_v8) {
          temp_v5 = *(unsigned int *)(temp_v2 + 0xa8);
        }
        temp_v9 = temp_v5 != 0;
        if (temp_v8 && temp_v9) {
          temp_v5 = (unsigned int)*(unsigned char *)(temp_v2 + 0xe0);
        }
        if ((((temp_v8 && temp_v9) && temp_v5 != 0) && (*(int *)(temp_v2 + 0xec) == 999)) &&
           (*(float *)(temp_v2 + 0xe8) < temp_v11)) {
          temp_v4 = temp_v1;
          temp_v11 = *(float *)(temp_v2 + 0xe8);
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 0x20);
      temp_v4 = temp_v10 + temp_v4 * 0x58;
      *(int *)(temp_v4 + 0xec) = temp_v3;
      *(int *)(temp_v4 + 0xe4) = temp_v3;
      temp_v6 = *(unsigned int *)(temp_v4 + 0xb4);
      temp_v7 = *(unsigned int *)(temp_v4 + 0xb8);
      temp_v1 = temp_v10 + temp_v3 * 0x58;
      temp_v3 = temp_v3 + 1;
      *(unsigned int *)(temp_v1 + 0xbb0) = *(unsigned int *)(temp_v4 + 0xb0);
      *(unsigned int *)(temp_v1 + 0xbb4) = temp_v6;
      *(unsigned int *)(temp_v1 + 3000) = temp_v7;
      *(unsigned int *)(temp_v1 + 0xbbc) = *(unsigned int *)(temp_v4 + 0xbc);
      *(unsigned int *)(temp_v1 + 0xbc0) = *(unsigned int *)(temp_v4 + 0xc0);
      *(unsigned char *)(temp_v1 + 0xbc4) = 1;
    } while (temp_v3 < 3);
    temp_v3 = 0;
    do {
      temp_v4 = temp_v10 + temp_v3 * 0x58;
      temp_v8 = *(char *)(temp_v4 + 0xa4) != '\0';
      temp_v5 = 0;
      if (temp_v8) {
        temp_v5 = *(unsigned int *)(temp_v4 + 0xa8);
      }
      temp_v9 = temp_v5 != 0;
      if (temp_v8 && temp_v9) {
        temp_v5 = (unsigned int)*(unsigned char *)(temp_v4 + 0xe0);
      }
      if ((((temp_v8 && temp_v9) && temp_v5 != 0) && (*(int *)(temp_v4 + 0xec) == 999)) &&
         (*(int *)(temp_v4 + 0xe4) != -1)) {
        *(unsigned int *)(temp_v4 + 0xe4) = 0xffffffff;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x20);
  }
  return;
}

} /* extern "C" */
