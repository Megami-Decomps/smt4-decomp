/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00110838` (_code @ 0x110838, 0xa8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011d3bc(unsigned int);
int FUN_0011d3cc(void);
int FUN_0011d3ec(unsigned int *);
int FUN_0011d57c(int);
int FUN_002bb110(void);
int FUN_002bb140(int);
int nn_applet_CTR_detail_CloseSession(void);
int FUN_002bb378(void);
int FUN_002c0d50(unsigned int *, unsigned int, int, unsigned int [2], int);
int FUN_002c131c(int, int);
int FUN_002c5434(int);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned int DAT_0044e370; /* 0x44e370 */
extern unsigned int DAT_0044e374; /* 0x44e374 */

/* Supplied declaration required: FUN_0011d3bc. */
/* Supplied declaration required: FUN_0011d3cc. */
extern unsigned int FUN_0011d3e0(void);
/* Supplied declaration required: FUN_0011d3ec. */
/* Supplied declaration required: FUN_0011d57c. */
extern int FUN_0011d8fc(void);
/* Supplied declaration required: FUN_002bb110. */
/* Supplied declaration required: FUN_002bb140. */
extern int FUN_002bb2c8(void);
/* Supplied declaration required: nn_applet_CTR_detail_CloseSession. */
/* Supplied declaration required: FUN_002bb378. */
/* Supplied declaration required: FUN_002c0d50. */
/* Supplied declaration required: FUN_002c131c. */
/* Supplied declaration required: FUN_002c5434. */


void FUN_00110838(int param_1)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int uStack_14;
  unsigned int temp_v5 [2];
  
  if (param_1 != 0) {
    FUN_002c5434(0);
  }
  FUN_002bb378();
  FUN_002bb110();
  temp_v0 = FUN_0011d8fc();
  if (temp_v0 < 0) {
    FUN_002c131c(temp_v0,0x110860);
  }
  nn_applet_CTR_detail_CloseSession();
  temp_v0 = FUN_002bb2c8();
  if ((temp_v0 != 0) && (temp_v1 = FUN_002bb110(), (temp_v1 & 0x20) == 0)) {
    FUN_002bb140(0x62);
    temp_v2 = FUN_0011d3e0();
    temp_v4 = DAT_0044e370;
    uStack_14 = DAT_0044e374;
    puVar4 = (unsigned int *)&temp_v3;
    FUN_002c0d50(puVar4,temp_v2,0x1000,temp_v5,0);
    FUN_0011d57c(temp_v3);
    FUN_0011d3bc(temp_v5[0]);
    FUN_0011d3cc();
    FUN_0011d3ec(puVar4);
  }
  return;
}

} /* extern "C" */
