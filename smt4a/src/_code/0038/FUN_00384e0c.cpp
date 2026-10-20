/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00384e0c` (_code @ 0x384e0c, 0x2a4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTableGetEntry49(int);
int FUN_0018719c(...);
int FUN_00314bf8(int);
int FUN_00314c38(int, int, int, int, int, int);
int FUN_003ae61c(int, int, int, int);
int FUN_003bf87c(void);
int FUN_003cb930(void);
int FUN_003fd63c(unsigned int, int);
int VectorSignedToFloat(int, int);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned char DAT_005f1a5c; /* 0x5f1a5c */
extern unsigned char DAT_005f1a60; /* 0x5f1a60 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_00162e8c(void);
/* Supplied declaration required: dataTableGetEntry49. */
/* Supplied declaration required: FUN_0018719c. */
/* Supplied declaration required: FUN_00314bf8. */
/* Supplied declaration required: FUN_00314c38. */
/* Supplied declaration required: FUN_003ae61c. */
extern int dataTable49GetEntry(int);
/* Supplied declaration required: FUN_003bf87c. */
/* Supplied declaration required: FUN_003cb930. */
extern int FUN_003de16c(void);
/* Supplied declaration required: FUN_003fd63c. */


void FUN_00384e0c(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 9 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  short *psVar5;
  int *piVar6;
  int temp_v4;
  unsigned char *puVar8;
  int temp_v5;
  unsigned int in_fpscr;
  
  FUN_003bf87c();
  temp_v5 = 0;
  temp_v0 = FUN_00162e8c();
  temp_v3 = temp_v0;
  FUN_003cb930();
  temp_v4 = 0;
  if (temp_v4 < temp_v3) {
    do {
      temp_v1 = dataTable49GetEntry(temp_v4);
      temp_v2 = FUN_0018719c(*(unsigned int *)(temp_v1 + 8));
      if ((temp_v2 != 0) && (temp_v2 = FUN_0018719c(*(unsigned int *)(temp_v1 + 0xc)), temp_v2 == 0)) {
        FUN_003fd63c(*(unsigned int *)(temp_v1 + 0xc),1);
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < temp_v3);
  }
  temp_v3 = FUN_00162e8c();
  temp_v4 = 0;
  temp_v1 = 0;
  puVar8 = (unsigned char *)0x0;
  do {
    temp_v2 = temp_v4 + 1;
    temp_v1 = temp_v1 + 2;
    *(unsigned char *)(temp_v3 + temp_v4 * 4 + 0x1590) = 0;
    temp_v4 = temp_v4 + 2;
    *(unsigned char *)(temp_v3 + temp_v2 * 4 + 0x1590) = 0;
  } while (temp_v1 < 8);
  temp_v4 = 0;
  *(unsigned int *)(temp_v3 + 0x15b0) = 0;
  if (0 < param_1) {
    do {
      psVar5 = (short *)dataTableGetEntry49(temp_v4);
      if (((*psVar5 != 0) && ((psVar5[1] == 0 || (temp_v3 = FUN_0018719c(), temp_v3 != 0)))) &&
         ((psVar5[2] == 0 || (temp_v3 = FUN_0018719c(), temp_v3 == 0)))) {
        if (temp_v5 == 0) {
          temp_v5 = (int)*psVar5;
        }
        temp_v3 = FUN_00162e8c();
        if (temp_v3 != 0) {
          piVar6 = (int *)(temp_v3 + 0x15b0);
          if (*piVar6 < 8) {
            *(char *)(temp_v3 + *piVar6 * 4 + 0x1590) = (char)temp_v4;
            *piVar6 = *piVar6 + 1;
          }
        }
        temp_v3 = dataTableGetEntry49(temp_v4);
        FUN_00314c38(*(unsigned char *)(temp_v3 + 0x44),*(unsigned char *)(temp_v3 + 0x45),
                     *(unsigned char *)(temp_v3 + 0x46),*(unsigned char *)(temp_v3 + 0x47),
                     *(unsigned char *)(temp_v3 + 0x48),*(unsigned char *)(temp_v3 + 0x49));
        FUN_00314c38(*(unsigned char *)(temp_v3 + 0x4a),*(unsigned char *)(temp_v3 + 0x4b),0,0,0,0);
        VectorSignedToFloat((int)*(short *)(temp_v3 + 0x36),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)(temp_v3 + 0x34),(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_003ae61c((int)*(short *)(temp_v3 + 0x2e),(int)*(short *)(temp_v3 + 0x30),
                     (int)*(short *)(temp_v3 + 0x32),(int)*(short *)(temp_v3 + 0x36));
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < param_1);
  }
  temp_v3 = FUN_00162e8c();
  if (temp_v3 != 0) {
    temp_v3 = *(int *)(temp_v3 + 0x158c);
  }
  else {
    temp_v3 = 0;
  }
  if (temp_v3 != temp_v5) {
    *(unsigned int *)(temp_v0 + 0x15b8) = 1;
    DAT_005f1a60 = 1;
    *(unsigned int *)(temp_v0 + 0x15bc) = 1;
  }
  if ((temp_v5 != 0) && (temp_v3 = FUN_00162e8c(), temp_v3 != 0)) {
    *(int *)(temp_v3 + 0x158c) = temp_v5;
  }
  DAT_005f1a5c = 0;
  temp_v3 = FUN_003de16c();
  if (temp_v3 != 0) {
    return;
  }
  temp_v3 = FUN_00162e8c();
  if (temp_v3 != 0) {
    puVar8 = (unsigned char *)(temp_v3 + 0x1590);
  }
  temp_v3 = dataTableGetEntry49(*puVar8);
  FUN_00314bf8((int)*(short *)(temp_v3 + 0x2e));
  return;
}

} /* extern "C" */
