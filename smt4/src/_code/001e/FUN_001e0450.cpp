/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e0450` (_code @ 0x1e0450, 0x1fc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0029b130(int, int, unsigned int *, int);
int FUN_0029cde0(int, int, int);
int FUN_0029e974(void);
int FUN_0029f848(int, int, int, int, int, int);
int FUN_002b9024(void);

/* stack frame of param_3: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_3_stack;

extern int DAT_0043dd68; /* 0x43dd68 */

/* Supplied declaration required: FUN_0029b130. */
/* Supplied declaration required: FUN_0029cde0. */
/* Supplied declaration required: FUN_0029e974. */
/* Supplied declaration required: FUN_0029f848. */
/* Supplied declaration required: FUN_002b9024. */


void FUN_001e0450(unsigned int param_1,int param_2,int param_3)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  
  temp_v0 = DAT_0043dd68;
  temp_v6 = 0;
  temp_v1 = param_1;
  FUN_002b9024();
  temp_v4 = 0;
  *(unsigned int *)(temp_v0 + 0x9020) = 0;
  *(unsigned int *)(temp_v0 + 0x9024) = 0;
  *(unsigned int *)(temp_v0 + 0x9028) = 0;
  *(unsigned int *)(temp_v0 + 0x902c) = 0;
  *(unsigned int *)(temp_v0 + 0x9030) = 0;
  *(unsigned int *)(temp_v0 + 0x9034) = 0;
  *(unsigned int *)(temp_v0 + 0x9038) = 0;
  *(unsigned int *)(temp_v0 + 0x903c) = 0;
  *(unsigned int *)(temp_v0 + 0x9040) = 0;
  *(unsigned int *)(temp_v0 + 0x9044) = 0;
  *(unsigned int *)(temp_v0 + 0x9048) = 0;
  *(unsigned int *)(temp_v0 + 0x904c) = 0;
  temp_v9 = temp_v0 + 0x9020;
  do {
    temp_v5 = param_2 + temp_v4 * 2;
    temp_v2 = (unsigned int)*(unsigned short *)(temp_v5 + 0x34);
    if ((temp_v2 != 0) && (FUN_0029e974(), (*(unsigned char *)(temp_v2 + 3) & 0x20) != 0)) {
      temp_v3 = temp_v9;
      FUN_0029cde0(temp_v9,0x18,*(unsigned short *)(temp_v5 + 0x34));
      if (temp_v3 == 0) {
        temp_v3 = temp_v1 + 0x3c;
        FUN_0029cde0(temp_v3,8,*(unsigned short *)(temp_v5 + 0x34));
        if (temp_v3 == 0) {
          temp_v3 = temp_v6 * 2;
          temp_v6 = temp_v6 + 1;
          *(unsigned short *)(temp_v0 + temp_v3 + 0x9020) = *(unsigned short *)(temp_v5 + 0x34);
        }
      }
    }
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 8);
  temp_v4 = 0;
  do {
    temp_v5 = param_3 + temp_v4 * 2;
    temp_v2 = (unsigned int)*(unsigned short *)(temp_v5 + 0x34);
    if ((temp_v2 != 0) && (FUN_0029e974(), (*(unsigned char *)(temp_v2 + 3) & 0x20) != 0)) {
      temp_v3 = temp_v9;
      FUN_0029cde0(temp_v9,0x18,*(unsigned short *)(temp_v5 + 0x34));
      if (temp_v3 == 0) {
        temp_v3 = temp_v1 + 0x3c;
        FUN_0029cde0(temp_v3,8,*(unsigned short *)(temp_v5 + 0x34));
        if (temp_v3 == 0) {
          temp_v3 = temp_v6 * 2;
          temp_v6 = temp_v6 + 1;
          *(unsigned short *)(temp_v0 + temp_v3 + 0x9020) = *(unsigned short *)(temp_v5 + 0x34);
        }
      }
    }
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 8);
  FUN_0029f848(temp_v0 + 0x9204,temp_v6,8,1,1,1);
  temp_v8 = (temp_v8 & 0xfffe0000) | 1 | ((param_1 & 0x3fff7fff) << 2);
  temp_v7 = ((*(unsigned short *)(param_3 + 0x46) & 0x7fff) << 0xf) |
             (*(unsigned short *)(param_2 + 0x46) & 0xffff7fff) | 0x40000000;
  FUN_0029b130(temp_v9,temp_v6,&temp_v7,0);
  return;
}

} /* extern "C" */
