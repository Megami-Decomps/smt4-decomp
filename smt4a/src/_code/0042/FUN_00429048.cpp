/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00429048` (_code @ 0x429048, 0x124 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a46c(unsigned int *, int, int);
int FUN_001b57a8(...);
int sysMemClear(unsigned int *, int);
int FUN_00427a10(unsigned int, unsigned char *);
int FUN_00427e68(int, int);
int rt_memcpy_w(unsigned char *, int, int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

extern unsigned char DAT_0061b000; /* 0x61b000 */
extern unsigned char DAT_0061b030; /* 0x61b030 */
#ifndef ROMWRIGHT_STORAGE_DAT_0061b074_4_4_DEFINED
#define ROMWRIGHT_STORAGE_DAT_0061b074_4_4_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_DAT_0061b074_4_4 {
    unsigned int whole;
    unsigned char u1[4];
    signed char s1[4];
    unsigned short u2[2];
    short s2[2];
    unsigned int u4[1];
    int s4[1];
    float f4[1];
};
typedef char romwright_storage_DAT_0061b074_4_4_size_check[(sizeof(union romwright_storage_DAT_0061b074_4_4) == 4) ? 1 : -1];
typedef char romwright_storage_DAT_0061b074_4_4_u1_width_check[(sizeof(((union romwright_storage_DAT_0061b074_4_4 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_0061b074_4_4_s1_width_check[(sizeof(((union romwright_storage_DAT_0061b074_4_4 *)0)->s1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_0061b074_4_4_u2_width_check[(sizeof(((union romwright_storage_DAT_0061b074_4_4 *)0)->u2[0]) == 2) ? 1 : -1];
typedef char romwright_storage_DAT_0061b074_4_4_s2_width_check[(sizeof(((union romwright_storage_DAT_0061b074_4_4 *)0)->s2[0]) == 2) ? 1 : -1];
typedef char romwright_storage_DAT_0061b074_4_4_u4_width_check[(sizeof(((union romwright_storage_DAT_0061b074_4_4 *)0)->u4[0]) == 4) ? 1 : -1];
typedef char romwright_storage_DAT_0061b074_4_4_s4_width_check[(sizeof(((union romwright_storage_DAT_0061b074_4_4 *)0)->s4[0]) == 4) ? 1 : -1];
typedef char romwright_storage_DAT_0061b074_4_4_f4_width_check[(sizeof(((union romwright_storage_DAT_0061b074_4_4 *)0)->f4[0]) == 4) ? 1 : -1];
#endif
extern union romwright_storage_DAT_0061b074_4_4 DAT_0061b074; /* 0x61b074 */
extern unsigned int DAT_0061b078; /* 0x61b078 */

extern int FUN_0015a410(void);
extern int FUN_0015a75c(void);
extern unsigned int FUN_0016ccfc(void);
/* Supplied declaration required: FUN_0019a46c. */
/* Supplied declaration required: FUN_001b57a8. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_00427a10. */
extern int FUN_00427e28(unsigned char *, unsigned char *, unsigned int);
/* Supplied declaration required: FUN_00427e68. */
extern int FUN_004287ac(unsigned int, int *, int);
/* Supplied declaration required: rt_memcpy_w. */


void FUN_00429048(unsigned int param_1,int *param_2,int param_3)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char temp_v4 [8];
  
  temp_v1 = *param_2;
  FUN_00427e68(temp_v1,2);
  if (-1 < temp_v1) {
    temp_v2 = FUN_0016ccfc();
    temp_v1 = FUN_004287ac(temp_v2,&temp_v3,*param_2);
    temp_v0 = temp_v3;
    if (-1 < temp_v1) {
      rt_memcpy_w(&DAT_0061b030,temp_v3 + 0x54,0x44);
      DAT_0061b074.s1[0] = *(char *)(temp_v0 + 0x98);
      if (param_3 != 0) {
        FUN_0019a46c(&DAT_0061b078,param_3,0xf);
      }
      else {
        sysMemClear(&DAT_0061b078,0xf);
      }
      temp_v1 = FUN_00427e28(temp_v4,&DAT_0061b000,0);
      if (-1 < temp_v1) {
        temp_v1 = FUN_0015a75c();
        if ((temp_v1 == 0) && (temp_v1 = FUN_0015a410(), temp_v1 == 0)) {
          if ((*(char *)(temp_v3 + 0x98) == '\0') && ((char)DAT_0061b074.whole != '\0')) {
            *(unsigned char *)(temp_v3 + 0x98) = 1;
          }
          FUN_00427a10(param_1,&DAT_0061b000);
          return;
        }
        FUN_001b57a8(param_1,0xc9413891);
        return;
      }
    }
  }
  FUN_001b57a8(param_1,temp_v1);
  return;
}

} /* extern "C" */
