/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a76a8` (_code @ 0x4a76a8, 0xf8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014384c(int);
int FUN_0014afd0(int, int);
int FUN_00215bd0(void);
int FUN_002804b0(...);
int FUN_002bf464(void);
int FUN_002c7e6c(void);
int FUN_002c8538(int);
int FUN_002c85b0(int);
int FUN_002e2afc(void);
int FUN_0031a400(void);
int FUN_003343f0(int);
int FUN_00342010(void);
int objBInitBlock12DC(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char LAB_004a77a0; /* 0x4a77a0 */

/* Supplied declaration required: FUN_0014384c. */
/* Supplied declaration required: FUN_0014afd0. */
/* Supplied declaration required: FUN_00215bd0. */
/* Supplied declaration required: FUN_002804b0. */
/* Supplied declaration required: FUN_002bf464. */
/* Supplied declaration required: FUN_002c7e6c. */
/* Supplied declaration required: FUN_002c8538. */
/* Supplied declaration required: FUN_002c85b0. */
/* Supplied declaration required: FUN_002e2afc. */
extern int *asdTMTexTableGetEntry(unsigned int);
/* Supplied declaration required: FUN_0031a400. */
/* Supplied declaration required: FUN_003343f0. */
/* Supplied declaration required: FUN_00342010. */
/* Supplied declaration required: objBInitBlock12DC. */
extern int FUN_00399e04(void);


void FUN_004a76a8(int param_1)

{
/* irregular: 13 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  
  FUN_0031a400();
  temp_v0 = FUN_00399e04();
  if (temp_v0 == 0) {
    *(unsigned char *)(param_1 + 0x1c) = 1;
    FUN_002bf464();
    FUN_00342010();
  }
  piVar2 = (int *)asdTMTexTableGetEntry(7);
  if (*piVar2 == 0) {
    *(unsigned char *)(param_1 + 0x1d) = 1;
  }
  piVar2 = (int *)asdTMTexTableGetEntry(0x14);
  if (*piVar2 == 0) {
    FUN_0014384c(0x14);
    temp_v0 = 0;
    do {
      FUN_0014afd0(0x14,temp_v0);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 4);
    *(unsigned char *)(param_1 + 0x1e) = 1;
  }
  FUN_002c7e6c();
  FUN_002c85b0(2);
  FUN_002c8538(1);
  FUN_00215bd0();
  FUN_003343f0(1);
  temp_v1 = (unsigned int)*(unsigned char *)(param_1 + 0x95);
  if ((temp_v1 == 0) && (FUN_002e2afc(), temp_v1 != 0x2f)) {
    objBInitBlock12DC();
  }
  FUN_002804b0(&LAB_004a77a0,param_1 + 0x854,0);
  FUN_002804b0(0x4a77b0,param_1 + 0x858,0);
  return;
}

} /* extern "C" */
