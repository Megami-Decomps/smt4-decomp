/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bee64` (_code @ 0x3bee64, 0xb4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022abe0(void);
int FUN_00282924(unsigned int, unsigned int);
int FUN_00283e48(void);

/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

/* Supplied declaration required: FUN_0022abe0. */
extern int FUN_0023eae0(unsigned int);
/* Supplied declaration required: FUN_00282924. */
/* Supplied declaration required: FUN_00283e48. */
extern unsigned int FUN_002939f4(void);


unsigned short FUN_003bee64(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  unsigned short temp_v4 [12];
  
  temp_v0 = FUN_002939f4();
  FUN_00282924(temp_v0,param_1);
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
  FUN_0022abe0();
  temp_v3 = 0;
  puVar5 = (unsigned int *)(temp_v0 + 0x44a0);
  do {
    temp_v1 = (unsigned int)temp_v4[temp_v3];
    if (temp_v1 != 0) {
      FUN_00283e48();
      if (temp_v1 != 0) {
        temp_v0 = (unsigned int)*(unsigned char *)(temp_v1 + 0x27);
      }
      if (temp_v1 != 0 && temp_v0 != 0) {
        temp_v2 = FUN_0023eae0(99);
        if ((*puVar5 & 0x40000) != 0) {
          temp_v2 = 0;
        }
        if (temp_v2 < (int)temp_v0) {
          return temp_v4[temp_v3];
        }
      }
    }
    temp_v3 = temp_v3 + 1;
    if (temp_v3 >= 9) {
      return 0;
    }
  } while( 1 );
}

} /* extern "C" */
