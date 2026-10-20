/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035b21c` (_code @ 0x35b21c, 0xe8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int asdMemFree(...);
int asdTMTexTableReleaseNode(int, int);
int scrScriptProcessDestroy(void);
int FUN_002c85b0(int);
int asdTMTexTableFreeEntry(int);
int FUN_00318d6c(void);
int FUN_00333f6c(void);
int FUN_003343f0(int);
int uiFadeClose(void);
int campButtonHelpRelease(void);

typedef struct fn_0035b21c_arg0 fn_0035b21c_arg0;
struct fn_0035b21c_arg0 {
    unsigned char pad_0x0[0x1c];
    byte field_0x1c; /* +0x1c */
    byte field_0x1d; /* +0x1d */
    byte field_0x1e; /* +0x1e */
    unsigned char pad_0x1f[0x835];
    int field_0x854; /* +0x854 */
    int field_0x858; /* +0x858 */
    int field_0x85c; /* +0x85c */
};

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern signed char g_commonBg; /* 0x57f208 */
extern signed char DAT_0057f20a; /* 0x57f20a */
extern unsigned int *DAT_0057f20c; /* 0x57f20c */
extern unsigned int *DAT_0057f214; /* 0x57f214 */

/* Supplied declaration required: jobStop. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: asdTMTexTableReleaseNode. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: FUN_002c85b0. */
/* Supplied declaration required: asdTMTexTableFreeEntry. */
/* Supplied declaration required: FUN_00318d6c. */
/* Supplied declaration required: FUN_00333f6c. */
/* Supplied declaration required: FUN_003343f0. */
/* Supplied declaration required: uiFadeClose. */
/* Supplied declaration required: campButtonHelpRelease. */


void FUN_0035b21c(fn_0035b21c_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4
                 )

{
/* irregular: 11 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  if (param_1->field_0x85c != 0) {
    scrScriptProcessDestroy();
    param_1->field_0x85c = 0;
  }
  if (param_1->field_0x854 != 0) {
    asdMemFree();
    param_1->field_0x854 = 0;
  }
  if (param_1->field_0x858 != 0) {
    asdMemFree();
    param_1->field_0x858 = 0;
  }
  FUN_002c85b0(0);
  FUN_003343f0(0);
  FUN_00333f6c();
  if (param_1->field_0x1e != 0) {
    temp_v0 = 0;
    do {
      asdTMTexTableReleaseNode(0x14,temp_v0);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 4);
    asdTMTexTableFreeEntry(0x14);
    param_1->field_0x1e = 0;
  }
  if (param_1->field_0x1d != 0) {
    param_1->field_0x1d = 0;
  }
  if (param_1->field_0x1c != 0) {
    campButtonHelpRelease();
    FUN_00318d6c();
    param_1->field_0x1c = 0;
  }
  puVar1 = DAT_0057f20c;
  g_commonBg = g_commonBg - '\x01';
  if (g_commonBg < '\x01') {
    jobStop(*DAT_0057f20c,0);
    asdMemFree(puVar1);
    DAT_0057f20c = (unsigned int *)0x0;
    g_commonBg = '\0';
    uiFadeClose();
    puVar1 = DAT_0057f214;
    if ((DAT_0057f214 != (unsigned int *)0x0) &&
       (DAT_0057f20a = DAT_0057f20a - '\x01', DAT_0057f20a < '\x01')) {
      jobStop(*DAT_0057f214,0);
      asdMemFree(puVar1);
      DAT_0057f214 = (unsigned int *)0x0;
      DAT_0057f20a = '\0';
    }
  }
  return;
}

} /* extern "C" */
