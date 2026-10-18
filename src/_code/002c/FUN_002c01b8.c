/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c01b8` (_code @ 0x2c01b8, 0xd0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_3_stack;

#ifndef ROMWRIGHT_STORAGE_DAT_004e3cd4_4_4_DEFINED
#define ROMWRIGHT_STORAGE_DAT_004e3cd4_4_4_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_DAT_004e3cd4_4_4 {
    unsigned int whole;
    unsigned char u1[4];
    signed char s1[4];
    unsigned short u2[2];
    short s2[2];
    unsigned int u4[1];
    int s4[1];
    float f4[1];
};
typedef char romwright_storage_DAT_004e3cd4_4_4_size_check[(sizeof(union romwright_storage_DAT_004e3cd4_4_4) == 4) ? 1 : -1];
typedef char romwright_storage_DAT_004e3cd4_4_4_u1_width_check[(sizeof(((union romwright_storage_DAT_004e3cd4_4_4 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_004e3cd4_4_4_s1_width_check[(sizeof(((union romwright_storage_DAT_004e3cd4_4_4 *)0)->s1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_004e3cd4_4_4_u2_width_check[(sizeof(((union romwright_storage_DAT_004e3cd4_4_4 *)0)->u2[0]) == 2) ? 1 : -1];
typedef char romwright_storage_DAT_004e3cd4_4_4_s2_width_check[(sizeof(((union romwright_storage_DAT_004e3cd4_4_4 *)0)->s2[0]) == 2) ? 1 : -1];
typedef char romwright_storage_DAT_004e3cd4_4_4_u4_width_check[(sizeof(((union romwright_storage_DAT_004e3cd4_4_4 *)0)->u4[0]) == 4) ? 1 : -1];
typedef char romwright_storage_DAT_004e3cd4_4_4_s4_width_check[(sizeof(((union romwright_storage_DAT_004e3cd4_4_4 *)0)->s4[0]) == 4) ? 1 : -1];
typedef char romwright_storage_DAT_004e3cd4_4_4_f4_width_check[(sizeof(((union romwright_storage_DAT_004e3cd4_4_4 *)0)->f4[0]) == 4) ? 1 : -1];
#endif
extern union romwright_storage_DAT_004e3cd4_4_4 DAT_004e3cd4; /* 0x4e3cd4 */
#ifndef ROMWRIGHT_STORAGE_DAT_004e3ce4_4_4_DEFINED
#define ROMWRIGHT_STORAGE_DAT_004e3ce4_4_4_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_DAT_004e3ce4_4_4 {
    unsigned int whole;
    unsigned char u1[4];
    signed char s1[4];
    unsigned short u2[2];
    short s2[2];
    unsigned int u4[1];
    int s4[1];
    float f4[1];
};
typedef char romwright_storage_DAT_004e3ce4_4_4_size_check[(sizeof(union romwright_storage_DAT_004e3ce4_4_4) == 4) ? 1 : -1];
typedef char romwright_storage_DAT_004e3ce4_4_4_u1_width_check[(sizeof(((union romwright_storage_DAT_004e3ce4_4_4 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_004e3ce4_4_4_s1_width_check[(sizeof(((union romwright_storage_DAT_004e3ce4_4_4 *)0)->s1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_004e3ce4_4_4_u2_width_check[(sizeof(((union romwright_storage_DAT_004e3ce4_4_4 *)0)->u2[0]) == 2) ? 1 : -1];
typedef char romwright_storage_DAT_004e3ce4_4_4_s2_width_check[(sizeof(((union romwright_storage_DAT_004e3ce4_4_4 *)0)->s2[0]) == 2) ? 1 : -1];
typedef char romwright_storage_DAT_004e3ce4_4_4_u4_width_check[(sizeof(((union romwright_storage_DAT_004e3ce4_4_4 *)0)->u4[0]) == 4) ? 1 : -1];
typedef char romwright_storage_DAT_004e3ce4_4_4_s4_width_check[(sizeof(((union romwright_storage_DAT_004e3ce4_4_4 *)0)->s4[0]) == 4) ? 1 : -1];
typedef char romwright_storage_DAT_004e3ce4_4_4_f4_width_check[(sizeof(((union romwright_storage_DAT_004e3ce4_4_4 *)0)->f4[0]) == 4) ? 1 : -1];
#endif
extern union romwright_storage_DAT_004e3ce4_4_4 DAT_004e3ce4; /* 0x4e3ce4 */


unsigned int FUN_002c01b8(unsigned int *param_1,unsigned int *param_2,int param_3)

{
  char temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = (unsigned int)(unsigned short)DAT_004e3cd4.whole;
  if (param_3 != 0) {
    if (param_3 != 1) {
      if (param_3 != 2) {
        if ((param_3 != 3 || (char)DAT_004e3ce4.whole != '\0') || DAT_004e3ce4.s1[1] != '\x01') {
          return 0;
        }
        if (param_1 != (unsigned int *)0x0) {
          *param_1 = temp_v1;
        }
      }
      else {
        temp_v0 = '\x02';
        if ((char)DAT_004e3ce4.whole == '\x01') {
          temp_v0 = DAT_004e3ce4.s1[2];
        }
        if ((char)DAT_004e3ce4.whole != '\x01' || temp_v0 != '\x01') {
          return 0;
        }
        if (param_1 != (unsigned int *)0x0) {
          *param_1 = temp_v1;
        }
      }
    }
    else {
      if ((char)DAT_004e3ce4.whole != '\x01' || DAT_004e3ce4.s1[1] != '\0') {
        return 0;
      }
      if (param_1 != (unsigned int *)0x0) {
        *param_1 = temp_v1;
      }
    }
  }
  else {
    if ((char)DAT_004e3ce4.whole != '\x01') {
      return 0;
    }
    if (param_1 != (unsigned int *)0x0) {
      *param_1 = temp_v1;
    }
  }
  if (param_2 != (unsigned int *)0x0) {
    *param_2 = (unsigned int)DAT_004e3cd4.u2[1];
  }
  return 1;
}
