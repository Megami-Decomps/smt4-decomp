#ifndef SMT4_ADDON_AOCREQUESTMEMORY_H
#define SMT4_ADDON_AOCREQUESTMEMORY_H

/* The deallocator `delete` of an application request (and of the AOC scene's menu) calls in this game. */
extern "C" void asdMemFreeNonNull(void *memory);

static __inline void aocRequestMemoryFree(void *memory) { asdMemFreeNonNull(memory); }

/* The array allocator `new[]` of the AOC records calls in this game (without an owner hint). */
extern "C" void *asdOperatorNewB(u32 size, void *owner);

static __inline void *aocRecordMemoryAlloc(u32 bytes) { return asdOperatorNewB(bytes, NULL); }

#endif
