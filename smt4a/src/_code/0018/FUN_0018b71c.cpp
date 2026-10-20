/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018b71c` (_code @ 0x18b71c, 0x12c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018b67c(...);
int FUN_0018b68c(int);
int FUN_0018b868(void);
int FUN_0018b920(void);
int FUN_0018b964(void);
int software_interrupt(int);

/* stack frame of param_7: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_7_stack;

extern unsigned char DAT_005891b0; /* 0x5891b0 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0018b67c. */
/* Supplied declaration required: FUN_0018b68c. */
extern unsigned int FUN_0018b70c(void);
/* Supplied declaration required: FUN_0018b868. */
/* Supplied declaration required: FUN_0018b920. */
/* Supplied declaration required: FUN_0018b964. */
extern int FUN_0018b9d4(void);
extern unsigned int FUN_0018bbac(unsigned int *, unsigned int, unsigned int *, unsigned char *, int, unsigned int *, int *);
extern int FUN_001a2e68(void);


unsigned int
FUN_0018b71c(unsigned int *param_1,unsigned int *param_2,unsigned char *param_3,int param_4,
            unsigned int *param_5,int *param_6,int param_7)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int uStack_30;
  int uStack_2c;
  unsigned char temp_v3 [4];
  int uStack_24;
  
  if (param_7 != 0) {
    temp_v0 = FUN_0018b9d4();
    if (temp_v0 == 0) {
      return 0xc8a0cfef;
    }
  }
  else {
    temp_v0 = FUN_001a2e68();
  }
  temp_v0 = FUN_0018b67c(temp_v0);
  if (temp_v0 != 0) {
    temp_v1 = FUN_0018b67c();
    *param_2 = temp_v1;
    FUN_0018b68c(0);
    FUN_0018b920();
    if (param_1 != (unsigned int *)0x0) {
      *param_1 = 0;
    }
    if (param_5 != (unsigned int *)0x0) {
      *param_5 = 0;
    }
    temp_v1 = 0;
    if (param_6 != (int *)0x0) {
      *param_6 = (*(int *)((unsigned char *)&DAT_005891b0 + 0xc));
    }
  }
  else {
    if (param_1 == (unsigned int *)0x0) {
      param_1 = (unsigned int *)&uStack_30;
    }
    if (param_2 == (unsigned int *)0x0) {
      param_2 = (unsigned int *)&uStack_2c;
    }
    if (param_3 == (unsigned char *)0x0) {
      param_4 = 0;
    }
    if (param_3 == (unsigned char *)0x0 || param_4 == 0) {
      param_3 = temp_v3;
    }
    if (param_5 == (unsigned int *)0x0) {
      param_5 = (unsigned int *)&uStack_24;
    }
    if (param_6 == (int *)0x0) {
      param_6 = &temp_v2;
    }
    temp_v2 = 0;
    FUN_0018b868();
    temp_v1 = FUN_0018b70c();
    temp_v1 = FUN_0018bbac(param_1,temp_v1,param_2,param_3,param_4,param_5,param_6);
    FUN_0018b964();
    if (temp_v2 != 0) {
      software_interrupt(0x23);
    }
  }
  FUN_0018b920();
  return temp_v1;
}

} /* extern "C" */
