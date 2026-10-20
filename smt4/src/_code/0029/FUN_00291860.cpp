/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00291860` (_code @ 0x291860, 0xe4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028727c(void);
int FUN_002917b8(void);
int FUN_00292c0c(void);
int FUN_0029a128(int);
int FUN_002a0cc8(int);
int scrScriptProcessDestroy(void);
int asdTMTexTableFreeEntry(int);
int FUN_002ae898(int, int);
int asdMemFree(...);
int jobStop(unsigned int, int);

typedef struct fn_00291860_arg0 fn_00291860_arg0;
struct fn_00291860_arg0 {
    unsigned char pad_0x0[0x1c];
    byte field_0x1c; /* +0x1c */
    byte field_0x1d; /* +0x1d */
    byte field_0x1e; /* +0x1e */
    unsigned char pad_0x1f[0x579];
    int field_0x598; /* +0x598 */
    int field_0x59c; /* +0x59c */
    int field_0x5a0; /* +0x5a0 */
};

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern signed char DAT_0043dc20; /* 0x43dc20 */
extern unsigned int *DAT_0043dc24; /* 0x43dc24 */
extern signed char g_uiFade; /* 0x43dd38 */
extern unsigned int *DAT_0043dd3c; /* 0x43dd3c */

/* Supplied declaration required: FUN_0028727c. */
/* Supplied declaration required: FUN_002917b8. */
/* Supplied declaration required: FUN_00292c0c. */
/* Supplied declaration required: FUN_0029a128. */
/* Supplied declaration required: FUN_002a0cc8. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: asdTMTexTableFreeEntry. */
/* Supplied declaration required: FUN_002ae898. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: jobStop. */


void FUN_00291860(fn_00291860_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4
                 )

{
/* irregular: 10 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  if (param_1->field_0x5a0 != 0) {
    scrScriptProcessDestroy();
    param_1->field_0x5a0 = 0;
  }
  if (param_1->field_0x598 != 0) {
    asdMemFree();
    param_1->field_0x598 = 0;
  }
  if (param_1->field_0x59c != 0) {
    asdMemFree();
    param_1->field_0x59c = 0;
  }
  FUN_0029a128(0);
  FUN_002a0cc8(0);
  FUN_00292c0c();
  if (param_1->field_0x1e != 0) {
    temp_v0 = 0;
    do {
      FUN_002ae898(0x1d,temp_v0);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 3);
    asdTMTexTableFreeEntry(0x1d);
    param_1->field_0x1e = 0;
  }
  if (param_1->field_0x1d != 0) {
    param_1->field_0x1d = 0;
  }
  if (param_1->field_0x1c != 0) {
    FUN_002917b8();
    FUN_0028727c();
    param_1->field_0x1c = 0;
  }
  puVar1 = DAT_0043dc24;
  DAT_0043dc20 = DAT_0043dc20 - '\x01';
  if ('\0' < DAT_0043dc20) {
    return;
  }
  jobStop(*DAT_0043dc24,0);
  asdMemFree(puVar1);
  puVar1 = DAT_0043dd3c;
  DAT_0043dc24 = (unsigned int *)0x0;
  DAT_0043dc20 = 0;
  g_uiFade = g_uiFade - '\x01';
  if (g_uiFade < '\x01') {
    jobStop(*DAT_0043dd3c,0);
    asdMemFree(puVar1);
    DAT_0043dd3c = (unsigned int *)0x0;
    g_uiFade = '\0';
  }
  return;
}

} /* extern "C" */
