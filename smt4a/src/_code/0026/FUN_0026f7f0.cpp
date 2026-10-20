/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026f7f0` (_code @ 0x26f7f0, 0x238 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00203b40(int, unsigned int, int, int, int, int);
int FUN_002e6354(unsigned int *, int);
int FUN_003d0bc0(int);
int FUN_003df6a4(unsigned short *, int);

/* stack frame of void: 5 slot(s), 14 byte(s) */
typedef struct {
    unsigned short sp22; /* 0x22: local_22 */
    unsigned short sp2E; /* 0x2e: local_2e */
    unsigned short sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern int DAT_0057f108; /* 0x57f108 */

extern int FUN_001ab854(void);
extern int FUN_001ab888(void);
/* Supplied declaration required: FUN_00203b40. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_003d0bc0. */
/* Supplied declaration required: FUN_003df6a4. */


void FUN_0026f7f0(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned short *puVar6;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned short temp_v10;
  unsigned short temp_v11;
  unsigned short temp_v12 [5];
  unsigned short temp_v13;
  
  temp_v1 = DAT_0057f108;
  temp_v2 = FUN_001ab888();
  FUN_002e6354((unsigned int *)(temp_v1 + 0x1b70),0x640);
  FUN_003df6a4(&temp_v10,0);
  temp_v3 = (unsigned int)temp_v10;
  if (temp_v3 != 0) {
    *(unsigned int *)(temp_v1 + 0x1b70) = temp_v3;
    *(unsigned int *)(temp_v1 + 0x1b74) = 0xffffffff;
  }
  temp_v3 = (unsigned int)(temp_v3 != 0);
  temp_v8 = 3;
  puVar6 = &temp_v10;
  do {
    temp_v5 = (unsigned int)puVar6[2];
    if (temp_v11 != 0) {
      temp_v9 = temp_v1 + temp_v3 * 8;
      *(unsigned int *)(temp_v9 + 0x1b70) = (unsigned int)temp_v11;
      temp_v3 = temp_v3 + 1;
      *(unsigned int *)(temp_v9 + 0x1b74) = 0xffffffff;
    }
    temp_v11 = puVar6[3];
    if (temp_v5 != 0) {
      temp_v9 = temp_v1 + temp_v3 * 8;
      *(unsigned int *)(temp_v9 + 0x1b70) = temp_v5;
      temp_v3 = temp_v3 + 1;
      *(unsigned int *)(temp_v9 + 0x1b74) = 0xffffffff;
    }
    temp_v8 = temp_v8 - 1;
    puVar6 = puVar6 + 2;
  } while (temp_v8 != 0);
  if (temp_v13 != 0) {
    temp_v8 = temp_v1 + temp_v3 * 8;
    *(unsigned int *)(temp_v8 + 0x1b70) = (unsigned int)temp_v13;
    temp_v3 = temp_v3 + 1;
    *(unsigned int *)(temp_v8 + 0x1b74) = 0xffffffff;
  }
  temp_v8 = 0;
  do {
    temp_v9 = temp_v2 + temp_v8;
    if ((-1 < *(char *)(temp_v9 + 0x1c88)) && (temp_v4 = FUN_001ab854(), temp_v4 != 0)) {
      if (*(unsigned short *)(temp_v4 + 0x34) != 0) {
        temp_v6 = temp_v1 + temp_v3 * 8;
        *(unsigned int *)(temp_v6 + 0x1b70) = (unsigned int)*(unsigned short *)(temp_v4 + 0x34);
        temp_v3 = temp_v3 + 1;
        *(int *)(temp_v6 + 0x1b74) = (int)*(char *)(temp_v9 + 0x1c88);
      }
      temp_v6 = 3;
      temp_v0 = *(unsigned short *)(temp_v4 + 0x36);
      puVar6 = (unsigned short *)(temp_v4 + 0x34);
      do {
        temp_v5 = (unsigned int)puVar6[2];
        if (temp_v0 != 0) {
          temp_v7 = temp_v1 + temp_v3 * 8;
          *(unsigned int *)(temp_v7 + 0x1b70) = (unsigned int)temp_v0;
          temp_v3 = temp_v3 + 1;
          *(int *)(temp_v7 + 0x1b74) = (int)*(char *)(temp_v9 + 0x1c88);
        }
        temp_v0 = puVar6[3];
        if (temp_v5 != 0) {
          temp_v7 = temp_v1 + temp_v3 * 8;
          *(unsigned int *)(temp_v7 + 0x1b70) = temp_v5;
          temp_v3 = temp_v3 + 1;
          *(int *)(temp_v7 + 0x1b74) = (int)*(char *)(temp_v9 + 0x1c88);
        }
        temp_v6 = temp_v6 - 1;
        puVar6 = puVar6 + 2;
      } while (temp_v6 != 0);
      if (*(unsigned short *)(temp_v4 + 0x42) != 0) {
        temp_v6 = temp_v1 + temp_v3 * 8;
        *(unsigned int *)(temp_v6 + 0x1b70) = (unsigned int)*(unsigned short *)(temp_v4 + 0x42);
        temp_v3 = temp_v3 + 1;
        *(int *)(temp_v6 + 0x1b74) = (int)*(char *)(temp_v9 + 0x1c88);
      }
    }
    temp_v8 = temp_v8 + 1;
  } while (temp_v8 < 0x18);
  FUN_00203b40(temp_v1 + 0x1ec,temp_v3,0xb,1,1,1);
  FUN_003d0bc0(9);
  return;
}

} /* extern "C" */
