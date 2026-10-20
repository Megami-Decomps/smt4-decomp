/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00285518` (_code @ 0x285518, 0x114 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100854(unsigned short *, unsigned int, unsigned int, int, unsigned char *);

extern unsigned char LAB_002b2b24; /* 0x2b2b24 */
extern signed char g_lmapMain; /* 0x5f1afc */
extern unsigned int DAT_005f1b00; /* 0x5f1b00 */

/* Supplied declaration required: FUN_00100854. */
extern unsigned int dataTableGet(unsigned int, unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern unsigned int dataTableGetEntries(void);


char * FUN_00285518(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned short *puVar3;
  unsigned short temp_v2 [52];
  
  if (param_1 >= 0x6a) {
    return (char *)0x0;
  }
  if ((g_lmapMain != '\0') && (DAT_005f1b00 == param_1)) {
    return (char *)0x28568c;
  }
  if (param_1 == 0x55) {
    return 
    "玂銂膂躂鎂邂辂銂钂鎂䂁馂辂閂䂁钂辂䂁傂鎂钂䂁憂銂膂躂薂䂁悂脊艩良芏芒芔芁膌艀艢芕节膅艀艨腣腆艀腐艞腓j"
    ;
  }
  if (param_1 == 0x56) {
    return 
    "玂銂膂躂鎂邂辂銂钂鎂䂁馂辂閂䂁钂辂䂁冂躂蒂䂁憂銂膂躂薂䂁悂脊艩良芏芒芔芁膌艀艢芕节膅艀艨腣腆艀腐艞腓j"
    ;
  }
  if (param_1 == 0x57) {
    return 
    "玂銂膂躂鎂邂辂銂钂鎂䂁馂辂閂䂁钂辂䂁劂銂蒂䂁憂銂膂躂薂䂁憂脊艩良芏芒芔芁膌艀艢芕节膅艀艨腣腆艀腐艞腕j"
    ;
  }
  if (param_1 == 0x58) {
    return 
    "玂銂膂躂鎂邂辂銂钂鎂䂁馂辂閂䂁钂辂䂁厂钂袂䂁憂銂膂躂薂䂁悂脊艩良芏芒芔芁膌艀艢芕节膅艀艨腣腆艀腐艞腔j"
    ;
  }
  if (param_1 == 0x5a) {
    return 
    "玂銂膂躂鎂邂辂銂钂鎂䂁馂辂閂䂁钂辂䂁厂钂袂䂁憂銂膂躂薂䂁犂脊艩良芏芒芔芁膌艀艢芕节膅艀艨腣腆艀腔艞腔j"
    ;
  }
  if (param_1 == 0x5b) {
    return 
    "玂銂膂躂鎂邂辂銂钂鎂䂁馂辂閂䂁钂辂䂁傂鎂钂䂁憂銂膂躂薂䂁抂脊艩良芏芒芔芁膌艀艢芕节膅艀艨腣腆艀腒艞腓j"
    ;
  }
  if (param_1 == 0x5c) {
    return 
    "玂銂膂躂鎂邂辂銂钂鎂䂁馂辂閂䂁钂辂䂁傂鎂钂䂁憂銂膂躂薂䂁暂脊艩良芏芒芔芁膌艀艢芕节膅艀艨腣腆艀腑艞腓j"
    ;
  }
  if (param_1 == 0x5d) {
    return 
    "玂銂膂躂鎂邂辂銂钂鎂䂁馂辂閂䂁钂辂䂁冂躂蒂䂁憂銂膂躂薂䂁抂脊艩良芏芒芔芁膌艀艢芕节膅艀艨腣腆艀腒艞腓j"
    ;
  }
  if (param_1 == 0x5e) {
    return 
    "玂銂膂躂鎂邂辂銂钂鎂䂁馂辂閂䂁钂辂䂁冂躂蒂䂁憂銂膂躂薂䂁斂脊艩良芏芒芔芁膌艀艢芕节膅艀艨腣腆艀腑艞腓j"
    ;
  }
  if (param_1 == 0x5f) {
    return 
    "玂銂膂躂鎂邂辂銂钂鎂䂁馂辂閂䂁钂辂䂁冂躂蒂䂁憂銂膂躂薂䂁殂脊艩良芏芒芔芁膌艀艢芕节膅艀艨腣腆艀腓艞腓j"
    ;
  }
  if (param_1 == 0x60) {
    return 
    "玂銂膂躂鎂邂辂銂钂鎂䂁馂辂閂䂁钂辂䂁劂銂蒂䂁憂銂膂躂薂䂁抂脊艩良芏芒芔芁膌艀艢芕节膅艀艨腣腆艀腔艞腕j"
    ;
  }
  if (param_1 == 0x61) {
    return 
    "玂銂膂躂鎂邂辂銂钂鎂䂁馂辂閂䂁钂辂䂁劂銂蒂䂁憂銂膂躂薂䂁掂脊艩良芏芒芔芁膌艀艢芕节膅艀艨腣腆艀腑艞腕j"
    ;
  }
  if (param_1 == 0x62) {
    return 
    "玂銂膂躂鎂邂辂銂钂鎂䂁馂辂閂䂁钂辂䂁劂銂蒂䂁憂銂膂躂薂䂁撂脊艩良芏芒芔芁膌艀艢芕节膅艀艨腣腆艀腕艞腕j"
    ;
  }
  if (param_1 != 99) {
    if (param_1 == 100) {
      return 
      "玂銂膂躂鎂邂辂銂钂鎂䂁馂辂閂䂁钂辂䂁厂钂袂䂁憂銂膂躂薂䂁抂脊艩良芏芒芔芁膌艀艢芕节膅艀艨腣腆艀腑艞腔j"
      ;
    }
    if (param_1 == 0x65) {
      return 
      "玂銂膂躂鎂邂辂銂钂鎂䂁馂辂閂䂁钂辂䂁厂钂袂䂁憂銂膂躂薂䂁撂脊艩良芏芒芔芁膌艀艢芕节膅艀艨腣腆艀腒艞腔j"
      ;
    }
    if (param_1 == 0x66) {
      return 
      "玂銂膂躂鎂邂辂銂钂鎂䂁馂辂閂䂁钂辂䂁厂钂袂䂁憂銂膂躂薂䂁斂脊艩良芏芒芔芁膌艀艢芕节膅艀艨腣腆艀腓艞腔j"
      ;
    }
    if (param_1 != 0x67) {
      if (param_1 != 0x68) {
        temp_v0 = dataTableGet(0x38,0);
        temp_v1 = dataTableGetEntries();
        temp_v0 = dataTableGetCount(temp_v0);
        puVar3 = temp_v2;
        temp_v2[0] = (unsigned short)param_1;
        FUN_00100854(puVar3,temp_v1,temp_v0,0x68,&LAB_002b2b24);
        return (char *)(puVar3 + 0xc);
      }
      return 
      "玂銂膂躂鎂邂辂銂钂鎂䂁馂辂閂䂁钂辂䂁劂銂蒂䂁憂銂膂躂薂䂁暂脊艩良芏芒芔芁膌艀艢芕节膅艀艨腣腆艀腓艞腕j"
      ;
    }
    return 
    "玂銂膂躂鎂邂辂銂钂鎂䂁馂辂閂䂁钂辂䂁傂鎂钂䂁憂銂膂躂薂䂁枂脊艩良芏芒芔芁膌艀艢芕节膅艀艨腣腆艀腓艞腓j"
    ;
  }
  return 
  "玂銂膂躂鎂邂辂銂钂鎂䂁馂辂閂䂁钂辂䂁劂銂蒂䂁憂銂膂躂薂䂁斂脊艩良芏芒芔芁膌艀艢芕节膅艀艨腣腆艀腒艞腕j"
  ;
}

} /* extern "C" */
