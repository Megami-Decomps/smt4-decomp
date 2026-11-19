#include "common.h"
#include <stdio.h>
extern "C" {
const char *dataFindKindRecordWithAocOverrides(u32 id);
extern char DAT_0061949c[];
/* Look up an item name, formatting its numeric fallback when absent. */
const char *itemGetNameOrFallback(u32 id) { const char *name=dataFindKindRecordWithAocOverrides(id); if (name==NULL) { sprintf(DAT_0061949c,"\x83\x41\x83\x43\x83\x65\x83\x80\x96\xbc%d",id); name=DAT_0061949c; } return name; }
}
