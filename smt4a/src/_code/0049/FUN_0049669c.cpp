/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049669c` (_code @ 0x49669c, 0x250 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014384c(int);
int FUN_0014afd0(int, int);
int FUN_0019cac4(void);
int FUN_002804b0(unsigned char *, unsigned int *, int);
int FUN_002bf464(void);
int FUN_0031a400(void);
int FUN_0031bca4(void);
int FUN_00342010(void);
int FUN_00389fe0(...);
int FUN_0039af48(...);
int FUN_003b61ec(void);
int FUN_0040a244(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char LAB_004968ec; /* 0x4968ec */
extern unsigned char LAB_004968fc; /* 0x4968fc */
extern unsigned char LAB_00496914; /* 0x496914 */
extern unsigned char LAB_0049692c; /* 0x49692c */
extern unsigned char LAB_00496944; /* 0x496944 */
extern unsigned char LAB_0049695c; /* 0x49695c */
extern unsigned char LAB_00496978; /* 0x496978 */
extern unsigned char LAB_00496990; /* 0x496990 */

/* Supplied declaration required: FUN_0014384c. */
/* Supplied declaration required: FUN_0014afd0. */
/* Supplied declaration required: FUN_0019cac4. */
/* Supplied declaration required: FUN_002804b0. */
/* Supplied declaration required: FUN_002bf464. */
/* Supplied declaration required: FUN_0031a400. */
/* Supplied declaration required: FUN_0031bca4. */
/* Supplied declaration required: FUN_00342010. */
/* Supplied declaration required: FUN_00389fe0. */
/* Supplied declaration required: FUN_0039af48. */
/* Supplied declaration required: FUN_003b61ec. */
extern unsigned int FUN_00409fe8(int, unsigned int);
/* Supplied declaration required: FUN_0040a244. */


void FUN_0049669c(unsigned int *param_1)

{
/* irregular: 12 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  FUN_0031a400();
  FUN_003b61ec();
  FUN_002bf464();
  FUN_00342010();
  FUN_002804b0(&LAB_004968ec,param_1 + 0x61,0);
  FUN_0014384c(0x20);
  FUN_0014afd0(0x20,0);
  temp_v1 = 0;
  temp_v2 = 0;
  temp_v3 = 0;
  if ((char)param_1[6] != '\0') {
    if ((char)param_1[6] == '\x01') {
      temp_v1 = param_1[7];
      if (temp_v1 != 9) {
        if (temp_v1 != 5) {
          if (temp_v1 != 10) {
            temp_v1 = 0x5b;
            FUN_002804b0(&LAB_0049695c,param_1 + 0x62,0);
            *(unsigned char *)(param_1 + 0x5813) = 1;
          }
          else {
            temp_v1 = 0x89;
            temp_v2 = 0xa3;
            FUN_002804b0(&LAB_0049695c,param_1 + 0x62,0);
            *(unsigned char *)(param_1 + 0x5813) = 1;
          }
        }
        else {
          temp_v1 = 0x8b;
          temp_v2 = 0x50;
          FUN_002804b0(&LAB_00496990,param_1 + 0x62,0);
          temp_v0 = 6;
          *(unsigned char *)(param_1 + 0x5813) = temp_v0;
        }
      }
      else {
        temp_v1 = 0x59;
        temp_v2 = 0x148;
        FUN_002804b0(&LAB_00496978,param_1 + 0x62,0);
        temp_v0 = 4;
        *(unsigned char *)(param_1 + 0x5813) = temp_v0;
      }
    }
  }
  else {
    temp_v1 = param_1[7];
    if (temp_v1 != 8) {
      if (!(temp_v1 == 6 || temp_v1 == 7)) {
        if (temp_v1 != 9) {
          temp_v1 = 0x5a;
          FUN_002804b0(&LAB_004968fc,param_1 + 0x62,0);
          *(unsigned char *)(param_1 + 0x5813) = 0;
        }
        else {
          temp_v1 = 0x8b;
          temp_v3 = 0xf9;
          FUN_002804b0(&LAB_00496944,param_1 + 0x62,0);
          temp_v0 = 5;
          *(unsigned char *)(param_1 + 0x5813) = temp_v0;
        }
      }
      else {
        temp_v1 = 0x8b;
        temp_v2 = 0x78;
        FUN_002804b0(&LAB_0049692c,param_1 + 0x62,0);
        temp_v0 = 2;
        *(unsigned char *)(param_1 + 0x5813) = temp_v0;
      }
    }
    else {
      temp_v1 = 0x58;
      temp_v2 = 0x149;
      FUN_002804b0(&LAB_00496914,param_1 + 0x62,0);
      *(unsigned char *)(param_1 + 0x5813) = 3;
    }
  }
  FUN_00389fe0(temp_v1,0);
  param_1[0x5808] = temp_v1;
  if (temp_v2 != 0) {
    FUN_0039af48(temp_v2,0,0);
    param_1[0x5809] = temp_v2;
    FUN_0031bca4();
    return;
  }
  if (temp_v3 != 0) {
    if (param_1[0x5815] != 0) {
      FUN_0040a244();
      param_1[0x5815] = 0;
    }
    FUN_0019cac4();
    temp_v1 = FUN_00409fe8((int)*(short *)(temp_v3 + 0x8c),1);
    param_1[0x5814] = 0;
    param_1[0x5815] = temp_v1;
    param_1[0x5816] = 0;
    *param_1 = *param_1 | 0x2000;
  }
  return;
}

} /* extern "C" */
