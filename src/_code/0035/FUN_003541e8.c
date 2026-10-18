/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003541e8` (_code @ 0x3541e8, 0xf4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern unsigned char DAT_004c7000; /* 0x4c7000 */
extern unsigned char DAT_004c7030; /* 0x4c7030 */
#ifndef ROMWRIGHT_STORAGE_DAT_004c7074_4_4_DEFINED
#define ROMWRIGHT_STORAGE_DAT_004c7074_4_4_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_DAT_004c7074_4_4 {
    unsigned int whole;
    unsigned char u1[4];
    signed char s1[4];
    unsigned short u2[2];
    short s2[2];
    unsigned int u4[1];
    int s4[1];
    float f4[1];
};
typedef char romwright_storage_DAT_004c7074_4_4_size_check[(sizeof(union romwright_storage_DAT_004c7074_4_4) == 4) ? 1 : -1];
typedef char romwright_storage_DAT_004c7074_4_4_u1_width_check[(sizeof(((union romwright_storage_DAT_004c7074_4_4 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_004c7074_4_4_s1_width_check[(sizeof(((union romwright_storage_DAT_004c7074_4_4 *)0)->s1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_004c7074_4_4_u2_width_check[(sizeof(((union romwright_storage_DAT_004c7074_4_4 *)0)->u2[0]) == 2) ? 1 : -1];
typedef char romwright_storage_DAT_004c7074_4_4_s2_width_check[(sizeof(((union romwright_storage_DAT_004c7074_4_4 *)0)->s2[0]) == 2) ? 1 : -1];
typedef char romwright_storage_DAT_004c7074_4_4_u4_width_check[(sizeof(((union romwright_storage_DAT_004c7074_4_4 *)0)->u4[0]) == 4) ? 1 : -1];
typedef char romwright_storage_DAT_004c7074_4_4_s4_width_check[(sizeof(((union romwright_storage_DAT_004c7074_4_4 *)0)->s4[0]) == 4) ? 1 : -1];
typedef char romwright_storage_DAT_004c7074_4_4_f4_width_check[(sizeof(((union romwright_storage_DAT_004c7074_4_4 *)0)->f4[0]) == 4) ? 1 : -1];
#endif
extern union romwright_storage_DAT_004c7074_4_4 DAT_004c7074; /* 0x4c7074 */

/* Supplied declaration required: FUN_00239fac. */
/* Supplied declaration required: FUN_0023a068. */
extern int FUN_0023a11c(unsigned char *, unsigned char *, unsigned int);
extern int FUN_0023a270(unsigned int, int *, int);
extern unsigned int FUN_002b5f84(void);
/* Supplied declaration required: FUN_002bad80. */
/* Supplied declaration required: FUN_002bcf58. */
extern int FUN_002c57a4(void);
extern int FUN_002c57b4(void);


void FUN_003541e8(unsigned int param_1,int *param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char temp_v4 [4];
  
  temp_v1 = *param_2;
  FUN_00239fac(temp_v1,2);
  if (-1 < temp_v1) {
    temp_v2 = FUN_002b5f84();
    temp_v1 = FUN_0023a270(temp_v2,&temp_v3,*param_2);
    temp_v0 = temp_v3;
    if (-1 < temp_v1) {
      FUN_002bcf58(&DAT_004c7030,temp_v3 + 0x54,0x44);
      DAT_004c7074.s1[0] = *(char *)(temp_v0 + 0x98);
      temp_v1 = FUN_0023a11c(temp_v4,&DAT_004c7000,0);
      if (-1 < temp_v1) {
        temp_v1 = FUN_002c57b4();
        if ((temp_v1 == 0) && (temp_v1 = FUN_002c57a4(), temp_v1 == 0)) {
          if ((*(char *)(temp_v3 + 0x98) == '\0') && ((char)DAT_004c7074.whole != '\0')) {
            *(unsigned char *)(temp_v3 + 0x98) = 1;
          }
          FUN_0023a068(param_1,&DAT_004c7000);
          return;
        }
        FUN_002bad80(param_1,0xc9413891);
        return;
      }
    }
  }
  FUN_002bad80(param_1,temp_v1);
  return;
}
