/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010af50` (_code @ 0x10af50, 0x6a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0012e1dc(...);
int asdOperatorDeleteArray(...);
int FUN_002e6e34(...);
int FUN_002e6e5c(...);
int FUN_002f27de(...);

typedef struct fn_0010af50_arg0 fn_0010af50_arg0;
struct fn_0010af50_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x8];
    void *field_0x14; /* +0x14 */
};

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
} param_1_stack;

/* Supplied declaration required: FUN_0012e1dc. */
/* Supplied declaration required: asdOperatorDeleteArray. */
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
extern unsigned int onlineGetActiveLock(void);
extern int FUN_002eb624(void **);
/* Supplied declaration required: FUN_002f27de. */


int FUN_0010af50(fn_0010af50_arg0 *param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  int *piVar5;
  unsigned char temp_v3 [12];
  int temp_v4;
  int temp_v5;
  unsigned char temp_v6 [8];
  
  temp_v0 = onlineGetActiveLock();
  FUN_002e6e34(temp_v3,temp_v0);
  FUN_002f27de(param_1);
  FUN_002e6e5c(temp_v3);
  temp_v1 = FUN_002eb624(&param_1[2].field_0x14);
  piVar5 = (int *)(temp_v1 - 0x40);
  temp_v5 = *(int *)(temp_v1 - 0x30);
  if (temp_v5 != 0) {
    temp_v4 = *(unsigned int *)(temp_v5 + 8);
    FUN_0012e1dc(temp_v6,piVar5,&temp_v4,&temp_v5);
    temp_v2 = *(int *)(temp_v1 - 0x30);
    *(unsigned int *)(temp_v2 + 0xc) = *(unsigned int *)(temp_v1 - 0x3c);
    *(int *)(temp_v1 - 0x3c) = temp_v2;
    while (piVar4 = (int *)*piVar5, piVar4 != (int *)0x0) {
      *piVar5 = *piVar4;
      asdOperatorDeleteArray(piVar4[2]);
      asdOperatorDeleteArray(piVar4);
    }
  }
  return temp_v1 - 0x44;
}

} /* extern "C" */
