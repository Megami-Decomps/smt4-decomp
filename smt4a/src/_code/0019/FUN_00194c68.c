/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00194c68` (_code @ 0x194c68, 0x104 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 3 slot(s), 6 byte(s) */
typedef struct {
    unsigned char sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned char sp24; /* 0x24: local_24 */
} param_3_stack;

/* Supplied declaration required: FUN_001a5e84. */
extern int FUN_001a8930(int, unsigned int, unsigned int *);
/* Supplied declaration required: FUN_001a8d40. */
extern unsigned int FUN_001a8d98(unsigned char *);
extern unsigned int FUN_001a8e14(int);


unsigned int FUN_00194c68(int *param_1,unsigned int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5 [12];
  char temp_v6;
  unsigned int temp_v7 [2];
  char temp_v8;
  
  temp_v0 = FUN_001a8e14(param_1[1]);
  temp_v1 = (**(romwright_code **)(*param_1 + 0x10))(param_1,temp_v0);
  if (temp_v1 == 0) {
    return 0;
  }
  temp_v8 = '\0';
  temp_v7[0] = 0xffffffff;
  temp_v2 = FUN_001a8930(param_1[1],param_2,temp_v7);
  temp_v0 = 0;
  if (temp_v2 != 0) {
    if (temp_v8 == '\x01') {
      FUN_001a5e84(temp_v5,temp_v1,1);
      if (param_3 != -1) {
        if (temp_v6 == '\0') {
          return 0;
        }
        temp_v1 = FUN_001a8d40(temp_v5,param_3);
        if (temp_v1 == 0) {
          return 0;
        }
      }
      else {
        temp_v3 = FUN_001a8d98(temp_v5);
        temp_v4 = 0;
        if (temp_v4 < temp_v3) {
          do {
            if (temp_v6 == '\0') {
              return 0;
            }
            temp_v1 = FUN_001a8d40(temp_v5,temp_v4);
            if (temp_v1 == 0) {
              return 0;
            }
            temp_v4 = temp_v4 + 1;
          } while (temp_v4 < temp_v3);
        }
      }
    }
    temp_v0 = 1;
  }
  return temp_v0;
}
