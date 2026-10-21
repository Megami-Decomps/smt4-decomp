/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003542c4` (_code @ 0x3542c4, 0x180 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00239e14(int, int);
int FUN_00239ed0(unsigned int, unsigned char *);
int FUN_002ba81c(unsigned char *, unsigned int *, int);
int resultPairInitialize(...);
int rt_memcpy_w(unsigned char *, int, int);

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;

extern unsigned char DAT_004c7000; /* 0x4c7000 */
extern unsigned char DAT_004c7030; /* 0x4c7030 */
extern unsigned int DAT_004c7078; /* 0x4c7078 */
extern unsigned int DAT_004c707c; /* 0x4c707c */
extern unsigned char DAT_004c7080; /* 0x4c7080 */
extern unsigned int DAT_004c70a0; /* 0x4c70a0 */
extern unsigned char DAT_004c70a4; /* 0x4c70a4 */

extern unsigned char libc_toupper(void);
/* Supplied declaration required: FUN_00239e14. */
/* Supplied declaration required: FUN_00239ed0. */
extern int FUN_00239f84(unsigned char *, unsigned char *, unsigned int);
extern int tokenResolveAddress(unsigned int, int *, int);
extern unsigned int FUN_002b5c44(void);
/* Supplied declaration required: FUN_002ba81c. */
/* Supplied declaration required: resultPairInitialize. */
extern int FUN_002c55b4(void);
extern int appletIsExitRequested(void);
/* Supplied declaration required: rt_memcpy_w. */


void FUN_003542c4(unsigned int param_1,int *param_2,unsigned int *param_3,unsigned int *param_4,int param_5)

{
/* irregular: 5 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned char temp_v6 [4];
  
  temp_v2 = *param_2;
  FUN_00239e14(temp_v2,6);
  if (-1 < temp_v2) {
    temp_v3 = FUN_002b5c44();
    temp_v2 = tokenResolveAddress(temp_v3,&temp_v5,*param_2);
    if (-1 < temp_v2) {
      rt_memcpy_w(&DAT_004c7030,temp_v5 + 0x54,0x44);
      temp_v0 = (char)param_3[1];
      if (temp_v0 == '\0') {
        DAT_004c707c = 0x8c;
      }
      else if (temp_v0 == '\x01') {
        DAT_004c707c = 0xd;
      }
      else if ((temp_v0 == '\x02') || (temp_v0 != '\x03')) {
        DAT_004c707c = 0;
      }
      else {
        DAT_004c707c = 0x10;
      }
      DAT_004c707c = DAT_004c707c | 0x40000;
      DAT_004c7078 = (unsigned int)*(unsigned char *)((int)param_3 + 5) | ((*param_3 & 0xff0fffff) << 8);
      for (temp_v4 = 0; (temp_v4 < 0x1f && (*(char *)(param_5 + temp_v4) != '\0')); temp_v4 = temp_v4 + 1) {
        temp_v1 = libc_toupper();
        (&DAT_004c7080)[temp_v4] = temp_v1;
      }
      (&DAT_004c7080)[temp_v4] = 0;
      DAT_004c70a0 = *param_4;
      FUN_002ba81c(&DAT_004c70a4,param_4 + 1,0x14);
      temp_v2 = FUN_00239f84(temp_v6,&DAT_004c7000,0);
      if (-1 < temp_v2) {
        temp_v2 = appletIsExitRequested();
        if ((temp_v2 == 0) && (temp_v2 = FUN_002c55b4(), temp_v2 == 0)) {
          FUN_00239ed0(param_1,&DAT_004c7000);
          return;
        }
        resultPairInitialize(param_1,0xc9413891);
        return;
      }
    }
  }
  resultPairInitialize(param_1,temp_v2);
  return;
}

} /* extern "C" */
