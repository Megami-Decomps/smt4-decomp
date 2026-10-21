#include "common.h"
extern "C" {
const char *FUN_0015f858(u32 id);
s32 textFormatBuffer(char *buffer,const char *format,...);
extern char DAT_0061949c[];
/* Look up an item name, formatting its numeric fallback when absent. */
const char *itemGetNameOrFallback(u32 id) { const char *name=FUN_0015f858(id); if (name==NULL) { textFormatBuffer(DAT_0061949c,"\x83\x41\x83\x43\x83\x65\x83\x80\x96\xbc%d",id); name=DAT_0061949c; } return name; }
}
