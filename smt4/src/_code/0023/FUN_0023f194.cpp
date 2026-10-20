/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023f194` (_code @ 0x23f194, 0xe4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001e1874(unsigned int);
int FUN_00207434(unsigned int);
int FUN_00219840(unsigned int);
int FUN_00227218(void);
int FUN_002523f0(void);
int FUN_0028975c(int, int);
int FUN_002ef6b8(int, unsigned int);
int FUN_0033a780(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_004342c8; /* 0x4342c8 */

/* Supplied declaration required: FUN_001e1874. */
/* Supplied declaration required: FUN_00207434. */
/* Supplied declaration required: FUN_00219840. */
/* Supplied declaration required: FUN_00227218. */
extern int FUN_0023f074(unsigned int *);
/* Supplied declaration required: FUN_002523f0. */
/* Supplied declaration required: FUN_0028975c. */
extern unsigned int FUN_002939f4(void);
extern int FUN_002bf244(unsigned int);
extern unsigned int FUN_002c09d0(void);
extern int FUN_002c2a04(unsigned int);
/* Supplied declaration required: FUN_002ef6b8. */
/* Supplied declaration required: FUN_0033a780. */


int FUN_0023f194(unsigned int *param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = 0;
  if (param_1[3] != 0) {
    temp_v0 = param_1[5];
  }
  if (param_1[3] != 0 && temp_v0 != 0) {
    temp_v0 = FUN_002c2a04(0);
    if ((temp_v0 == 3) && (temp_v0 = FUN_002c2a04(1), temp_v0 == 3)) {
      temp_v1 = FUN_002939f4();
      FUN_0033a780();
      FUN_002523f0();
      FUN_00219840(temp_v1);
      FUN_00207434(temp_v1);
      FUN_001e1874(temp_v1);
      if (DAT_004342c8 != 0) {
        FUN_00227218();
      }
      if ((param_1[1] & 1) != 0) {
        *param_1 = 6;
        temp_v0 = FUN_0023f074(param_1);
        return temp_v0;
      }
      temp_v1 = FUN_002c09d0();
      temp_v2 = 0x17;
      FUN_002ef6b8(0x17,temp_v1);
      param_1[6] = temp_v2;
      FUN_0028975c(0x817,1);
      *param_1 = 5;
      temp_v0 = FUN_002bf244(param_1[6]);
      if (temp_v0 == 0) {
        *param_1 = 6;
        temp_v0 = FUN_0023f074(param_1);
        return temp_v0;
      }
    }
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
