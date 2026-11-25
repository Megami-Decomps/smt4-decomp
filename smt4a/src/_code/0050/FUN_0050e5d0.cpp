/* NON_MATCHING: romwright draft; its start moved 0x10 back in wave 93, so the first array-constructor call loads its own
 * array, constructor, stride (32) and count (200) from the literals at +0x58/+0x5c before the push. */
#include "romwright_types.h"

extern "C" {

int __aeabi_vec_ctor_nocookie_nodtor(...);

typedef int romwright_code(...);
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char LAB_0041ac24; /* 0x41ac24 */
extern unsigned char LAB_0041bb28; /* 0x41bb28 */
extern unsigned char g_regionTable; /* 0x613178 */
extern unsigned char DAT_00614d7c; /* 0x614d7c */
extern unsigned char DAT_006160e0; /* 0x6160e0 */

/* Supplied declaration required: __aeabi_vec_ctor_nocookie_nodtor. */


unsigned char * FUN_0050e5d0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned char temp_v1;
  
  __aeabi_vec_ctor_nocookie_nodtor();
  __aeabi_vec_ctor_nocookie_nodtor(&g_regionTable,&LAB_0041ac24,0x1c,0x100);
  __aeabi_vec_ctor_nocookie_nodtor(&DAT_00614d7c,&LAB_0041bb28,0x7c,0x28);
  temp_v0 = 0x80;
  puVar2 = &DAT_006160e0;
  while (temp_v1 = temp_v0 != 0, temp_v0 = temp_v0 - 1, temp_v1) {
    (*(romwright_code *)0x41d0e0)(puVar2);
    puVar2 = puVar2 + 0x1c;
  }
  return &DAT_006160e0;
}

} /* extern "C" */
