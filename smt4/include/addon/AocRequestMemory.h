#ifndef SMT4_ADDON_AOCREQUESTMEMORY_H
#define SMT4_ADDON_AOCREQUESTMEMORY_H

/* The deallocator `delete` of an application request calls in this game. */
extern "C" void asdMemFreeNonNull(void *memory);

static __inline void aocRequestMemoryFree(void *memory) { asdMemFreeNonNull(memory); }

#endif
