/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00297c3c` (_code @ 0x297c3c, 0x248 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int controllerSetDestination(int, int);
int FUN_003fdb18(int);
int FUN_003fe86c(int, int, int);

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
extern signed char DAT_005f161f; /* 0x5f161f */

/* Supplied declaration required: controllerSetDestination. */
/* Supplied declaration required: FUN_003fdb18. */
/* Supplied declaration required: FUN_003fe86c. */
extern int slots4FGetActiveValue(int);


void FUN_00297c3c(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  
  if (*(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 4) == 0x65) {
    temp_v2 = 0;
    do {
      temp_v3 = (*(unsigned int *)&s__a_a_00587f08.u1[0]) + temp_v2 * 0x58;
      if (*(char *)(temp_v3 + 0xba4) != '\0') {
        temp_v4 = *(int *)(*(int *)(temp_v3 + 0xbd4) + 4);
        temp_v0 = *(unsigned int *)(temp_v4 + 4);
        if (DAT_005f161f != '\0') {
          if ((temp_v0 & 1) == 0) {
            *(unsigned int *)(temp_v4 + 4) = temp_v0 | 3;
          }
        }
        else {
          if ((temp_v0 & 1) != 0) {
            *(unsigned int *)(temp_v4 + 4) = temp_v0 & 0xfffffffc;
          }
          if (*(char *)(temp_v3 + 0xbc4) != '\0') {
            controllerSetDestination(temp_v4,temp_v3 + 0xbb0);
            FUN_003fdb18(temp_v4);
            temp_v1 = slots4FGetActiveValue(temp_v4);
            if (temp_v1 != *(int *)(temp_v3 + 0xbc0)) {
              FUN_003fe86c(temp_v4,*(int *)(temp_v3 + 0xbc0),2);
            }
            *(unsigned char *)(temp_v3 + 0xbc4) = 0;
          }
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 3);
  }
  temp_v2 = 0;
  do {
    temp_v4 = (*(unsigned int *)&s__a_a_00587f08.u1[0]) + temp_v2 * 0x58;
    temp_v5 = *(char *)(temp_v4 + 0xa4) != '\0';
    temp_v3 = 0;
    if (temp_v5) {
      temp_v3 = *(int *)(temp_v4 + 0xa8);
    }
    if ((temp_v5 && temp_v3 != 8) && (*(char *)(temp_v4 + 0xe0) == '\0')) {
      if (*(char *)(temp_v4 + 0xd0) == '\0') {
        temp_v3 = *(int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + *(int *)(temp_v4 + 0xdc) * 8 + 0x20);
      }
      else {
        temp_v3 = *(int *)(temp_v4 + 0xd4);
      }
      temp_v3 = *(int *)(temp_v3 + 4);
      temp_v0 = *(unsigned int *)(temp_v3 + 4);
      if (DAT_005f161f != '\0') {
        if ((temp_v0 & 1) == 0) {
          temp_v0 = temp_v0 | 3;
          *(unsigned int *)(temp_v3 + 4) = temp_v0;
        }
      }
      else {
        if ((temp_v0 & 1) != 0) {
          *(unsigned int *)(temp_v3 + 4) = temp_v0 & 0xfffffffc;
        }
        if (*(int *)(temp_v4 + 0xf0) != 0) {
          if (*(char *)(temp_v4 + 0xf4) != '\0') {
            temp_v0 = *(unsigned int *)(temp_v3 + 4);
            if (DAT_005f161f != '\0') {
              if ((temp_v0 & 1) == 0) {
                temp_v0 = temp_v0 & 0xfffffffc;
                *(unsigned int *)(temp_v3 + 4) = temp_v0;
              }
              temp_v2 = temp_v2 + 1;
              if (temp_v2 >= 0x20) {
                return;
              }
              continue;
            }
            if ((temp_v0 & 1) != 0) {
              temp_v0 = temp_v0 & 0xfffffffc;
              *(unsigned int *)(temp_v3 + 4) = temp_v0;
            }
          }
          else if ((*(unsigned int *)(temp_v3 + 4) & 1) == 0) {
            temp_v0 = *(unsigned int *)(temp_v3 + 4) | 3;
            *(unsigned int *)(temp_v3 + 4) = temp_v0;
          }
        }
        if (*(char *)(temp_v4 + 0xc4) != '\0') {
          controllerSetDestination(temp_v3,temp_v4 + 0xb0);
          FUN_003fdb18(temp_v3);
          temp_v1 = slots4FGetActiveValue(temp_v3);
          if (temp_v1 != *(int *)(temp_v4 + 0xc0)) {
            FUN_003fe86c(temp_v3,*(int *)(temp_v4 + 0xc0),2);
          }
          *(unsigned char *)(temp_v4 + 0xc4) = 0;
        }
      }
    }
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 0x20) {
      return;
    }
  } while( 1 );
}

} /* extern "C" */
