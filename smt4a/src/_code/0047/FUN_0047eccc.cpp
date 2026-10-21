/* NON_MATCHING: fallback search is unrolled and changes index register allocation. */
#include "common.h"
struct Entry {u16 id;u8 unk02[14];};
extern "C" {extern Entry DAT_0057a4c4[3];Entry *jyoucyuGetTableEntry(u32 kind);
/* Finds an ID in the fallback three-entry table when the resident entry is absent. */
Entry *FUN_0047eccc(u32 id){Entry *entry=jyoucyuGetTableEntry(1);if(entry==NULL){for(int i=0;i<3;++i){entry=&DAT_0057a4c4[i];if(entry->id==id)break;}}return entry;}}
