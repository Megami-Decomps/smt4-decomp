/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d8748` (_code @ 0x2d8748, 0x148 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0033def0(unsigned char *);
int FUN_0040ace8(unsigned int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned int g_handleRegistry; /* 0x56fcc0 */
extern int g_mapIf; /* 0x58103c */
extern int DAT_005f1b30; /* 0x5f1b30 */
extern int DAT_005f1b34; /* 0x5f1b34 */
extern int DAT_005f1b38; /* 0x5f1b38 */

/* Supplied declaration required: FUN_0033def0. */
/* Supplied declaration required: FUN_0040ace8. */


void FUN_002d8748(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = DAT_005f1b30;
  temp_v0 = g_mapIf;
  puVar2 = (unsigned char *)(g_mapIf + 0xcc7c);
  *(int *)(g_mapIf + 0xcc9c) = DAT_005f1b30;
  temp_v1 = *(int *)(temp_v1 + 4);
  FUN_0040ace8(g_handleRegistry,temp_v1);
  *(unsigned int *)(temp_v1 + 4) = *(unsigned int *)(temp_v1 + 4) | 3;
  *puVar2 = 1;
  *(unsigned char *)(temp_v0 + 0xcc7d) = 0;
  *(unsigned char *)(temp_v0 + 0xcc7e) = 0;
  temp_v2 = 0;
  *(unsigned int *)(temp_v0 + 0xcc80) = 0;
  *(unsigned int *)(temp_v0 + 0xcc84) = 0;
  *(unsigned int *)(temp_v0 + 0xcc88) = 0;
  *(unsigned int *)(temp_v0 + 0xcc8c) = 0;
  *(unsigned int *)(temp_v0 + 0xcc90) = 0;
  *(unsigned int *)(temp_v0 + 0xcc94) = 0;
  *(unsigned int *)(temp_v0 + 0xcc98) = 0;
  FUN_0033def0(puVar2);
  temp_v1 = DAT_005f1b34;
  *(int *)(temp_v0 + 0xccc0) = DAT_005f1b34;
  temp_v1 = *(int *)(temp_v1 + 4);
  FUN_0040ace8(g_handleRegistry,temp_v1);
  *(unsigned int *)(temp_v1 + 4) = *(unsigned int *)(temp_v1 + 4) | 3;
  *(unsigned char *)(temp_v0 + 0xcca0) = 1;
  *(unsigned char *)(temp_v0 + 0xcca1) = 0;
  *(unsigned char *)(temp_v0 + 0xcca2) = 0;
  *(unsigned int *)(temp_v0 + 0xcca4) = 0;
  *(unsigned int *)(temp_v0 + 0xcca8) = 0;
  *(unsigned int *)(temp_v0 + 0xccac) = temp_v2;
  *(unsigned int *)(temp_v0 + 0xccb0) = temp_v2;
  *(unsigned int *)(temp_v0 + 0xccb4) = temp_v2;
  *(unsigned int *)(temp_v0 + 0xccb8) = temp_v2;
  *(unsigned int *)(temp_v0 + 0xccbc) = 0;
  FUN_0033def0((unsigned char *)(temp_v0 + 0xcca0));
  temp_v1 = DAT_005f1b38;
  *(int *)(temp_v0 + 0xcce4) = DAT_005f1b38;
  temp_v1 = *(int *)(temp_v1 + 4);
  FUN_0040ace8(g_handleRegistry,temp_v1);
  *(unsigned int *)(temp_v1 + 4) = *(unsigned int *)(temp_v1 + 4) | 3;
  *(unsigned char *)(temp_v0 + 0xccc4) = 1;
  *(unsigned char *)(temp_v0 + 0xccc5) = 0;
  *(unsigned char *)(temp_v0 + 0xccc6) = 0;
  *(unsigned int *)(temp_v0 + 0xccc8) = 0;
  *(unsigned int *)(temp_v0 + 0xcccc) = 0;
  *(unsigned int *)(temp_v0 + 0xccd0) = temp_v2;
  *(unsigned int *)(temp_v0 + 0xccd4) = temp_v2;
  *(unsigned int *)(temp_v0 + 0xccd8) = temp_v2;
  *(unsigned int *)(temp_v0 + 0xccdc) = temp_v2;
  *(unsigned int *)(temp_v0 + 0xcce0) = 0;
  FUN_0033def0((unsigned char *)(temp_v0 + 0xccc4));
  return;
}

} /* extern "C" */
