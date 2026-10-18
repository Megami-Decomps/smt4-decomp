/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037b61c` (_code @ 0x37b61c, 0x120 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 3 slot(s), 9 byte(s) */
typedef struct {
    unsigned char sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_3_stack;

/* Supplied declaration required: FUN_0014c250. */
extern int FUN_00152394(unsigned int, unsigned int, unsigned int *);
extern unsigned int *FUN_002ac5d8(unsigned char *);
/* Supplied declaration required: FUN_002ac5f4. */
/* Supplied declaration required: FUN_002ac658. */
extern unsigned int FUN_002ac780(unsigned int, unsigned int);


unsigned int FUN_0037b61c(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5 [2];
  char temp_v6;
  unsigned char temp_v7 [12];
  
  if (param_2 != 0) {
    FUN_002ac5f4(temp_v7);
    puVar1 = (unsigned int *)FUN_002ac5d8(temp_v7);
    if (puVar1 != (unsigned int *)0x0) {
      temp_v2 = 0;
      if (temp_v2 < *puVar1) {
        do {
          if (*puVar1 <= temp_v2) {
            return 0;
          }
          if (puVar1 + temp_v2 * 2 + 1 == (unsigned int *)0x0) {
            return 0;
          }
          temp_v3 = puVar1[temp_v2 * 2 + 1];
          temp_v4 = puVar1[temp_v2 * 2 + 2];
          temp_v5[0] = 0xffffffff;
          temp_v6 = '\0';
          temp_v0 = FUN_00152394(*(unsigned int *)(param_1 + 4),temp_v3,temp_v5);
          if (temp_v0 == 0) {
            return 0;
          }
          temp_v0 = param_1;
          if (temp_v6 != '\0') {
            FUN_0014c250(param_1,temp_v3,temp_v4,param_3,0);
          }
          else {
            temp_v1 = FUN_002ac780(*(unsigned int *)(param_1 + 4),temp_v3);
            FUN_002ac658(param_1,temp_v1,param_3,0,1);
          }
          if (temp_v0 == 0) {
            return 0;
          }
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < *puVar1);
      }
      return 1;
    }
  }
  return 0;
}
