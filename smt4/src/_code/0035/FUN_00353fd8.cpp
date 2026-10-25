/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00353fd8` (_code @ 0x353fd8, 0xf4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00239e14(int, int);
int FUN_00239ed0(unsigned int, unsigned char *);
int _ZN18WindowStatusResultC1Ej(...);
int __aeabi_memcpy4(unsigned char *, int, int);

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

/* Supplied declaration required: FUN_00239e14. */
/* Supplied declaration required: FUN_00239ed0. */
extern int FUN_00239f84(unsigned char *, unsigned char *, unsigned int);
extern int tokenResolveAddress(unsigned int, int *, int);
extern unsigned int FUN_002b5c44(void);
/* Supplied declaration required: _ZN18WindowStatusResultC1Ej. */
extern int FUN_002c55b4(void);
extern int appletIsExitRequested(void);
/* Supplied declaration required: __aeabi_memcpy4. */


void FUN_00353fd8(unsigned int param_1,int *param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char temp_v4 [4];
  
  temp_v1 = *param_2;
  FUN_00239e14(temp_v1,2);
  if (-1 < temp_v1) {
    temp_v2 = FUN_002b5c44();
    temp_v1 = tokenResolveAddress(temp_v2,&temp_v3,*param_2);
    temp_v0 = temp_v3;
    if (-1 < temp_v1) {
      __aeabi_memcpy4(&DAT_004c7030,temp_v3 + 0x54,0x44);
      DAT_004c7074.s1[0] = *(char *)(temp_v0 + 0x98);
      temp_v1 = FUN_00239f84(temp_v4,&DAT_004c7000,0);
      if (-1 < temp_v1) {
        temp_v1 = appletIsExitRequested();
        if ((temp_v1 == 0) && (temp_v1 = FUN_002c55b4(), temp_v1 == 0)) {
          if ((*(char *)(temp_v3 + 0x98) == '\0') && ((char)DAT_004c7074.whole != '\0')) {
            *(unsigned char *)(temp_v3 + 0x98) = 1;
          }
          FUN_00239ed0(param_1,&DAT_004c7000);
          return;
        }
        _ZN18WindowStatusResultC1Ej(param_1,0xc9413891);
        return;
      }
    }
  }
  _ZN18WindowStatusResultC1Ej(param_1,temp_v1);
  return;
}

} /* extern "C" */
