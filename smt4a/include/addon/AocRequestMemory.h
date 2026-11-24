#ifndef SMT4A_ADDON_AOCREQUESTMEMORY_H
#define SMT4A_ADDON_AOCREQUESTMEMORY_H

/* The deallocator `delete` of an application request (and of the AOC scene's menu) calls in this game. */
extern "C" void asdOperatorDelete(void *memory);

static __inline void aocRequestMemoryFree(void *memory) { asdOperatorDelete(memory); }

/* The array allocator `new[]` of the AOC records calls in this game. */
extern "C" void *asdOperatorNewE(u32 bytes, ...);

static __inline void *aocRecordMemoryAlloc(u32 bytes) { return asdOperatorNewE(bytes); }

#endif
