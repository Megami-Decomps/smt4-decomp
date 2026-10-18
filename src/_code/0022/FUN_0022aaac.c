/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022aaac` (_code @ 0x22aaac, 0x120 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

/* Supplied declaration required: FUN_0022ad74. */
/* Supplied declaration required: FUN_00282b94. */
/* Supplied declaration required: FUN_002840b8. */
extern unsigned int FUN_00293c98(void);


unsigned int FUN_0022aaac(unsigned int param_1,unsigned int param_2)

{
/* irregular: 5 unstructured edge(s); 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned short temp_v4 [10];
  
  temp_v3 = 0;
  temp_v0 = FUN_00293c98();
  FUN_00282b94(temp_v0,param_1);
  temp_v4[0] = 0;
  temp_v4[1] = 0;
  temp_v4[2] = 0;
  temp_v4[3] = 0;
  temp_v4[4] = 0;
  temp_v4[5] = 0;
  temp_v4[6] = 0;
  temp_v4[7] = 0;
  temp_v4[8] = 0;
  temp_v4[9] = 0;
  FUN_0022ad74();
  temp_v2 = 0;
  do {
    temp_v1 = (unsigned int)temp_v4[temp_v2];
    if ((temp_v1 == 0) || (FUN_002840b8(), temp_v1 == 0)) {
      temp_v2 = temp_v2 + 1;
      if (temp_v2 >= 9) {
        return temp_v3;
      }
      continue;
    }
    switch(param_2) {
    case 9:
      temp_v1 = *(unsigned int *)(temp_v1 + 0x38) & 0x400000;
      if (temp_v1 != 0) {
        temp_v3 = 0x10000;
      }
      break;
    case 0xb:
      temp_v1 = *(unsigned int *)(temp_v1 + 0x38) & 0x1000000;
      if (temp_v1 != 0) {
        temp_v3 = 0x10000;
      }
      break;
    case 0xc:
      if ((*(unsigned int *)(temp_v1 + 0x38) & 0x2000000) != 0) {
        temp_v3 = 0x10000;
      }
      break;
    case 0xd:
      temp_v1 = *(unsigned int *)(temp_v1 + 0x38) & 0x4000000;
      if (temp_v1 != 0) {
        temp_v3 = 0x10000;
      }
      break;
    case 0xe:
      temp_v1 = *(unsigned int *)(temp_v1 + 0x38) & 0x8000000;
      if (temp_v1 != 0) {
        temp_v3 = 0x10000;
      }
      break;
    case 0xf:
      temp_v1 = *(unsigned int *)(temp_v1 + 0x38) & 0x10000000;
      if (temp_v1 != 0) {
        temp_v3 = 0x10000;
      }
      break;
    case 0x10:
      temp_v1 = *(unsigned int *)(temp_v1 + 0x38) & 0x20000000;
      if (temp_v1 != 0) {
        temp_v3 = 0x10000;
      }
    }
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 9) {
      return temp_v3;
    }
  } while( 1 );
}
