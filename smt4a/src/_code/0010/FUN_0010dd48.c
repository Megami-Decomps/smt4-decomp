/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010dd48` (_code @ 0x10dd48, 0xec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned char LAB_0010dc81; /* 0x10dc81 */
extern unsigned char LAB_0010de38; /* 0x10de38 */

/* Supplied declaration required: FUN_0010dfe8. */
extern int FUN_002e9af4(void);
/* Supplied declaration required: FUN_002e9ec8. */
/* Supplied declaration required: FUN_002ea20c. */
extern unsigned int FUN_002ea3c0(int **, unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_002ea446. */
extern int FUN_002eba9c(unsigned char *, int *);
/* Supplied declaration required: FUN_002f2e3c. */
extern int FUN_002f7f00(int *, unsigned int);
/* Supplied declaration required: FUN_002f7f50. */


void FUN_0010dd48(int *param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5 [8];
  int *temp_v6 [5];
  
  temp_v0 = FUN_002e9af4();
  FUN_002e9ec8(temp_v0,param_1[0x45]);
  if (temp_v0 != 0) {
    FUN_002ea20c(temp_v5);
    temp_v0 = FUN_002eba9c(temp_v5,param_1 + 0x56);
    if (temp_v0 == 0) {
      do {
        if (param_1[0x38] == 0) break;
        piVar2 = param_1;
        FUN_0010dfe8();
      } while (piVar2 != (int *)0x0);
      temp_v0 = FUN_002f7f00(param_1 + 0x6e,0);
      if ((temp_v0 != 0) && (*(char *)(param_1[0x85] + 0x34) == '\x02')) {
        temp_v6[0] = param_1 + 0x39;
        if (*(int *)(param_1[0x85] + 8) == 0x10) {
          FUN_002f7f50();
          temp_v2 = param_1[0x39] - 0x65;
          if (temp_v2 < 3) {
            temp_v0 = param_1[0x3a];
            temp_v3 = param_1[0x3b];
            temp_v4 = param_1[0x3c];
            param_1[temp_v2 * 5 + 0x46] = param_1[0x39];
            param_1[temp_v2 * 5 + 0x47] = temp_v0;
            param_1[temp_v2 * 5 + 0x48] = temp_v3;
            param_1[temp_v2 * 5 + 0x49] = temp_v4;
            param_1[temp_v2 * 5 + 0x4a] = param_1[temp_v2 * 5 + 0x4a] + 1;
          }
        }
        *(unsigned char *)(param_1[0x85] + 0x34) = 0;
        FUN_002f2e3c(param_1 + 0x22,temp_v6[0],0x10,param_1 + 0x3d,param_1[0x85],1);
      }
      temp_v0 = (**(romwright_code **)(*param_1 + 0x38))(param_1);
      if (temp_v0 == 0) {
        FUN_002ea446(param_1,10);
        return;
      }
    }
  }
  temp_v1 = FUN_002ea3c0(temp_v6,&LAB_0010dc81,0,&LAB_0010de38);
  FUN_002ea3d0(param_1,temp_v1);
  return;
}
