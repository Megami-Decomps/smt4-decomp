/* NON_MATCHING: romwright 0.5.0 decompilation of `asdLoadFileSync` (_code @ 0x15325c, 0x188 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(...);
int asdFileWait(void);
int asdLoadConfigureModeFlags(int *, unsigned int);
int asdFileRequestRelease(unsigned int *);
int FUN_001abae0(void);
int FUN_001add78(int *, unsigned char [268]);
int sysMemClear(unsigned char [256], int);
int rt_aeabi_memclr(unsigned char [268], int);

/* stack frame of param_6: 18 slot(s), 69 byte(s) */
typedef struct {
    unsigned int sp130; /* 0x130: local_130 */
    unsigned int sp134; /* 0x134: local_134 */
    unsigned int sp138; /* 0x138: local_138 */
    unsigned int sp13C; /* 0x13c: local_13c */
    unsigned int sp140; /* 0x140: local_140 */
    unsigned int sp144; /* 0x144: local_144 */
    unsigned int sp148; /* 0x148: local_148 */
    unsigned int sp14C; /* 0x14c: local_14c */
    unsigned int sp250; /* 0x250: local_250 */
    unsigned int sp254; /* 0x254: local_254 */
    unsigned char sp258; /* 0x258: local_258 */
    unsigned int sp25C; /* 0x25c: local_25c */
    unsigned int sp260; /* 0x260: local_260 */
    unsigned int sp264; /* 0x264: local_264 */
    unsigned int sp268; /* 0x268: local_268 */
    unsigned int sp26C; /* 0x26c: local_26c */
    unsigned int sp274; /* 0x274: local_274 */
    unsigned int sp278; /* 0x278: local_278 */
} param_6_stack;

extern signed char g_asdLoadFileUseRawPaths; /* 0x5b3fe0 */

/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: asdFileWait. */
/* Supplied declaration required: asdLoadConfigureModeFlags. */
extern int FUN_0019dbb8(unsigned int);
/* Supplied declaration required: asdFileRequestRelease. */
extern int asdFileRequestHasFailed(unsigned int *);
/* Supplied declaration required: FUN_001abae0. */
/* Supplied declaration required: FUN_001add78. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: rt_aeabi_memclr. */


unsigned int
asdLoadFileSync(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int *param_4,
            unsigned int param_5,unsigned int param_6)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int uStack_270;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned char temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned char temp_v13 [256];
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned char temp_v22 [268];
  
  puVar2 = (unsigned int *)&temp_v3;
  rt_aeabi_memclr(temp_v22,0x100);
  if ((g_asdLoadFileUseRawPaths != '\0') || (temp_v0 = FUN_0019dbb8(param_3), temp_v0 != 0)) {
    textFormatBuffer(temp_v22,param_3);
  }
  else {
    textFormatBuffer(temp_v22,"rom:/%s",param_3);
  }
  temp_v19 = 0xe7e3ffff;
  temp_v3 = 0;
  temp_v4 = 1;
  uStack_270 = 0;
  temp_v7 = 0;
  temp_v5 = 0;
  temp_v6 = 0;
  temp_v12 = 0x80;
  temp_v8 = 0;
  temp_v9 = 0;
  temp_v10 = 0;
  temp_v11 = 0;
  sysMemClear(temp_v13,0x100);
  temp_v14 = 0;
  temp_v15 = 0;
  temp_v16 = 0;
  temp_v17 = 0;
  temp_v18 = 0;
  temp_v19 = 0;
  temp_v20 = 0;
  temp_v21 = 0;
  FUN_001add78(&temp_v3,temp_v22);
  asdLoadConfigureModeFlags(&temp_v3,param_5);
  temp_v12 = param_6;
  temp_v18 = param_2;
  FUN_001abae0();
  asdFileWait();
  if (param_1 != (unsigned int *)0x0) {
    *param_1 = *(unsigned int *)((int)puVar2 + 0x140);
  }
  temp_v0 = asdFileRequestHasFailed(puVar2);
  if (temp_v0 == 0) {
    temp_v1 = 0;
    if (param_4 != (unsigned int *)0x0) {
      temp_v1 = *(unsigned int *)((int)puVar2 + 0x18);
    }
    temp_v2 = *(unsigned int *)((int)puVar2 + 0xc);
    if (param_4 != (unsigned int *)0x0) {
      *param_4 = temp_v1;
    }
    *(unsigned int *)((int)puVar2 + 0xc) = 0;
    asdFileRequestRelease(puVar2);
    return temp_v2;
  }
  if (param_4 != (unsigned int *)0x0) {
    *param_4 = 0;
  }
  asdFileRequestRelease(puVar2);
  return 0;
}

} /* extern "C" */
