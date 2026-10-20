/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003144cc` (_code @ 0x3144cc, 0x10c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00246afc(unsigned short *, int, int, int);
int FUN_00246bd4(void);
int FUN_00246c8c(...);
int FUN_00256a50(unsigned short *, unsigned int);
int FUN_00269694(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned int DAT_004ea91c; /* 0x4ea91c */
extern unsigned int DAT_004ea920; /* 0x4ea920 */
extern unsigned int DAT_004ea924; /* 0x4ea924 */
extern unsigned int DAT_004ea928; /* 0x4ea928 */
extern unsigned int DAT_004ea92c; /* 0x4ea92c */
extern unsigned int DAT_004ea930; /* 0x4ea930 */
extern unsigned int DAT_004ea934; /* 0x4ea934 */
extern unsigned int DAT_004ea938; /* 0x4ea938 */

/* Supplied declaration required: FUN_00246afc. */
/* Supplied declaration required: FUN_00246bd4. */
extern unsigned int FUN_00246c28(void);
/* Supplied declaration required: FUN_00246c8c. */
/* Supplied declaration required: FUN_00256a50. */
/* Supplied declaration required: FUN_00269694. */


void FUN_003144cc(int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned short *puVar4;
  int temp_v3;
  
  temp_v3 = *(int *)(param_1 + 0x40);
  puVar4 = *(unsigned short **)(*(int *)(param_1 + 0x3c) + 4);
  if ((*(unsigned int *)(temp_v3 + 0x34) < *(unsigned int *)(param_1 + 0x34)) && (*(unsigned int *)(temp_v3 + 0x34) != 0)) {
    return;
  }
  temp_v1 = temp_v3;
  FUN_00269694(temp_v3,temp_v3 + 0x24);
  FUN_00246c8c(*(unsigned int *)(param_1 + 0x30));
  DAT_004ea92c = DAT_004ea91c;
  DAT_004ea930 = DAT_004ea920;
  DAT_004ea934 = DAT_004ea924;
  DAT_004ea938 = DAT_004ea928;
  FUN_00246c8c(temp_v1);
  FUN_00246bd4();
  temp_v2 = FUN_00246c28();
  *(unsigned int *)(puVar4 + 0x28) =
       (temp_v2 & 0xff) | (((temp_v2 >> 8) & 0xff) << 8) | (((temp_v2 >> 0x10) & 0xff) << 0x10) |
       (temp_v2 & 0xff000000);
  FUN_00246afc(puVar4,param_1,param_1 + 0x10,param_1 + 0x20);
  if (*(char *)(temp_v3 + 0x56) != '\0') {
    temp_v0 = *puVar4 | 0x100;
  }
  else {
    temp_v0 = *puVar4 & 0xfeff;
  }
  *puVar4 = temp_v0;
  FUN_00256a50(puVar4,*(unsigned int *)(temp_v3 + 0x28) & 0xffff);
  return;
}

} /* extern "C" */
