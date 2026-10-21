/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037728c` (_code @ 0x37728c, 0x148 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match3_WaveArchiveReader.h"

extern "C" {

int slotTableReplace(unsigned char [20], unsigned int, int);
int FUN_002a7ac4(unsigned char [20], int, int);

typedef int romwright_code(...);
/* stack frame of param_3: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned char sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_3_stack;

/* Supplied declaration required: slotTableReplace. */
extern int FUN_00152394(int, unsigned int, unsigned int *);
/* Supplied declaration required: FUN_002a7ac4. */
extern unsigned int FUN_003e70f8(void);


void FUN_0037728c(int *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  char temp_v11;
  unsigned char temp_v12 [20];
  
  if (((int *)param_1[0x86] != (int *)0x0) && (temp_v1 = 0, *(int *)param_1[0x86] != 0)) {
    do {
      temp_v5 = temp_v1 * 4 + 4;
      temp_v1 = temp_v1 + 1;
      temp_v4 = *(unsigned int *)(param_1[0x86] + temp_v5);
      temp_v8 = temp_v4 <= param_2;
      temp_v7 = param_2 == temp_v4;
      if (!temp_v8 || temp_v7) {
        temp_v8 = param_3 <= temp_v4;
        temp_v7 = temp_v4 == param_3;
      }
      if (!temp_v8 || temp_v7) {
        *(unsigned int *)(param_1[0x86] + temp_v5) = 0;
      }
    } while (temp_v1 < *(unsigned int *)param_1[0x86]);
  }
  temp_v5 = param_1[4];
  if (temp_v5 != 0) {
    temp_v1 = FUN_003e70f8();
    temp_v4 = 0;
    if (temp_v4 < temp_v1) {
      do {
        temp_v9 = 0xffffffff;
        temp_v11 = '\0';
        temp_v2 = FUN_00152394(temp_v5,temp_v4 | 0x5000000,(unsigned int *)&temp_v9);
        temp_v0 = '\0';
        if (temp_v2 != 0) {
          temp_v0 = temp_v11;
        }
        if ((temp_v2 != 0 && temp_v0 != '\0') &&
           (temp_v2 = (**(romwright_code **)(*param_1 + 0x10))(param_1,temp_v9), temp_v2 != 0)) {
          FUN_002a7ac4(temp_v12,temp_v2,1);
          temp_v6 = 0;
          if (temp_v6 < temp_v10) {
            do {
              temp_v3 = (unsigned int)FUN_002a7a3c((const WaveArchiveReader*)temp_v12,temp_v6);
              if (((temp_v3 != 0) && (param_2 <= temp_v3)) && (temp_v3 <= param_3)) {
                slotTableReplace(temp_v12,temp_v6,0);
              }
              temp_v6 = temp_v6 + 1;
            } while (temp_v6 < temp_v10);
          }
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < temp_v1);
    }
  }
  return;
}

} /* extern "C" */
